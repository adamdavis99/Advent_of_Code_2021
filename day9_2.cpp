#include <bits/stdc++.h>

using namespace std;

#define ll long long 
#define ull unsigned long long
#define endl "\n"
#define fast ios::sync_with_stdio(false), cin.tie(0)
#define mod (int)(1e9+7)

#define maxSize 1000
vector<int> size(maxSize);
int basinCnt = 0;
bool isVisited[maxSize][maxSize] = { false };
int rows,cols;
int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };



vector<vector<int>> grid;

void dfs(int r, int c, int basinNo) {
    isVisited[r][c] = true;
    ++size[basinNo];
    for (int d = 0; d < 4; ++d) {
        int newR = r + dir[d][0], newC = c + dir[d][1];
        if (newR < 0 || newR >= rows || newC < 0 || newC >= cols) continue;
        if (grid[newR][newC] == 9 || isVisited[newR][newC]) continue;
        dfs(newR, newC, basinNo);
    }
}
int main()
{
    fast;
    ifstream indata;
	indata.open("input.txt");
    string s;
    
    while(indata >> s)
    {
        vector<int> temp;
        for(int i = 0; i < s.size(); i++)
        {
            temp.push_back(s[i] - '0');
        }
        grid.push_back(temp);
    }

    rows=grid.size();
    cols=grid[0].size();
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(grid[i][j] == 9 || isVisited[i][j])
            continue;
        
            ++basinCnt;
             dfs(i, j, basinCnt-1);
            
        }
    }

   sort(size.rbegin(), size.rend());
    long long ans = (long long) size[0] * size[1] * size[2];
    printf("%lld\n", ans);


    
}
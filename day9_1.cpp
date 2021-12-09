#include <bits/stdc++.h>

using namespace std;

#define ll long long 
#define ull unsigned long long
#define endl "\n"
#define fast ios::sync_with_stdio(false), cin.tie(0)
#define mod (int)(1e9+7)



int main()
{
    fast;
    ifstream indata;
	indata.open("input.txt");
    string s;
    vector<vector<int>> v;
    while(indata >> s)
    {
        vector<int> temp;
        for(int i = 0; i < s.size(); i++)
        {
            temp.push_back(s[i] - '0');
        }
        v.push_back(temp);
    }
    ll ans=0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            if(i==0)
            {
                if(j==0 and v[i][j]<v[i+1][j] and v[i][j]<v[i][j+1])
                {
                    ans+=v[i][j]+1;
                }
                if(j==v[i].size()-1 and v[i][j]<v[i+1][j] and v[i][j]<v[i][j-1])
                {
                    ans+=v[i][j]+1;
                }
                if(j!=0 and j!=v[i].size()-1 and v[i][j]<v[i+1][j] and v[i][j]<v[i][j-1] and v[i][j]<v[i][j+1])
                {
                    ans+=v[i][j]+1;
                }
            }
            else if(i==v.size()-1)
            {
                if(j==0 and v[i][j]<v[i-1][j] and v[i][j]<v[i][j+1])
                {
                    ans+=v[i][j]+1;
                }
                if(j==v[i].size()-1 and v[i][j]<v[i-1][j] and v[i][j]<v[i][j-1])
                {
                    ans+=v[i][j]+1;
                }
                if(j!=0 and j!=v[i].size()-1 and v[i][j]<v[i-1][j] and v[i][j]<v[i][j-1] and v[i][j]<v[i][j+1])
                {
                    ans+=v[i][j]+1;
                }
            }
            else
            {
                if(j==0 and v[i][j]<v[i-1][j] and v[i][j]<v[i+1][j] and v[i][j]<v[i][j+1])
                {
                    ans+=v[i][j]+1;
                }
                if(j==v[i].size()-1 and v[i][j]<v[i-1][j] and v[i][j]<v[i+1][j] and v[i][j]<v[i][j-1])
                {
                    ans+=v[i][j]+1;
                }
                if(j!=0 and j!=v[i].size()-1 and v[i][j]<v[i-1][j] and v[i][j]<v[i+1][j] and v[i][j]<v[i][j-1] and v[i][j]<v[i][j+1])
                {
                    ans+=v[i][j]+1;
                }
            }
        }
    }
    cout<<ans<<endl;


   
    return 0;
}
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
    vector<vector<int>> v(10000, vector<int>(10000, 0));
    string from,dir,to;

    while(indata>>from>>dir>>to)
    {
        stringstream ss(from);
        string no;
        vector<int> f,t;
        while(getline(ss,no,','))
        {
           int getno=stoi(no);
           f.push_back(getno);
        }
        int r1=f[1];
        int c1=f[0];
        ss.clear();
        ss.str(to);
        while(getline(ss,no,','))
        {
           int getno=stoi(no);
           t.push_back(getno);
        }
        int r2=t[1];
        int c2=t[0];
        //cout<<r1<<" "<<c1<<" "<<r2<<" "<<c2<<endl;
      
       if(r1==r2)
       for(int i=min(c1,c2);i<=max(c1,c2);i++)
       v[r1][i]++;

       if(c1==c2)
         for(int i=min(r1,r2);i<=max(r1,r2);i++)
            v[i][c1]++;
    

    }
    

   
    ll cnt=0;
    for(int i=0;i<10000;i++)
    {
        for(int j=0;j<10000;j++)
        {
            if(v[i][j]>1)
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}
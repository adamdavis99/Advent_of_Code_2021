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
    indata>>s;
    vector<int> v;
    stringstream ss(s);
    string no;
    while(getline(ss,no,','))
    {
        v.push_back(stoi(no));
    }
   

    for(int i=1;i<=80;i++)
    {
        int n=v.size();
        for(int j=0;j<n;j++)
        {
            v[j]--;
            if(v[j]==-1)
            {
                v[j]=6;
                v.push_back(8);  
            }
        }
        
       
      
    }
    cout<<v.size()<<endl;
}
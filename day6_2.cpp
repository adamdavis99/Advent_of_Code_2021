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
    vector<ll> mp(9,0);
    stringstream ss(s);
    string no;
    while(getline(ss,no,','))
    {
        mp[stoi(no)]++;
    }
    
   

    for(int i=1;i<=256;i++)
    {
        vector<ll> new_list(9,0);
        for(int key=1;key<=8;key++)
        {
            new_list[key-1]=mp[key];
        }
        new_list[8]=mp[0];
        new_list[6]+=mp[0];
        mp=new_list;
       
    }
    ll cnt=0;
    for(auto i:mp)
    cnt+=i;
    cout<<cnt<<endl;
}
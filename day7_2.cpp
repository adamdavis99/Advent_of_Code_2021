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
   

   sort(v.begin(),v.end());
   ll fuel=0;
   int n=v.size();
   ll cost=LLONG_MAX;
   for(int i=*min_element(v.begin(),v.end());i<=*max_element(v.begin(),v.end());i++)
   {
       ll temp=0;
       for(int j=0;j<n;j++)
       {
           int diff=abs(v[j]-i);
           temp += (diff)*(diff+1)/2;
       }
       cost=min(cost,temp);
       
   }
   cout<<cost<<endl;
    return 0;
}
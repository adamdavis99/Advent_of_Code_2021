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
	vector<string> arr;
	string data;
	indata.open("input.txt");
	vector<int> v(3,-1);int cnt=0;int x;
	while(indata>>x)
	{
		if(v[0]==-1)
        {
            v[0]=x;continue;
        }
        else if(v[1]==-1)
        {
            v[1]=x;continue;
        }
        else if(v[2]==-1)
        {
            v[2]=x;
            continue;
        }
        else
        {
            int first_sum=accumulate(v.begin(),v.end(),0);
            int second_sum=accumulate(v.begin()+1,v.end(),0)+x;
            if(second_sum>first_sum)
              cnt++;
            v[0]=v[1];
            v[1]=v[2];
            v[2]=x;
        }

	}

	cout<<cnt<<endl;
	
}
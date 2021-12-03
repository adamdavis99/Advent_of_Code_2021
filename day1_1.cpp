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
	int cnt=0;int x;int prev=-1;
	while(indata>>x)
	{
		if(prev==-1)
        {
            prev=x;
            continue;
        }
        if(x>prev)
        cnt++;
        prev=x;

	}

	cout<<cnt<<endl;
	
}
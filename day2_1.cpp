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
	string s;int x;int horizontal=0;int depth=0;
	while(indata>>s>>x)
	{
		if(s=="forward")
		horizontal+=x;
		else if(s=="up")
		depth-=x;
		else
		depth+=x;
	}

	cout<<horizontal*depth<<endl;
	
}
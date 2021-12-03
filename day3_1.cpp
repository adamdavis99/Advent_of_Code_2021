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
	int n;string gamma="";string epsilon="";
	while(indata>>data)
	{
		arr.push_back(data);
		 n=data.length();
	}

	for(int i=0;i<n;i++)
	{
		int one=0;
		int zero=0;
		for(int j=0;j<arr.size();j++)
		{
			if(arr[j][i]=='0')
			zero++;
			else
			one++;
		}
        if(one>zero)
        {
            gamma+='1';epsilon+='0';
        }
        else
        {
            gamma+='0';epsilon+='1';
        }
		
	}
ull a1=strtoull(gamma.c_str(),NULL,2);
ull a2=strtoull(epsilon.c_str(),NULL,2);
cout<<a1*a2<<endl;
    return 0;
	
	
}
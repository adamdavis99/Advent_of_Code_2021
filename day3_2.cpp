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
	int n;string ogr;string csr;vector<string> arr2;
	while(indata>>data)
	{
		arr.push_back(data);arr2.push_back(data);
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
		vector<string> newarr;
		if(zero>one)
		{
			for(int j=0;j<arr.size();j++)
			{
				if(arr[j][i]=='0')
				newarr.push_back(arr[j]);
			}
		}
		else
		{
			for(int j=0;j<arr.size();j++)
			{
				if(arr[j][i]=='1')
				newarr.push_back(arr[j]);
			}
		}
		arr=newarr;
	}

	assert(arr.size()==1);
	ogr=arr[0];
    cout<<ogr<<"\n";


	for(int i=0;i<n;i++)
	{
		if(arr2.size()==1)
		break;
		int one=0;
		int zero=0;
		for(int j=0;j<arr2.size();j++)
		{
			if(arr2[j][i]=='0')
			zero++;
			else
			one++;
		}
		vector<string> newarr;
		if(zero>one)
		{
			for(int j=0;j<arr2.size();j++)
			{
				if(arr2[j][i]=='1')
				newarr.push_back(arr2[j]);
			}
		}
		else
		{
			for(int j=0;j<arr2.size();j++)
			{
				if(arr2[j][i]=='0')
				newarr.push_back(arr2[j]);
			}
		}
		arr2=newarr;
		cout<<arr2.size()<<" ";
	}
	
    assert(arr2.size()==1);

	csr=arr2[0];
	cout<<csr<<"\n";
	ull a1=strtoull(ogr.c_str(),NULL,2);
	ull a2=strtoull(csr.c_str(),NULL,2);
	cout<<a1*a2<<endl;
	
}
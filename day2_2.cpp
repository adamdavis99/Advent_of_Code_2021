#include <bits/stdc++.h>

using namespace std;

#define ll long long 
#define ull unsigned long long
#define endl "\n"
#define fast ios::sync_with_stdio(false), cin.tie(0)
#define mod (int)(1e9+7)

ll gcd(ll a, ll b)
{
    if (!a)
        return b;
    return gcd(b % a, a);
}
bool prime[15000105]; 
	void sieve(ll n) { 
	  for (ll i = 0; i <= n; i++) prime[i] = 1;
	  for (ll p = 2; p * p <= n; p++) { 
		if (prime[p] == true) { 
		  for (ll i = p * p; i <= n; i += p) 
			prime[i] = false; 
		} 
	  } 
	  prime[1] = prime[0] = 0;
	} 
	 
	vector<ll> primelist;
	bool __primes_generated__ = 0;
	 
	void genprimes(int n) {
	  __primes_generated__ = 1;
	  sieve(n + 1);
	  for (ll i = 2; i <= n; i++) if (prime[i]) primelist.push_back(i);
	}
	 
	vector<ll> factors(ll n) {
	  if (!__primes_generated__) {
		cerr << "Call genprimes you dope" << endl;
		exit(1);
	  }
	  vector<ll> facs;
	 
	  for (ll i = 0; primelist[i] * primelist[i] <= n && i < primelist.size(); i++) {
		if (n % primelist[i] == 0) {
		  while (n % primelist[i] == 0) {
			n /= primelist[i];
			facs.push_back(primelist[i]);
		  }
		}
	  }
	  if (n > 1) {
		facs.push_back(n);
	  }
	  sort(facs.begin(), facs.end());
	  return facs;
	}





void solve()
{
	
	ll x1,p1,x2,p2;
	cin>>x1>>p1>>x2>>p2;
	if(x1==x2 and p1==p2){
		cout<<"="<<endl;
		return ;
	}
	
	
}
int main()
{
    fast;
    ifstream indata;
	vector<string> arr;
	string data;
	indata.open("input.txt");
	string s;int x;int horizontal=0;int depth=0;int aim=0;  
	while(indata>>s>>x)
	{
		if(s=="forward")
		{
            horizontal+=x;
            depth+=(x*aim);
        }
		else if(s=="up")
		aim-=x;
		else
		aim+=x;
	}

	cout<<horizontal*depth<<endl;
	
}
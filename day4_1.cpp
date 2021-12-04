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
    //cout<<s<<endl;
    stringstream ss(s);
    vector<int> a;
     for (int i; ss >> i;) {
        a.push_back(i);
        if (ss.peek() == ',')
            ss.ignore();
    }
    // for(auto &i:a)  
    // cout<<i<<" ";
    // cout<<endl;
    vector<vector<vector<int>>> matrix;
    int x;
   vector<vector<int>> tmp;vector<int> inner;
    while(indata>>x)
    {
        
        if(tmp.size()==5)
        {
            matrix.push_back(tmp);
            tmp.clear();
        }
        if(inner.size()==5)
        {
            tmp.push_back(inner);
            inner.clear();
        }
        inner.push_back(x);
    }
    
    tmp.push_back(inner);
    matrix.push_back(tmp);


 
    for(int &i:a)
    {
        for(auto &j:matrix)
        {
            for(auto &k:j)
            {
                for(auto &l:k)
                {
                    if(l==i)
                    l=-1;
                }
            }
        }
        

         for(auto &mat:matrix)
        {
        // calculate sum of a matrix
        int sum = 0;
        for(auto &row:mat)
        {
            for(auto &col:row)
            {
                if(col!=-1)
                sum += col;
            }
        }
        //cout<<sum<<endl;
        // check each column
        for(int r=0;r<5;r++)
        {
            bool fl=0;
            for(int c=0;c<5;c++)
            {
                if(mat[r][c]!=-1)
                {
                   fl=1;break;
                }
            }
            if(fl==0)
            {
                cout<<sum*i<<endl;
                return 0;
            }
        }

        for(int r=0;r<5;r++)
        {
            bool fl=0;
            for(int c=0;c<5;c++)
            {
                if(mat[c][r]!=-1)
                {
                   fl=1;break;
                }
            }
            if(fl==0)
            {
                cout<<sum*i<<endl;
                return 0;
            }
        }
        
    }

        
       

        
    }
	
}
#include<bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n,m;
	cin>>n>>m;
	int x;
	cin>>x;
	int ar1[m], ar2[n];

	for(int i=0; i<m; ++i)
	{
		cin>>ar1[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>ar2[i];
		/* code */
	}
	int l=0;
	int r= n-1;

	int diff=10000000000;
	int a=0;;
	int  b=0;
	int temp;
	while( l<m and r >=0)
	{
		temp = ar1[l] + ar2[r];
		//cout<<temp<<endl;
		if(x-temp < diff and temp - x < 0 )
		{

			diff = x-temp ;
			//cout<<"diff  "<<diff<<endl;
			a = ar1[l];
			b = ar2[r];
		}
		if(temp < x)
		{
			l++;
		}
		else
			r--;
		
	}
	cout<<diff<<endl;
	cout<<a+b<<endl;
	cout<<a<<" "<<b<<endl;
}
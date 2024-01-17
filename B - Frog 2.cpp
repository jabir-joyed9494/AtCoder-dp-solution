#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll aray[100000+5],k;
vector<ll>dp(100000+5,-1);
ll mincost(ll n)
{
   if(n==1) return 0;
   if(dp[n]!=-1) return dp[n];
   ll minn=INT_MAX;
   for(int i=1;i<=k;i++)
   {
      if((n-i)>0) minn=min(minn,mincost(n-i)+abs(aray[n]-aray[n-i]));

   }
   return dp[n]=minn;
}
int main()
{

    int t=1;
    // cin>>t;
    while(t--)
    {
        ll n;
        cin>>n>>k;
        for(int i=1; i<=n; i++)
            cin>>aray[i];
        ll ans=mincost(n);
        cout<<ans<<endl;
    }
    return 0;
}




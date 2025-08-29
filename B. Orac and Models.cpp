//AKJ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int main(){
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll a[n+1],maxi=INT_MIN;
        for(ll i=1;i<=n;i++){cin>>a[i];}
        vector<ll>dp(n+1,1);

        //solve problem using dp ,state is- at i we store the maximum beautiful sequence.
        //naively this will take O(n*n) time but we can alsorun in O(nlogn) if u iterate divisors.
        
        for(ll i=2;i<=n;i++){
            for(ll j=1;j*j<=i;j++){
                if(i%j==0){
                    if(a[i]>a[j]){dp[i]=max(dp[i],dp[j]+1);}
                    if(a[i]>a[i/j]){dp[i]=max(dp[i],dp[i/j]+1);}
                }
            }
        }
        for(ll i=1;i<=n;i++){maxi=max(maxi,dp[i]);}
        cout<<maxi<<endl;
    }
}

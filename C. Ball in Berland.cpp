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
        ll x,y,k,cnt=0;cin>>x>>y>>k;
        map<ll,ll>mp1,mp2; ll b[k],g[k];
        for(ll i=0;i<k;i++){cin>>b[i];mp1[b[i]]++;}
        for(ll i=0;i<k;i++){cin>>g[i];mp2[g[i]]++;}
        for(ll i=0;i<k;i++){
            ll a1=mp1[b[i]]-1;
            ll a2=mp2[g[i]]-1;
            ll total=k-1-i;
            cnt+=total-a1-a2;
            mp1[b[i]]--;mp2[g[i]]--;
        }
        cout<<cnt<<endl;
    }
}

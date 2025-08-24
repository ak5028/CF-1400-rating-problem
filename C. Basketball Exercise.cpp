//AKJ
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;cin>>n;
    ll a[2][n];
    for(ll i=0;i<2;i++){
        for(ll j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    //basically abb hm a[][] array ko work krayenge as a dp,it calculates best at that moment
    //if we choose previous alternate lets say current is a[1][i] then its previous alternate is a[0][i-1]
    //basically at a[1][i]--> we have two options -->pick that height and don't pick.
    //if pick then a[1][i] becomes a[1][i]+a[0][i-1].
    //if don't pick a[1][i] becomes a[1][i-1].
    //so from two options we choose maximum a[1][i]=max(a[1][i]+a[0][i-1] ,a[1][i-1]).
    //same do for a[0][i]=max(a[0][i]+a[1][i-1],a[0][i-1]).
    //and do this at every point.
    
    for(ll i=1;i<n;i++){
        a[0][i]=max(a[0][i]+a[1][i-1],a[0][i-1]);
        a[1][i]=max(a[1][i]+a[0][i-1],a[1][i-1]);
    }
    ll ans=max(a[0][n-1],a[1][n-1]);
    cout<<ans;
}

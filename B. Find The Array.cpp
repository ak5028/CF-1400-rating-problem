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
        ll a[n],s=0,s1=0,s2=0;vector<ll>v1,v2;
        for(ll i=0;i<n;i++){cin>>a[i];s+=a[i];}

        //It is enough to consider two possible arrays b: (a1,1,a3,1,a5,…) and (1,a2,1,a4,1,…). 
        //It is not difficult to notice that in these arrays, the condition is met that among two neighboring elements, one divides the other. 
        //It remains to show that at least one of these two arrays satisfies the condition 2∑i=1n|ai−bi|≤S

        for(ll i=0;i<n;i++){
            if(i%2==0){v1.pb(1);}
            else{v1.pb(a[i]);}
        }
        for(ll i=0;i<n;i++){
            if(i%2==0){v2.pb(a[i]);}
            else{v2.pb(1);}
        }
        for(ll i=0;i<n;i++){s1+=abs(v1[i]-a[i]);}
        for(ll i=0;i<n;i++){s2+=abs(v2[i]-a[i]);}
        if(2*s1<=s){for(auto val:v1){cout<<val<<" ";}}
        else{for(auto val:v2){cout<<val<<" ";}}
        cout<<endl;
    }
}

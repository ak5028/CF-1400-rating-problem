//AKJ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int main(){
    ll n,k;cin>>n>>k;
    ll a[n],ans; map<ll,ll>mp; vector<ll>b,freq;
    for(ll i=0;i<n;i++){cin>>a[i];}
    sort(a,a+n);
    //mid se pehle walo pe operation apply krne ka koi fayda nhi
    //mid ke baad walo pe op apply hoga
    //mid wala element jitni baar aa rha h utna no. op lgega mid wale j=ko 1 se inc krne mein
    //so we make two array b and freq ,b store diff element and freq store frequency of element.
    //we can directly inc b[i]-->b[i+1], when k/freq[i] >=diff ,which inc freq of next elemnt by freq[i] 
    for(ll i=n/2;i<n;i++){mp[a[i]]++;}

    for(auto val:mp){b.pb(val.ff);freq.pb(val.ss);}

    for(ll i=0;i<b.size();i++){
        if(i==b.size()-1){ans=b[i]+k/freq[i];break;}
        else{
            ll f=freq[i];
            ll diff=b[i+1]-b[i];
            if(k/f >=diff){
                k-=f*diff;
                freq[i+1]+=f;ans=b[i+1];//cout<<ans<<endl;
            }
            else{
                ans=b[i]+k/f;break;
            }
        }
    }
    cout<<ans;
}

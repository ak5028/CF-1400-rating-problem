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
        string s;cin>>s; vector<ll>v;
        for(ll i=0;i<n;i++){
            if(s[i]=='*'){v.push_back(i+1);}
        }
        if(v.size()==0){cout<<0<<endl;continue;}
        ll m=v.size(),mini=INT64_MAX;
        ll ps[m];ps[0]=v[0];
        for(ll i=1;i<m;i++){
            ps[i]=ps[i-1]+v[i];
        }

        for(ll i=0;i<m;i++){
            ll k1=m-1-i;
            ll b1=(ps[m-1]-ps[i])-(k1*(k1+1)/2)-(k1*v[i]);
            ll k2=i;
            ll b2=(k2*v[i])-(ps[i-1])-(k2*(k2+1)/2);
            if(i==0){b2=0;}
            mini=min(mini,b1+b2);
        }
        cout<<mini<<endl;
    }
}


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
        ll n,k;cin>>n>>k;
        ll a[n],mini=INT64_MAX;
        for(ll i=0;i<n;i++){cin>>a[i];mini=min(mini,a[i]);}
        //for k>=3 min value always zero
        //for k==1 we can calculate minm bu diff of adjacent value
        //solve for only k==2
        //for k==2,we first store all the possible diff that can made fom value of an array a[]
        //then second diff we take by efficiently finding value which gives min diff so use lower bound ,upperbound;
        if(k>=3){cout<<0<<endl;}
        else{
                sort(a,a+n);vector<ll>v1;
                for(ll i=0;i<n-1;i++){
                        for(int j=i+1;j<n;j++){
                        v1.push_back(a[j]-a[i]);
                        mini=min(mini,a[j]-a[i]);
                        }
                }v1.push_back(INT64_MAX);
                if(k==1){
                        cout<<mini<<endl;
                }
                else if(k==2){     
                        sort(all(v1));
                        for(ll i=0;i<n;i++){
                                ll i1=lower_bound(v1.begin(),v1.end(),a[i])-v1.begin();
                                ll i2=upper_bound(v1.begin(),v1.end(),a[i])-v1.begin();
                                if(i2==v1.size()-1){mini=min(mini,a[i]-v1[i2-1]);}
                                else if(i1==0){ll u=abs(a[i]-v1[i1]);mini=min(mini,u);}
                                else{
                                        ll u=abs(a[i]-v1[i2]);
                                        ll v2=abs(a[i]-v1[i2-1]);
                                        mini=min(mini,u);
                                        mini=min(mini,v2);
                                }
                        }
                        cout<<mini<<endl;
                }
        }
      }
}

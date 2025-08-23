//AKJ
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,t,ind;
int ps[100001];

bool good(int x){
    int a=ps[x]-ps[ind];
    if(a<=t){return true;}
    else{return false;}
}

int main(){
    cin>>n>>t;
    int a[n+1];
    for(int i=1;i<=n;i++){cin>>a[i];}
    
    //first make prefix sum array 
    //then treat every element as starting index then search from that ind to n
    //by using linear search will take time n^2
    //so we use binary search ,it will take time nlog(n)
    ps[0]=0;int maxi=INT_MIN;
    for(int i=1;i<=n;i++){
        ps[i]=ps[i-1]+a[i];
    }

    for(int i=1;i<=n;i++){
        int s=i,e=n,ans=0;
        ind=i-1;
        while(s<=e){
            int mid=e+(s-e)/2;
            if(good(mid)){ans=mid;s=mid+1;}
            else{e=mid-1;}
        }
        maxi=max(maxi,ans-ind);
    }
    cout<<maxi;
}

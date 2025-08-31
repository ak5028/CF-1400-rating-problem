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
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){cin>>a[i];}
       
        if(a[0]<a[n-1]){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
}

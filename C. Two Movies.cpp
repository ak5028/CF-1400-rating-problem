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
        int a[n],b[n],pos=0,neg=0,a1=0,b1=0;
        for(int i=0;i<n;i++){cin>>a[i];}
        for(int i=0;i<n;i++){cin>>b[i];}
        for(int i=0;i<n;i++){
            if(a[i]==b[i]){
                if(a[i]==1){pos++;}
                else if(a[i]==-1){neg++;}
            }
            else{
                if(a[i]>b[i]){a1+=a[i];}
                else{b1+=b[i];}
            }
        }
        int ans = -1e9;
    for (int i = -neg; i <= pos; ++i)
      ans = max(ans, min(a1 + i, b1 + (pos - neg - i)));
    cout << ans << '\n';
    }
}

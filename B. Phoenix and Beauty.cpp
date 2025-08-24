//AKJ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int main() {
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int a[n];set<int>s;vector<int>ans;
        for(int i=0;i<n;i++){cin>>a[i];s.insert(a[i]);}

        //For an array to be beautiful for some , the array must be periodic with period k.
        //If there exists more than k distinct numbers in the array a,
        //there is no answer and we print -1 (because the array cannot be periodic with period k).
        //Otherwise, we propose the following construction.
        //Consider a list of all the distinct numbers in array a. If there are less than k of them, we will append some 1s
        //(or any other number) until the list has size k. We can just print this list n times. The length of our array b is nk

        if(s.size()>k){cout<<-1<<endl;}
        else{
            for(auto val:s){ans.pb(val);}
            for(int j=0;j<k-s.size();j++){ans.pb(1);}
            
            cout<<ans.size()*n<<endl;
            for(int i=0;i<n;i++){
                for(auto val:ans){cout<<val<<" ";}
            }cout<<endl;
        }

   }
}

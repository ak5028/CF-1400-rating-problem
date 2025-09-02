//AKJ
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
 
int main(){
      int t;cin>>t;
      while(t--){
        int n;cin>>n;
        int v[n];
        for(int i=0;i<n;i++){cin>>v[i];}
        stack<int>a,b;int pen=0;
        if(n==1){cout<<0<<endl;continue;}
        a.push(v[0]);
        b.push(INT_MAX);
        //only we put array v value one by one in two arrays a& b
        //when curr value of v array is greater than  both a last value & last value
        //then we put value in that array in last value is smaller
        //same do for when value of v array is leass than both. 
        for(int i=1;i<n;i++){
                if(v[i]<=a.top() && v[i]<=b.top()){
                        if(a.top()<b.top()){a.push(v[i]);}
                        else{b.push(v[i]);}
                }
                else if(v[i]>a.top() && v[i]>b.top()){
                        pen++;
                        if(a.top()<b.top()){a.push(v[i]);}
                        else{b.push(v[i]);}
                }
                else if(v[i]>b.top() && v[i]<=a.top()){
                        a.push(v[i]);
                }
                else if(v[i]>a.top() && v[i]<=b.top()){
                        b.push(v[i]);
                }
        }
        cout<<pen<<endl;
     }
}

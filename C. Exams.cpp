//AKJ
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;cin>>n;vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++){
        ll a,b;cin>>a>>b;
        v.push_back({a,b});
    }
    //sort the vector on the basis of a as given in ques
    //then at each exam we choose the min date but follow non dec order
    //so first we compare b value of current exam if it foollows go with that 
    //bcz b<a for each exam
    sort(v.begin(),v.end());ll best=-1;
    for(ll i=0;i<n;i++){
        if(v[i].second>=best){best=v[i].second;}
        else{best=v[i].first;}
    }
    cout<<best;
}

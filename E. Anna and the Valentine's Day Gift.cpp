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
        ll n,m;cin>>n>>m;vector<string>v1;ll c=0;
        for(ll i=0;i<n;i++){
                string s;cin>>s;
                ll k=s.size();
                if(s[k-1]=='0'){v1.push_back(s);}
                else{c+=k;}
        }
        
                vector<pair<int,int>>v2;
                for(int i=0;i<v1.size();i++){
                        int k=v1[i].size(),cnt=0;
                        string s=v1[i];
                        for(int j=k-1;j>=0;j--){
                                if(s[j]!='0'){v2.push_back({cnt,k});break;}
                                else{cnt++;}
                        }
                }
                sort(all(v2));
                reverse(all(v2));
                for(int i=0;i<v2.size();i++){
                        if(i%2==0){c+=(v2[i].second-v2[i].first);}
                        else{c+=v2[i].second;}
                }
                if(c>=m+1){cout<<"Sasha"<<endl;}
                else{cout<<"Anna"<<endl;}
      }
}

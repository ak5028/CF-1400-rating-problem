//AKJ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(),(x).end()
typedef long long ll;

vector<int>adj[101];
vector<int>visited(101);

void dfs(int s){
    if(visited[s]){return;}
    visited[s]=1;
    for(auto u:adj[s]){
        dfs(u);
    }
}

int main(){
    int n,m,cnt=0;cin>>n>>m;
    map<int,int>mp;int c=0;
    for(int i=1;i<=n;i++){
        int k;cin>>k;
        if(k==0){c++;}
        for(int j=0;j<k;j++){
            int x;cin>>x;
            if(mp.count(x)==0){mp[x]=i;}
            else{adj[i].push_back(mp[x]);adj[mp[x]].push_back(i);}
        }
    }

    for(int i=1;i<=n;i++){
        if(!visited[i]){
            dfs(i);
            cnt++;
        }
    }
    int ans=max(cnt-1,c);
    cout<<ans;
}

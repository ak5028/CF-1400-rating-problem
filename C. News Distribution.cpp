//AKJ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(),(x).end()
typedef long long ll;

vector<int>adj[500006];
vector<int>visited(500006);
int ans[500006];
int cnt;

void dfs(int s){
    if(visited[s]){return;}
    visited[s]=1;
    cnt+=1;
    for(auto u:adj[s]){
        dfs(u);
    }
}
void dfs2(int s,int c){
    if(visited[s]){return;}
    visited[s]=1;
    ans[s]=c;
    for(auto u:adj[s]){
        dfs2(u,c);
    }
}

int main(){
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int k;cin>>k;
        if(k>=2){
            int x;cin>>x;
            for(int i=0;i<k-1;i++){
                int y;cin>>y;
                adj[x].push_back(y);
                adj[y].push_back(x);
                x=y;
            }
        }
        else{
            if(k==1){int x;cin>>x;}
        }
    }
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            cnt=0;
            dfs(i);
            mp[i]=cnt;
        }
    }

    fill(visited.begin(),visited.end(),0);
    for(auto val:mp){
        int node=val.first;
        int c=val.second;
        dfs2(node,c);
    }
    for(int i=1;i<=n;i++){cout<<ans[i]<<" ";}
}

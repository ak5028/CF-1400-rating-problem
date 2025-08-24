//AKJ
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,cnt,a[100];
int solve(int prev){
    for(int i=1;i<n;i++){
        if(a[i]==3){
            if(prev==1){prev=2;}
            else if(prev==2){prev=1;}
            else{prev=0;}
        }
        else if(a[i]==0){cnt++;prev=a[i];}
        else if(a[i]==prev){cnt++;prev=0;}
        else{prev=a[i];}
    }
    return cnt;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){cin>>a[i];}
    //jb 0 hofa tb cnt inc hoga and jb 1 3 2 aisa hoga tb cnt inc hoga
    //agr 3 h toh hmm use 1,2,0 bna skte h
    //baaki 1,2 ko sirf 0 
    //if curr no.and prev element is same then cnt inc hoga
    int prev=a[0]; cnt=0;

    if(prev==0){ cnt=1;}
    else if(prev==3){ prev=0;}

    int ans=solve(prev);
    cout<<ans;
}

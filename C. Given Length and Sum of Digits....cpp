//AKJ
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int m,s;cin>>m>>s;
    if(s==0 && m>1){cout<<-1<<" "<<-1;}
    else if(s>m*9){cout<<-1<<" "<<-1;}
    else{
        //basically made a pattern for 
        //maxm= 999..rem000..
        //minm= 100..rem999.. 
        //cnt counts no.of 9 we can made from given sum s.
        //rem stores bcaha hua no.
        //for minm there is one possibility also minm= rem999.. (cnt+1>=m)
        int cnt=s/9;
        int rem=s-cnt*9;
        vector<int>maxi(m),mini(m);
        fill(maxi.begin(),maxi.begin()+cnt,9);
        maxi[cnt]=rem;
        if(cnt+1<m){if(rem>=1){rem-=1;}
        else{cnt-=1;rem=8;}}
        mini[0]=1;int i=m-cnt;
        mini[i-1]=rem;
        fill(mini.begin()+i,mini.end(),9);
        for(auto val:mini){cout<<val;}cout<<" ";
        for(auto val:maxi){cout<<val;}
    }
}

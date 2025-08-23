//AKJ
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n,m,op=0;cin>>n>>m;
    //i solve the problem in reverse manner basically i convert m ko n mein.
    //if n is greater than m then only op we can apply on m is +1 so ans is n-m.
    //if n is less than m then 2 ops can apply on m are +1 and /2.
         //if m is even then divide by 2 ,which inc op count by 1.
         //if m is odd then first +1 apply then /2 ,which inc op count by 2.
         //we apply these operations until m is greater than n bcz at the point when 
         //n is greater than m ans is op+=(n-m)
    while(true){
        if(n>=m){op+=(n-m);break;}
        else{
            if(m%2==0){
                m/=2;op++;
            }
            else{
                m+=1;m/=2;op+=2;
            }
        }
    }
    cout<<op;
}

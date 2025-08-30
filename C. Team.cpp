//AKJ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int main(){
    int z,o;cin>>z>>o;
    if(o==z){
        for(int i=0;i<o+z;i++){
            if(i%2==0){cout<<1;}
            else{cout<<0;}
        }
    }
    else if(o>=z && o<=2*z+2){
        int a=o/(z+1);
        int b=o-a*(z+1);
        if(a==2 && b==0){b=z+1;}
        for(int i=0;i<b;i++){
            cout<<11;
            if(i!=z){cout<<0;}
        }
        for(int i=0;i<z+1-b;i++){
            cout<<1;
            if(i!=z+1-b-1){cout<<0;}
        }

    }
    else if(z>o && z-o==1){
        cout<<0;
        for(int i=0;i<o+z-1;i++){
            if(i%2==0){cout<<1;}
            else{cout<<0;}
        }
    }
    else{cout<<-1;}
}

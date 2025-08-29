//AKJ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(),(x).end()
typedef long long ll;

ll calculateGCD(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ll calculateLCM(ll a, ll b) {
    if (a == 0 || b == 0) { // Handle cases where one or both numbers are zero
        return 0;
    }
    // Using the formula: LCM(a, b) = (a * b) / GCD(a, b)
    // Note: To prevent potential overflow with (a * b),
    // it's safer to divide first: (a / GCD(a, b)) * b
    return (a / calculateGCD(a, b)) * b;
}

int main(){
    ll x;cin>>x;
    ll a=1,b=x;
    for(ll i=1;i*i<=x;i++){
        if(x%i==0){
            ll lcm_result = calculateLCM(i,x/i);
            if(lcm_result==x){a=i,b=x/i;}
        }
    }
    cout<<a<<" "<<b;

}

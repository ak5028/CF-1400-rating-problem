//AKJ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int main(){
    int n;cin>>n;
    string s,s1;cin>>s;

    //4! -> 3!*2!*2!
    //6! -> 5!*3!
    //8! -> 7!*2!*2!*2!
    //9! -> 7!*3!*3!*2!

    for(int i=0;i<n;i++){
        if(s[i]=='2'){s1+='2';}
        else if(s[i]=='3'){s1+='3';}
        else if(s[i]=='4'){s1+="322";}
        else if(s[i]=='5'){s1+='5';}
        else if(s[i]=='6'){s1+="53";}
        else if(s[i]=='7'){s1+='7';}
        else if(s[i]=='8'){s1+="7222";}
        else if(s[i]=='9'){s1+="7332";}
    }
    sort(all(s1));
    reverse(all(s1));
    cout<<s1;
}

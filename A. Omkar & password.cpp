#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll a[n];
    bool length= true;
    for(ll i=0;i<n;i++ ){
        cin>>a[i];
    }

    for(ll i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            length=false;
        }
    }
    if(length != true ){
        cout<<1<<endl;
    }
    else{
        cout<<n<<endl;
    }

}
return 0;
}

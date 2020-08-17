#include<bits/stdc++.h>
using namespace std;

#define ll long long int


int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[n];

        for(ll i=0;i<n;i++){
            cin>>a[i];
        }


        if(k%2 == 0){


                for(ll j=0;j<2;j++){
                        ll p = *max_element(a, a + n);
                        for(ll i=0;i<n;i++){
                         a[i]=p-a[i];
             }

                }

              for(ll i=0;i<n;i++) {
                   cout<<a[i]<<" ";
       }


        }
        else{
            ll p = *max_element(a, a + n);
            for(ll i=0;i<n;i++){
                a[i]=p-a[i];
             }
            for(ll i=0;i<n;i++) {
                   cout<<a[i]<<" ";
       }

        }


    }
 return 0;
}

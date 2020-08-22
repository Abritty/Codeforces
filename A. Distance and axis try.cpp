#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

ll t;
cin>>t;
while(t--){

ll n,k;
cin>>n>>k;

ll b=n+k;
if(b%2==0){
        if(n==0){
            cout<<k<<endl;
        }
        else if(n<k){
            cout<<k-n<<endl;
        }
        else{
            cout<<0<<endl;
        }


}
else if(b%2 != 0){
        if(k==0){
            cout<<1<<endl;
        }
        else if(n==0){
            cout<<k<<endl;
        }
        else if( n && k&& (n<k)){
            cout<<k-n<<endl;
        }
        else if(n&& k&& (k<n)){
            cout<<1<<endl;
        }

}




}
return 0;
}

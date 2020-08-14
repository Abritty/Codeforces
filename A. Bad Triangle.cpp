#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
ll t,n;
cin>>t;

while(t--){
cin>>n;
ll a[n],i,j;
bool not_possible=false;

for(ll i=0;i<n;i++){
    cin>>a[i];
}

for (i = 0; i < n-1; i++) {

        ll sum=a[i]+a[i+1];
        //cout<<"Sum"<<sum<<endl;
            if (sum<=a[n-1]) {
                not_possible = true;
                break;
            }
        }


if(not_possible==true)
    cout<<i+1<<" "<<i+2<<" "<<n<<endl;
else
    cout<<-1<<endl;

}
return 0;
}

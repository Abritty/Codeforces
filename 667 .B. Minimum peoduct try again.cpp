#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
ll t;
cin>>t;
while(t--){

ll a,b,x,y,n;
cin>>a>>b>>x>>y>>n;
if (b>a){
    swap(a,b);
    swap(x,y);
}
ll a_x,b_y,a_n,b_n,rem;


a_x=a-x;
b_y=b-y;




    ll b_sub1 = min(n,b_y);
    ll b1=b-b_sub1;
    ll a_sub1=min(n-b_sub1,a_x);
    ll a1=a-a_sub1;
    ll ans1=a1*b1;

    ll a_sub2=min(n,a_x);
    ll a2=a-a_sub2;
    ll b_sub2=min(n-a_sub2,b_y);
    ll b2=b-b_sub2;
    ll ans2 = a2*b2;
    cout<<min(ans1,ans2)<<endl;



}

return 0;
}

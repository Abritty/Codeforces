#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
int t;
cin>>t;
while(t--){

ll x,y,k;
cin>>x>>y>>k;
ll need =y*k+k;
ll trade=x-1;
ll tot_trade=need-1;
if(tot_trade%trade==0){
    cout<<tot_trade/trade + k<<endl;
}
else{
    cout<<tot_trade/trade + k+1<<endl;
}
}
return 0;

}

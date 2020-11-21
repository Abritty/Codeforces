#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
int t;
cin>>t;
while(t--){
ll n,k;
cin>>n>>k;
ll N=n*k;
ll a[N];
for(ll i=1;i<=N;i++){
    cin>>a[i];
}
float length=n;
float m=ceil(length/2);
//vector<int>num;
ll c=0;
ll srt=n-m;
ll p=srt+1;
ll sum=0;
for(ll i=N-srt;i>=1;i=i-p){
    c++;
    sum=sum+a[i];
    //cout<<sum<<" "<<c<<endl;
    if(c==k)break;
}

cout<<sum<<endl;

}
return 0;
}

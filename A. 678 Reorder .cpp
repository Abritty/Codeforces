#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
int a[n];
int sum=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    sum=sum+a[i];
}
//cout<<sum<<endl;
if(sum == m){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
return 0;
}

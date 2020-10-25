#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int m=n/2;
int a[n];

for(int i=1;i<=n;i++){
    cin>>a[i];
}
for(int j=m+1;j<=n;j++){
    a[j]=(-1)*a[j];
}
for(int i=n;i>=1;i--){
    cout<<a[i]<<" ";
}
cout<<endl;
}
return 0;
}

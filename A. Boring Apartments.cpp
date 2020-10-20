#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
int t;
cin>>t;
while(t--){
int x;
cin>>x;
int rem,base,u;
rem=x%10;
base=(rem-1)*10;
if(x>=1 && x<=9){
    u=1;
}
else if(x>=11 && x<=99){
    u=3;
}
else if(x>=111 && x<=999){
    u=6;
}
else if(x>=1111 && x<=9999){
    u=10;
}
cout<<base+u<<endl;
}
return 0;
}

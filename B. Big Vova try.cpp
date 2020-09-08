#include<bits/stdc++.h>
#include<algorithm>
#include<map>
#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;

while(t--){
int n;
cin>>n;
int a[n];
int curr=0;
//std::map<int,int> mymap;

for(int i=0;i<n;i++){
    cin>>a[i];
    curr=max(a[i],curr);
}
//sort(a, a+n, greater<int>());
int temp=0;

for(int i=0;i<n;i++){
        int loop=0;
    for(int j=i;j<n;j++){
           //cout<<loop<<" "<<a[i]<<" "<<a[j]<<" "<<curr<<" "<<__gcd(curr,a[i])<<" "<<__gcd(curr,a[j])<<endl;
           if(__gcd(a[j],curr)>loop){
            loop=__gcd(a[j],curr);
            temp=j;
           }
    }
    curr=__gcd(a[temp],curr);
    //cout<<"loop"<<i<<" "<<temp<<" "<<a[temp]<<" "<<curr<<endl;
    swap(a[i],a[temp]);

}
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;

}
return 0;
}

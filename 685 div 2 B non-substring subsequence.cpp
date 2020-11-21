#include<bits/stdc++.h>
#include<string.h>
#define ll long long
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n,q;
cin>>n>>q;
string s;
cin>>s;
while(q--){
int l,r;
cin>>l>>r;
l--;
r--;
int flag=0;
for(int i=0;i<l;i++){
    if(s[i]==s[l]){
        flag++;
    }
}
for(int i=r+1;i<n;i++){
    if(s[i]==s[r]){
        flag++;
    }
}

if(flag>0){
    cout<<"YES"<<endl;
}
else{cout<<"NO"<<endl;}


}
}
return 0;
}

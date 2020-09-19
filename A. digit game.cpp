#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){

int n;
cin>>n;

char a[n];
int per_odd=0;
int per_ev=0;

for(int i=1;i<=n;i++){
    cin>>a[i];
    if (i%2 !=0 && a[i]%2 !=0){
        per_odd ++;
    }
    else if(i%2 ==0 && a[i]%2 ==0){
        per_ev++;
    }
}

if (n%2!=0){
    if (per_odd > 0){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
}
else{
    if(per_ev >0){
        cout<<2<<endl;
    }
    else{
        cout<<1<<endl;
    }
}

}
return 0;
}

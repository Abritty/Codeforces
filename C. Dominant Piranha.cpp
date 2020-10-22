#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int max_a=*max_element(a, a + n);
bool ok= true;
for(int i=0;i<n;i++){
    if(a[i] != a[0]){
        ok= false;
    }
}

if(ok){
    cout<<-1<<endl;
}else{
    for(int i=0;i<n;i++){
        if(a[i]==max_a && i-1>=0 && a[i-1]<a[i] || a[i]==max_a && a[i+1]<a[i]){
            cout<<i+1<<endl;
            break;
        }
    }
}



}
return 0;
}

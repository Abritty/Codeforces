#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n][n];

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j || i+j==n-1){
        arr[i][j]=1;}else{
        arr[i][j]=0;}
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}
return 0;
}


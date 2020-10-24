#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int m=n-1;
int unq=0;
int nonPrime[]={0,1,4,6,8,9,10,12,14,15,16,18,21,22,25,26,27,28,33,34,35,36,38,39,42,44,45,49,46,51};
for (int i=0;i<30;i++){
    int v=m+nonPrime[i];
    //cout<<v<<endl;
    if(v%2!=0 && v%3!=0 && v%5!=0 && v%7!=0){
        unq=nonPrime[i];
        //cout<<unq<<endl;
        break;
    }
}
cout<<unq<<endl;

int arr[n][n];

/*for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i == n-1 || j== n-1 ||i==j){
        arr[i][j]=1;}else{
        arr[i][j]=0;}
    }
}
if(n==2){
    arr[1][1]=1;
}else{
arr[n-1][n-1]=unq;}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}*/
}
return 0;
}


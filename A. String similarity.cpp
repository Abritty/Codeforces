#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

int t;
cin>>t;
while(t--){
int n;
cin>>n;

char str[100], temp;
int i, j;
cin>>str;

    j = 2*n-2;
    int k=n-1;
    //cout<<"input last position"<<j<<endl;
    //cout<<"Output start"<<k<<endl;
    for(i=k;i<=j;i++)printf("%c",str[k]);
        printf("\n");



}
return 0;
}

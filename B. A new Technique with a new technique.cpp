#include<bits/stdc++.h>
using namespace std;

#define ll long long int

const int N=505*505;

int r[N];
int c[N];
int mat[505][505];

int main(){
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        int x;
        cin>>x;
        c[x]=j;
    }
}

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        int x;
        cin>>x;
        r[x]=j;
    }
}

for(int i=1;i<n*m+1;i++){
    //cout<<r[i]<<c[i]<<i<<endl;
    mat[r[i]][c[i]] = i;
}

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}

}

return 0;

}

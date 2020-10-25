#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
int t;
cin>>t;
while(t--){
int r,c;
cin>>r>>c;
int row[r][c];
int col[c][r];

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>row[i][j];
    }
}
int trans[r][c];
for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
        cin>>col[i][j];
        trans[j][i]=col[i][j];

    }
}

/*for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<trans[i][j]<<" ";
    }
    cout<<endl;
}*/

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        for(int k=0;k<r;k++){
             //cout<<"trans"<<trans[i][j]<<" "<<"row"<<row[k][0]<<" ";
            if(trans[i][j]== row[k][0]){

                for(int p=0;p<c;p++){
                    cout<<row[k][p]<<" ";
                }
            }
        }
    }
    cout<<endl;
}



}

return 0;

}

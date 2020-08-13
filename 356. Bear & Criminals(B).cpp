#include<bits/stdc++.h>
using namespace std;

int main(){
int a,n;
cin >> n >>a;
int t[n];
int i,j;
int criminals=0;
int un_criminals=0;
for(i=1;i<=n;i++){
    cin>>t[i];
}
for(i=1;i<=n;i++){
    if(t[i]==1){
        criminals++;
    }
}

for(i=1;i<=a;i++){
    for(j=a+1;j<=n;j++){
            if(abs(i-a)==abs(j-a) && t[i]!=t[j]){
                un_criminals++;
            }

    }
}

int ans= criminals - un_criminals;
cout<<ans<<endl;



return 0;
}

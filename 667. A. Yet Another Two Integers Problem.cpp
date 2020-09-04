#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int diff = abs(b-a);

    if(diff%10==0){
        cout<<diff/10<<endl;
    }
    else{
        cout<<diff/10+1<<endl;
    }




}

return 0;
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int x,y;
cin>>x>>y;
int tmp,c1;
if(x==y){
    cout<<x+y<<endl;
}
else if(x==0 && y>0){
        cout<<2*y-1<<endl;

}
else if(x>0 && y==0){
    cout<<2*x-1<<endl;
}
else if(x>0 && y>0 && x>y){
    tmp=x-y;
    c1=tmp*2-1;
    cout<<y*2+c1<<endl;
}
else if(y>0 && x>0 && y>x){
    tmp=y-x;
    c1=tmp*2-1;
    cout<<x*2+c1<<endl;
}
}
return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){

int t,x,y,l,r,flag,p;
cin >>t;
while(t--){
        cin>>l>>r;
        x=l;
        y= 2*x;

        if (y<=r){
            cout <<x<<" "<<y<<endl;
        }
        else{
            cout <<-1<<" "<<-1<<endl;
        }



}

return 0;

}

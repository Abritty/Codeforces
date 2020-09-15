#include <bits/stdc++.h>

using namespace std;

int main(){
int t;
cin>>t;

while(t--){
   int n;
   cin>>n;
   vector<int>a(102);

   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    a[x]++;
   }
   int b=-1;
   int c=-1;

   for(int i=0;i<=102;i++){
    if(a[i]>0){
        a[i]--;
    }
    else{
        b=i;
        break;
    }
   }

   for(int i=0;i<=102;i++){
    if(a[i]>0){
        a[i]--;
    }
    else{
        c=i;
        break;
    }
   }

   cout<<b+c<<endl;



}
return 0;
}

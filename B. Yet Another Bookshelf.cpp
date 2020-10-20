#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
int start,curr;
vector<int> g1;
for(int i=1;i<=n;i++){
    cin>>arr[i];
    if(arr[i]==1){
        g1.push_back(i);
    }
}
int counter=0;
for (int i = g1.size()-1; i >0; i--){
       //curr= g1[i]-g1[i-1]-1;
       //counter=counter+curr;
        curr=g1[i]-g1[i-1]-1;
        counter = counter+curr;
        }




cout<<counter<<endl;

}
return 0;
}

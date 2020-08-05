#include <bits/stdc++.h>

using namespace std;

int main(){

int t,n,i,a[51],sub;
int flag =0;
cin >> t;
while(t--){
    cin>>n;
    for(i=0;i<n;++i){
        cin >> a[i];
    }
    sort(a,a+n);
    //cout<<"Sorted Array";
    //for(i=0;i<n;i++){
        //cout <<a[i]<<endl;
    //}
    flag = 0;
    for(i=0;i<n-1;i++){
        if(a[i+1]==a[i]){
            sub = 0;
            flag=0;
            //cout<<"Sub"<<sub<<endl;
        }
        else{
                sub = a[i+1] - a[i];
                //cout<<"Sub"<<sub<<endl;
                if(sub>1){
                    flag=1;
                    break;
                }
        }

    }

    //cout <<"Flag"<<flag;
    if(flag ==1){
        cout << "NO"<<endl;
    }
    else{
        cout<< "YES"<<endl;
    }


}
return 0;
}

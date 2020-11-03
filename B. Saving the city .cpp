#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
string s;
cin>>s;
int f=-1;
int l=-1;
for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
        f=i;
        break;
    }
}

for (int i = s.size()-1; i >=0; i--)
        {
            if (s[i] == '1')
            {
                l = i;
                break;
            }
        }

if(f==l && f == -1)
        {
            cout<<0<<"\n";
            continue;
        }



int ans=a;

        for (int i = f; i <= l; i++)
        {
            int c=0;
            while(s[i]=='0')
            {
                c++;
                i++;
                //cout<<"inner loop"<<i<<" "<<c<<endl;
            }
            ans += min(a,b*c);
            //cout<<i<<" "<<a<<" "<<c<<" "<<ans<<endl;
        }
        cout<<ans<<"\n";


}
return 0;
}

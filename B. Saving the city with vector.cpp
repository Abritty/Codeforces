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

int cnt=0;
vector<int>gaps;
//int n=s.size();
for(int i=f;i<=l;i++){
    if(s[i]=='1'){
        if(cnt!=0)gaps.push_back(cnt);
        cnt=0;

    }
    else{
        cnt++;
    }
}
if(cnt!=0)gaps.push_back(cnt);

if(f==l && f == -1)
        {
            cout<<0<<"\n";

        }

else if (gaps.empty()){
    cout<<a<<endl;
}
else{
    int cost=a;

    for(int g=0;g<gaps.size();g++){
      if((gaps[g]*b)<a)cost+=(gaps[g]*b);
      else cost+=a;
    }

    cout << cost << endl;

}


}
return 0;
}

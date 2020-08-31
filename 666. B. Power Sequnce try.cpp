#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){

ll n;
cin>>n;
ll a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
ll res = LLONG_MAX;
ll limit=pow(10,10);
ll k=2;

while (pow(k, n - 1) <= limit)
{
                k++;
}
k--;
            //cout<<k<<endl;


for(ll i=1;i<=k;i++){
    ll tmp=0;
    for(ll j=0;j<n;j++){
        tmp +=abs(a[j]-pow(i,j));
    }
    res=min(res,tmp);
}

    cout << res;
            return 0;
}

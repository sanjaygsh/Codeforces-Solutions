#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define int long long
 
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool isprime(int n){
    for(int i=2;i*i<=n;++i){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int gcd(int a,int b){
    if(a==0) return b;
    return gcd(b%a,a);
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a=0;
        for(int i=2;i<=n-1;++i){
            if(isprime(i) && gcd(i,n-i-1)==1){
                a=i;
                break;
            }
        }
        int b=n-1-a,c=1;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}

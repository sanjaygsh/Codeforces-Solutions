#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define int long long
 
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
 
bool isPrime(int n){
    for(int i=2;i*i<=n;++i){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
 
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin>>t;
    while(t--){
        int d; cin>>d;
        int i=d+1,res1=0,res2=0;
        while(true){
            if(isPrime(i)){
                res1=i;
                break;
            }
            i++;
        }
        i=res1+d;
        while(true){
            if(isPrime(i)){
                res2=i;
                break;
            }
            i++;
        }
        cout<<min(res1*res2,res1*res1*res1)<<endl;
    }
    return 0;
}

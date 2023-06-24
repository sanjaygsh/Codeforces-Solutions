#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define int long long
 
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
 
bool primes[10000006];

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    fill(primes,primes+1000006+1,true);
    for(int i=2;i*i<=1000000;++i){
        if(primes[i]==true){
            for(int j=i*i;j<=1000000;j+=i){
                primes[j]=false;
            }
        }
    }

    int n; cin>>n;
    int ans=0;
    for(int i=4;i<=n/2;++i){
        if(primes[i]==false && primes[n-i]==false){
            ans=i;
            break;
        }
    }
    cout<<ans<<" "<<n-ans<<endl;
}

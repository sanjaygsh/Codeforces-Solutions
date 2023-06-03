#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define int long long
 
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        int sum=0,res=0;
        vector<int> arr(n);
        for(int i=0;i<n;++i){
            cin>>arr[i];
            sum+=arr[i];
            res+=arr[i]/x;
            if(arr[i]%x)
                res++;
        }
        if(sum%x){
            sum=sum/x+1;
        }
        else{
            sum=sum/x;
        }
        cout<<sum<<" "<<res<<endl;
    }
    return 0;
}

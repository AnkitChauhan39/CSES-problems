#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7 ;
int main()
{
    ll n ; 
    cin>>n ; 
    ll ans = 1 ; 
    for(int i = 0 ; i < n ; i++){
        ans *= 2 ; 
        ans = ans%mod; 
    }
    cout<<ans<<"\n";
    return 0;
}
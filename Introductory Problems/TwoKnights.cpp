#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n ; 
    cin>>n ; 
    for(ll i = 1 ; i <= n ; i++ ){
        ll Totalpossible = ((i*i)*((i*i) -1 ))/2 ; 
        ll ways_attacking = 4*(i-1)*(i-2) ; 

        ll ans = Totalpossible - ways_attacking ;
        cout<<ans<<"\n" ;  
    }
    return 0;
}
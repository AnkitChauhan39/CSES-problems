#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n ; 
    cin>>n ; 

    ll sum = (n*(n+1))/2 ; 
    if(sum%2 != 0 ){
        cout<<"NO" ; 
        return 0 ; 
    }
    ll k = sum/2 ; 
    cout<<"YES"<<"\n" ; 
    unordered_map<ll,ll> mp ;
    for(ll i= n ; i >= 1 ; i-- ){
        if( k>=i && k!= 0 ){
            k -= i ; 
            mp[i]++; 
        }
    }
    cout<<mp.size()<<"\n"; 
    for(auto it : mp ){
        cout<<it.first<<" "; 
    }
    cout<<"\n"; 
    cout<<n-mp.size()<<"\n" ;
    for(ll i = 1 ; i <= n ; i++ ){
        if(mp.find(i) == mp.end()){
            cout<<i<<" "; 
        }
    }
    cout<<"\n"; 

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll func(vector<ll> &nums , ll sum , ll curr , ll ind ){
    if(ind == nums.size()){
        return abs( 2*curr - sum ) ; 
    }

    return min( func(nums,sum,curr+nums[ind],ind+1),func(nums,sum,curr,ind+1) ) ; 
}
int main()
{
    int n ; 
    cin>>n ; 
    vector<ll> nums(n) ;
    ll sum = 0 ; 
    for(ll i = 0 ; i < n ; i++ ){
        cin>>nums[i]; 
        sum += nums[i]; 
    }
    cout<<func(nums,sum,0,0) ; 
    return 0;
}
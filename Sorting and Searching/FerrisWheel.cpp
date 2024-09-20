#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n , x ; 
    cin>>n>>x ;

    vector<int> nums(n);  
    for(int i = 0 ;i < n ; i++ ){
        cin>>nums[i]; 
    }
    sort(nums.begin(),nums.end()) ; 
    int s = 0 ; 
    int e = n-1 ; 
    int ans = 0 ; 
    while( s < e ){
        if(nums[s] + nums[e] <= x ){
            ans++;
            s++;
            e--; 
        }else {
            ans++;
            e--; 
        }
    }
    if(s == e ){
        ans++; 
    }
    cout<<ans<<"\n"; 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n ; 
    cin>>n ; 
    int ans = 0 ;
    
    while(n){
        n = n/5;  
        ans += n; 
    }
   
    cout<<ans<<"\n";
    return 0;
}
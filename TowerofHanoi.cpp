#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> dp(17,-1) ; 
int func(int n ){
    if(n == 1) {
        return 1 ; 
    }
    if(dp[n] != -1 ){
        return dp[n] ;
    }

    return dp[n] = 2*func(n-1) +1 ; 
    
}
void func2(int n , int s, int m , int d){
    if(n == 1) {
        cout<<s<<" "<<d<<"\n";
        return ;
    }

    int ans = 0 ; 
 
    func2(n-1,s,d,m) ; 

    cout<<s<<" "<<d<<"\n";

    func2(n-1,m,s,d) ; 

    return;
    
}
int main()
{
    int n ; 
    cin>> n ; 
    cout<<func(n)<<"\n"; 
    func2(n,1,2,3) ;
    return 0;
}
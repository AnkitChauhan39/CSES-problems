#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t ; 
    cin>>t ; 
    while(t--){
        ll a ; 
        ll b ; 
        
        cin>>a>>b ;
        
        int x = (2*a - b ) ; 
        int y = (2*b - a ) ; 

        if( x%3 != 0 || x < 0 || y%3 != 0 || y < 0  ){
            cout<<"NO"<<"\n";
        }else{
            cout<<"YES"<<"\n"; 
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t ; 
    cin>>t ; 
    while(t--){
        ll x ,y ; 
        cin>>x>>y ; 

        ll k = max(x,y) ; 

        if(k == x ){
            if(x%2 == 0 ){
                ll num = k*k ; 
                while(y != 1 ){
                    num--; 
                    y--; 
                }
                cout<<num<<"\n"; 
            }else{
                ll num = ((k-1)*(k-1))+1  ;
                while(y!=1 ){
                    num++; 
                    y--; 
                }
                cout<<num<<"\n"; 
            }
        }else{
            if(y%2 != 0 ){
                ll num = k*k ; 
                while(x != 1 ){
                    num--; 
                    x--; 
                }
                cout<<num<<"\n"; 
            }else{
                ll num = ((k-1)*(k-1))+1  ;
                while(x!=1 ){
                    num++; 
                    x--; 
                }
                cout<<num<<"\n"; 
            }
        }
    }
    return 0 ; 
}
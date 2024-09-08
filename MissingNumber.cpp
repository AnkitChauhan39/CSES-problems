#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ; 
    cin>>n ; 
    int x = 1 ; 

    for(int i = 2 ; i <= n ; i++ ){
        x = x^i ; 
    } 

    for(int i = 0 ; i < n-1 ; i++ ){
        int num ; 
        cin>>num ; 
        x = x^num ; 
    }

    cout<<x<<"\n";
    return 0 ; 
}
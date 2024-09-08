#include<bits/stdc++.h>
using namespace std ; 
int main() {
    int n; 
    cin>>n ; 
    if(n == 3 || n == 2 ){
        cout<<"NO SOLUTION"<<"\n"; 
        return 0 ; 
    }
    if( n == 4 ){
        cout<<"3 1 4 2"<<"\n";
        return 0 ; 
    }

    vector<int> nums; 
    for(int i = 1 ; i <= n ; i+= 2  ){
        cout<<i<<" "; 
    }
    for(int i = 2 ; i <= n ; i+= 2 ){
        cout<<i<<" "; 
    }
    cout<<"\n" ;
    return 0 ; 
}
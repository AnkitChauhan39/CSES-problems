#include<bits/stdc++.h>
using namespace std ; 
int main() {
    string str ; 
    cin>>str ; 

    int count = 1 ; 
    int ans = 1 ; 
    
    int n = str.size() ; 

    for(int i = 1 ; i < n ; i++ ){
        if(str[i] != str[i-1]){
            count = 1;  
        }else{
            count++; 
        }
        ans = max(ans,count ); 
    }
    cout<<ans<<"\n"; 
    return 0 ; 
}
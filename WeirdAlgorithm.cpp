#include<bits/stdc++.h>
using namespace std ; 
int main(){
    long long n ; 
    cin>>n ; 
    vector<long long> nums ; 

    while(n!= 1) {
        nums.push_back(n) ; 
        if(n%2 == 0 ){
            n = n/2 ; 
        }else{
            n = 3 * n +1  ;
        }
    }
    nums.push_back(1);

    for(int i = 0 ; i < nums.size() ; i++ ){
        cout<<nums[i]<<" ";
    }
    cout<<"\n"; 
    return 0; 
}
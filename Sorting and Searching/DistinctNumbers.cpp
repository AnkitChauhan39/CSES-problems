#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n ; 
    cin>>n ; 
    vector<int> nums ; 
    for(int i = 0 ;i < n ; i++ ){
        int num ; 
        cin>>num ; 
        nums.push_back(num) ; 
    }
    
    sort(nums.begin(),nums.end()) ; 

    int count = 1; 
    for(int i =1  ; i < n ; i++ ){
        if(nums[i] != nums[i-1]){
            count++; 
        }
    }
    cout<<count<<"\n"; 
    return 0;
}
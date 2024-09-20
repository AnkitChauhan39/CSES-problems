#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n ; 
    cin>> n ; 
    int k ; 
    cin>> k ; 

    vector<vector<int>> nums  ; 
    for(int i = 0 ; i < n ;i++ ){
        int num ; 
        cin>>num ; 
        nums.push_back({num,i+1}); 
    }
    int flag = 0 ; 
    sort(nums.begin(),nums.end()) ; 
    int s = 0 ; 
    int e = n-1 ; 

    while(s < e ){
        if(nums[s][0] + nums[e][0] == k ){

            vector<int> temp = {nums[s][1],nums[e][1]} ; 
            sort(temp.begin(),temp.end()) ; 
            cout<<temp[0]<<" "<<temp[1]<<"\n";
            flag = 1 ;
            break ; 
        }else if(nums[s][0]+ nums[e][0] < k ) {
            s++; 
        }else{
            e--; 
        }
    }
    
    if(flag == 0){
        cout<<"IMPOSSIBLE"<<"\n"; 
    }
    return 0 ;  
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
static bool cmp( vector<int> &a , vector<int> &b ){
    if(a[1] == b[1]){
        return a[0] < b[0] ; 
    }
    return a[1] < b[1]  ; 
}
int main(){
    int n  ; 
    cin>>n ; 
    vector<vector<int>> nums ; 
    for(int i = 0 ; i < n ; i++ ){
        int a , b ; 
        cin>>a>>b ; 
        nums.push_back({a,b}) ;
    }

    sort(nums.begin(),nums.end(),cmp); 
    int ans = 1  ;
    int prev = nums[0][1] ;

    for(int i = 1 ; i < nums.size() ; i++ ){
        if(nums[i][0] >= prev ){
            ans++; 
            prev = nums[i][1]; 
        }
    }

    cout<<ans<<"\n"; 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    //the number of applicants (n) , the number of apartments (m) , and the maximum allowed difference(k)
    int n , m , k ; 
    cin>>n>>m>>k ; 

    //desired apartment size of each applicant
    //he or she will accept any apartment whose size is between x-k and x+k
    vector<int> nums(n) ; 
    for(int i = 0 ; i < n ; i++ ){
        cin>>nums[i]; 
    }

    // the size of each apartment
    vector<int> arr(m) ;

    for(int i = 0 ;i < m ; i++ ){
        cin>>arr[i] ; 
    }
    sort(nums.begin(),nums.end()) ; 
    sort(arr.begin(),arr.end()) ; 

    int i = 0 ; 
    int j = 0 ; 

    int ans = 0 ; 
    
    while( i < nums.size() && j < arr.size()){
        if(abs(nums[i]-arr[j]) <= k ){
            ans++; 
            i++; 
            j++; 
        }else if (nums[i] < arr[j]) {
            i++; 
        }else{
            j++; 
        }
    }

    cout<<ans<<"\n"; 
    return 0;
}
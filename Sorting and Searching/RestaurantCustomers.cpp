#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n ; 
    cin>>n ; 

    vector<int> arrival;  
    vector<int> leaving; 

    for(int i = 0 ; i < n ; i++ ){
        int a ; 
        int l ; 
        cin>>a>>l ; 
        arrival.push_back(a); 
        leaving.push_back(l); 
    }

    sort(arrival.begin(),arrival.end()) ; 
    sort(leaving.begin(),leaving.end()) ; 

    int count = 0 ; 
    int i = 0 ; 
    int j = 0 ; 
    int ans = 0 ;
    while( i < n ){
        if(arrival[i] < leaving[j] ){
            count++;
            i++; 
        }else{
            count--; 
            j++; 
        }
        ans = max(count,ans); 
    }

    cout<<ans<<"\n"; 
    return 0;
}
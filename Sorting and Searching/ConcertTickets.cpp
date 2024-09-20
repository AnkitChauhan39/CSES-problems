#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n ; 
    cin>> n ; 

    int m ; 
    cin>> m  ; 
    map<int,int> mp ; 
    for(int i= 0; i < n ; i++ ){
        int num ; 
        cin>>num ; 

        mp[num]++; 
    }

    for(int i = 0 ; i < m ; i++ ){
        int num ; 
        cin>>num ; 
        // cout<<num<<"\n";
        if(mp.size() == 0 ){
            cout<<-1<<"\n" ;
        }else{
            auto it = mp.lower_bound(num) ; 
            if(it == mp.end()) {
                it-- ;
                cout<<it->first<<"\n"; 
                mp[it->first]--; 
                if(mp[it->first] == 0 ){
                    mp.erase(it->first) ; 
                }
            }else if(it->first == num){
                cout<<it->first<<"\n"; 
                mp[it->first]--; 
                if(mp[it->first] == 0 ){
                    mp.erase(it->first) ; 
                }
            }else if(it == mp.begin()){
                cout<<-1<<"\n"; 
            }else{
                it--; 
                cout<<it->first<<"\n"; 
                mp[it->first]--; 
                if(mp[it->first] == 0 ){
                    mp.erase(it->first) ; 
                }
            }
        }
    }
    return 0;
}
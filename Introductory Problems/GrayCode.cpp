#include<bits/stdc++.h>
using namespace std;
#define ll long long
void func( string &str , unordered_map<string,int> &mp ){
    cout<<str<<"\n" ; 

    for(int i = str.size()-1 ; i >= 0 ; i-- ){
        if(str[i] == '0'){
            str[i] = '1' ; 
            if(mp.find(str) == mp.end()){
                mp[str]++; 
                func(str,mp) ; 
            }
            str[i] = '0' ; 
        }else{
            str[i] = '0' ; 
            if(mp.find(str) == mp.end()){
                mp[str]++; 
                func(str,mp) ; 
            }
            str[i] = '1' ;
        }
    }
}
int main()
{
    int n ; 
    cin>>n ; 
    string str = "" ; 
    while(str.size() != n ){
        str = '0' + str ; 
    }
    unordered_map<string,int> mp ;
    mp[str]++;
    func(str,mp) ; 
    return 0;
}
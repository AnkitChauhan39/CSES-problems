#include<bits/stdc++.h>
using namespace std;
#define ll long long
unordered_map<string,int> mp ; 
unordered_map<string,int> mp2 ; 
void func(int ind , string &str ,vector<string> &strs ){
    if(ind == str.size()){
        if(mp.find(str) == mp.end()){
            strs.push_back(str); 
            mp[str]++; 
        }
        return ; 
    }

    for(int i = ind ; i < str.size() ; i++ ){
        swap(str[i],str[ind]) ; 
        func(ind+1,str,strs) ; 
        swap(str[i],str[ind]) ; 
    }
}
int main()
{
    string str ; 
    cin>>str ; 
    vector<string> strs; 
    func(0,str,strs) ; 
    cout<<mp.size()<<"\n"; 
    sort(strs.begin(),strs.end());
    for(int i = 0 ; i <strs.size() ; i++ ){
        cout<<strs[i]<<"\n"; 
    }

    return 0;
}
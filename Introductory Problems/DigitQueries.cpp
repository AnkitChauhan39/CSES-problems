#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll func(ll k ){
    ll num = 9 ; 
    ll i = 1 ; 
    ll s = 1 ; 
    while(((num * i )) < k ){
        k -= (num * i ); 
        num = num * 10 ; 
        s = s * 10  ;  
        i++; 
    }

    if(k%i == 0 ){
        ll temp  = k/i ; 
        k -= ((temp-1)*i) ;
        s = s + temp-1 ;
        string str = to_string(s) ;
        char ch ;  
        for(int j = 0 ; j < k ; j++ ){
            ch = str[j];  
        }
        return ch-'0';
    }

    ll temp  = k/i ; 
    k -= ((temp)*i) ;
    s = s + temp ;
    string str = to_string(s) ;
    char ch ;  
    for(int j = 0 ; j < k ; j++ ){
        ch = str[j];  
    }
    return ch-'0'; 
}

int main()
{
    ll q ; 
    cin >> q;

    for(int i = 0 ; i < q ; i++){
        ll num ; 
        cin>>num ; 

        cout<<func(num)<<"\n"; 
    }  
    
    return 0;
}
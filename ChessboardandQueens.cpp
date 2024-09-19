#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll func(   vector<vector<char>> &board ,  int row ,  
            unordered_map<int,int> &col , 
            unordered_map<int,int> &primary_diag ,
            unordered_map<int,int> &secondary_diag
        ){
    
    if(row == 8 ){
        return 1 ; 
    }

    ll ans = 0 ;

    for(int i =0 ; i < 8 ; i++ ){

        if(board[row][i] == '.' && col[i] == 0 && primary_diag[row+i] == 0 && secondary_diag[row-i+8] == 0 ){
            col[i]++; 
            primary_diag[row+i]++; 
            secondary_diag[row-i+8]++;

            ans += func(board,row+1,col,primary_diag,secondary_diag) ;

            col[i]--; 
            primary_diag[row+i]--; 
            secondary_diag[row-i+8]--; 
        }
    } 

    return ans ;
}
int main(){
    unordered_map<int,int> col ; 
    unordered_map<int,int> primary_diag ; 
    unordered_map<int,int> secondry_diag ; 

    vector<vector<char>> board(8,vector<char>(8)) ; 

    for(int i = 0 ; i< 8 ;i++ ) {
        for(int j = 0 ; j < 8 ; j++ ){
            cin>>board[i][j];  
        }
    }

    cout<<func(board,0,col,primary_diag,secondry_diag)<<"\n"; 

    return 0;
}

/*

........
........
..*.....
........
........
.....**.
...*....
........

*/
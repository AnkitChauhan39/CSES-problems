#include<bits/stdc++.h>
using namespace std ; 

vector<string> func(vector<string> &text) {
    int n = text.size() ; 
    int num = 1 ; 
    int sec = 1 ; 

    vector<string> ans ; 

    for(int i = 0 ; i < n ; i++ ){
        string temp = text[i] ; 

        if(temp[0] != '#'){
            continue; 
        }else if(temp[0] == '#' && temp[1] == ' '){
            string str = "" ; 
            int k = 2 ; 
            while(k < temp.size() ){
                str += temp[k] ; 
                k++; 
            }

            string topush = to_string(num) + " " + str ;
            ans.push_back(topush); 
            num++; 
            sec = 1 ; 
        }
        else{
            string str = ""; 
            int k = 3 ; 
            while(k < temp.size() ){
                str += temp[k] ; 
                k++; 
            }

            string topush = to_string(num) + "." + to_string(sec)+ " " + str ;
            ans.push_back(topush);
            sec++ ; 
        }
    }


}
int main(){
    vector<string> text ; 
    int n ; 
    cin>> n ; 
    for(int i =0 ; i < n ;i++ ){
        string str ;
        cin>>str ; 
        text.push_back(str);  
    }


}



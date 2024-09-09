#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string str;
    cin >> str;
    int n = str.size();

    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[str[i]]++;
    }
    int count = 0;
    int s = 0;
    int e = n - 1;
    char ch = '#';
    for (auto it : mp)
    {
        if (it.second % 2 != 0)
        {
            ch = it.first;
            count++;
        }
    }
    if (n % 2 == 0 && count != 0)
    {
        cout << "NO SOLUTION" << "\n";
    }
    else if (n % 2 != 0 && count > 1)
    {
        cout << "NO SOLUTION" << "\n";
    }
    else
    {
        int s = 0;
        int e = n - 1;

        for (auto it : mp)
        {
            char curr = it.first ; 
            int num = it.second ; 
            if(it.first == ch ) {
                str[n/2] = curr ; 
                num--; 
            }

            while(num!= 0 ){
                if(num%2 == 0 ) {
                    str[s] = curr ; 
                    s++; 
                }else{
                    str[e] = curr ;
                    e--; 
                }
                num--; 
            }
        }

        cout<<str<<"\n"; 
    }
    return 0;
}
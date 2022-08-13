//https://toph.co/p/is-palindrome

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int flag = 0;
    cin>>s;
    int len = s.size();
    for(int i= 0;i<len/2;i++){
        if(s[i]!=s[len-1 -i]){
            flag=1;
            break;
        }

    }
    if(flag ==1){
        cout<<"No";}
        else{
            cout<<"Yes";
        }
    }

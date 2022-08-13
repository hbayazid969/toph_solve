//https://toph.co/p/formatted-numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int c = 0;
    cin>>s;
    reverse(s.begin(),s.end());
    string a="";
    for(int i=0;i<s.size();i++){
        if(c == 3){
            a += ',';
            a+=s[i];
            c=0;
        }
        else{
            a+=s[i];
        }
        c++;
    }
    reverse(a.begin(),a.end());
    cout<<a<<endl;

}

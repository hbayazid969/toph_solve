//https://toph.co/p/heavy-alphabet

#include<bits/stdc++.h>

using namespace std;

int main()
{


  int n,i;

  string s;

  cin>>n;

  while(n--){

        cin>>s;

     for(i=0;i<s.size();i++){

        if(tolower(s[i])==tolower(s[i-1])){
            cout<<"#";
            continue;
        }
        else{
            cout<<s[i];

        }


     }


 cout<<endl;


     }

}

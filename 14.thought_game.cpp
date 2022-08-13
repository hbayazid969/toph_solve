//https://toph.co/p/throught-game

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        int sum=(a+b)/2;
        if(sum%2==0){
            cout<<"Sadia will be happy."<<endl;
        }
        else {
            cout<<"Oops!"<<endl;
        }
    }

}

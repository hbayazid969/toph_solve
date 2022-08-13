//https://toph.co/p/is-prime

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,c=0;
    cin>>num;
    if(num==1){
        cout<<"No"<<endl;
    }
    else{
        for(int i=2;i<num/2;i++){
        if(num%i==0){
             c++;
             break;
        }
    }
    if(c>0){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
    }
}

//https://toph.co/p/fibonacci-numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int fib[50];
    fib[1]=1;
    fib[2]=1;
    for(int i = 3;i<50;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    cin>>n;
    cout<<fib[n]<<endl;
}

//https://toph.co/p/clock-math

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x,h,m;
    cin>>h>>m;
    x = (0.5*11*m)-(30*h);
    if(x < 0){
        x*=-1;
    }
    if(x<=180){
        cout<<fixed<<setprecision(7)<<x<<endl;
    }
    else{
        cout<<fixed<<setprecision(7)<<360-x<<endl;
    }

}

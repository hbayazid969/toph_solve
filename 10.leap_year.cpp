//https://toph.co/p/leap-years

#include<iostream>
using namespace std;
int main() {
    int Y;
    cin>>Y;
    if(Y%4==0 && Y%400!=0){
            printf("Yes\n");
    }
    else {
        printf("No\n");
    }
}

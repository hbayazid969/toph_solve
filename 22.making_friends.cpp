//https://toph.co/p/making-friends

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,c=0,i=1;
	cin>>m;
	while(m){
        if(m%i==0){
            c++;
        }
        i++;
        if(i==m){
            break;
        }
	}
	cout<<c<<endl;

}

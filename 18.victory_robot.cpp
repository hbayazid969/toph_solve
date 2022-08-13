//https://toph.co/p/victory-robot

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
        cin>>n;
        if(n%2==0 && n!=1971){
            cout<<"Bangla"<<endl;
        }else if(n%2!=0 && n!=1971){
            cout<<"Joy"<<endl;
        }
        else if(n==1971){
            cout<<"Joy Bangla"<<endl;
        }
	}

}

//https://toph.co/p/alayna-and-strings

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int c=0,d=0;
	cin>>s;
	for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            c++;
        }else if(s[i]>='a' && s[i]<='z'){
            d++;
        }
	}
	cout<<c<<" "<<d<<endl;

}

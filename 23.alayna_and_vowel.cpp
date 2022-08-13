//https://toph.co/p/alayna-and-vowels

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int c=0;
	cin>>s;

	for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' ||s[i]=='u'){
            c++;
        }else{
            continue;
        }
	}
	cout<<c<<endl;

}

//https://toph.co/p/running-average

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	double sum=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
        cin>>arr[i];
	}
	int c=1;
	for(int i=0;i<n;i++){
        sum+=arr[i];
        cout<<sum/c<<fixed<<setprecision(10)<<endl;
        c++;
	}

}

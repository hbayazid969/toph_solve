//https://toph.co/p/little-subarray-sum

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,a,b,sum=0;
    cin>>n;
    int arr[n];
    cin>>a>>b;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=a;i<=b;i++){
        sum+=arr[i];
    }

    cout<<sum<<endl;

}

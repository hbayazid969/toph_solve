//https://toph.co/p/decent-arrays

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int brr[n];
    int c=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        brr[i]=arr[i];
    }
    int l=sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]==brr[i]){
            c++;
        }
    }
    if(c==l){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


}

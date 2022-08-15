//https://toph.co/p/set-union

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1+n2];
    for(int i=0;i<n1+n2;i++){
        cin>>arr1[i];
    }
    int n=sizeof(arr1)/sizeof(arr1[0]);
    sort(arr1,arr1+n);
     for(int i=0;i<n1+n2;i++){
        if(arr1[i]!=arr1[i+1]){
            cout<<arr1[i];
        }
          if(arr1[i]!= arr1[i+1] && i != (n1+n2)-1)
            cout <<" ";
    }
    cout<<endl;

}

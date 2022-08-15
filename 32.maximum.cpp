//https://toph.co/p/maximum

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int max = INT_MIN;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for (int i: arr)
    {

        if (i > max)
        {
            max = i;
        }
    }
    cout<<max<<endl;


    return 0;
}

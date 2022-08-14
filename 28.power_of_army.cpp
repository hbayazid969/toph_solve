//https://toph.co/p/power-of-army

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t){
        cin>>n;
        int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min = INT_MAX, max = INT_MIN;
    for (int i: arr)
    {
        if (i < min) {
            min = i;
        }

        if (i > max) {
            max = i;
        }
    }

    cout <<max-min << endl;
    t--;
    }
    return 0;
}

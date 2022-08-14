//https://toph.co/p/i-did-not-do-the-assignment

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    bool is_prime = true;
    cin >> n;
    if (n == 0 || n == 1)
    {
        is_prime = false;
    }

    for (i = 2; i <= n/2; ++i)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
        {
            cout<< "NO PUNISHMENT"<<endl;
        }
    else
        {
            for(i=0;i<n;i++){
                cout<<"I DID NOT DO THE ASSIGNMENT."<<endl;
            }
        }

    return 0;
}

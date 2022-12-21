#include <iostream>
#include <string>
#define ll long long

using namespace std;

ll print(string k)
{
    cout << k << endl;
    return 0;
}

ll compare(ll a, ll b)
{
    if (a > b)
    {
        print("yes");
    }
    else if (a < b)
    {
        print("no");
    }
    else
    {
        print("equal");
    }
    return 0;
}
#include <iostream>
#include <string>
#define ll long long

using namespace std;

ll print(string k)
{
    std::cout << k << std::endl;
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
}
#include <iostream>
#include <bits/stdc++.h>

int print(String k)
{
    std::cout << k << std::endl;
    return 0;
}

int compare(int a, int b)
{
    if (a > b)
    {
        print("yes");
    }
    else if (a < b)
    {
        print("no")
    }
    else
    {
        print("equal");
    }
}
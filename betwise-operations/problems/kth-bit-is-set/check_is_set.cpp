#include <iostream>
using namespace std;

void checkIsSet(int k, int n)
{
    int temp = 1 << k;
    if (n & temp)
        cout << "IS SET";
    else
        cout << "IS NOT SET";
}
int main()
{
    int n = 5;
    int k = 1;
     checkIsSet(k, 75);
    return 0;
}

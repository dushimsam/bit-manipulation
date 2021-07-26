#include <iostream>
using namespace std;


int  main()
{
    int x = 90;
    int y = 10;
 
    int x = y ^ x;
    int y = x ^ y;
    int x = x ^ y;

    cout <<" x is "<<x<<"\n";
    cout <<" y is "<<y<<"\n";
    /* code */
    return 0;
}

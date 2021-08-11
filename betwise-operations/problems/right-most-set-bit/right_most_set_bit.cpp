#include <iostream>
#include <math.h>

using namespace std; 
int rightMostPosition(int n)
{
    return log2(n & -n) + 1;
}

int main(){
    cout << "The position of the right most set bit in 12 is "<<rightMostPosition(12);
    return 0;
}

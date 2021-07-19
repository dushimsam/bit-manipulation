#include <iostream>
using namespace std;

bool isEven(int num)
{
 return !(num & 1);
}

int main(){
 int n = 14;
    isEven(n)
? cout << "Even"
: cout << "Odd";
    return 0;
}
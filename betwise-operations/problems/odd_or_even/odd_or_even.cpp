#include <iostream>
using namespace std;

bool isEven(int num)
{
    if(num ^ 1 == num+1)
       return true;
    else 
       return false;
}

int main(){
cout << " 14  is Even "<<
isEven(14)
? cout << "Even"
: cout << "Odd";
<<"\n";
cout << " 11  is Even "
<<isEven(14)
? cout << "Even"
: cout << "Odd";
<<"\n";
    return 0;
}
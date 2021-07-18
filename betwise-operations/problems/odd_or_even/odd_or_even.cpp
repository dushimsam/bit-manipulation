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
cout << " 14  is Even "<<isEven(14)<<"\n";
cout << " 11  is Even "<<isEven(11)<<"\n";
    return 0;
}
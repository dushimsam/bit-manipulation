#include <iostream>
using namespace std;

int formulaValue(int num)
{
return 1+((num >> 31)-(-num >> 31))
}
string predictSign(int num)
{
if(formulaValue(num) == 2)
   return "POSITIVE";
else if(formulaValue(num) == 1)
   return "ZERO";
   else 
    return "NEGATIVE";
}

int main()
{
    cout << predictSign(9);
    cout << "\n";
    cout << predictSign(-9);
    return 0;
}
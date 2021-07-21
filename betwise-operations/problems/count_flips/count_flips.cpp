#include <iostream>
using namespace std;

int countSetBits(int num)
{
    int count = 0;
while(num)
{
    count += num & 1;
    num >>=1;
}
return count;
}

int count_flips(int a , int b)
{
     return (countSetBits(a ^ b));
}
int main(){
 int a = 10;
    int b = 20;
    cout << count_flips(a, b)<<endl;
    return 0;
}
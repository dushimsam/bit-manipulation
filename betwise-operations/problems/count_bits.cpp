#include <iostream>
using namespace std;

int count_bits(int num)
{
    int count = 0;

    while(num)
    {
        count++;
        num >>=1;
    }
    return count;
}


int main(){
    int num = 9;
   cout << " Number of  bits " << count_bits(9);
    return 0;
}
#include<iostream>
using namespace std;

int count_set_bits(int num)
{
    int count = 0;
    while(num)
    {
        count += num & 1;
        num >>=1;
    }
    return count;
}

int main(){
    int num = 9;
   cout << " Set bits " << count_set_bits(9);
    return 0;
}
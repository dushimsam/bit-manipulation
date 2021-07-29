#include<iostream>
using namespace std;

int findHammingDistance(int num1,int num2)
{
    int xor_result = num1 ^ num2;
    int count = 0;

    while(x >0)
    {
        count += x & 1;
        x >>=1;
    }
    return count;
}

int main(){
    int num1 = 9;
    int num2= 14;

    cout << " The hamming distance between 9 and 14 is "<<findHammingDistance(14,9);
    return 0;
}
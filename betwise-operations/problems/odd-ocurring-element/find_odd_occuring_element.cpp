#include <iostream>
using namespace std;

int findRepeating(int A[],int n)
{
int result= 0;
for(int i=0;i<n;i++)
{
result ^= (1 << A[i]);
}
cout << "The Odd occuring elements "<<"\n";
for(int i=0;i<n;i++)
{
    if(result & (1 << A[i]))
    {
      cout<<A[i]<<"\n";
       result ^= (1 << A[i]);
    }
}

}

int main(void)
{
    int A[] = { 5, 8, 2, 5, 8, 2, 8, 5, 1, 8, 2 };
    int n = sizeof(A) / sizeof(A[0]);
 
    findRepeating(A, n);
 
    return 0;
}
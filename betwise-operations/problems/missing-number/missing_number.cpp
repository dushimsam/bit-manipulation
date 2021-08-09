#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n)
{
    int x1 = arr[0];
    int x2 = 1;

    for (int i = 1; i < n; i++)
    {
        x1 ^= arr[i];
    }

    for (int i = 2; i <= (n + 1); i++)
    {
        x2 ^= i;
    }

    return (x1 ^ x2);
}

int main()
{
    int arr[] = {6,1, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int miss = findMissingNumber(arr, n);
    cout << miss;
    return 0;
}

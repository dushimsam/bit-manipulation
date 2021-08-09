#include <iostream>
using namespace std;

int main(){

int arr[7]={4,5,6,6,7,7,4};

int single_number = arr[0];
for(int i=1;i<=6;i++){
single_number ^= arr[i];
}
cout << single_number;
    return 0;
}

#include <iostream>
using namespace std;
int main() {
   int num = 16;
       
       if((num & (num - 1)) == 0)
       {
           cout << "It is  a power of two ";
       }else{
          cout << "It is  not power of two "; 
       }
    
    return 0;
}
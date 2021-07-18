
// C program to find total bit in given number
#include <stdio.h>     
#include <math.h>
 
unsigned countBits(unsigned int number)
{     
      // log function in base 2
      // take only integer part
      return (int)log2(number)+1;
}
 
// Driven program      
int main()
{
    unsigned int num = 65;
    printf("%d\n", countBits(num));
    return 0;
}
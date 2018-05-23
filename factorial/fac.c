#include <stdio.h>
#include <iostream>
int factorialSafe(int n) {
   int result = 1;
   if(n<0)
       return -1;
   for (int i = 1; i <= n; ++i)
       result *= i;
   return result;
}

int main(){
(factorialSafe(1000000000));
return 0;}

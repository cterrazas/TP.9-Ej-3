#include <stdio.h>
#include <stdlib.h>

int suma_dig (int n);

int main (void)
{
  int num= 123456;
  printf ("%d", suma_dig(num));
  
  return O;
 }
 
 int suma_dig (int n)
 {
    if (n==0)
    {
    return 0;
    }
    
  else
  return ((n%10)+ suma_dig (n1/10));
  
  }

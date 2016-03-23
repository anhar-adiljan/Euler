#include <stdio.h>
#include <math.h>

int isPrime(long i);

int main()
{
  long num = 600851475143;
  long i = 2;
  long res = 1;
  while( i < sqrt((double)num) ){
    if( num % i == 0 && isPrime(i) )
      res = i;
    i++;
  }
  printf("res = %ld\n", res);
  return 0;
}

int isPrime(long i)
{
  long idx = 2;
  while( idx < sqrt((double)i) ){
    if(i % idx == 0)
      return 0;
    idx++;
  }
  return 1;
}

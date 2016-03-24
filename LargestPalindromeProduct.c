#define TRUE  1
#define FALSE 0
#include <stdio.h>

int isPalindrome(int num);

int main()
{
  int res = 0;
  int i = 100;
  int j = 100;
  while( i < 1000 ){
    while( j < 1000 ){
      int prod = i * j;
      if( prod > res && isPalindrome(prod) )
        res = prod;
      j++;
    }
    j = 100;
    i++;
  }

  printf("res = %d\n", res);
  return 0;
}

int isPalindrome(int num)
{
  // set the highest power
  int power = 100000;
  if( num / power == 0 )
    power = 10000;

  while(power > 1){
    int hi = num / power;
    int lo = num % 10;
    
    // return false if current hi digit does not equal current lo digit
    if( hi != lo )
      return FALSE;

    num = num - hi * power;
    num = (num - lo) / 10;
    power /= 100;
  }

  return TRUE;
}

#include <stdio.h>
int main()
{
  unsigned long long prev2 = 1;
  unsigned long long prev1 = 2;
  unsigned long long sum = 2;
  while(1){
    unsigned long long curr = prev2 + prev1;
    if (curr > 4000000)
      break;
    if( curr % 2 == 0)
      sum += curr;
    prev2 = prev1;
    prev1 = curr;
  }
  printf("sum = %llu\n", sum);
  return 0;
}

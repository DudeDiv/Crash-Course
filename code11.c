#include <stdio.h>
//Program to check if inputted number is either divisible by 2 or 3
int main(){
  int a;
  scanf("%d", &a);
  if(a%3==0 || a%2==0)//condition check
  {
    printf("YES\n");
  }
  else //fail case
  {
    printf("NO\n");
  }
}

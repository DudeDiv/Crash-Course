/*Instead of writing:
int time = 20;
if (time < 18) {
  printf("Good day.");
} else {
  printf("Good evening.");
}

We can write:*/
#include <stdio.h>
int main(){
  int time = 20;
(time < 18) ? printf("Good day.") : printf("Good evening.");
return 0;
}

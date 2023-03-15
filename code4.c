#include <stdio.h>
int main(){
  int i = 10;
  if (i == 10){
    //first if statement
    if (i < 15)
      printf("i is smaller than 15.\n");
    
    //Nested-if statement
    //Will only be executed if statement above
    //is true
    if (i<12)
      printf("i is smaller than 12 too.\n");
    else
      printf("i is smaller than 15.");
  }
  return 0;
}

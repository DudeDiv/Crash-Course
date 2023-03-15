#include <stdio.h>
int main(){
  int time = 22;
  if (time < 12){
    printf("Good Morning");
  } else if (time < 20){
    printf("Good Day");
  } else {
    printf("Good evening");
  }
  return 0;
}

#include <stdio.h>

int main(){

int i;
char name[10];
  printf("What is your name?\n>");
  scanf("%s",name);

  printf("Hello, ");
  for(i = 0; i < 10; i++){
    printf("%c",name[i]);
    if(name[i] == NULL){
      break;
    }
  }
  printf("!\n");

  return 0;
}

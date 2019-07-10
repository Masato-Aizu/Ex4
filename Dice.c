#include <stdio.h>
#include <stdlib.h>

int main(){
    int sum;
    int dice1;
    int dice2;
    int i;

    char name[10];
      printf("What is your name?\n>");
      scanf("%s",name);

      printf("Hello, ");
      for(i = 0; i < 10; i++){
        printf("%c",name[i]);
        if(name[i] == '\0'){
          break;
        }
      }
      printf("!\n");
  printf("Rolling the dice.....\n");
  dice1 = rand() % 6 + 1;
  dice2 = rand() % 6 + 1;
  printf("dice1 : %d\n",dice1);
  printf("dice2 : %d\n",dice2);

sum = dice1 + dice2;
  printf("Total Value : %d\n",sum);
  return 0;
}

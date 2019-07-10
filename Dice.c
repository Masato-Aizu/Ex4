#include <stdio.h>
#include <stdlib.h>

int main(){
    int sum;
    int dice1;
    int dice2;
    int dice3;
    int i;
    int luck = 0;

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
      printf("Do you think you are lucky?\n");
      printf("(if yes-> 1 or no-> 2)--->");
      scanf("%d",&luck);
      if(luck == 1) printf("Very good!!\n");
      else if(luck == 2) printf("Don't worry!!\n");
      else printf("Oh.....\n");
  printf("Rolling the dice.....\n");
  dice1 = rand() % 6 + 1;
  dice2 = rand() % 6 + 1;
  dice3 = rand() % 6 + 1;
  printf("dice1 : %d\n",dice1);
  printf("dice2 : %d\n",dice2);
  printf("dice3 : %d\n",dice3);

sum = dice1 + dice2 + dice3;
  printf("Total Value : %d\n",sum);
  if(sum >= 8){
    printf("%s won!\n",name);
  }
  else if(sum == 7){
    printf("%s get lucky Seven!!",name);
  }
  else{
    printf("%s lost!\n",name);
  }
  return 0;
}

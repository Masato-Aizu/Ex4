#include <stdio.h>
#include <stdlib.h>

int main(){
    int sum;
    int dice1;
    int dice2;

  printf("Rolling the dice.....\n");
  dice1 = rand() % 6 + 1;
  dice2 = rand() % 6 + 1;
  printf("dice1 : %d\n",dice1);
  printf("dice2 : %d\n",dice2);

sum = dice1 + dice2;
  printf("Total Value : %d\n",sum);
  if(sum >= 8){
    printf("you won!\n");
  }
  else{
    printf("you lost!\n");
  }
  return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

  int i;
  int hcount,tcount;
  hcount=tcount=0;
  srand((unsigned int)time(NULL));

  printf("Tossing a coin...\n");
  for(i=1;i<=3;i++){
    printf("Round %d:",i);
    if(rand()%2==0){
      printf("Heads\n");
      hcount++;
    }
    else {
      printf("Tails\n");
      tcount++;
    }

  }
  


  return 0;
}

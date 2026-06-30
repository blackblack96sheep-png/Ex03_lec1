#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

  int i;
  int hcount,tcount;
  char name[20];
  hcount=tcount=0;
  srand((unsigned int)time(NULL));
  
print("Who are you?\n->");  
scanf("%s".&name);
  print("Hello %s",name);

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
  if(hcount>tcount)printf("You won\n");
  else printf("You lost\n");


  return 0;
}

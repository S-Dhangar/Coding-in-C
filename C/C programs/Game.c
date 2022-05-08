#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{    int number,guess,n=1;
srand(time(0));
      number=rand()%100+1;
      
      do{
        printf("guess any number between 1 to 100\n");
        scanf("%d",&guess);
        if(number<guess)
        {
          printf("put lower value\n");
        }
        else if(number>guess)
        {
          printf("put larger value\n");
          
        }
        else
        {
          printf("you guessed it in %d attempts\n",n);
          }n++;
      }while(number!=guess);
        return 0;
        
      
}

#include <stdio.h>
int k;
int repeat(int inter[],int k,int num){
    for(int i=0;i<=k;i++){
       if(inter[i]==num){
           return 1;
       }
    }
    return 0;
}
int main()
{
    int arr[10], arr1[10],intersection[10];
    int count;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr1[i]);
    }
   int i;
    for ( i = 0; i < count; i++)
    {

        int c= 0;
        for (int j = 0; j < count; j++)
        {
            /* code */
            if (arr[i] == arr1[j])
            {
                c++;
            }
        }
        if (c > 0)
        {
            if(repeat(intersection,k,arr[i])){
                
            }
            else{
                intersection[k]=arr[i];
                k++;
            }
            
        }
    }

for (int m = 0; m <k; m++)
{
    printf("%d ",intersection[m]);   
}




}
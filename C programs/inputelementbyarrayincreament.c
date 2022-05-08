#include<stdio.h>

int main(){
int arr[3];
int *i=&arr[0];
for(int j=0;j<3;j++){
printf("enter the value ");
scanf("%d",i);
i++;}
for(int j=0;j<3;j++){
printf("value of i is  %d\n",arr[j]);
}}
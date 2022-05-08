#include<stdio.h>
#include<string.h>
struct student{
  char name[20];
  int clas;
  float marks;

};
int main(){
    struct student first;
    strcpy(first.name,"shubham dhangar");
    first.clas=12;
    first.marks=55.5;

printf("name of student is = %s\n",first.name);
printf("class of student is = %d\n",first.clas);
printf("mareks of the student is = %.3f\n",first.marks);
}

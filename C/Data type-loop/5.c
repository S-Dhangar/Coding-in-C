#include<stdio.h>
int main(){
   int i;
   float f;
   double d;
   long l;
   i=l=f=d=100/3;
   printf("%d %ld %f %lf\n",i,l,f,d);
   f=i=d=l=100/3;
   printf("%f %d %lf %ld\n",f,i,d,l);
   l=i=d=f=100/3;
   printf("%ld %d %lf %f\n",l,i,d,f);
   d=l=f=i=100/3;
   printf("%lf %ld %f %d\n",d,l,f,i);
   float fl=105/3;
   printf("%f",fl);


    return 0;
}
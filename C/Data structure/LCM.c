#include<stdio.h>
int main(){
     int greater = 0;
        int LCM = 0;
        int n1,n2;
        printf("enter the numbers of which you want to get LCM =");
       scanf("%d%d",&n1,&n2);
        if (n1 < n2) {
            greater = n2;
        }
        if (n2 < n1) {
            greater = n1;
        }

        for (int i = 1; i <= greater; i++) {
            if ((greater * i) % n1 == 0 && (greater * i) % n2 == 0) {
                LCM = (greater * i);
                break;
            }
        }printf("LCM of n1 and n2 is %d",LCM);
    return 0;
}
#int i,n,large,second;
    printf("enter the number of element\n");
    scanf("%d",&n);
    printf("enter the elements of erray\n");
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    large=second=array[0];
     for(i=0;i<n;i++)
    if(array[i]>large)
    {
        second=large;
        large=array[i];
    }
        if(array[i]include<stdio.h>
array[]; 
main()
{   
     >second && array[i]<large)
        {
        second=array[i];
    
    }
    printf("second large number is %d\n and large is %d\n",second,large);
    return 0;
    }
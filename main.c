#include<stdio.h>
void main()
{ 
    int i,n,a[10],lr,j;
    int grt,temp;
    printf("Enter the number of items\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the position of respective largest number\n");
    scanf("%d",&lr);
    printf("********\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]<a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
        if(lr==i+1)
        {
            grt=a[i];
        }
    }
    printf("********\n");
    printf("%d largest number is %d\n",lr,grt);

}


#include<stdio.h>
void main()
{
    int a[10],b[10];
    int i,n,s,temp,j,tem1;
    printf("Enter the n value\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    /*printf("Enter the Rotation steps value\n");
    scanf("%d",&s);*/
        temp=a[n-1];
        for(j=n-1;j<0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=temp;
    printf("*********\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}
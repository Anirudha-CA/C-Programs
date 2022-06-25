#include<stdio.h>
void main()
{
    int a[10],b[10],c[10],it[10];
    int i,n,o,p,j,com=0;
    printf("Enter the n and o value\n");
    scanf("%d %d",&n,&o);
    printf("Enter the Elements of array 1\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the elements of array 2\n");
    for(i=0;i<o;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n+o;i++)
    {
       if(i<n)
       c[i]=a[i];
       else
       c[i]=b[i-n];
    }
    printf("*******\n");
    for(i=0;i<n+o;i++)
    printf("%d\n",c[i]);
        for(i=0;i<n;i++)
        {
           for(j=0;j<o;j++)
           {
               if(a[i]==b[j])
               {
               it[i]=a[i];
               com++;
               }
           }
         }
    printf("*******\n");
    if(com==0)
    printf("No Common elements");
    else
    {
    for(i=0;i<com;i++)
    printf("%d\n",it[i]);
    }
}
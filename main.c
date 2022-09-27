/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[100],i,temp,n,count=0;
    printf("Enter size\n");
    scanf("%d",&n);
    printf("Enter Elements");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            temp=arr[count];
            arr[count]=arr[i];
            arr[i]=temp;
            count++;
        }
    }
    printf("Shifted Array\n");
    for(i=0;i<n;i++)
    printf("%d",arr[i]);

    return 0;
}

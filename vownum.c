/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char c[100];
    int flag[5]={0,0,0,0,0},i;
    printf("Enter STring\n");
    scanf("%s",c);
    for(i=0;i<strlen(c);i++)
    {
        if(c[i]=='a')
        {
            flag[0]++;
        }else if(c[i]=='e')
        {
            flag[1]++;
        }else if(c[i]=='i')
        {
            flag[2]++;
        }else if(c[i]=='o')
        {
            flag[3]++;
        }else if(c[i]=='u')
        {
            flag[4]++;
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",flag[i]);
    }
    return 0;
}

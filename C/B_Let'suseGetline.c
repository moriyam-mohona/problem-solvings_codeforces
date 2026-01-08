#include<stdio.h>
int main()
{
    char a[1000001];
    fgets(a,1000001,stdin);
    for(int i=0;a[i] != '\\';i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}

// input:  Egyptian collegiate programming\ contest
// output: Egyptian collegiate programming
 

// input: google \or facebook
// output: google 

#include <stdio.h>
#include <stdlib.h>

unsigned char Name1[30];

void *My_memset(void *StartAdd, unsigned char Value, unsigned int Length);

int main()
{
    My_memset(Name1,'*',30);
    printf("%s \n\n",Name1);

    My_memset(NULL,'5',15);
    printf("%s \n\n",Name1);
    return 0;
}
void *My_memset(void *StartAdd, unsigned char Value, unsigned int Length)
{
    unsigned char *Temp=StartAdd;
    unsigned int Count = 0;

    if(NULL == StartAdd)
    {
        printf ("Error !! ==> Passed Null !! \n");
    }
    else
    {
        for ( Count=0 ; Count<Length ; Count++)
        {
            *Temp=Value;
            Temp++;
        }
    }
    return StartAdd;
}

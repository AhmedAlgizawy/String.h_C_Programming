#include <stdio.h>
#include <stdlib.h>
char *My_strncpy(char *Str_Dest, const char *Str_Src , unsigned int Length);

unsigned char Name1[30]="Ahmed_Algizawy";
unsigned char Name2[30];

int main()
{
    printf ("%s \n",Name1);

    My_strncpy(Name2,Name1,5);

    printf ("%s \n",Name2);
    return 0;
}

char *My_strncpy(char *Str_Dest, const char *Str_Src , unsigned int Length)
{
    unsigned char *Temp_Dest = Str_Dest;
    unsigned char *Temp_Src  = Str_Src;

    if ( (NULL==Str_Dest)||(NULL==Str_Src))
    {
        printf ("Error !! ==> Passed Null !! \n");
    }
    else
    {
        while (Length--)
        {
            *Temp_Dest++ = *Temp_Src++ ;
        }
    }
    return Str_Dest ;
}

#include <stdio.h>
#include <stdlib.h>

char *My_strcpy(char *Str_Dest, const char *Str_Src);

unsigned char Name1[30]="Ahmed_Algizawy";
unsigned char Name2[30];

int main()
{
    printf ("%s \n",Name1);

    My_strcpy(Name2,Name1);

    printf ("%s \n",Name2);
    return 0;
}

char *My_strcpy(char *Str_Dest, const char *Str_Src)
{
    unsigned char *Temp_Dest = Str_Dest;
    unsigned char *Temp_Src  = Str_Src;

    if ( (NULL==Str_Dest)||(NULL==Str_Src))
    {
        printf ("Error !! ==> Passed Null !! \n");
    }
    else
    {
        while (*Temp_Src)
        {
            *Temp_Dest++ = *Temp_Src++ ;
        }
    }
    return Str_Dest ;
}

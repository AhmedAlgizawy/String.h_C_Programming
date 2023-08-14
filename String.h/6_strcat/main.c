#include <stdio.h>
#include <stdlib.h>

char *My_strcat(char *Dest_Str, const char *Src_Str );

unsigned char Name1[30] = "Ahmed_";
unsigned char Name2[30] = "Al-Gizawy";

int main()
{


    printf("Name_1 : %s\n",Name1);
    My_strcat(Name1,Name2);
    printf("Name_1 : %s\n",Name1);
    return 0;
}

char *My_strcat(char *Dest_Str, const char *Src_Str )
{
    unsigned char *Temp_Des = Dest_Str;
    unsigned char *Temp_Source = Src_Str;

    if ( (NULL==Dest_Str)||(NULL==Src_Str))
    {
        printf ("Error !! ==> Passed Null !! \n");
    }
    else
    {
        while(*Temp_Des)
        {
            Temp_Des++;
        }
        while(*Temp_Source)
        {
            *Temp_Des = *Temp_Source ;
            ++Temp_Des;
            ++Temp_Source;
        }

    }
    return Dest_Str ;
}

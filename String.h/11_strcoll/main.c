#include <stdio.h>
#include <stdlib.h>

int My_strcoll(const char *String1, const char *String2);

unsigned char Name1[30]="ahmed_algizawy";
unsigned char Name2[30]="AHMED_ALGIZAWY";

int main()
{
    signed int Return_State = 0 ;


    Return_State = My_strcoll(Name1,Name2);
    printf("Return State = %i \n",Return_State);

    printf ("==========================\n");

    if(Return_State > 0)
    {
        printf("str1 is less than str2");
    }
    else if(Return_State < 0)
    {
        printf("str2 is less than str1");
    }
    else
    {
        printf("str1 is equal to str2");
    }
    return 0;
}

int My_strcoll(const char *String1, const char *String2)
{
    unsigned char *Temp_Str1 = String1 ;
    unsigned char *Temp_Str2 = String2 ;
    signed   int   Check_Strcoll = 0 ;

    if ( (NULL==String1)||(NULL==String2))
    {
        printf ("Error !! ==> Passed Null !! \n");
    }
    else
    {
        while (*Temp_Str1)
        {
            if (*Temp_Str1 < *Temp_Str2)
            {
                Check_Strcoll = -1;
                break ;
            }
            else if (*Temp_Str2 < *Temp_Str1)
            {
                Check_Strcoll = 1;
                break ;
            }
            Temp_Str1++;
            Temp_Str2++;
        }
    }
    return Check_Strcoll ;
}

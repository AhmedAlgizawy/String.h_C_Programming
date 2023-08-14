#include <stdio.h>
#include <stdlib.h>

int My_strncmp(const char *String1, const char *String2 , unsigned int Length);

unsigned char Name1[30]="AHMED_algizawy";
unsigned char Name2[30]="AHMED_ALGIZAWY";


int main()
{
    signed int Return_State = 0 ;


    Return_State = My_strncmp(Name1,Name2,6);
    printf("Return State = %i \n",Return_State);

    if(Return_State > 0)
    {
        printf("str2 is less than str1\n");
    }
    else if(Return_State < 0)
    {
        printf("str1 is less than str2\n");
    }
    else
    {
        printf("str1 is equal to str2\n");
    }

    return 0;
}

int My_strncmp(const char *String1, const char *String2 , unsigned int Length)
{
    unsigned char *Temp_Str1 = String1;
    unsigned char *Temp_Str2 = String2;
    signed   int   Check_Cmp = 0 ;

    if ( (NULL==String1)||(NULL==String2))
    {
        printf ("Error !! ==> Passed Null !! \n");
    }
    else
    {
        while(Length--)
        {
            if ( *Temp_Str1< *Temp_Str2)
            {
                Check_Cmp = -1 ;
                break;
            }
            else if ( *Temp_Str1 > *Temp_Str2)
            {
                Check_Cmp = 1 ;
                break;
            }
            Temp_Str1++;
            Temp_Str2++;
        }
    }
    return Check_Cmp ;
}

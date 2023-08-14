#include <stdio.h>
#include <stdlib.h>
#include <string.h>
unsigned int My_strspn(const char *String1, const char *String2);

const char str1[] = "310_Ahmed_Algizawy";
const char str2[] = "013";

int main()
{
    unsigned int len;

    len = My_strspn (str1, str2);
    printf("Length of initial segment matching %d\n", len );

    return 0;
}

unsigned int My_strspn(const char *String1, const char *String2)
{
    unsigned char *Temp_Str1 = String1;
    unsigned char *Temp_Str2 = String2;
    unsigned int   Length    = 0 ;
    unsigned int   Check     = 0 ;
    unsigned int   Count     = 0 ;   //// To Move in String2

    if ( (NULL==String1)||(NULL==String2))
    {
        printf ("Error !! ==> Passed Null !! \n");
    }

    else
    {
        while (*Temp_Str1)
        {
            Count=0;  // To Move in String2

            while (*(Temp_Str2+Count))
            {
                if (*Temp_Str1 == *(Temp_Str2+Count))
                {
                    Check=1;
                    break;
                }
                Count+=1;
            }

            if(Check)
            {
                Length++;
                Check=0;
            }
            else
                break ;

            Temp_Str1++;
        }
    }
    return Length ;

}

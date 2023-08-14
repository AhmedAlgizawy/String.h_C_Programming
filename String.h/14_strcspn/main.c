#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int My_strcspn(const char *String1, const char *String2);

const char str1[] = "Ahmed_Algizawy4960910";
const char str2[] = "013";

int main()
{
    unsigned int Len = 0 ;

    Len = My_strcspn(str1, str2);
    printf("First matched character is at %i\n",Len+1);

    return 0;
}

unsigned int My_strcspn(const char *String1, const char *String2)
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
                break ;
            else
                Length++;

            Temp_Str1++;
        }
    }
    return Length ;
}

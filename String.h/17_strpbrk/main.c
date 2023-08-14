#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *My_strpbrk(const char *String_1, const char *String_2);

unsigned char Name[] = "Ahmed_4_Al-Gizawy_7";
unsigned char str [] = "47";

int main()
{

   unsigned char *Ret_Char = NULL;

   Ret_Char = My_strpbrk(Name, str);

   if(*Ret_Char) {
      printf("First matching character: %c\n", *Ret_Char);
   } else {
      printf("Character not found");
   }

    return 0;
}

char *My_strpbrk(const char *String_1, const char *String_2)
{
    unsigned char *Temp_Str1 = String_1 ;
    unsigned char *Temp_Str2 = String_2 ;
    unsigned int   Check     = 0 ;
    unsigned int   Count     = 0 ;   //// To Move in String2

    if ( (NULL==String_1)||(NULL==String_2))
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

            Temp_Str1++;
        }
    }
    return Temp_Str1;
}

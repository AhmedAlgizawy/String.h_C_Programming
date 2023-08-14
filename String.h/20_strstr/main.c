#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned char *My_strstr(const char *haystack_Str, const char *needle_Str);

const char str1[] = "Ahmed_El-Gizawy";
const char str2[] = "El-Gizawy";

int main()
{

    unsigned char *Ret_Add = NULL ;

    Ret_Add = My_strstr(str1, str2);
    printf("The substring is: %s\n", Ret_Add);

    return 0;
}

unsigned char *My_strstr(const char *haystack_Str, const char *needle_Str)
{
    unsigned char *Temp_Str1 = haystack_Str;
    unsigned char *Temp_Str2 = needle_Str;
    unsigned char *Ret_Add   = NULL;

    if ( (NULL==haystack_Str)||(NULL==needle_Str))
    {
        printf ("Error !! ==> Passed Null !! \n");
    }
    else
    {
        while(*Temp_Str1)
        {
            if (*Temp_Str1 == *Temp_Str2)
            {
                break;
            }
            Temp_Str1++;
        }
    }
    return Temp_Str1;
}

#include <stdio.h>
#include <stdlib.h>

char *My_strchr(const char *String, unsigned char Character);

unsigned char Name[30] = "Ahmed.AL-Gizawy";


int main()
{
    My_strchr(Name,'.');
    return 0;
}


char *My_strchr(const char *String, unsigned char Character)
{
    unsigned char *Temp_Str = String;
    if (String == NULL)
    {
        printf ("Error !! ==> Passed Null !! \n");
    }
    else
    {
        printf("String after |%c| is : ",Character );
        while (*Temp_Str)
        {

            if (*Temp_Str != Character)
            {
                Temp_Str++;
            }
            else
            {
                printf("%s \n",Temp_Str);
                break ;
            }
        }
    }
    return String ;
}

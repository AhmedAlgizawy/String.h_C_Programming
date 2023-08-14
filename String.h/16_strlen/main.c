#include <stdio.h>
#include <stdlib.h>
unsigned int My_strlen(const char *String);

unsigned char Name[30] = "Ahmed.AL-Gizawy";

int main()
{
    unsigned int len;

    len = My_strlen(Name);
    printf("Length of |%s| is |%i|\n", Name, len);

    return 0;
}

unsigned int My_strlen(const char *String)
{
    unsigned char *Temp_Str = String ;
    unsigned int   Length   = 0 ;
    if ((NULL==String))
    {
        printf ("Error !! ==> Passed Null !! \n");
    }

    else
    {
        while(*(Temp_Str++))
        {
            Length++;
        }
    }
    return Length;
}

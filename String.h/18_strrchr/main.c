#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *My_strrchr(const char *String, unsigned int Character);

unsigned char Name[] = "Ahmed.Yasser.Al-Gizawy";

int main()
{
    unsigned char *Return_Add = NULL ;
    unsigned char Search_Char = '.' ;

    Return_Add = My_strrchr(Name, Search_Char);

    if (Return_Add)
        printf("String after |%c| is - |%s|\n", Search_Char, Return_Add);
    else
        printf("Character not found");

    return 0;
}

char *My_strrchr(const char *String, unsigned int Character)
{
    unsigned char *Check_Repetition = NULL   ;
    unsigned char *Temp_Str         = String ;

    if ((NULL==String))
    {
        printf ("Error !! ==> Passed Null !! \n");
    }

    else
    {
        while(*(Temp_Str++))
        {
            if (*Temp_Str == Character)
               Check_Repetition = Temp_Str ;
        }
    }

    return Check_Repetition;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned char *My_strtok(char *String, const char *delimiter);

unsigned char str[30] = "Ahmed Yasser Algizawy";
const unsigned char Delim[2] = " ";

int main()
{


   unsigned char *Ret_String;

   /* get the first token */
   Ret_String = My_strtok(str,Delim);



   /* walk through other tokens */
    while( Ret_String != NULL )
    {
        printf("%s\n", Ret_String);
        Ret_String = My_strtok(NULL,Delim);
    }

    return 0;
}

unsigned char *My_strtok(char *String, const char *delimiter)
{
    static unsigned char *Temp_Str   = NULL ;
    unsigned char        *Temp_delim = delimiter;
    unsigned char        *Ret_Str    = String;
    unsigned int          Count      = 0 ;



    if ((NULL==delimiter))
    {
        printf ("Error !! ==> Passed Null !! \n");
    }

    else
    {
        /* check about Reinitialization or not for static */
        if (String == NULL)
        {
            Temp_Str++ ;
            Ret_Str = Temp_Str ;
        }

        else
            Temp_Str = String;

        /* check about end of string */
        if (*Temp_Str=='\0')
            Ret_Str=NULL;

        /*looping for breaks string */
        while(*Temp_Str)
        {
            if (*Temp_Str != *Temp_delim)
            {
                *(Ret_Str+Count)=*Temp_Str;
                Count++;
                Temp_Str++;
            }

            else
            {
                *(Ret_Str+Count)='\0';
                break;
            }
        }
    }

    return  Ret_Str;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int My_strxfrm(char *Dest_Str, const char *Src_Str, unsigned int  Length );
unsigned char src[30]="Ahmed Al-Gizawy_47";
unsigned char dest[30];


int main()
{
   unsigned int len;

   len = My_strxfrm(dest, src, 30);
   printf("Length of string |%s| is: |%d|\n", dest, len);

    return 0;
}

unsigned int My_strxfrm(char *Dest_Str, const char *Src_Str, unsigned int  Length )
{
    unsigned char *Temp_Dest = Dest_Str;
    unsigned char *Temp_Src  = Src_Str;
    unsigned int   Ret_Len   = 0 ;


    if ( (NULL==Dest_Str)||(NULL==Src_Str))
    {
        printf ("Error !! ==> Passed Null !! \n");
    }
    else
    {
        while(Length--)
        {
            if (*Temp_Src)
            {
                *Temp_Dest++ = *Temp_Src++ ;
                Ret_Len++;

            }
            else
            {
                *Temp_Dest='\0';
                break;
            }
        }
        *Temp_Dest='\0';
    }
    return Ret_Len;
}

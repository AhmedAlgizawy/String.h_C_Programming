#include <stdio.h>
#include <stdlib.h>

void *My_memmove(void *String1, const void *String2, unsigned int  Length );
unsigned char Name1[30] = "Ahmed AL-Gizawy";
unsigned char Name2[30];

int main()
{
    printf("Name_1 : %s\n",Name1);
    My_memmove(Name2,Name1,30);
    printf("Name_2 : %s\n",Name2);
    return 0;
}

void *My_memmove(void *String1, const void *String2, unsigned int  Length )
{
    unsigned char *Temp_Des = String1;
    unsigned char *Temp_Source = String2;

    if ( (NULL==String1)||(NULL==String2))
    {
        printf ("Error !! ==> Passed Null !! \n");
    }
    else
    {
        while(Length--)
        {
            *Temp_Des = *Temp_Source;
            Temp_Des++;
            Temp_Source++;
        }
    }
    return String1;
}

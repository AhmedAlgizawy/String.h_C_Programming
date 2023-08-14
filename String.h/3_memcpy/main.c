#include <stdio.h>
#include <stdlib.h>

unsigned char Name1[30]="Ahmed Al-Gizawy";
unsigned char Name2[30]="******************************";


void *My_memcpy(void *StartAdd, const unsigned char *SourceAdd, unsigned int Length);

int main()
{
    printf("%s \n\n",Name1);
    printf("%s \n\n",Name2);
    My_memcpy(Name1+15,NULL,4);
    printf("%s \n\n",Name1);
    return 0;
}
void *My_memcpy(void *StartAdd, const unsigned char *SourceAdd, unsigned int Length)
{
    unsigned char *Temp=StartAdd;
    unsigned char *Temp_Source=SourceAdd;

    if ( (NULL==StartAdd)||(NULL==SourceAdd))
    {
        printf ("Error !! ==> Passed Null !! \n");
    }
    else
    {
        while(Length--)
        {
            *Temp=*Temp_Source;
            Temp++;
            Temp_Source++;
        }
    }
    return StartAdd;
}

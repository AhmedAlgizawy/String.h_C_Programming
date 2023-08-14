#include <stdio.h>
#include <stdlib.h>
unsigned char Name1[30]="Ahmed Al-Gizawy";
unsigned char *ptr  = Name1 ;
void *My_memchr(const void *String, unsigned char c, unsigned int Length );

int main()
{
    My_memchr(Name1,' ',30);
    return 0;
}

void *My_memchr(const void *String, unsigned char  Character, unsigned int Length )
{
    unsigned char *Temp = String ;
    unsigned int Count = 0 ;

    printf("String after |%c| is : ",Character );
    while (Length--)
    {
        if (*Temp != Character)
        {
           Temp++;
        }
        else
        {
            while(Length--)
            {
                printf("%c",*Temp);
                Temp++;
            }
            printf("\n");
            break;
        }
    }
}

#include <stdio.h>
#include <stdlib.h>

unsigned char Name1[30]="Ahmed Al-Gizawy";
unsigned char Name2[30]="Ahmed Al-Gizawy";

unsigned char Num1[3]={4,2,3};
unsigned char Num2[3]={5,2,3};

int My_memcmp(const void *FirstAdd, const void *SecondAdd, unsigned int Length);

int main()
{
    unsigned int CMP = 0 ;


    CMP = My_memcmp(Num1,Num2,3);
    printf("Return State = %i \n",CMP);

    if(CMP ==1 )
    {
        printf("str2 is less than str1\n");
    }
    else if(CMP == -1)
    {
        printf("str1 is less than str2\n");
    }
    else
    {
        printf("str1 is equal to str2\n");
    }

    return 0;
}

int My_memcmp(const void *FirstAdd, const void *SecondAdd, unsigned int Length)
{
    int Return_State = 0 ;
    unsigned int Check_cmp  = 0 ;
    unsigned char *Temp1=FirstAdd;
    unsigned char *Temp2=SecondAdd;

    if ( (NULL==FirstAdd)||(NULL==SecondAdd))
    {
        printf ("Error !! ==> Passed Null !! \n");
    }
    else
    {
        while(Length--)
        {
            if ( *Temp1 != *Temp2)
            {
                if ( *Temp1 < *Temp2)
                    Return_State = -1 ;
                else if ( *Temp1 > *Temp2)
                    Return_State = 1 ;

                break ;
            }
            else
            {
                Temp1++;
                Temp2++;
            }
        }
    }

    return Return_State ;
}

#include <stdio.h>
#include <string.h>
int main()
{
    long long int year;
    while ((scanf("%lld", &year) != EOF))
    {
        int hulu = 0, leap = 0, bulu = 0;
        if (year % 15 == 0)
        {
            hulu = 1;
        }

        if (((year % 400 == 0) && ((year % 100 != 0)) || (year % 4) == 0))
        {

            {
                leap = 1;
                if (year % 55 == 0)
                {
                    bulu = 1;
                }
            }
        }
        if (leap == 1)
        {
            printf("This is leap year.\n");
        }
        if (hulu == 1)
        {
            printf("This is huluculu festival year.\n");
        }
        if (bulu == 1)
        {
            printf("This is bulukulu festival year\n");
        }
        else if (leap == 0 && hulu == 0 && bulu == 0)
        {
            printf("This is an ordinary year\n");
        }
        
            

        printf("\n");
    }

    return 0;
}
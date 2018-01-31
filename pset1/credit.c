#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long long ccn;                      //credit card number
    long long n;                        //1st step down every other digit
    long long n2;                       //2nd step down
    long long i1;                       //1st single digit math
    long long i2;                       //2nd single digit math
    int c1;                             //1st counter


    ccn = get_long_long("Number: ");

    n = ccn / 10;

    while (n)
    {
        i1 = n;
        i1 = i1 % 10;                     //get single char


        if (i1 > 5)
        {
            i1 = i1 * 2;
            i1 = i1 % 10 + 1;
        }

        else if (i1 == 5)
        {
            i1 = 1;
        }

        else
        {
            i1 = i1 * 2;
        }

        c1 = c1 + i1;
        n /= 100;

    }

    n2 = ccn;
    while (n2)
    {
        i2 = n2;
        i2 = n2 % 10;
        c1 = c1 + i2;
        n2 = n2 / 100;
    }

    if (c1 % 10 == 0)
    {
        if (ccn / 10000000000000 == 34  ||
            ccn / 10000000000000 == 37)
        {
            printf("AMEX\n");
        }

        else if (ccn / 100000000000000 == 51 ||
                 ccn / 100000000000000 == 52 ||
                 ccn / 100000000000000 == 53 ||
                 ccn / 100000000000000 == 54 ||
                 ccn / 100000000000000 == 55)
        {
            printf("MASTERCARD\n");
        }

        else if (ccn / 1000000000000 == 4  ||
                 ccn / 1000000000000000 == 4)
        {
            printf("VISA\n");
        }

        else
        {
            printf("INVALID\n");
        }

    }
    else
    {
        printf("INVALID\n");
    }


}




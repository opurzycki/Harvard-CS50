#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // get height from user

    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 0 || n > 23);

    for (int i = 0; i < n; i++)
    {

        //print spaces for left pyramid

        for (int j = i; n - (j + 1) > 0; j++)
        {
            printf (" ");
        }

        //print #'s for left pyramid

        for (int k = n - i; k < n + 1; k++)
        {
            printf("#");
        }

        //print gap between pyramids

        printf("  ");

        //print #'s for right pyramid

        for (int l = n - i; l < n + 1; l++)
        {
            printf("#");
        }

        //print new line

        printf("\n");

    }
}
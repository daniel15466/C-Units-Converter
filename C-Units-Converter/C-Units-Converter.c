// C-Units-Converter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Choose unit to convert\n");
    printf("1:Length\n");
    printf("2:Mass\n");
    printf("3:Temperature\n");
    printf("4:Currency\n");
    printf("5:Exit\n---------\n");
    char c = getch();

    switch (c)
    {

    default:
        break;
    case '1':
    {
        printf("Choose unit to convert\n");
        printf("1:km\n");
        printf("2:m\n");
        printf("3:cm\n");
        printf("4:dm\n");
        printf("5:mm\n");
        printf("5:mile\n");
        printf("6:yard\n");
        printf("7:foot\n");
        printf("8:inch\n");
        printf("9:exit\n---------\n");
        c = getch();
        switch (c)
        case '1':
            {
                printf("Choose output unit\n");
                printf("1:km\n");
                printf("2:m\n");
                printf("3:cm\n");
                printf("4:dm\n");
                printf("5:mm\n");
                printf("exit\n---------\n");
                break;
            }
        case '2':
        {
            break;
        }
        case '3':
        {
            break;
        }
        case '4':
        {
            break;
        }
        case '5':
        {
            break;
        }
        case '6':
        {
            break;
        }
        case '7':
        {
            break;
        }
        case '8':
        {
            break;
        }
        case '9':
        {
            break;
        }

    }
    }
        case '2':
    {


        break;

    }
    }


    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

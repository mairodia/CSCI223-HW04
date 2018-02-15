// ============================================================================
// File: rot13.c (Spring 2018)
// ============================================================================
// Programmer: Jennifer King
// Date: 2/14/2018
// Professor: Scott Edwards
// Class: CSCI 223F | TR 4:30PM
// Description:
//              This file rotates the alphabet 13 places.
// ============================================================================

#include <stdio.h>

int main(void)
{
    char inChar;

    while(EOF != (inChar = getchar()))
    {
        if((inChar >= 65 && inChar <= 77) || (inChar >= 97 && inChar <= 109))
        {
            inChar = inChar + 13;
            printf("%c", inChar);
        }
        else if((inChar >= 78 && inChar <= 90) || (inChar >= 110 && inChar <= 122))
        {
            inChar = inChar - 13;
            printf("%c", inChar);
        }
        else
        {
            printf("%c", inChar);
        }
    }

    return 0;
}

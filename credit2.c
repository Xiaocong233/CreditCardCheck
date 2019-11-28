#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long cardNumber;
    cardNumber = get_long("Number: ");
    long CardNumber = cardNumber;
    if ((cardNumber >= 1000000000000 && cardNumber < 10000000000000000)) //check if the card is even eligible to be in the range of a 13 digit to 16 digit credit card type
    {
        int digit1 = cardNumber % 10;
        cardNumber /= 10;
        int digit2 = cardNumber % 10;
        int Digit2;
        if (digit2 * 2 >= 10)
        {
            Digit2 = (1 + (digit2 * 2) % 10);
        }
        else
        {
            Digit2 = digit2 * 2;
        }
        cardNumber /= 10;
        int digit3 = cardNumber % 10;
        cardNumber /= 10;
        int digit4 = cardNumber % 10;
        int Digit4;
        if (digit4 * 2 >= 10)
        {
            Digit4 = (1 + (digit4 * 2) % 10);
        }
        else
        {
            Digit4 = digit4 * 2;
        }
        cardNumber /= 10;
        int digit5 = cardNumber % 10;
        cardNumber /= 10;
        int digit6 = cardNumber % 10;
        int Digit6;
        if (digit6 * 2 >= 10)
        {
            Digit6 = (1 + (digit6 * 2) % 10);
        }
        else
        {
            Digit6 = digit6 * 2;
        }
        cardNumber /= 10;
        int digit7 = cardNumber % 10;
        cardNumber /= 10;
        int digit8 = cardNumber % 10;
        int Digit8;
        if (digit8 * 2 >= 10)
        {
            Digit8 = (1 + (digit8 * 2) % 10);
        }
        else
        {
            Digit8 = digit8 * 2;
        }
        cardNumber /= 10;
        int digit9 = cardNumber % 10;
        cardNumber /= 10;
        int digit10 = cardNumber % 10;
        int Digit10;
        if (digit10 * 2 >= 10)
        {
            Digit10 = (1 + (digit10 * 2) % 10);
        }
        else
        {
            Digit10 = digit10 * 2;
        }
        cardNumber /= 10;
        int digit11 = cardNumber % 10;
        cardNumber /= 10;
        int digit12 = cardNumber % 10;
        int Digit12;
        if (digit12 * 2 >= 10)
        {
            Digit12 = (1 + (digit12 * 2) % 10);
        }
        else
        {
            Digit12 = digit12 * 2;
        }
        cardNumber /= 10;
        int digit13 = cardNumber % 10;
        cardNumber /= 10;
        int digit14 = cardNumber % 10;
        int Digit14;
        if (digit14 * 2 >= 10)
        {
            Digit14 = (1 + (digit14 * 2) % 10);
        }
        else
        {
            Digit14 = digit14 * 2;
        }
        cardNumber /= 10;
        int digit15 = cardNumber % 10;
        cardNumber /= 10;
        int digit16 = cardNumber % 10;
        int Digit16;
        if (digit16 * 2 >= 10)
        {
            Digit16 = (1 + (digit16 * 2) % 10);
        }
        else
        {
            Digit16 = digit16 * 2;
        }
        int sum = (Digit2 + Digit4 + Digit6 + Digit8 + Digit10 + Digit12);
        int sum2 = (Digit2 + Digit4 + Digit6 + Digit8 + Digit10 + Digit12 + Digit14);
        int sum3 = (Digit2 + Digit4 + Digit6 + Digit8 + Digit10 + Digit12 + Digit14 + Digit16);
        if ((CardNumber >= 1000000000000) && (CardNumber < 10000000000000) && (((sum + (digit1 + digit3 + digit5 + digit7 + digit9 + digit11 + digit13)) % 10) == 0) && (digit13 == 4))//check if the card is a visa
        {
            printf("VISA\n");
        }
        else if ((CardNumber >= 100000000000000) && (CardNumber < 1000000000000000) && (((sum2 + (digit1 + digit3 + digit5 + digit7 + digit9 + digit11 + digit13 + digit15)) % 10) == 0) && (digit15 == 3) && (digit14 == 4 || digit14 == 7))//check if the card is a American Express
        {
            printf("AMEX\n");
        }
        else if (CardNumber >= 1000000000000000 && CardNumber < 10000000000000000)//check if the card is a MasterCard or perhaps a 16 digit Visa
        {
            if ((((sum3 + (digit1 + digit3 + digit5 + digit7 + digit9 + digit11 + digit13 + digit15)) % 10) == 0) && (digit16 == 5) && (digit15 == 1 || digit15 == 2 || digit15 == 3 || digit15 == 4 || digit15 == 5))
            {
                printf("MASTERCARD\n");
            }
            else if (((sum3 + (digit1 + digit3 + digit5 + digit7 + digit9 + digit11 + digit13 + digit15)) % 10) == 0 && (digit16 == 4))
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
    else
    {
        printf("INVALID\n");
    }
}

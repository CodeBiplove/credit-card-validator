#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long card;

    // Input a card number
    do
    {
        card = get_long("Number: ");
    }
    while (card <= 0); // Ensure the card number is positive

    int length = 0;
    long tempcard = card;

    // Calculate the length of the card number
    do
    {
        tempcard /= 10;
        length++;
    }
    while (tempcard > 0);

    // Check if the length is valid
    if (length != 13 && length != 15 && length != 16)
    {
        printf("INVALID\n");
        return 0;
    }

    int sum1 = 0, sum2 = 0, total = 0;
    tempcard = card;

    // Luhn's algorithm: Calculate the checksum
    do
    {
        // Add the digit in odd positions (from right to left)
        int mod1 = tempcard % 10;
        sum1 += mod1;
        tempcard /= 10;

        // Add the digit in even positions, after doubling it
        int mod2 = tempcard % 10;
        mod2 *= 2;

        // Add the digits of the doubled number (if necessary, split into two digits)
        sum2 += (mod2 / 10) + (mod2 % 10);
        tempcard /= 10;
    }
    while (tempcard > 0);

    // Total checksum
    total = sum1 + sum2;

    // Check if the card is valid based on the Luhn's algorithm
    if (total % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // Check the starting digits to determine the card type
    long start = card;

    do
    {
        start /= 10;
    }
    while (start >= 100); // Get the first two digits

    // Identify card type based on length and starting digits
    if ((length == 13 || length == 16) && start / 10 == 4)
    {
        printf("VISA\n");
    }
    else if (length == 15 && (start == 34 || start == 37))
    {
        printf("AMEX\n");
    }
    else if (length == 16 && (start >= 51 && start <= 55))
    {
        printf("MASTERCARD\n");
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}

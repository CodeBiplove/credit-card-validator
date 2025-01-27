
# Credit Card Validator

A program that validates a credit card number using the Luhn algorithm and identifies the card type (VISA, AMEX, or MASTERCARD).

## Overview

This project implements a credit card validation program that checks:
1. If the card number is of valid length (13, 15, or 16 digits).
2. If the card number passes the Luhn algorithm for validation.
3. The card type based on the starting digits (VISA, AMEX, or MASTERCARD).

If the card number is valid, the program outputs the card type. Otherwise, it prints "INVALID".

## Features

- **Input**: Accepts a credit card number from the user.
- **Length Validation**: Validates if the card number length is 13, 15, or 16 digits.
- **Luhn's Algorithm**: Validates the card number using the Luhn algorithm.
- **Card Type Detection**: Detects if the card is a VISA, AMEX, or MASTERCARD based on its starting digits.
- **Output**: Prints the card type (VISA, AMEX, or MASTERCARD) or "INVALID" if the card number is invalid.

## Luhn Algorithm

The Luhn algorithm is used to validate credit card numbers. The steps are:
1. Starting from the rightmost digit, double every second digit.
2. If doubling a digit results in a number greater than 9, subtract 9 from that number.
3. Sum all the digits, including the ones that weren't doubled.
4. If the total sum is divisible by 10, the card number is valid.

## How It Works

1. **User Input**: The user is prompted to enter a credit card number.
2. **Length Check**: The program checks if the number of digits in the card is either 13, 15, or 16.
3. **Luhn's Algorithm**: The program calculates a checksum based on the Luhn algorithm.
4. **Card Type Identification**: Based on the starting digits and the length, the program identifies whether the card is VISA, AMEX, or MASTERCARD.
5. **Output**: If the card is valid, the program prints the card type; otherwise, it prints "INVALID".

## How to Use

### 1. Clone the Repository

Clone this repository to your local machine:

```bash
git clone https://github.com/your-username/credit-card-validator.git
```

### 2. Navigate to the Project Directory

```bash
cd credit-card-validator
```

### 3. Compile the Code

To compile the code, use a C compiler such as `gcc`:

```bash
gcc -o credit_card_validator credit.c -lcs50
```

### 4. Run the Program

Run the compiled program:

```bash
./credit_card_validator
```

You will be prompted to enter a credit card number. The program will then display the card type or "INVALID" if the card number is not valid.

## Example

### Input:
```
Number: 4111111111111111
```

### Output:
```
VISA
```


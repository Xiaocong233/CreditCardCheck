## Description
This is my program wrote for CS50x Pset1 on edX in C. It checks an user input of a credit card number is valid or not and further evaluates it to the card's corresponding company or lack thereof.
The program incorporated mathematical calculation based on Luhn’s Algorithm by Hans Peter Luhn of IBM.
Only 4 outputs are available: VISA, AMEX(American Express), MASTERCARD, and INVALID.
The code could definitely be condensed more efficiently using array, but currently I am not confident in the usage of it. I will get it eventually!

## Usage
```
$ make credit
$ ./credit
Number: [Input a credit card number from American Express, MasterCard(first digit being 5), Visa(13 digit or 16 digit)]
```

## What I have learned
* Applying Luhn's Algorithm in C to determine the validity of selected credit card numbers.

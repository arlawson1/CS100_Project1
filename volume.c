#include <stdio.h>

/*This project code was written by Andrew Lawson
This program's purpose is to take in a user input for eight integers
These eight integers are dollar bills and coins
The program will then convert the user input to a total volume of the bills and coins
Then the program will also convert the input to a total value for the money in bills and cents
Once the program has converted the input into 4 new values, it will output them in 3 lines
*/

int main(void)
{

  int twenties;
  int tens;
  int fives;
  int ones;
  int quarters;
  int dimes;
  int nickels;
  int pennies;

  double totalVolBills;
  int dollars;
  double totalVolCoins;
  int cents;

  double standardVolBill = 1.1292197983; // V cm = l inches * W inches * H inches * 2.54


  printf("Enter the number of $20s you have: \n");
  scanf("%d", &twenties);

  printf("Now the number of $10s\n");
  scanf("%d", &tens);

  printf("And now the $5s\n");
  scanf("%d", &fives);

  printf("How many $1s?\n");
  scanf("%d", &ones);

  printf("Let's do coins now. How many quarters do you have?\n");
  scanf("%d", &quarters);

  printf("Next is the dimes\n");
  scanf("%d", &dimes);

  printf("Now the nickels\n");
  scanf("%d", &nickels);

  printf("And finally, the pennies\n");
  scanf("%d", &pennies);

  totalVolBills = ((twenties + tens + fives + ones) * standardVolBill );

  dollars = (twenties * 20) + (tens * 10) + (fives * 5) + ones;

  totalVolCoins = ((quarters * 0.8089266739) + (dimes * 0.3401061262) + (nickels * 0.688978172) + (pennies * 0.4332345287));

  cents = ((quarters * 25) + (dimes * 10) + (nickels * 5) + pennies);

  printf("You have %d dollars in bills and %d cents in change\n", dollars, cents);
  printf("The volume of your bills is %lf cubic centimeters\n", totalVolBills);
  printf("The volume of your coins is %lf cubic centimeters\n", totalVolCoins);



  return 0;
}

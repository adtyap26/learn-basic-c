#include <stdio.h>


int main()
{
  // Declaring and initializing an interger array
  int numbers[5] = {10, 20, 30, 40, 50};

  // Declaring a character array (string)
  char name[20] = "John Doe";
  // Declaring a float array without initialization
  float prices[3];

  // Assigning values to the float array
  prices[0] = 9.99;
  prices[1] = 19.99;
  prices[2] = 29.99;

  // Printing elements of the integer array
  printf("Numbers:\n");
  for(int i = 0; i < 5; i++) {
      printf("%d ", numbers[i]);
  }
  printf("\n\n");

  // Printing the string
  printf("Name: %s\n\n", name);

  // Printing elements of the float array
  printf("Prices:\n");
  for(int i = 0; i < 3; i++) {
      printf("$%.2f ", prices[i]);
  }
  printf("\n");

  return 0;
}

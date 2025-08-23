#include <stdio.h>

int main(){

  //Total to hold result of number/letter count
  int total = 0;
  //Array to hold integers relative to lower case letters
  int numbC[27] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 
                    21, 22, 23, 24, 25, 26};
  //Array to hold lower case letters relative to integer value
  char lowerC[27] = {'\0', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 
                    't', 'u', 'v', 'w', 'x', 'y', 'z'};
  //Array to hold comparison string
  char string[11];

  //Informing user as well as getting input string
  printf("This program adds lowercase letters from a string by 1-26 value\n");
  printf("Only accepts up to 10 lowercase chars\n");
  printf("Uppercase letters/other chars are not counted\n");
  printf("---------------------------------------------------\n");
  printf("Reference: a-1, b-2, c-3, d-4, e-5, f-6, g-7\n");
  printf("Continued: h-8, i-9, j-10, k-11, l-12, m-13\n");
  printf("Continued: n-14, o-15, p-16, q-17, r-18, s-19\n");
  printf("Continued: t-20, u-21, v-22, w-23, x-24, y-25, z-26\n");
  printf("---------------------------------------------------\n");
  printf("Enter String: ");
  scanf("%10s", string);
  
  printf("\n");
  printf("Calculating\n");
  printf("-----------\n");
  
  //Index for string check
  int i = 0;
  //Loop through string
  while (string[i] != '\n' && string[i] != '\0') {
    //When string char matches a lowercase char, add to total based on numeric value of char
    for (int j = 1; j <= 26; j++) { 
      if (string[i] == lowerC[j]) {
        printf("Adding: %d + Letter %c: %d\n", total, string[i], numbC[j]);
        total += numbC[j];
        break; //End search after find
      }
    }
  i++;  //increment after match and addition
  }

  //Displaying results
  printf("\n");
  printf("Results:\n");
  printf("--------\n");
  printf("Read String: %s\n", string);
  printf("Total: %d\n", total);

  return 0;
}

#include <stdio.h>

int main(){

  //Total to hold result of number/letter count
  int total = 0;
  //Array to hold integers relative to lower case letters
  int numbC[27] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 
                    21, 22, 23, 24, 25, 26};
  //Arry to hold lower case letters relative to integer value
  char lowerC[27] = {'\0', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 
                    't', 'u', 'v', 'w', 'x', 'y', 'z'};
  //Array to hold comparison string
  char string[11];

  //Getting string from user
  printf("String limited to 10 characters\n");
  printf("Characters past 10 and capital letters are not read\n");
  printf("---------------------------------------------------\n");
  printf("Enter String: ");
  scanf("%10s", string);

  //Index for string check
  int i = 0;
  //Loop through string
  while (string[i] != '\n' && string[i] != '\0') {
    //When string char matches a lowercase char, add to total using numeric value of letter
    for (int j = 1; j <= 26; j++) { 
      if (string[i] == lowerC[j]) {
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

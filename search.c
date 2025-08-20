#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//Function to match input search word with strings
void match(char string1[], char string2[][81], int ind1);

int main(){

  int ind1 = 0;       //Index of main function
  int totalRows = 0;  //Total rows for 2D array
  char sWord[20];     //Char array for search word
  char theFile[20];   //Char array for read file

  printf("Enter total line count and name of file\n");
  printf("---------------------------------------\n");
  //Getting total row count of file
  printf("Line Count: ");
  scanf("%d", &totalRows);

  //Avoiding invalid input to index
  if (totalRows <= 0) {
      printf("Invalid number of lines.\n");
      return 1;
  }

  //2D array for storing lines from file
  char lines[totalRows][81];

  //Getting file to read from user
  printf("File name: ");
  scanf("%s", theFile);
  printf("\n");

  //Getting search term from user
  printf("Enter Search Word\n");
  printf("-----------------\n");
  printf("Word: ");
  scanf("%s", sWord);
  printf("-----------------\n");

  //Setting the file stream
  FILE *f = fopen(theFile, "r");

  //While ind1 is less than the total row count get strings from file
   while (ind1 < totalRows && fgets(lines[ind1], sizeof(lines[ind1]), f)) {
        ++ind1;
    }

  //Matching search word with strings
  match(sWord, lines, ind1);

  //Closing the file
  fclose(f);

  return 0;
}

void match(char string1[], char string2[][81], int ind1){
    for(int ind2 = 0; ind2 < ind1; ++ind2){
        if(strstr(string2[ind2], string1)){ 
            // substring found
            printf("Line #%d: %s", ind2 + 1, string2[ind2]);
        } else {
            // substring not found
            printf("Line #%d: No Match!\n", ind2 + 1);
        }
    }
}

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//Function to match input search word with strings
void match(char string1[], char string2[][81], int index);

int main(){

  int i = 0;          //Index position
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
  //Declaring here because totalRows needs to be set beforehand
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

  //While "i" is less than the input index get strings from file
   while (i < totalRows && fgets(lines[i], sizeof(lines[i]), f)) {
        ++i;
    }

  //Matching search word with strings
  match(sWord, lines, i);

  //Closing the file
  fclose(f);

  return 0;
}

void match(char string1[], char string2[][81], int index){

  int i = 0; //Index Position

  //Looping through total lines in file
  for(i = 0; i < index; ++i){
    bool isFound = false;
    if(strstr(string2[i], string1)) //If search word matches string, display results
      {
        printf("A Match!\n");
        printf("Line #%d: %s\n", i + 1, string2[i]);
        isFound = true;
      } 
    if(! isFound) //If search word does not match, display results
      {
        printf("Line #%d: No Match!\n\n", i + 1);
      }
  }
}

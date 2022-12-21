//Girilen kelimenin palindrom olup olmadığını bulma
#include <stdio.h>
#include <string.h>
int main(){
    
  char word1[50], word2[50];

  printf("Enter a word:\n");
  scanf("%[^\n]s",word1);

  strcpy(word2, word1);  // Copying the input string
  strrev(word2);  // Reverse the string

  if (strcmp(word1, word2) == 0){
      printf("%s is palindrome.\n",word1);
  }
    
  else{
      printf("%s is not palindrome.\n",word1);
  }
    

  return 0;
}

//output:
//Enter a word:
//kabak
//kabak is palindrome.

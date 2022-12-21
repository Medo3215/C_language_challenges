//\0 kullanarak cümle uzunluğu bulma

#include <stdio.h>
int main()
{
 
    char str[100],i;
    printf("Enter sentence:");
    scanf("%[^\n]s",str);
/*The null character is expressed as "\0". In the C programming language, we understand the end of words 
with null characters.Terminating any string with a null character is called 'null-terminated'.*/
    for(i=0; str[i]!='\0'; ++i);
       printf("\nLength of the entered sentence:%d",i);
 
    return 0;
}

//output:
//Enter sentence:guller kalyoncu
//
//Length of the entered sentence:15


//strlen kullanarak cümle uzunluğu bulma
#include <stdio.h>
#include <string.h>
int main()
{
  char sentence[600];
  int length;

  printf("Enter sentence:");
  scanf("%[^\n]s",sentence);

  length = strlen(sentence);
  
  if(strlen(sentence)<=600){
      printf("Length of the entered sentence:%d", length);
	}
	else{
		printf("Your sentence is very long!");
    }


  return 0;
}

//output:
//Enter sentence:guller kalyoncu
//Length of the entered sentence:15

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void checkEmbedded(char *[] , char *);
int main()
{
  char str[3][10] = {"Boy","Bay","Bram"}; char temp[];
  if(strcmp(str[0],str[1])>0)
  {
    temp = str[1];
    str[1] = str[0];
    str[0] = temp;

  }

  //char t = (str + 0) ; (str + 0) = *(str[0]+4) ; *(str[0]+4) = t ;

  /*char t = str[0];
  str[0] = str[1];
  str[1] = t;*/
  printf("%s %s",str[0],str[1]);
  //checkEmbedded(str,"How");
  return 0;
}
/*void checkEmbedded(char *str[] , char *p)
{
  int i, j;

  for (i = 0; i <= 2; i++)
  {
    for (j = 0; j < strlen(str[i]); j++)
      printf("%c",str[i][j]);
    printf("\n");
  }
  return;
}*/

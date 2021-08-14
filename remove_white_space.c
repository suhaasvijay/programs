#include<stdio.h>
#include<string.h>

int main()
{
  char str[1000];
  int i;
  int count=0;
  printf("enter the sentance : ");
  gets(str);

  for(i=0;i<strlen(str);i++)
   
    if(str[i] == ' ')
      count++;
  printf("Number of white space in the sentance : %d\n",count);

  for(i=0;i<strlen(str);i++)
   
    if(str[i] != ' ')
      printf("%c",str[i]);
 
}

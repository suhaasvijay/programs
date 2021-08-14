#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
  char str[100],temp;
  int i,j=0;

  printf("\nEnter the string :");
  gets(str);

  for(i=0;str[i] !='\0';i++)
    if(str[i] >= 'A' && str[i]<='Z')
      str[i] += 32;

  printf("Lower case of the string : %s",str);

  i=0;
  j=strlen(str)-1;

  while(i<j){
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;
    j--;
  }

  printf("\nReverse string is :%s",str);
  return(0);
}

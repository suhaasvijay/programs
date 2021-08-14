#include <stdio.h>
#include<string.h>

int main(void) 
{
  char str1[100],str2[100];
  int i,j,a;
  char temp;
  printf("Enter the string 1 : ");
  scanf("%s",str1);
  printf("Enter the string 2 : ");
  scanf("%s",str2);
  int n =strlen(str1);

  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
      if(str1[i]>str1[j]){
        temp=str1[i];
        str1[i]=str1[j];
        str1[j]=temp;
      }
    }
  }

  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
      if(str2[i]>str2[j]){
        temp=str2[i];
        str2[i]=str2[j];
        str2[j]=temp;
      }
    }
  }

  a = strcmp(str1,str2);
  if(a==0)  
  {
    printf("the given two strings are anagrams\n");
  }
  else
  {
    printf("the given strings are not anagrams\n"); 
  }
}

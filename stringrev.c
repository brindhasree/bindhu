#include<stdio.h>
#include<string.h>
 
int main() {
   char str[20], temp;
   int i, j = 0;
 
  
   gets(str);
   
 
   i = 0;
   j = strlen(str) - 1;
 
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
 
   printf("\n%s", str);
   return (0);
}

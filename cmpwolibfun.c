int main() {
   char str1[30], str2[30];
   int i;
 
   gets(str1);
   gets(str2);
 
   i = 0;
   while (str1[i] == str2[i] && str1[i] != '\0')
      i++;
   if (str1[i] > str2[i])
      printf("str1 > str2");
   else if (str1[i] < str2[i])
      printf("same");
   else
      printf("notsame");
 
   return (0);
}

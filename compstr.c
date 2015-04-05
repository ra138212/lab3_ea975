/*
programa comparador de strings
*/

#include <stdio.h>
#include <string.h>

int main()
{
   char a[100], b[100];
   
   printf("Enter the first string\n");	/*armazenamento das entradas*/
   fgets(a,100,stdin);
   /*gets(a);*/ 
   printf("Enter the second string\n");
   fgets(b,100,stdin);
   /*gets(b);*/
  
   if (strcmp(a,b) == 0)	/*comparacao das duas strings*/
      printf("Entered strings are equal.\n");
   else
      printf("Entered strings are not equal.\n");
 
   return 0;
}

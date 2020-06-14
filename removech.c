#include <stdio.h>
void main()
{
    char text[200],str[20], new[200];
    int i=0, j=0, found=0, k, n=0, copy=0;
    printf("Enter the main text: ");
    gets(text);
    printf("Enter the string to be deleted: ");
    gets(str);
   while(text[i] !='\0')
   {
        j=0, found= 0, k=i;
        while (text[k]==str [j] && str [j]!='\0')
        {
            k++;
            j++;
        }
        if (str [j]=='\0')
        {
            copy=k;
        }
        new[n] = text[copy];
        i++;
        copy++;
        n++;
   }
    str[n]='\0';
    printf("\n The new string is: ");
    puts(new);
}

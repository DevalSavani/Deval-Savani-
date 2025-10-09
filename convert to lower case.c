#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
    char str[100];
    printf("enter the string:");
    gets(str)
    for(int i=0; str[i] !='\0' i++){
        str[i] = tolower(str[i]);

    }
        printf("the lower case = %s\n", str);
        return 0;




}


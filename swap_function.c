#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void swap(char *string1[30],char *string2[30]){

    string1 = string1 + (string1-string2);
    string2 = string1 - (string1-string2)/2;
    string1 = string1 - (string1-string2)*2;
    printf("YOUR NEW WORD IS %s %s",string1,string2);





}




int main()
{
    char x[30],y[30];
    printf("ENTER THE FIRST WORD: ");
    scanf("%s",&x),
    printf("ENTER THE SECOND WORD: ");
    scanf("%s",&y);
    swap(x,y);

    return 0;
}

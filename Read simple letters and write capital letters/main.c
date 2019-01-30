#include <stdio.h>
#include <stdlib.h>

int main()
{
    char CapiLetter, SimLetter;
    int a,b;

    printf("Enter Simple Letter:");
    scanf("%c",&SimLetter);

    a=(int)SimLetter;
    b=a-32;

    CapiLetter=(char)b;

    printf("Capital letter of %c is %c",SimLetter,CapiLetter);

    return 0;
}

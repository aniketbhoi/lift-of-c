#include <stdio.h>
int main()
{
    char alphabet;
    printf("enter an alphabet");
    scanf("%c",&alphabet);
    switch(alphabet)
    {
     case 'a':printf{"vowel"};
     break;
     case 'e':printf{"vowel"};
     break;
     case 'i':printf{"vowel"};
     break;
     case 'o':printf{"vowel"};
     break;
     case 'u':printf{"vowel"};
     break;
     default:{"consonant"};
    }
     return 0;

}

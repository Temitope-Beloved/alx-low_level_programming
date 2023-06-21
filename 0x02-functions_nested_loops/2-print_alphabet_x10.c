#include "main."h
void print_alphabet_x10(void);

{
char ch;

int cool =0;
 while (cool < 10)
{
    ch ='a';
    while(ch <= 'z')
    {
        putchar(ch);
        ch++;
    }
    putchar('\n');
    cool++;
}
}

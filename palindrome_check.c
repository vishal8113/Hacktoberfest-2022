#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

char stack[100];
int top = -1;

char palind[100];
int topp = -1;

void pushp(char x)
{
    palind[++topp] = x;
}

char popp()
{
    if (topp == -1)
        return -1;
    else
        return palind[topp--];
}
int main()
{
    {
        /////////1
        int k = 0;
        char x;
        printf("\n\nEnter the size of string : ");
        scanf("%d", &k);
        printf("Enter string\n");
        for (int i = 0; i <= k; i++)
        {
            scanf("%c", &x);
            pushp(x);
        }
        char m[k];
        for (int i = 0; i <= k; i++)
        {
            m[i] = popp();
            printf("%c", palind[i]);
        }
        printf("\n");
        int count = 0;
        for (int i = 0; i < k; i++)
        {
            if (palind[i+1] != m[i])
            {
                // printf("[%c](%c) ",palind[i], m[i]);
                count++;
            }
            
        }
        if (count == 0)
        {
            printf("palindrome\n");
        }
        else
        {
            printf("not palindrome\n");
        }
    }
}
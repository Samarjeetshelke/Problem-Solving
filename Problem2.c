
PROBLEM:-
  Task

You have to print the character, , in the first line. Then print  in next line. In the last line print the sentence, .

Input Format

First, take a character,  as input.
Then take the string,  as input.
Lastly, take the sentence  as input.

Constraints

Strings for  and  will have fewer than 100 characters, including the newline.

Output Format

Print three lines of output. The first line prints the character, .
The second line prints the string, .
The third line prints the sentence, .

Sample Input 0

C
Language
Welcome To C!!
Sample Output 0

C
Language
Welcome To c

Method 1......................................................................................................................................................................
CODE:-
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int BUFFSIZE = 256;
    
    char c;
    char str[BUFFSIZE];
    char sen[BUFFSIZE];
    
    scanf("%c ", &c);
    scanf("%s ", str);
    fgets(sen, BUFFSIZE, stdin);
    
    printf("%c\n", c);
    printf("%s\n", str);
    printf("%s\n", sen);
    
    return 0;
}

Method 2..........................................................................................................................................................................

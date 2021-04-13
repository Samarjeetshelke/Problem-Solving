/*Task

For each integer  in the interval  (given as input) :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Input Format

The first line contains an integer, .
The seond line contains an integer, .

Constraints


Output Format

Print the appropriate English representation,even, or odd, based on the conditions described in the 'task' section.

Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//logic one:-....................................................................................................................................................................

int main() 
{
    int a, b;
  //  printf("\nPlease enter the nnumber:-");
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
     for ( ; a <= b; a++){
         if(a>0&&a<10){
             switch (a){
                case 1: printf("one\n");
                        break;
                case 2: printf("two\n");
                        break;
                case 3: printf("three\n");
                        break;
                case 4: printf("four\n");
                        break;
                case 5: printf("five\n");
                        break;
                case 6: printf("six\n");
                        break;
                case 7: printf("seven\n");
                        break;
                case 8: printf("eight\n");
                        break;
                case 9: printf("nine\n");
                        break;
                }
                
         }
         else{
             if(a%2==0){
                 printf("even\n");
             }
             else{
                 printf("odd\n");
             }
         }
     }
     
    return 0;
}

//logic two:-.....................................................................................................................................................................


























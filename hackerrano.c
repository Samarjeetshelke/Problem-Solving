#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char arr[50];
    int res[10];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    scanf("%s",&arr);  
    int i=0;
    while(i<10){
        res[i]=0;
        i++;
    }

    i=0;
    int n;
    while(arr[i]!='\0'){

        if(arr[i]>='0'&&arr[i]<='9'){
            n=((int)arr[i])-48;
            res[n]++;
            printf("\n%d : %d",n,res[n]);
        }
        i++;
    }

    i=0;
    while(i<10){
        printf("%d ",res[i]);
        i++;
    }
    return 0;
}

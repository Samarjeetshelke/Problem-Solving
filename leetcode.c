#include<stdio.h>

int isCircularSentence(char * sentence){
    char sfch,wlch;
    int i=0;
    sfch=sentence[0];

    while(sentence[i]!='\0'){

        if(sentence[i]==' '){
            printf("\n%c and %c",sentence[i-1],sentence[i+1]);
            if(sentence[i-1]!=sentence[i+1]){
                return 0;
            }
        }
        i++;
    }
    if(sfch!=sentence[i-1]){
        return 0;
    }
    return 1;
}

void main(){
    char arr[15];

    printf("\nEnter the string: ");
   // scanf("%s",&arr);
    gets(arr);
    if(isCircularSentence(arr)){
        printf("\nThe given statement is circular");
    }
    else{
        printf("\nThe given statement is not circular");
    }
   
}
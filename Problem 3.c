Task:-
                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4        //print this
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   

clue:-//If you want:-
2,-2    2,-1    2,0    2,1    2,2
  3       3       3      3      3

 1,-2    1,-1    1,0    1,1    1,2
  3       2       2      2      3

 0,-2    0,-1    0,0    0,1    0,2
  3       2       1      2      3

-1,-2   -1,-1   -1,0   -1,1   -1,2
  3       2       2      2      3

-2,-2   -2,-1   -2,0   -2,1   -2,2
  3       3       3      3      3
  
  code:-
    #include<stdio.h>
    #include<conio.h>
    
/*  thoda clue:-
copyy code and edit
// Online C compiler to run C program on

#include <stdio.h>

int main()
{
 int i,j,n=4;
 for(i=1;i<(n*2);i++){
     for(j=1;j<(n*2);j++){
         if(i==1||i==(n*2)-1||j==1||j==(n*2)-1){
             printf("%d ",n);
         }
         if(i==2&&j>1&&j<(n*2)-1||i==(n*2)-2&&j>1&&j<(n*2)-1||j==2&&i>1&& i<(n*2)-1||j==(n*2)-2&&i>1&& i<(n*2)-1){
             printf("%d ",n-1);
         }
         if(i==3&&j>1&&j<(n*2)-1||i==(n*2)-3&&j>1&&j<(n*2)-1||j==2&&i>2&&i<(n*2)-2||j==(n*2)-2&&i>1&& i<(n*2)-2){
             //printf("%d ",n-1){
             printf("%d ",n-2);
         }
         /*if(i==4&&j>1&&j<(n*2)-1||i==(n*2)-4&&j>1&&j<(n*2)-1){
             printf("%d ",n-3);
         }i*/
         if(i==(n*2)/2&&j==(n*2)/2){
             printf("%d ",n-3);
         }
         
         
         
     }
     printf("\n");
 }
 return 0;
}*/

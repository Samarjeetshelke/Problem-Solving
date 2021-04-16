
TASK:-



METHOD 1:-
  #include <stdio.h>
#include <stdlib.h>


int main()
{
    //int start=0,end;
    int num, *arr, i,temp;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d",arr + i);
    }
   

                                                        //IN THIS TECHNIQUE THE ARRAY IN NOT ACTUALLY GET REVERSCEm
    /* Write the logic to reverse the array. */
   // printf("\n");
    for(i = num-1; i >=0; i--)
        printf("%d ", *(arr + i));
    return 0;
}














MeTHOD 2:-
  /*end=num-1;
    for(i=0;i<num;i++){
       if(start<end){
        temp = *(arr+i); 
        *(arr+i) = *(arr+(num-i));
        *(arr+(num-i)) = temp;
        start++;
        end--;
       }
       
    }*/

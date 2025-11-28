#include <stdio.h>
int main(){
    int i,n, inpt,negative=0,positive=0,zero=0;
    printf("how many numbers would you like to check: \n");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("enter the numbers\n");
        scanf("%d",&inpt);
        if (inpt>0){
            positive++;
        }
        else if(inpt<0){
            negative++;
        }
        else if (inpt==0){
            zero++;
        }
        else{
            printf("invalid");
        }
    }
        printf("number of positive values:%d \n",positive);
        printf("number of negative values:%d \n",negative);
        printf("number of zeros:%d \n",zero);

return 0;
    }


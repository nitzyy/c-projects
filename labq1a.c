#include <stdio.h>
typedef struct mystruct{
    float real;
    float img;
} mystruct;
mystruct add(mystruct n1, mystruct n2);

int main(){
    mystruct n1,n2,result;
    printf("enter real & img value: ");
    scanf("%f %f",&n1.real,&n1.img);
    printf("enter second real & img value: ");
    scanf("%f %f",&n2.real,&n2.img);
result=add(n1,n2);
printf("addition = %.1f + %.1fi", result.real, result.img);
return 0;
}
mystruct add(mystruct n1,mystruct n2){
    mystruct temp;
    temp.real=n1.real+n2.real;
    temp.img=n1.img+n2.img;
    return temp;
}
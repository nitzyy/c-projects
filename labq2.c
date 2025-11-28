/*
write a c program to select a meal type from pre defined options(breakfast lunch dinner) 
using enum datatype ur program shld be able to accept the quantity order and calculate the 
total bill by multiplying the corresponding meal price w the quantity ur program must validate user
input and display the final bill clearly
*/

#include <stdio.h>
enum meal{
    breakfast,
    lunch,
    dinner,
};
void menu(){
    printf("--Welcome to meal selector--\n");
    printf("please enter your choice:\n");
    printf("select 0 for breakfast (Rs 100)\n");
    printf("select 1 for lunch (Rs 150)\n");
    printf("select 2 for dinner (Rs 200)\n");
}
int main(){
    enum meal select;
    int choice,quantity;
    float total=0.0;
    menu();
    scanf("%d", &choice);
    select=(enum meal)choice; 
    printf("%d", select);
    printf("enter quantity of food: \n");
    scanf("%d",&quantity);
    switch(select){
        case breakfast:
            total=100*quantity;
            printf("you selected breakfast\n");
            break;
        case lunch:
            total=150*quantity;
            printf("you selected lunch\n");
            break;
        case dinner:
            total=200*quantity;
            printf("you selected dinner\n");
            break;
    }
printf("your total bill is:Rs %.2f\n",total);
}
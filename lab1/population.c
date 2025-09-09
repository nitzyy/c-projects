// the population of a town is 1000 the population steadily increases at the rate of 10% per anum what will bepopulation after 10 yrs also print population after each year for the next 10 years
#include <stdio.h>
int main(){
    int year;
    float population=1000;
    printf("initial Population = 1000\n");
    printf("year Population\n");
    for (year = 1;year <= 10;year++) {
        population = population * 1.10;
        printf("%d %.2f\n", year, population);
    }
    printf("Population after 10 years = %.2f\n", population);
    return 0;

}
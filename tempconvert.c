#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>   
#include <string.h>  
struct units{
    char *second;
    char *first;
};
void getUnit(){
    struct units a;
    printf("What type of measurement are you using?\n");
    scanf ("%[^\n]%*c", &a.first);  
    printf("What type of measurement would you like to convert to?\n");
    scanf ("%[^\n]%*c", &a.second);  
            printf("**You are using %s %s\n", &a.first, &a.second);
}
double conversion(double numVal){
    double result;
        struct units a;
                printf("**You are using %s and %s\n", &a.first, &a.second);

    if (strcmp(a.first,"Celsius") == 0){
       if(strcmp(a.second, "Kelvin") == 0){

       }
       else if(strcmp(a.second, "Fahrenheit") == 0){
        result = numVal * ((double)9/5) + 32;
        printf("%lf\n",result);z`
       }
       else{
           printf("Invalid measurement\n");
           return 0;
       }
    }
    else if (strcmp(a.first, "Kelvin") == 0){
        if(strcmp(a.second, "Celsius") == 0){

       }
       else if(strcmp(a.second, "Fahrenheit") == 0){
           
       }
       else{
           printf("Invalid measurement\n");
           return 0;
       }
    }
    else if (strcmp(a.first, "Fahrenheit") == 0){
        if(strcmp(a.second, "Celsius") == 0){
           
       }
       else if(strcmp(a.second, "Kelvin") == 0){
           
       }
       else{
           printf("Invalid measurement\n");
           return 0;
       }
    }
    else if (strcmp(a.first, a.second) == 0){
        printf("%s cannot be converted into %s\n", a.first, a.second);
        return 0;
    }
    else{
           printf("Invalid measurement\n");
           return 0;
       }
        printf("You have decided to convert %lf %s to %s.\n", numVal, a.first, a.second);
    return 0;
}
double value(double numVal){
    printf("Enter the value you would like to convert\n");
    scanf ("%lf", &numVal);
    return numVal;
}
double main(){
    double numVal;
    printf("Temp Converter start\n");
    getUnit();
    numVal = value(numVal);
    printf("%lf\n", numVal); //Check for value
    conversion(numVal);
    printf("Fin");
}
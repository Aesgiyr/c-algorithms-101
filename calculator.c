//
//  calculator.c
//  Calculator
//
//  Created by Özgür Bilgen
//

#include <stdio.h>

int choice;

void func(){
    printf("Welcome to calculator\n");
}

void sumFunc(double number1,double number2){
    printf("Summation: %f\n", number1+number2);
}
void substractFunc(double number1,double number2){
    printf("Subtract: %f\n", number1-number2);
}
void multiplyFunc(double number1,double number2){
    printf("Multiply: %f\n", number1*number2);
}
void divideFunc(double number1,double number2){
    printf("Divide %f\n", number1/number2);
}

double number1, number2;

int main(int argc, const char * argv[]) {
    func();
    while (1) {
        printf("1-Summation\n2-Substract\n3-Multiply\n4-Divide\n5-Exit\nChoice: ");
        scanf("%d",&choice);
        if (choice == 1) {
            printf("Enter the values ​​to be summation\nEnter the first value: ");
            scanf("%lf",&number1);
            printf("Enter the second value: ");
            scanf("%lf",&number2);
            sumFunc(number1, number2);
        }
        else if (choice == 2) {
            printf("Enter the values ​​to be substract\nEnter the first value: ");
            scanf("%lf",&number1);
            printf("Enter the second value: ");
            scanf("%lf",&number2);
            substractFunc(number1, number2);
        }
        else if (choice == 3) {
            printf("Enter the values ​​to be multiply\nEnter the first value: ");
            scanf("%lf",&number1);
            printf("Enter the second value: ");
            scanf("%lf",&number2);
            multiplyFunc(number1, number2);
        }
        else if (choice == 4) {
            printf("Enter the values ​​to be divide\nEnter the first value: ");
            scanf("%lf",&number1);
            printf("Enter the second value: ");
            scanf("%lf",&number2);
            divideFunc(number1, number2);
        }
        else if (choice==5){
            printf("Logging out...\n");
            break;
        }
        else{
            printf("Please enter valid value\n");
            continue;
        }
    }
    return 0;
}

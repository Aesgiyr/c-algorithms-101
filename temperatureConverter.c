//
//  main.c
//  temperatureConversion
//
//  Created by Özgür Bilgen on 4.05.2023.
//

#include <stdio.h>

void cToF(double c){
    printf("%.2f celcius degree is %.2f fahrenheit degree \n",c,((c*1.8)+32));
}

void fToC(double f){
    printf("%.2f fahrenheit degree is %.2f celcius degree \n",f,((f-32)/1.8));
}

int main(int argc, const char * argv[]) {
    
    double choice,celcius,fahrenheit;
    
    printf("Welcome to temperature converter \n");
    
    while (1) {
        printf("1-Celcius to fahrenheit\n2-Fahrenheit to celcius\n3-Quit\n");
        printf("Enter your choice: ");
        scanf("%lf",&choice);
        if (choice == 1){
            printf("Enter the celcius degree: ");
            scanf("%lf",&celcius);
            cToF(celcius);
        }
        else if (choice == 2){
            printf("Enter the fahrenheit degree: ");
            scanf("%lf",&fahrenheit);
            fToC(fahrenheit);
        }
        else if (choice == 3){
            printf("Quiting...\n");
            break;
        }
        else{
            printf("Wrong key try again\n");
            continue;
        }
    }
    return 0;
}

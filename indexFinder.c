//
//  main.c
//  indexFinder
//
//  Created by Özgür Bilgen on 8.05.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    
    srand(time(NULL));
    int i,randomNum,search;
    int array[25];
    
    for (i=0; i<25; i++) {
        randomNum=rand()%100;
        array[i]=randomNum;
    }
    printf("[");
    for (i=0; i<25; i++) {
        printf("%d \t",array[i]);
    }
    printf("]\n");
    
    printf("Enter the number to be found in the array: ");
    scanf("%d",&search);
    printf("\n");
    
    for (i=0; i<25; i++) {
        if(array[i]==search){
            printf("The index of the number you are looking for: %d \n",(i+1));
            return 0;
        }
    }
    printf("%d not found in the array \n",search);
    return 0;
}

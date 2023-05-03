//
//  main.c
//  arrayUnite
//
//  Created by Özgür Bilgen on 3.05.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i,j,size,number,sizeTwo;
    
    printf("Enter size of first array: ");
    scanf("%d",&size);
    printf("Size of first array: %d \n", size);
    
    int arrayOne[size];
    
    for (i = 0 ; i<size; i++) {
        printf("Enter the element of %dth first array: ", (i+1));
        scanf("%d",&number);
        arrayOne[i] = number;
    }
    for (j=0 ; j<size; j++) {
        printf("%dth element of the first array is %d \n", (j+1) ,arrayOne[j]);
    
    }
    
    printf("Enter size of second array: ");
    scanf("%d",&sizeTwo);
    printf("Size of second array: %d \n", sizeTwo);
    
    int arrayTwo[sizeTwo];
    
    for (i = 0 ; i<sizeTwo; i++) {
        printf("Enter the element of %dth second array: ", (i+1));
        scanf("%d",&number);
        arrayTwo[i] = number;
    }
    
    for (j=0 ; j<sizeTwo; j++) {
        printf("%dth element of the second array is %d \n", (j+1) ,arrayTwo[j]);
    
    }
    
    int uniteSize=size+sizeTwo;
    int arrayUnite[uniteSize];
    
    for (i = 0 ; i<uniteSize; i++) {
        
        if (i<size){
            arrayUnite[i] = arrayOne[i];
        }
        else{
            arrayUnite[i] = arrayTwo[i-size];
        }
        
    }
    printf("Size of the united array: %d \n", uniteSize);
    
    for (j=0 ; j<uniteSize; j++) {
        printf("%dth element of the united array is %d \n", (j+1) ,arrayUnite[j]);
    
    }
            
    return 0;
}

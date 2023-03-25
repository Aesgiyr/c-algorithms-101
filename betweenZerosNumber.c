//
//  betweenZerosNumber.c
//  Between zeros a number
//
//  Created by Özgür Bilgen on 25.03.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int line,i,j,num,l;
    while (1) {
        printf("Enter number of lines: ");
        scanf("%d",&line);
        
        printf("Enter number of line: ");
        scanf("%d",&num);
        
        if(line<num){
            
            printf("Please enter valid value\n");
            printf("Don't forget: Second value must be lower than first value\n");
            continue;
            
        }
        else{
            
            break;
            
        }
    }
    
    
    for (i=0; i<line; i+=1) {
        
        if (i==num-1){
            
            for (l=0; l<5; l+=1) {
                printf("%d",num);
            }
            
        }
        else{
            
            for (j=0; j<5; j+=1) {
                printf("%d",0);
            }
            
        }
        
        printf("\n");
    }
    return 0;
}

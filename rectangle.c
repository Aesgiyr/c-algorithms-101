//
//  rectangle.c
//  Rectangle
//
//  Created by Özgür Bilgen on 24.03.2023.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
    int line;
    int column;
    
    printf("Enter number of lines: ");
    scanf("%d",&line);
    
    printf("Enter number of column: ");
    scanf("%d",&column);

    
    for (int i = 0; i<line; i++) {
        
        for (int j = 0; j<column ; j++) {
            
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

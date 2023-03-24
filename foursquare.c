//
//  foursquare.c
//  Foursquare
//
//  Created by Özgür Bilgen on 24.03.2023.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
    int line;
    
    printf("Enter number of lines: ");
    scanf("%d",&line);
    
    for (int i = 0; i<line; i++) {
        
        for (int j = 0; j<line ; j++) {
            
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

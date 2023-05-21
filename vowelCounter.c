//
//  vowelCounter.c
//  vowelCounter
//
//  Created by Özgür Bilgen on 21.05.2023.
//

#include <stdio.h>
#include "string.h"

char vowels[10]= {'a','A','e','E','i','I','u','U','o','O'};
char sentence[];
int counter=0;

int main(int argc, const char * argv[]) {
    
    printf("Enter the sentence: ");
    scanf("%[^\n]c" , &sentence);
    int stringLenght=strlen(sentence);
    for (int i=0 ; i<stringLenght ; i++) {
        for (int j=0 ; j<10 ; j++) {
            if(sentence[i]==vowels[j]){
                printf("%dth letter is %c vowel \n",(i+1),sentence[i]);
                counter+=1;
            }
        }
    }
    printf("This sentence contains %d vowels \n",counter);
    return 0;
}

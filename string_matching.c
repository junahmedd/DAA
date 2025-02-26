// C PROGRAM BRUTE FORCE STRING MATCHING//

#include<stdio.h>
#include<string.h>

void string_matching(char string[], char pattern[]){
    int string_len = strlen(string);
    int pattern_len = strlen(pattern);
    int found = 0;
    int i,j;

    for(i = 0; i <= string_len - pattern_len ; i++){
        for(j = 0; j < pattern_len; j++){
            if(string[i+j] != pattern[j])
                break;
        }    
        if(j == pattern_len){
            printf("Pattern found at index %d",i);
             found = 1;
        }       
    }

    if(!found){
        printf("Pattern not found in the string...");
    }
}

int main() {
    char string[100];
    char pattern[100];

    printf("Enter string: ");
        gets(string);

    printf("Enter pattern: ");
        gets(pattern);

    string_matching(string,pattern);
    return 0;
}

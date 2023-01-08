
#ifndef TEXT_C
#define TEXT_C

#include "text.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>
#include <ctype.h>

char word[100];
int updates[100] = {0};

void replace(char str[], char str1[]){
int j =0;
char string[2000];
int num =0;

FILE *in_file = fopen(str, "r");
FILE *temp = fopen("temp.txt", "w");

if (in_file == NULL || temp == NULL)
{
        printf("Error file missing\n");
        exit(-1);
}

while (fscanf(in_file,"%s", string) != EOF)
{
         
        if(strcasecmp(string, word)==0) {
                num++;
                
                 
                 while (string[j]) {
                    
                    fputc(toupper(string[j]),temp);
                   
                    j++;
                    
                }
                fputs(" ", temp);    
        }
       
        else{
          fputs(string, temp); 
          fputs(" ", temp); 
        }

        j=0;
       
}

report(num, str);
num = 0;
fclose(in_file);
fclose(temp);
rename("temp.txt", str);
remove("temp.txt");
}

#endif 
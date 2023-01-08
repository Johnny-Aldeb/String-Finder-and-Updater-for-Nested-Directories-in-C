
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <dirent.h>
#include "traversal.h"
#include "report.h"
#include "text.h"


int main(int arge, char *argv[]){
    
int i;

for ( i = 1; i < arge; i++){
    strcat(word, argv[i]);
 }
    printf("\n\n");
    printf("Target string: %s\n\n", word);
   char cwd[100];
   if (getcwd(cwd, sizeof(cwd)) != NULL) {
       printf("Search begins in current folder: %s\n\n", cwd);
   } else {
       perror("getcwd() error");
       return 1;
   }




printf("** Search Report **\n\n");
printf("Updates\t\tFile Name\n");

directoryFiles(".");






return 0;
}
#ifndef TRAVERSAL_C
#define TRAVERSAL_C
#include "report.h"
#include "text.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <dirent.h>

void directoryFiles(const char *dirname) {

    DIR* dir = opendir(dirname);
    if (dir == NULL) {
        return;
    }
   
    
    struct dirent* entity;
    entity = readdir(dir);
     
    while (entity != NULL) {

      char path3[1000] = { 0 };
      strcpy(path3, &entity->d_name[(strlen(entity->d_name)-4)]);
     
        if(strcmp(path3, ".txt") == 0){
            
            char path2[100] = { 0 };
            strcat(path2, dirname);
            strcat(path2, "/");
            strcat(path2, entity->d_name);
            replace(path2,word);
               
      }  
        
        if (entity->d_type == DT_DIR && strcmp(entity->d_name, ".") != 0 && strcmp(entity->d_name, "..") != 0 ) {
            char path[100] = { 0 };
            strcat(path, dirname);
            strcat(path, "/");
            strcat(path, entity->d_name);
            
            directoryFiles(path);
        }
        entity = readdir(dir);
    }
    closedir(dir);
    
}

#endif


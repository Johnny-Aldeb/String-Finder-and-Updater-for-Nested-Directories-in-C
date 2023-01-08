void report(int num, char str[]);
#ifndef REPORT_C
#define REPORT_C
#include "report.h"
#include "traversal.h"
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void report(int num, char str[]){
  
  printf("%d\t\t%s\n", num, str); 
      
}


    






#endif 







// int sortedNum[7] = {0};
// char sortedFile[7];
// int bigIndex = 0;
// int temp = 0;
// int x = -1;
// for (int i = 0; i < 7; i++) {
//     for (int j = 1; j < i; j++) {

//         if(number[j]<number[i]) {
//             temp = number[i];
//             number[i] = number[j];
//             sortedNum[i] = number[j];
//             number[j] = temp;
//             sortedFile[i] = *arr[j];
//         }

//     }

//     for (int i = 0; i < numoffile; i++){
//        printf("a[%d] = %d     %c\n", i, sortedNum[i], sortedFile[i]); 
    
    // sortedNum[i] = x;
    // sortedFile[i] = arr[bigIndex];
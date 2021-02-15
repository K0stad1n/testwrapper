//
//  File.c
//  
//
//  Created by K0stad1n on 15/02/2021.
//

#include "stdio.h"
#include "include/File.h"
void initlogfile(){
    FILE *f = fopen("log.txt", "a+");
}

void writetofile(char* msg){
    FILE *f = fopen("log.txt", "a");
    fprintf(f, "%s", msg);
    fclose(f);
}

//
//  File.c
//  
//
//  Created by K0stad1n on 15/02/2021.
//

#include "stdio.h"
#include "include/File.h"
void initlogfile(){
    remove("log.txt");
    FILE *f = fopen("log.txt", "w+");
    fclose(f);
}

void writetofile(char* msg){
    FILE *f = fopen("log.txt", "a+");
    fprintf(f, "%s", msg);
    fclose(f);
}

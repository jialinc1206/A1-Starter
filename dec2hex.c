/**
 * Assignment-1
 * CSE30 Username: cs30s122 (fill out your username)
 * Class: UCSD CSE30-S122
 */
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {


    if (argc != 2) {
        fprintf(stderr, "%s wrong number of arguments\n", argv[0]);
        return EXIT_FAILURE;
    }


    unsigned int base10 = (unsigned) atoi(argv[1]);
  
    // put your code here (use as many lines as you need)
    if(base10 == 0)
        return EXIT_SUCCESS; 
    //printf("argv[1] = %d \n", base10);
    int mod = 0, power = 0;
    char hexMod;

    while(base10 != 0) {
       // printf("base10 != 0, = %d \n", base10);
        mod = base10%16;
        //printf("mod = %d \n", mod);
        base10 = base10/16;
        //printf("base10/16 = %d \n", base10);
        
        if(mod < 10)
            hexMod = mod + '0';
        else
            hexMod = mod + 'a' - 10;

        printf("%c * 16^%d\n", hexMod, power);
        power++;
    }


    return EXIT_SUCCESS; 
}

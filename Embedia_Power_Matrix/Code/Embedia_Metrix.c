#include "Embedia_Metrix_Cfg.h"

void Char_to_int(char *ch, int *num){

    int i = 0;

    *num = 0;

    while(ch[i]){

        *num = (*num * 10) + ch[i] - '0';
        i++;
    }

}


void get_power(int num, int pow, int *power_result){

    *power_result = 1;

    for(int i = 1; i <= pow; i++){

        *power_result *= num;

    }

}


void Embedia_Metrix_Check(int num, int result_power){

    static int c, flag, tries;
    tries++;

    if(num == result_power){
        c++;
    }
    else{
        c--;
    }

    if(tries == COLS){
        if(c == COLS){
            printf("Embedia Power Matrix\n");
            c = 0;
            tries = 0;
        }
        else{
            printf("Not an Embedia Power Matrix\n");
            c = 0;
            tries = 0;
        }

    }
}

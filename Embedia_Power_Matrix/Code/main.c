#include <stdio.h>
#include <stdlib.h>

#include "Embedia_Metrix.h"

int main()
{
    int num, base_num, power_num, power_result, size;

    char arr[ROWS][COLS][10] = {
        {"1", "3", "5"},
        {"3", "7", "11"},
        {"5", "11", "17"}
    };

    if(ROWS > 1){

        for(int i = 1; i < ROWS-1; i++){

            for(int j = 0; j < COLS; j++){

                Char_to_int(arr[i][j], &num);
                Char_to_int(arr[i+1][j], &base_num);
                Char_to_int(arr[i-1][j], &power_num);

                get_power(base_num, power_num, &power_result);
                Embedia_Metrix_Check(num, power_result);

            }
        }

    }

    else if(ROWS == 1){
       for(int i = 1; i <= ROWS; i++){

            for(int j = 0; j < COLS; j++){

                Char_to_int(arr[i][j], &num);
                Char_to_int(arr[i+1][j], &base_num);
                Char_to_int(arr[i-1][j], &power_num);

                get_power(base_num, power_num, &power_result);
                Embedia_Metrix_Check(num, power_result);

            }
        }
    }

    return 0;
}

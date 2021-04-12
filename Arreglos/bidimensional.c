/**
 * @file bidimensional.c    
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

// librerías
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // variables
    float matriz[2][3] = {{51, 52, 53}, {54, 55, 56}};

    for (size_t fil = 0; fil < 2; fil++)
    {
        for (size_t col = 0; col < 3; col++)
        {
            printf("%i ", matriz[fil][col]);
        }
        puts("");
    }
    
    
    return 0;
}

/**
 * @file Customized_Getch.c
 * @author Sumit Dahiya (dahiyasumit8053@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdlib.h>
#include <stdio.h>

/**
 * @brief Customized getch to stop output screen
 * 
 */
void getch(void)
{
        fflush(stdin);
        char *s = (char *)malloc(1*sizeof(int));
        scanf("%c",s);
        free(s);
}
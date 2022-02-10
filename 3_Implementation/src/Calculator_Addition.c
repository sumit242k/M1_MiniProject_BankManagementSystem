/**
 * @file Calculator_Addition.c
 * @author Sumit Dahiya (dahiyasumit8053@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "Calculator.h"

/**
 * @brief funtion for addition of number
 * 
 * @param number1 calculator_number1 Pointer to calculator
 * @param number2 calculator_number2 Pointer to calculator
 * @return int 
 */
int addition (calculator* calculator_number1,calculator* calculator_number2)
{
    return calculator_number1->number+calculator_number2->number;
}
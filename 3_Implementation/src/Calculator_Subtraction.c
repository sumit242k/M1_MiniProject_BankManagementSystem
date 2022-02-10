/**
 * @file Calculator_Subtraction.c
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
 * @brief funtion for subtaction of number 
 * 
 * @param calculator_number1 calculator_number1 Pointer to calculator
 * @param calculator_number2 calculator_number2 Pointer to calculator
 * @return int 
 */
 int subtraction (calculator* calculator_number1,calculator* calculator_number2)
{
    if((calculator_number2->number)<0)
    {
        calculator_number2->number*= (-1);
        return calculator_number1->number+ calculator_number2->number;
    }
    else
    {
        return calculator_number1->number-calculator_number2->number; 
    }
}
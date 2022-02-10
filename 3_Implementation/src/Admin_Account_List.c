/**
 * @file Admin_Account_List.c
 * @author Sumit Dahiya (dahiyasumit8053@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "Account.h"

/**
 * @brief function for printing account list
 * 
 * @return void
 */
void admin_account_list()
{
    account_t user_data;
    char temp;
    FILE* file_pointer= fopen("../7_Other/data-set/Account_Datail.dat", "r");
    printf("\n     List of all account\n\n");
    while (fscanf(file_pointer,"%50s %d %d",user_data.holder_name,&user_data.holder_account_number,&user_data.holder_amount)!=EOF)
    {
        printf("\nAccount Holder Name:\t%s",user_data.holder_name); 
        printf("\nAccount Number:\t\t%d",user_data.holder_account_number);
        printf("\nAvailable Amount:\t%d\n",user_data.holder_amount);
    }
    printf("\n\nAll record printed");
    fclose(file_pointer);
}
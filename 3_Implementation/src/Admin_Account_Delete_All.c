/**
 * @file Admin_Account_Delete_All.c
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
 * @brief function for deleting all account
 * 
 * @return void
 */
void admin_account_delete_all(void)
{
    printf("\n\t   Delete all account\n\n");
    printf("Warning all Account will be deleted Permanently\n");
    printf("\n\nAll content of the file are Deleted\t"); 
    fclose(fopen("../7_Other/data-set/Account_Datail.dat", "w"));
    fclose(fopen("../7_Other/data-set/Account_Datail_temp.dat", "w"));
}
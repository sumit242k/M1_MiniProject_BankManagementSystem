/**
 * @file Login_Detail_Update.c
 * @author Sumit Dahiya (dahiyasumit8053@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "Login.h"

/**
 * @brief function for updating login details
 * 
 */
void login_datail_update()
{
    char *s = (char *)malloc(1*sizeof(int));
    printf("\n\t\t\tLogin account reset\n\n");
    printf("Warning login credential will change Permanently\n");

    FILE* file_pointer = fopen("../7_Other/data-set/Login_Detail.dat", "w");
    char username[15],password[12];
    
    printf("\n\nPlease Enter your new username:\t\t");
    scanf("%13s", &username[0]);
    printf("Please Enter your new password:\t\t");
    scanf("%10s", &password);

    fprintf(file_pointer,"%15s %12s\n",username,password);
  
    printf("\nLogin details updated\t");
    fclose(file_pointer);
}
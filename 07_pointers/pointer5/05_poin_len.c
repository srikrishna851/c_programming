/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 
 * Brief: 
 * Author: Srikrishna KN
 * Title: Project engineer
 * Last Modified Date: 28.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

int main() {
    char str[100]="Rugged Board";
    char *ptr;
    int len = 0;
    printf("Input a string :%s\n",str);
    
    ptr = str;
    while (*ptr != '\0') {
        len++;
        ptr++;
    }
    
    printf("The length of the given string %s is: %d", str, len);
    
    return 0;
}


// Program End

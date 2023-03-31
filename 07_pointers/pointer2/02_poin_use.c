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
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';
    
    printf("Using & operator:\n");
    printf("Address of m = %p\n", &m);
    printf("Address of fx = %p\n", &fx);
    printf("Address of cht = %p\n", &cht);
    
    printf("\nUsing & and * operator:\n");
    printf("Value at address of m = %d\n", *(&m));
    printf("Value at address of fx = %f\n", *(&fx));
    printf("Value at address of cht = %c\n", *(&cht));
    
    int* pm = &m;
    float* pfx = &fx;
    char* pcht = &cht;
    
    printf("\nUsing only pointer variable:\n");
    printf("Address of m = %p\n", pm);
    printf("Address of fx = %p\n", pfx);
    printf("Address of cht = %p\n", pcht);
    
    printf("\nUsing only pointer operator:\n");
    printf("Value at address of m = %d\n", *pm);
    printf("Value at address of fx = %f\n", *pfx);
    printf("Value at address of cht = %c\n", *pcht);
    
    return 0;
}

// Program End

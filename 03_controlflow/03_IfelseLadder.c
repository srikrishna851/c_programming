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
 * Author : srikrishna KN
 * Title: Project engineer
 * Last Modified Date: 24.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

int main() {
    int a=2, b=3, c=45, d=65;
    int largest;

    if (a > b && a > c && a > d) {
        largest = a;
    } else if (b > c && b  > d) {
        largest = b;
    } else if (c  > d) {
        largest = c;
    } else {
        largest = d;
    }

    printf("%d is the largest \n",largest);

    return 0;
}

// Program End

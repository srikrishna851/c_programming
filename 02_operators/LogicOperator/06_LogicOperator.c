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
 * Author: Natarajan S  ( natarajan.s@ruggedboard.com )
 * Title: Program Manager / Trainner
 * Last Modified Date: 19.09.2022
 *
/*********************************************************************************************/

// Header File
 #include <stdio.h>

int main() {
    int i = 5, j = 5, k = 10;
    int result1, result2, result3;

    result1 = (i == j) || (k > j);
    printf("i is equal to j or k greater than j: %d\n", result1);

    result2 = (i == j) || (k < j);
    printf("i is equal to j or k less than j: %d\n", result2);

    result3 = (i != j) || (k < j);
    printf("i not equal to j or k less than j: %d\n", result3);

    return 0;
}


// Program End

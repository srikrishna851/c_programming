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
 * Author: srikrishna KN
 * Title: Project engineer
 * Last Modified Date: 03.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

typedef struct {
    float real;
    float imag;
} complex;

complex add(complex n1, complex n2);

int main() {
    complex n1, n2, result;

    printf("For 1st complex number:\n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);

    printf("\nFor 2nd complex number:\n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.real, &n2.imag);

    result = add(n1, n2);

    printf("\nSum = %.1f + %.1fi", result.real, result.imag);

    return 0;
}

complex add(complex n1, complex n2) {
    complex temp;

    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;

    return temp;
}

// Program End

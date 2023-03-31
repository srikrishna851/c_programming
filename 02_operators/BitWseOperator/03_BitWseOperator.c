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
 * Last Modified Date: 24.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

int main() 
{
    int a = 50;
    int b = 5;

    
    int or = a | b;
    printf("Binary OR Operator of a and b is %d\n", or); 
    int and = a & b;
    printf("Binary AND Operator of a and b is %d\n", and); 
    int xor= a ^ b;
    printf("Binary XOR Operator of a and b is %d\n", xor); 
    int ones= ~a;
    printf("Binary Ones Complement Operator of a is %d\n", ones); 
    int left_result = a << 2;
    printf("Binary Left Shift Operator of a is %d\n", left_result); 
    int right_result = a >> 2;
    printf("Binary Right Shift Operator of a is %d\n", right_result); 
    return 0;
}

// Program End

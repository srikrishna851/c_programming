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
 * Last Modified Date: 31.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

struct Distance {
    int feet;
    float inch;
};

int main() {
    struct Distance d1, d2, sum;
    
    printf("Enter 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);
    
    printf("\nEnter 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);
    
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
    
    if (sum.inch >= 12) {
        sum.feet += (int)(sum.inch / 12);
        sum.inch = sum.inch - 12 * (int)(sum.inch / 12);
    }
    
    printf("\nSum of distances = %d\'-%.1f\"", sum.feet, sum.inch);
    
    return 0;
}


// Program End

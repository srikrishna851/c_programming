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

struct Student {
    int rollNumber;
    char firstName[50];
    float marks;
};

int main() {
    struct Student students[5];

    printf("Enter information of students:\n\n");

    for (int i = 0; i < 5; i++) {
        printf("For roll number%d,\n", i+1);
        printf("Enter first name: ");
        scanf("%s", students[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
        students[i].rollNumber = i+1;
        printf("\n");
    }

    printf("Displaying Information:\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Roll number: %d\n", students[i].rollNumber);
        printf("First name: %s\n", students[i].firstName);
        printf("Marks: %.1f\n\n", students[i].marks);
    }

    return 0;
}


// Program End

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
 * Last Modified Date: 31.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
struct student
{
     char name[20];
     int rollnum;
     float marks;
};


// Main Function
int main()
{
     struct student s;
     printf("Enter information:\n");
     printf("Enter name:");
     scanf("%s",s.name);
     printf("Enter roll number:");
     scanf("%d",&s.rollnum);
     
     printf("Enter marks:");
     scanf("%f",&s.marks);
     printf("Displaying Information:\n");
     printf("Name:%s\n",s.name);
     printf("Roll number:%d\n",s.rollnum);
     printf("Marks:%.1f",s.marks);

     
     return 0;
}

// Program End

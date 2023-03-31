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
 Author: Srikrishna KN
 * Title: Project engineer
 * Last Modified Date: 28.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     int q=12;
     int w=21;
     printf("Input the first number :%d\n",q);
     printf("Input the second  number :%d\n\n",w);

     int *a=&q;
     int *b=&w;
     if (*a>*b)
     {
          printf("%d is the maximum number",*a);

     }
     else
     {
          printf("%d is the maximum number",*b);
     }
     

     
     return 0;
}

// Program End

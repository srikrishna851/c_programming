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
 * Title: project Engineer
 *  * Last Modified Date: 25.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include<string.h>

// Main Function
int main()
{
     char str[50];
     printf("enter a string:");
     scanf("%s",str);
     if(strcmp(str,"hi")==0)
     {
          printf("hello");
     }
     else{
          printf("not enter hi");
     }


     
     return 0;
}

// Program End

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
#include <ctype.h>

// Main Function
int main()
{
     int i;
     char str[]="RUggEd bOaRD";
     printf("given string is :%s\n",str);
     for ( i = 0; str[i] !='\0'; i++)
     {
          if (isupper(str[i]))
          {
               str[i]=tolower(str[i]);
          }
          else
          {
               str[i]=toupper(str[i]);
          }
          
     }
     printf("the toggle case is :%s",str);
     
     
     return 0;
}

// Program End

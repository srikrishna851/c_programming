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

int main()
{
     FILE *fptr;
     char filename[100], sentence[1000];
     int n, i;

     printf("Input the number of lines to be written: ");
     scanf("%d", &n);


     fptr = fopen("test.txt", "w");

     if (fptr == NULL)
     {
          printf("Error Creating File!");
          return 1;
     }


     printf("\nThe lines are:\n");
     for (i = 0; i < n + 1; ++i)
     {
          fgets(sentence, sizeof(sentence), stdin);
          fprintf(fptr, "%s", sentence);
     }

     fclose(fptr);

     printf("\nData written to the file test.txt successfully!\n");

     return 0;
}



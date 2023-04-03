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

int main() {
   FILE *fp;
   char filename[100];
   char ch;

   printf("Input the filename to be opened: ");
   scanf("%s", filename);

   fp = fopen(filename, "r");
   if (fp == NULL) {
      printf("Error opening file.");
      return 1;
   }

   printf("The content of the file %s is:\n", filename);
   while ((ch = fgetc(fp)) != EOF) {
      printf("%c", ch);
   }

   fclose(fp);

   return 0;
}


// Program End

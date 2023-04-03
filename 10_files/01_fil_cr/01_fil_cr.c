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
   char sentence[100];

   printf("Input a sentence for the file: ");
   fgets(sentence, 100, stdin);

   fp = fopen("test.txt", "w");
   if (fp == NULL) {
      printf("Error creating file.");
      return 1;
   }

   fprintf(fp, "%s", sentence);
   fclose(fp);

   printf("The file test.txt created successfully...!!");
   return 0;
}


// Program End

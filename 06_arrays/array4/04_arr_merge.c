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
 * Author: Natarajan S  ( natarajan.s@ruggedboard.com )
 * Title: Program Manager / Trainner
 * Last Modified Date: 19.09.2022
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

int main() {
  int size1, size2, i, j, k;
  
  // Input size and elements of first array
  printf("Enter size of first array: ");
  scanf("%d", &size1);
  
  int arr1[size1];
  
  printf("Enter first array elements:");
  for (i = 0; i < size1; i++) {
    scanf("%d", &arr1[i]);
  }
  
  // Input size and elements of second array
  printf("Enter size of second array: ");
  scanf("%d", &size2);
  
  int arr2[size2];
  
  printf("Enter elements of second array: ");
  for (i = 0; i < size2; i++) {
    scanf("%d", &arr2[i]);
  }
  
  // Merge the two arrays
  int merged[size1 + size2];
  
  for (i = 0; i < size1; i++) {
    merged[i] = arr1[i];
  }
  
  for (j = 0; j < size2; j++) {
    merged[i] = arr2[j];
    i++;
  }
  
  // Print the merged array
  printf("Merged array: ");
  
  for (k = 0; k < size1 + size2; k++) {
    printf("%d ", merged[k]);
  }
  
  return 0;
}


// Program End

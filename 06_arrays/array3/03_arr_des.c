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
 * Author: srikrishna kn
 * Title: Project engineer
 * Last Modified Date: 25.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     int n;
     printf("enter size of array:");
     scanf("%d",&n);
     
     int i,j,temp;

     char arr[n];
     printf("enter array elements:\n",n);
     for(i=0;i<n;i++)
     {
          scanf("%d",&arr[i]);

     }
     printf("your array is:");
     for(i=0;i<n;i++)
     {
     printf("%d ",arr[i]);
     }
     for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nThe sorted array in descending order is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
     
     return 0;
}

// Program End

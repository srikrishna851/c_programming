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
 * Last Modified Date: 24.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
	int j=6;
	int t=4;
	int result1,result2,result3,result4,result5,result6;
      	
	result1=(j==t);
	printf("6 == 4 is %d\n",result1);
	result2=(j>t);
	printf("6 > 4 is %d\n",result2);
	result3=(j<t);
        printf("6 < 4 is %d\n",result3);
        result4=(j!=t);
        printf("6 != 4 is %d\n",result4);
	result5=(j>=t);
        printf("6 >= 4 is %d\n",result5);
        result6=(j<=t);
        printf("6 <= 4 is %d\n",result6);




     
     return 0;
}

// Program End

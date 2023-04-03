
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
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "How are you";
    int vowels = 0, consonants = 0, alphabets = 0;
    int i;
    printf("The given string is:%s\n",str);
    
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            alphabets++;
            if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u') {
                vowels++;
            }
            
            else {
                consonants++;
            }
        }
    }
    
    printf("Number of Alphabets in given string is :%d\n", alphabets);
    printf("Number of vowels in given string is :%d\n", vowels);
    printf("Number of consonents in given string is : %d\n",consonants);
    
    return 0;
}

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: katew
 *
 * Created on 1 марта 2019 г., 18:40
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
int IsDigit(char c)
{
    if(c >= '0'  && c <= '9')
        return 1;
    else
        return 0;
}

int DigitCount(char* str)
{
    int count = 0;
    int i;
    for(i = 0; str[i] != 0; i ++)
    {
        if(IsDigit(str[i]) == 1)
            count++;
    }
    
    return count;
}
int IsLetter(char c)
{
    if(c>= 'A' && c<= 'Z' || c>= 'a' && c<= 'z')
        return 1;
    else 
        return 0;
}

int LetterCount(char* str)
{
    int i;
    int count=0;
    for(i=0; str[i] != 0; i++)
    {
        if(IsLetter (str[i])==1)
            count++;
    
    }
    return count;

}

int IsPoli(char* str)
{
    int i=0;
    int j=0;
    while(str[j] != 0)
    {
        j++;
    }
    j--;
    
    while(i<j)
    {
        if(str[i] != str[j])
            return 0;
        else 
        {
            j--;
            i++;
        }
    }
    return 1;

}

int main(int argc, char** argv) {

    char c;
    char string[] = "madamimadam";
   // c = '5';
    
    //printf("%i", IsDigit(c));
    //printf("%c", c);
    
    //gets(string);
    //printf(string);
    //printf("%i\n", DigitCount(string));
    //printf("%i", LetterCount(string));
    if(IsPoli(string)==1)
        printf(" Is Polindrom");
    else 
        printf(" Is not Polindrom");
        
    
    return (EXIT_SUCCESS);
}


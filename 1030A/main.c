/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: katew
 *
 * Created on 25 февраля 2019 г., 18:38
 */

#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

/*
 * 
 */
int main(int argc, char** argv) {
    int* MAS;
    int a;
    int i;
    
    scanf("%i", &a);
    MAS = (int*)malloc(sizeof(int)*a);
    for(i=0; i<a;i++)
    {
        scanf("%i", &MAS[i]);
    }
    
    for(i=0; i<a; i++)
    {
        if(MAS[i]==1)
        {
            printf("HARD");
            return 0;
        }
    
    }
    
    printf("EASY");
    return (EXIT_SUCCESS);
}


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: katew
 *
 * Created on 28 февраля 2019 г., 15:53
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    int* a;
    int MAS;
    int i;
    int j;
    int max=1;
    int n=0;
    
    scanf("%i", &MAS);
    a = (int*)malloc(sizeof(int)*MAS);
    for(i=0; i<MAS;i++)
    {
        scanf("%i", &a[i]);
    }
    
    for(j=0; j<MAS-1; j++)
    {
        n = 1;
        for(i=j+1; i<MAS; i++)
        {
            if(a[j]==a[i])
                n=n+1;
            
            if( n > max)
              max=n;  
        }
        
    }
    
    printf("\n%i",max);


    return (EXIT_SUCCESS);
}


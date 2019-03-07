/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: katew
 *
 * Created on 1 марта 2019 г., 21:49
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int* M;
    int* C;
    int a;
    int i;
    int m=0;
    int c=0;
    
    scanf("%i", &a);
    M = (int*)malloc(sizeof(int)*a);
    C= (int*)malloc(sizeof(int)*a);
    
    for(i=0; i<a;i++)
    {
        scanf("%i", &M[i]);
        scanf("%i", &C[i]);
    }
    
    
    for (i=0; i<a; i++)
    {
        if(M[i]> C[i])
            m=m+1;
        
        if (M[i] < C[i])
            c=c+1;  
    }

    if(m>c)
        printf("Mishka");
    
    if(m==c)
        printf("Friendship is magic!^^");
                
    if(m<c)
        printf("Chris");
    return (EXIT_SUCCESS);
}


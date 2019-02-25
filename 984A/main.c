/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: katew
 *
 * Created on 25 февраля 2019 г., 19:21
 */

#include <stdio.h>
#include <stdlib.h>
void swap(int* a , int*b)
{
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;

} 
void BubbleSort( int* a, int SIZE)
{
    int i;
    int j;
    int tmp;
    for( j=0; j<SIZE-1; j++)
    {
        for(i=0;i<SIZE-1-j; i++)
        {
            if(a[i]>a[i+1])
            {
                swap(&a[i+1], &a[i]);
            }
        
        }
    
    }

}


int main(int argc, char** argv) {
    int* MAS;
    int a;
    int i;
    scanf("%i", &a);
    
    MAS=(int*)malloc(sizeof(int)*a);
    for(i=0; i<a; i++)
    {
        scanf("%i",&MAS[i]);
    }
            
    BubbleSort( MAS, a);
    
    if(a%2==0)
    {
        printf("%i",MAS[a/2-1]);  
    }
    else 
        printf("%i",MAS[a/2]);
    return (EXIT_SUCCESS);
}


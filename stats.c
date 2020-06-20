/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file Stats.c
 * @brief This code is used to get some statistics of giiven array of unsigned char like: its max,
 *        min,mean, and median.it also used to print all the elements of that array and sort it. 
 * 
 * This file is included as a part of assement in Embedded systems software development Course
 * at Coursera.
 *
 * @author Mo'men Hesham
 * @date 20/6/2020
 *
 */



#include <stdio.h>
#include "stats.h"
#include <stdlib.h>
/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
	print_statistics(test,40);
	sort_array(test,40);
	print_array(test,40);
		

}



void print_array(unsigned char ptr[],int length)
{

}

unsigned char find_mean(unsigned char ptr[],int length)
{

}

unsigned char find_median(unsigned char ptr[],int length)
{

}


unsigned char find_maximum(unsigned char ptr[],int length)
{

}

unsigned char find_minimum(unsigned char ptr[],int length)
{

}

void print_statistics(unsigned char ptr[],int length)
{

}

void sort_array(unsigned char ptr[],int length)
{

}


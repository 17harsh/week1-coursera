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
 * @file stats.c 
 * @brief main file for week 1 assignment
 *  
 * A simple C programming example that exhibits a handful of basicprogramming
 * features to show how to calculate some statistics on some set of numbers 
 * and print them on console :
 * 	-mean
 *	-median
 *	-maximum
 * 	-minimum
 * 	-sorting (in decreasing order)
 *
 * @author Harsh Singhal
 * @date 2017-09-27
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

void print_statistics(int minimum, int maximum, int mean, int median){
}

void print_array(unsigned char *array, int length){
}

unsigned char find_median(unsigned char *array, int length){
}

unsigned char find_mean(unsigned char *array, int length){
}

unsigned char find_maximum(unsigned char *array, int length){
}

unsigned char find_minimum(unsigned char *array, int length){
}

void sort_array(unsigned char *array, int length){
}


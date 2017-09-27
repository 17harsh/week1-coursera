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
  int maximum;
  int minimum;
  int mean;
  int median;
  
  printf("The given array is : \n");
  print_array(test, SIZE);  

  maximum = find_maximum(test, SIZE);
    
  minimum = find_minimum(test, SIZE);

  mean = find_mean(test, SIZE);
   
  median = find_median(test,SIZE);
  
  print_statistics(minimum,maximum,mean,median);


  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}


void print_statistics(int minimum, int maximum, int mean, int median){
  printf("The statistical analysis of the data give the following results :\n\n");
  printf("The MINIMUM element in the data is : %d \n",minimum);
  printf("The MAXIMUM element in the data is : %d \n",maximum);
  printf("The MEAN of the data is : %d \n",mean);
  printf("The MEDIAN of the data is : %d \n",median);
}


void print_array(unsigned char *array, int length){
  for(int i = 0; i < length; i++) {
    printf("%d ", array[i]);
  }
  printf("\n\n");
}


unsigned char find_median(unsigned char *array, int length){
  int a;
  int b;
  int c;
  int median;
  
  for(int i = 0; i < length; i++){
    for(int j = i+1; j < length; j++){
      if(array[i] < array[j]){
        a = array[i];
        array[i] = array[j];
        array[j] = a;
      }
    }
  }  
  
  if((length % 2) == 1){
    b = (length / 2);
    median = array[b]; 
  }

  if((length % 2) == 0){
    c = ((length / 2) - 1);
    b = (length / 2);
    median = ((array[b] + array[c]) / 2);
  }
  
  return(median);
}

unsigned char find_mean(unsigned char *array, int length){
  int sum = 0;
 
  if(array == NULL){
    return 0;
  }
  
  if(length <= 0){				//to prevent invalid math division
    length = 1;
  }
  
  for(int i = 0; i < length; i++){
   sum = sum + array [i];
  }

  return(sum/length);
}


unsigned char find_maximum(unsigned char *array, int length){
  int max;
  
  max = array[0];

  for(int i = 1; i < length; i++){
    if(array[i] > max){
      max = array[i];
    }
  }
  
  return(max);
}

unsigned char find_minimum(unsigned char *array, int length){
  int min;

  min = array[0];

  for(int i = 1; i < length; i++){
    if(array[i] < min){
      min = array[i];
    }
  }
  
  return(min);
}


void sort_array(unsigned char *array, int length){
}


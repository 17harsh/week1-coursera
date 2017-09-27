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
 * @file stats.h
 * @brief header file for week 1 assignment
 *
 * A header file that includes all the declaration and documentation for the
 * functions from the stats.c file.
 *
 * @author Harsh Singhal
 * @date 2017/09/27
 *
 */
#ifndef __STATS_H__
#define __STATS_H__ 


/******************************************************************************
 * Function: find_maximum
 * Description :
 *	This function takes the set of numbers given by n element array and 
 * 	performs to find the maximum value among the data set by comparing each 
 *	number with rest of the data set.
 * Parameters :
 * 	unsigned char *array: An unsigned char pointer to an n-element data array
 * 	int length	    : An unsigned integer as the size of the array
 *
 * Return :
 * 	Maximum value of the number in the data set provided.
 *****************************************************************************/
unsigned char find_maximum(unsigned char *array, int length);


/******************************************************************************
 * Function: find_minimum
 * Description :
 *	This function takes the set of numbers given by n element array and 
 * 	performs to find the minimum value among the data set by comparing each 
 *	number with rest of the data set.
 * Parameters :
 * 	unsigned char *array: An unsigned char pointer to an n-element data array
 * 	int length	    : An unsigned integer as the size of the array

 * Return :
 * 	Minimum value of the number in the data set provided.
 *****************************************************************************/
unsigned char find_minimum(unsigned char *array, int length);


/******************************************************************************
 * Function: find_mean
 * Description :
 *	This function takes the set of numbers given by n element array and 
 * 	performs to find the average of the number set. It adds the value of the
 *	numbers and then divide it with the quantity of the numbers(size of array)
 * Parameters :
 * 	unsigned char *array: An unsigned char pointer to an n-element data array
 * 	int length	    : An unsigned integer as the size of the array
 *
 * Return :
 * 	Mean of the numbers provided.
 *****************************************************************************/
unsigned char find_mean(unsigned char *array, int length);


/******************************************************************************
 * Function: find_median
 * Description :
 *	This function takes the set of numbers given by n element array and 
 * 	performs to find the median of the number set. 
 *	
 * Parameters :
 * 	unsigned char *array: An unsigned char pointer to an n-element data array
 * 	int length	    : An unsigned integer as the size of the array
 *
 * Return :
 * 	Median of the numbers provided.
 *****************************************************************************/
unsigned char find_median(unsigned char *array, int length);


/******************************************************************************
 * Function: print_staistics
 * Description :
 *	This function takes the value of the maximum, miminum, mean, median value 
 * 	of the given data set calculated in other functions above and prints  
 *	them in nicely formatted way.
 * Parameters :
 * 	int minimum: Previously calculated minimum value
 * 	int maximum: Previously calculated maximum value
 *	int mean   : Previously calculated mean value 
 *	int median : Previously calculated median value
 * Output :
 * 	This function prints the statistically analysed data on console
 *****************************************************************************/
void print_statistics(int minimum, int maximum, int mean, int median);


/******************************************************************************
 * Function: print_array
 * Description :
 *	This function prints the array to the screen given the array of data 
 * 	and its length.
 * Parameters :
 * 	unsigned char *array: An unsigned char pointer to an n-element data array
 * 	int length	    : An unsigned integer as the size of the array
 * Output :
 *	This function prints the data of given array on console.
 *****************************************************************************/
void print_array(unsigned char *array, int length);


/******************************************************************************
 * Function: sort_array
 * Description :
 *	 This function sorts the element of the given array in decreasing order
 * 	 i.e 1st element is the largest and last element is the smallest. 
 * Parameters :
 * 	unsigned char *array: An unsigned char pointer to an n-element data array
 * 	int length	    : An unsigned integer as the size of the array
 * Output :
 *	This function prints the sorted array on console.
 *****************************************************************************/
void sort_array(unsigned char *array, int length);


#endif /* __STATS_H__ */

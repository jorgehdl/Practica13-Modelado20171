#include "arreglos_random.h"
#include <stdio.h>
#include <time.h>

int* arreglo_int(size_t num, int min, int max){
	int* arr;
	int i, random;
	arr = (int *)malloc(num*sizeof(int));
	srand(time(NULL));
	for(i=0;i<=num;i++){
		random = rand() % (max - min + 1) + min;
		arr[i]=random; 
	}

	return arr;
}

double* arreglo_double(size_t num, double min, double max){
	double* arr;
	int i; 
	double random;
	arr = (double *)malloc(num*sizeof(double));
	srand(time(NULL));
	for(i=0;i<=num;i++){
		random = (double)rand()/RAND_MAX*max-min;
		arr[i]=random; 
	}

	return arr;
}

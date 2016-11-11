#include <stdio.h>
#include "b_sort.h"

void bsort(void* base, size_t num, size_t size, int (*compar)(const void*, const void*)){
	int i, j, temp;
	double temp2;


	if (size==4) {
		for(i=0;i<num;i++){
			for (j=0;j<num-i;j++){
				if((*compar)((int*)base+j,(int*)base+j+1)==1){
					temp=*((int*)base+j);
					*((int*)base+j)=*((int*)base+j+1);
					*((int*)base+j+1)=temp;
				}
			}
		}
	}else for(i=0;i<num;i++){
			for (j=0;j<num-i;j++){
				if((*compar)((double*)base+j,(double*)base+j+1)==1){
					temp2=*((double*)base+j);
					*((double*)base+j)=*((double*)base+j+1);
					*((double*)base+j+1)=temp2;
				}
			}
		}
}

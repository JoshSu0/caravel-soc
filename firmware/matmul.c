#include <matmul.h>

int __attribute__ ( ( section ( ".mprjram" ) ) ) matmul(void ){

	int i=0;
	int j;
	int k;
	int sum;
	int kk;
	unsigned int count = 0;

	for (i=0; i<SIZE; i++){
		for (j=0; j<SIZE; j++){
			sum = 0;
			for(k = 0;k<SIZE;k++)
				sum += A[(i<<SHIFT) + k] * B[(k<<SHIFT) + j];
			result[(i<<SHIFT) + j] = sum;
		}
	}

	return 0;
}

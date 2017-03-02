//  main.c
//  matrixA
//
//  Created by Rakkan Jintasatien on 2/27/2560 BE.
//  Copyright © 2560 Rakkan Jintasatien. All rights reserved.
//

#include <stdio.h>

int main() {
    
    FILE *file;
    file = fopen("mat100.dat", "r");
    int a;
    fscanf(file, "%d", &a);
    int A[a][a];
    int B[a][a];
    
    for (int i = 0 ; i < a ; i++) {
        for (int j = 0 ; j < a ; j++) {
            fscanf(file, "%d", &A[i][j]);
        }
    }
    fclose(file);

    
    for (int i = 0 ; i < a ; i++) {
        for (int j = 0 ; j < a ; j++) {
            int sum = 0;
            for (int k = 0 ; k < a ; k++) {
                sum += (A[i][k] * A[k][j]);
            }
	    B[i][j] = sum;
        }
    }
    
}

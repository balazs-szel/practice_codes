//
//  002.c
//  practice
//
//  Created by Szél Balázs on 2023. 04. 17..
//

#include "002.h"

int main() {
    int arr[100], n, i, j, temp;
    
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);
    
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Bubble sort algorithm
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("The sorted array is:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

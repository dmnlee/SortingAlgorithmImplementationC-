#include <iostream>
#include <cstdlib>
#include <stdio.h>


using namespace std;


const int arrayElementCount = 99;
int sortArray[arrayElementCount];


void populateSortArray(){
   
    for(int arrayInitial = 0; arrayInitial < arrayElementCount; arrayInitial++){
        int x = rand() % 999;
         sortArray[arrayInitial] = x;
    }
}   

void partition(int sortArray[], int low, int high, int &i, int &j) 
{ 
    i = low-1, j = high; 
    int p = low-1, q = high; 
    int arrayPartition = sortArray[high]; 
  
    while (true) 
    { 
        // From left, find the first element greater than 
        // or equal to v. 
    while (sortArray[++i] < arrayPartition); 
  
        // From right, find the first element smaller than or 
        // equal to v 
        while (arrayPartition < sortArray[--j]) 
            if (j == low) 
                break; 
  
        // If i and j cross, then we are done 
        if (i >= j) break; 
  
        // Swap, so that smaller goes on left greater goes on right 
        swap(sortArray[i], sortArray[j]); 
  
        // Move all same left occurrence of pivot to beginning of 
        // array and keep count using p 
        if (sortArray[i] == arrayPartition) 
        { 
            p++; 
            swap(sortArray[p], sortArray[i]); 
        } 
  
        // Move all same right occurrence of pivot to end of array 
        // and keep count using q 
        if (sortArray[j] == arrayPartition) 
        { 
            q--; 
            swap(sortArray[j], sortArray[q]); 
        } 
    } 
  
    // Moves pivot element to its correct index 
    swap(sortArray[i], sortArray[high]); 
  
    // Move all left same occurrences from beginning 
    // to adjacent to arr[i] 
    j = i-1; 
    for (int k = low; k < p; k++, j--) 
        swap(sortArray[k], sortArray[j]); 
  
    // Move all right same occurrences from end 
    // to adjacent to arr[i] 
    i = i+1; 
    for (int k = high-1; k > q; k--, i++) 
        swap(sortArray[i], sortArray[k]); 
} 
  
// 3-way partition based quick sort 
void quicksort(int sortArray[], int low, int high) 
{ 
    if (high <= low) return; 
  
    int i, j; 
  
    partition(sortArray, low, high, i, j); 
  
    // 
    quicksort(sortArray, low, j); 
    quicksort(sortArray, i, high); 
} 
  
// prints array 
void printarr(int sortArray[], int n) 
{ 
    for (int i = 0; i < n; ++i) 
        printf("%d  ", sortArray[i]); 
    printf("\n"); 
} 
  
//main function
int main() 
{ 
    populateSortArray();
    int size = sizeof(sortArray) / sizeof(int); 
    printarr(sortArray, size); 
    quicksort(sortArray, 0, size - 1); 
    printarr(sortArray, size); 
    return 0; 
} 




/*
 * Merge 3 Way Sort 
 * Daniel Drury
 */

#include <iostream>

using namespace std;


//Take 3 way split variables and add them back to the master array.
void merge(int* a, int l, int h, int m)
{
    
    //Placeholder Variables
    int i = l;
    int j = m+1;
    int k = 0;
    int t[h - l + 1];
    
    while(i <= m && j <= h) {
        if(a[i] < a[j]) {
            t[k] = a[i];
            k++;
            i++;
        } else {
            t[k] = a[j];
            k++;
            j++;
        }
    }

    while(i <= m) {
        t[k] = a[i];
        k++;
        i++;
    }
    while(j <= h) {
        t[k] = a[j];
        k++;
        j++;
    }
    
    for(i = l; i <= h; i++) {
        a[i] = t[i - l];
        cout << i << ": ";
        cout << a[i] << endl;
    }
}


void sort(int* a, int l, int h)
{
    int m;
    if(l < h) {
        m = (l + h) / 2;
        sort(a, l, m);
        sort(a, m + 1, h);
        merge(a, l, h, m);
    }
}

int main()
{
    int length = 99;
    int arr[length];
    
    for(int i = 0; i < length; i++) {
        arr[i] = (rand() % 100 + 1);
    }

    cout << "\nUnsorted:";
    for(int i = 0; i < length; i++) {
        cout << " " << arr[i];
    }
    
    cout << endl;
    cout << endl;

    sort(arr, 0, length - 1);
    
    cout << "\nSorted:";
    for(int i = 0; i < length; i++) {
        cout << " " << arr[i];
    }
    return 0;
}
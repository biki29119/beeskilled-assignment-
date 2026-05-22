#include <iostream>
using namespace std;

int bubbleSort(int arr[], int size) {
    int swapCount = 0;
    int totalPasses = 0;
    
    for (int i = 0; i < size - 1; i++) {
        totalPasses++;
        bool swapped = false;
        
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                swapCount++;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
    
    cout << "Total passes performed: " << totalPasses << endl;
    return swapCount;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "\nOriginal array: ";
    printArray(arr, size);
    
    
    int totalSwaps = bubbleSort(arr, size);
    
    cout << "Sorted array: ";
    printArray(arr, size);
    

    cout << "\nTotal number of swaps performed: " << totalSwaps << endl;
    
    return 0;
}
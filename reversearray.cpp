#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int left = 0;        
    int right = size - 1; 
    
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
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
    

    reverseArray(arr, size);
    
    cout << "Reversed array: ";
    printArray(arr, size);
    
    return 0;
}
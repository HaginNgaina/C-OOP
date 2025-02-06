//author: Ngaina
//this is a code to demonstrate Traversing and Insertion in Array data structures in C++ using Numbers between 1-9 and prompt user for insertions and traversals
#include <iostream>  
using namespace std;  

const int MAX_SIZE = 10; // Maximum size of the array.I decided to limit array size  

void displayArray(int arr[], int size) {  
    cout << "Current array: ";  
    for (int i = 0; i < size; i++) {  
        cout << arr[i] << " ";  
    }  
    cout << endl;  
}  

int main() {  
    int arr[MAX_SIZE]; // Array declaration  
    int size = 0; // Current size of the array  
    int number;  

    cout << "Array insertion program (1-9)" << endl;  

    // Input loop to allow multiple insertions  
    while (true) {  
        // Prompt user for input  
        cout << "Please enter a number between 1 and 9 (or -1 to stop): ";  // since I used a loop -1 is for stopping the loop
        cin >> number;  

        // Check if the user wants to stop  
        if (number == -1) {  
            break; // Exit the loop if the user inputs -1  
        }  

        // Validate the number  
        if (number < 1 || number > 9) {  
            cout << "Invalid number. Please enter a number between 1 and 9." << endl;  
            continue; // Continue to the next iteration  
        }  

        // Check if there is space for more numbers  
        if (size >= MAX_SIZE) {  
            cout << "Array is full! Cannot insert more numbers." << endl;  
            continue; // Skip to the next iteration if array is full  
        }  

        // Insert the number into the array  
        arr[size] = number;  
        size++; // Increment the size  

        // Display the current state of the array  
        displayArray(arr, size);  
    }  

    cout << "Final array contents: ";  
    displayArray(arr, size);  
    cout << "Exiting program." << endl;  

    return 0;  
}
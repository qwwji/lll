#include <iostream> 
#include <cstdlib> // Include the necessary library for rand() 
using namespace std; 
 
int main() 
{ 
    int n; 
     
    cout << "Vvedite razmer massiva pzhshka: "; 
    cin >> n; 
    int array[n]; 
     
    for (int i = 0; i < n; i++) 
        array[i] = rand() % 10000; 
     
    cout << "Original Array: "; 
    for (int i = 0; i < n; i++) 
        cout << array[i] << "\t"; 
     
    cout << endl << endl; 
     
    // Bubble sort implementation 
    for (int j = 0; j < n-1; j++) 
    { 
        for (int i = 0; i < n-1; i++) 
        { 
            if (array[i] > array[i+1]) 
            { 
                int temp = array[i]; 
                array[i] = array[i+1]; 
                array[i+1] = temp; 
            } 
        } 
    } 
     
    cout << "Sorted Array: "; 
    for (int i = 0; i < n; i++) 
        cout << array[i] << "\t"; 
     
    return 0; 
}
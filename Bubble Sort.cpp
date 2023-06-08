#include<iostream>
using namespace std;

// Taking Input of elements of array
void input(int arr[], int size){

    for(int i=0; i<size; i++){

        cin>>arr[i];

    }

}

// Taking Output of elements of array
void print(int arr[], int size){

    for(int i=0; i<size; i++){

        cout<<arr[i]<<" ";

    }

}

// Bubble Sort

void bubble_sort(int arr[], int size){

    for(int i = size-1; i >= 1; i-- ){

        // creating a variable for the condition -> array is already sorted or not
        bool swapped = false;

        for(int j = 0; j<=i-1; j++ ){

            if(arr[j]>arr[j+1]){

                swap(arr[j],arr[j+1]);
                swapped = true;

            }

        }

        // Condition for checking array is already sorted or not
        if(swapped==false){
            break;
        }

    }

}

int main()
{
    // Initialising array
    int arr[100]={0},size;

    cout<<"Enter the size of array: ";
    cin>>size;

    // Taking Input
    input(arr,size);



    bubble_sort(arr,size);       



    // Printing the array
    print(arr,size);


    return 0;
}

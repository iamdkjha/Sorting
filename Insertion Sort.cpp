#include<iostream>
#include<climits>
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


// Insertion Sort
void insertion_sort(int arr[], int size){

    for(int i = 1; i<size; i++){

        int j = i-1;

        while( j>=0 && arr[j]>arr[j+1] ){

            swap(arr[j+1],arr[j]);
            j--;

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


    insertion_sort(arr,size);                



    // Printing the array
    print(arr,size);


    return 0;
}

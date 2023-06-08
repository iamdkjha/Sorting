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

// Selection Sort
void selection_sort(int arr[], int size){

    for( int i = 0; i <= size-2 ; i++ ){

                int min = i;

                for( int j = i; j <= size-1; j++ ){

                    if( arr[j] < arr[min] ){

                        min = j;

                    }

                }
                
                swap( arr[min], arr[i] );

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



    selection_sort(arr,size);       



    // Printing the array
    print(arr,size);


    return 0;
}

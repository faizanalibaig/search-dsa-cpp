#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            cout<<"value founded on index: ";
            return i;
        }
    }
    return -1;
}

int main() {
    
    int arr[5]={1,2,3,4,5};
    int size= sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the value to Find: ";
    cin >>key;
    
    cout<<LinearSearch(arr, size, key);
    
    
    return 0;
}
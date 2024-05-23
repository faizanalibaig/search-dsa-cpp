#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int s=0;
    int e=size;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    
}

int main() {
    int arr[5]={681,20,3919,94,5978};
    int size=sizeof(arr)/sizeof(int);
    
    int key;
    cout<<"enter key: ";
    cin>>key;
    
    cout<<BinarySearch(arr,size,key);

    return 0;
}

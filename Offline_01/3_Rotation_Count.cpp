#include <bits/stdc++.h>
using namespace std;


int CountRotation( int arr[],int pointer, int left, int right)
{
    if (left > right){
        return -1;
    }
    
    
    int mid = (left+ right)/2;  //find mid.

    if (arr[mid]==pointer){
        return mid;
    }

    if (arr[left]<= arr[mid]){
        if(pointer >= arr[left] && pointer <= arr[mid]){
            return CountRotation(arr,pointer,left,mid-1);
        }
        return CountRotation(arr,pointer,mid+1,right);
    }

    if (pointer>= arr[mid] && pointer<= arr[right]){
        return CountRotation(arr,pointer, mid+1, right);
    }

    return CountRotation( arr, pointer, left, mid-1);


}

int main()
{
    int arr[] = {7,9,11,12,5};
    int n = 5;
    int pointer = 5;

    int index = CountRotation(arr, pointer, 0, n-1);
    if (index == -1){
        cout << " " << endl;
    }
    else{
        cout << " " << index << endl;
    }  

}

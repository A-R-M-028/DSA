#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
//WITH EXTRA SPACE
void merge(int* arr, int start, int end) {
    //first time [4,5] will be sent
    int mid = start + (end - start) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;
    int* leftArr = new int[len1];
    int* rightArr = new int[len2];

    // copy values to left array
    int k = start;
    for (int i = 0; i < len1; i++) {
        leftArr[i] = arr[k++];
    }

    // copy values to right array
    k = mid + 1;
    for (int i = 0; i < len2; i++) {
        rightArr[i] = arr[k++];
    }

    // merge logic into main
    int leftArrIndex = 0;
    int rightArrIndex = 0;
    //why start? jekhan thek call holo sekhane update hobe!
    int mainArrIndex = start;
    while (leftArrIndex < len1 && rightArrIndex < len2) {
        if (leftArr[leftArrIndex] < rightArr[rightArrIndex]) {
            arr[mainArrIndex++] = leftArr[leftArrIndex++];
        }
        else {
            arr[mainArrIndex++] = rightArr[rightArrIndex++];
        }
    }

    // copy logic for left array rest part
    while (leftArrIndex < len1) {
        arr[mainArrIndex++] = leftArr[leftArrIndex++];
    }

    // copy logic for right array rest part
    while (rightArrIndex < len2) {
        arr[mainArrIndex++] = rightArr[rightArrIndex++];
    }

    // delete the heap
    delete[] leftArr;
    delete[] rightArr;
}
void mergeSort(int* arr,int start,int end){
    //base case
    if(start>=end) return;
    int mid=start+(end-start)/2;
    //left sort by recursion
    mergeSort(arr,start,mid);
    //right sort by recursion
    mergeSort(arr,mid+1,end);
    //time to merge
    merge(arr,start,end);

}

int main()
{
    int arr[]={4,5,13,2,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int e=n-1;
    mergeSort(arr,s,e);
    //output
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}
//WITHOUT EXTRA SPACE
// #include<iostream>
// #include<stdio.h>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include <bits/stdc++.h>
// using namespace std;
// //confusion is therere inside merge
// void merge(int* arr, int start, int mid, int end) {
//     int leftArrIndex = start;
//     int rightArrIndex = mid + 1;
//     while (leftArrIndex <= mid && rightArrIndex <= end) {
//         if (arr[leftArrIndex] <= arr[rightArrIndex]) {
//             leftArrIndex++;
//         } else {
//             int temp = arr[rightArrIndex];
//             for (int i = rightArrIndex - 1; i >= leftArrIndex; i--) {
//                 arr[i + 1] = arr[i];
//             }
//             arr[leftArrIndex] = temp;
//             leftArrIndex++;
//             mid++;
//             rightArrIndex++;
//         }
//     }
// }

void mergeSort(int* arr, int start, int end) {
    //base case
    if (start >= end) return;
    int mid = start + (end - start) / 2;
    //left sort by recursion
    mergeSort(arr, start, mid);
    //right sort by recursion
    mergeSort(arr, mid + 1, end);
    //time to merge
    merge(arr, start, mid, end);
}

int main() {
    int arr[] = {4, 5, 13, 2, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 0;
    int e = n - 1;
    mergeSort(arr, s, e);
    //output
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

#include<iostream>
using namespace std;

//there is sum errorrrrrrrrrrrrrrr
int partition(int* arr,int s,int e){
    //step:1 select pivot
    int pivotIndex=s;
    int pivotElement=arr[s];
    //find right position for pivot element
    int count=0;
    for (int  i = s+1; i <= e; i++)
    {
        if(arr[i]<=pivotElement){
            count++;
        }
    }
    //step:2 now ready to place pivot to right
    int rightIndex=s+count;
        pivotIndex=rightIndex;
    swap(arr[pivotElement],arr[rightIndex]);
    //step:3 left smaller and right bigger all element
    int i=s;
    int j=e;
    while (i<pivotIndex && j>pivotIndex)//this is game
    {
        while(arr[i]<pivotElement){
            i++;
        }
        while(arr[j]>pivotElement){
            j--;
        }
        //here 2 case can happen
        //case 1: you found key
        //case 2: you not found key
        if(i<pivotIndex && j>pivotIndex){//this is also game
            swap(arr[i],arr[j]);
        }
    }

    return pivotIndex;
      
}

void quickSort(int* arr,int s,int e){
    //base case
    if(s>=e) return ;

    //partition logic (do 1 job, rest will do recursion)
    int p=partition(arr,s,e);
    //recursive logic
    //pivot's left
    quickSort(arr,s,p-1);
    //pivot's right
    quickSort(arr,p+1,e);
}

int main(){
    int arr[]={8,1,3,4,20,50,30};
    int n=7;
    int s=0;
    int e=n-1;
    quickSort(arr,s,e);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
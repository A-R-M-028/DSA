#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
//pick the ith value but prev all vale will be sorted
int main()
{
    vector<int>arr{10,1,7,6,14,9};
    int n=arr.size(); 

        for (int i = 1; i < n; i++)
        {//fetch the value, 1st 0th place no need to sort
        //step A -> fetch the value 
        int value=arr[i];
        int j = i-1;
            for (; j>=0; j--)
            {
                if(arr[j]>value){
                    //step B -> compare
                    arr[j+1]=arr[j];//or can sy arr[i]=arr[j]
                }
                //step C -> break
                else break;
            }
            //step D -> copy
            arr[j+1]=value;   //as j was -1 for j--
        }
        //printing is done here
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }

    return 0;
    }

        
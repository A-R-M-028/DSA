#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;
//dont do hard code, take user input
//USING VECTOR, DYNAMIC ARRAY
int findUnique(vector<int>arr){
    int ans=0;//fadak nehi padta num xor 0 is num and num xor 0 is zero
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int n;
    cout<<"How many elem are there?or size of array?";
    cin>>n;
    vector<int>arr(n);
    //using for loop take the elem
    for (int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    // //for display the array
    // for (int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }
    int uniqueElement=findUnique(arr);
    cout<<"Unique elem is: "<<uniqueElement<<endl;

    return 0;
}
/*
How the XOR operation works in the findUnique function:

Suppose the arr vector contains the values [2, 3, 5, 6, 3, 2, 5].

The ans variable is initialized to 0.

The for loop iterates through each element in the arr vector.

a. The first element is 2. The ans variable is XORed with 2, which sets ans to 2.

b. The second element is 3. The ans variable is XORed with 3, which sets ans to 1.

c. The third element is 5. The ans variable is XORed with 5, which sets ans to 4.

d. The fourth element is 6. The ans variable is XORed with 6, which sets ans to 2.

e. The fifth element is 3. The ans variable is XORed with 3, which sets ans to 1.

f. The sixth element is 2. The ans variable is XORed with 2, which sets ans to 3.

g. The seventh element is 5. The ans variable is XORed with 5, which sets ans to 6.

The for loop finishes iterating through all the elements in the arr vector.

The findUnique function returns the value of ans, which is 6.

***In short xor eliminate same value and store unique value***

*/
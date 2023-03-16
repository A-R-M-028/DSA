#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;
//very very clever thing must remember this stuff as typical to remember

// int main(){
//     vector<vector<int> >arr;//there need a space as giving error
//     vector<int>a{1,2,3};
//     vector<int>b{4,5,6};
//     vector<int>c{7,8,9};

//     arr.push_back(a);
//     arr.push_back(b);
//     arr.push_back(c);

//     for (int i=0;i<arr.size();i++){
//         for (int j=0;j<arr[0].size();j++){//here j'th size is inner vector size of 0th 
//         //or if all col has different indexes then it will follow rows -->
//         //for (int j=0;j<arr[i].size();j++)
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }


//     return 0;
// }

int main(){
    //now most dangerous part of vector----->>>>>
    int row=5;
    int col=5;
    //FORMULAS FOR COL--->>>
    //IF M*N ARE DIFFERENT-->> j=0;j<arr[i].size();
    //IF M*N ARE SAME-->> j=0;j<arr[0].size();


    vector<vector<int> >arr(row,vector<int>(col,-8));//what is this:?
    
    for (int i=0;i<arr.size();i++){
        for (int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }  

    return 0;

}
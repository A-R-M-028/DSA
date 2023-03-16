#include <iostream>
#include<stdio.h>
using namespace std;

                                        /*MOST IMPORTANT EXAMPLE*/

int main(){
int n;
cout<<"Put the row number:"<<"\n";
cin>>n;

// for (int row=0;row<n;row++){
// for (int col=0;col<n-row-1;col++){
//     cout<<" ";
// }
// //formula is 2*0+1,2*1+1,2*2+1 rowwise
// int start=1;
// for(int col=0;col<2*row+1;col++){   
//     //1st and last row 
// if(row==0||row==n-1){
//     //even
//     if(col%2==0){
//     cout<<start++;
//     }
// //odd
//     else cout<<" ";
//     }
// //rest of the part
// else  
// {
//     if(col==0){
//         cout<<1;
//     }
//     else if(col==2*row+1-1){
//         cout<<row+1;
//     }
//     else cout<<" ";
// } 
// }
// cout<<endl;
// }
//WOW ITNI SI CHOTU CODE A HOYE GACHE *****
//TYPE 1
// for (int i=0;i<n;i++){
//     for (int j=0;j<=i;j++){
//         if (j==0||i==n-1||j==i)
//         cout<<j+1;
//         else cout<<" ";
//     }
//     cout<<endl;
// }
// return 0;
// }

//TYPE 2 (inverted)
for (int i=0;i<n;i++){
    for (int j=i+1;j<=n;j++){
        if (j==i+1||j==n||i==0)
        cout<<j+1;
        else cout<<" ";
    }
    cout<<endl;
}
return 0;
}


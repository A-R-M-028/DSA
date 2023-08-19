//time complexcity
#include<iostream>
#include<string.h>
using namespace std;

void permutation(string &str,int i){
    //base case 
    if(i>=str.length()){
        cout<<str<<" ";
        return;
    }
    for (int j = i; j < str.length(); j++)
    {
        //swap 
        swap(str[i],str[j]);
        permutation(str,i+1);

    //here output is repeating like abc abc repeating
    //soln: /"baacktracking"/->single line(to recreate i/p)
    swap(str[i],str[j]);//returning time value will be updated(swap wala value) 
    }
}
int main()
{
 string str="abc";
 int i=0;
 permutation(str,i);
 return 0;
}
#include <iostream>
#include<string.h>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

//auto function or for each loop
// int autoFun(){
// 	    for(auto valuesInsideAns:ans){
//         cout<<valuesInsideAns<<" ";
//     }
// }

int swapingUsingXor(){//pass by address int &a,int add b
	// a=a^b;
	// b=a^b;//reversed
	// a=a^b;//reversed
}

// int swapingUsingSwap/fn(){//pass by address int &a,int add b
// 	swap(a,b);
// }

// int swapingUsingTemp(){//pass by address int &a,int add b
// 	int temp=a;
// 	a=b;
// 	b=temp;
// }

void printName(int n){
    for (int i=0;i<n;i++){
        cout<<"A.R.M"<<endl;
    }
}
void printNumber(int x){
    cout<<x;
}
//function declaration
int add(int x,int y);
int findMax(int a,int b,int c){
    if(a>b&&a>c){
        return a;
    }
    else if(b>a&&b>c){
        return b;
    }
    else return c;
}
//here x is parameter
void printCounting(int x){
    for (int i=0;i<x;i++){
        cout<<i<<" ";
    }
    cout<<endl; 
}
// int getGrade(int marks){
//     if(marks>=90)
//     return 'A';
//     else if(marks>=80)
//     return 'B';
//     else if(marks>=70)
//     return 'C';
//     else if(marks>=60)
//     return 'D';
//     else return 'F';
// }
 int getGrade(int marks){
    switch(marks/10){
        case 10: return 'A';
        case 9: return 'A';
        case 8: return 'B';
        case 7: return 'C';
        case 6: return 'D';
        default: return 'F';
    }
 }
int getSumOfnNum(int n){
    int result=0;
    for(int i=1;i<=n;i++){
         result=result+i;
    }
    return result;
}
int getEvenSum(int n){
    int result=0;
    for(int i=2;i<=n;i+=2){
        result+=i;
    }
    return result;
}
int areaOfCircle(int x){
	return 3.14*x*x;
}
// bool evenOrOdd(int x){
// 	if(x%2==0){
// 		return true;
// 	}
// 	else return false;
// }// another way (bitwise)
bool evenOrOdd(int x){
	if((x&1)==0){
		return true;//even
	} 
	else return false;//odd
	}

long long int factorial(int x){
	int fact=1;
	for(int i=1;i<=x;i++){
		fact=fact*i;
		// cout<<fact;
	}
	return fact;
}//how to derive fact of large num like 20 and more

// bool primeOrNot(int x){
// //Prime must be divisible by 1 and the number itself so ignore 1st and last
// 	for(int i=2;i<x;i++){
// 		if(x%i==0){
// 			return 0;
// 			break;
// 		}
// 	}
// 	return 1;
// }// using sqrt (optimized)
bool primeOrNot(int x){
//Prime must be divisible by 1 and the number itself so ignore 1st and last
	for(int i=2;i</*sqrt(x)*/x;i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
bool primeUptoN(int x){
//Logic is you have to check every dammed number and return value
	for(int i=2;i<x;i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
//yeah huii na baat******
void printAllDigit(int x){
	vector<int>arr;
	while(x){
		int rem=x%10;
		arr.push_back(rem);
		x=x/10;

	}
	for (int i = arr.size()-1; i >= 0; i--)
	{
		cout<<arr[i]<<" ";
	}
	
}

int createNumUsingDigit(int x1,int x2){
	//if you add string it only concatinate not addition will work
	//Next see different approach
	string s1=to_string(x1);
	string s2=to_string(x2);
	string str=s1+s2;
	int result=stoi(str);
	return result;
}
int numtoDigit(int x){
	//let x is 125 
	int num=x;
	int rem;
	while(x>0){
		rem=x%10;
		cout<<rem<<" ";
		x=x/10;
	}
}
int digitToNum(){
	int count;
	int num=0;
	//let cin is 2 5 7 8 9
	// cout<<"How many digit: ";
	// cin>>count;
	count=5;
	int arr[]={2,5,7,8,9};
	for(int i=0;i<count;i++){
		num=num*10+arr[i];
	}
	cout<<num;
}
	int countSetBits(int x){
		int count = 0;
		//let x is 3 set bit is 2 110
		while(x!=0){
			if(x&1)// if x&1==1
			count++;
			x=x>>1;
		}
	return count;
	}
	int kmToMiles(float x){
		float inMile;
		//formula is 1 mile = 1.609 km
		return inMile=(double)(1/1.609)*x;
		//can't able to convert it to float, it's giving always int
	}
	void asciiConfusion(char x){
		//only for char->int, int->char
		cout<<(int)x;
	}
	int reverse(int x){
		//#leetcode 1
		int isNeg=false;
		//for -ve first + it then return with +ve
		if(x<0){
			isNeg=true;
			x=-x;//x become +ve
		}
		if(x<=INT_MIN){
			//<= inclusive as 21....48 if positive then cant place in + int place
			return 0;
		}
		int rev=0;
		while(x!=0){
			if(rev>INT_MAX/10){
				return 0;
				//little bit confusin in this scope
			}
		int rem=x%10;
		rev=rev*10+rem;
		x=x/10;
		}

		return isNeg?-rev:rev;

	}
	int setBit(int x){
		//#leetcode 2
		//let x=10
		//k=2 as set the bit 2 as mask
		int k=2;
		int mask=1<<k;//100
		int set=x|mask;//1010 or 100 = 1110 -> 14
		return set;
	}
	int conTemp(int celsius){
		//celsius -> kelvin and fahrenheit
		float kelvin=celsius*273.15;
		float fahrenheit=celsius*1.80+32.00;
		// return kelvin;
		return fahrenheit;
	}
	void MIN_MAX(){
		cout<<"MAX "<<INT_MAX<<endl;
		cout<<"MIN "<<INT_MIN;
	}
	int decimalToBinary(int x){
		int toBinary=0;
		int i=0;
		while(x>0){
			int bit=x%2;
		toBinary=toBinary+bit*pow(10,i++);
			x=x/2;
		}
		return toBinary;
	}
	int binaryToDecimal(int x){
		int toDecimal=0;
		int i=0;
		while(x>0){
			int bit=x%10;
			toDecimal=toDecimal+bit*pow(2,i++);
			x=x/10;
		}
		return toDecimal;
	}

	string to_str(int n){
	// % for right most digit
	// / for next division or remove integer value
	//always char is used to add all as char
	//will run upto upto true
}
int to_stoi(string n){
	//will run upto str.length()
	//use formula 
}
int squreRoot(int n){
	int i=0;int result=0;
	while(result<=n){
		result=i*i;
		i++;
	}
	return i-1;
}

int power(int num,int power){
	//let num is 2, exp is 3
	int result=1;
	while(power){
		result=num*result;
		power--;
	} 
	
}

int main() {

	// int n;
	// cout<<"Put the decimal value: ";
	// cin>>n;
	// int ans=decimalToBinary(n);	
	// cout<<ans;

	// int n;
	// cout<<"Put the decimal value: ";
	// cin>>n;
	// int ans=binaryToDecimal(n);	
	// cout<<ans;

	// MIN_MAX();

	// int n;
	// cout<<"cel is: \n";
	// cin>>n;
	// float result=conTemp(n);
	// cout<<result;
	// //returning result cant in float? 

	// int n;
	// cout<<"Num is: \n";
	// cin>>n;
	// int result=setBit(n);
	// cout<<result;

	// int n;
	// cout<<"Num is: \n";
	// cin>>n;
	// int result=reverse(n);
	// cout<<result;

	// char n;
	// cout << "Enter the number: " << endl;
	// cin>>n;
	// asciiConfusion(n);

	// int n;
	// cout << "Enter the number: " << endl;
	// cin>>n;
	// cout<<"Now your result is: "<<kmToMiles(n)<<endl;

	// int n;
	// cout << "Enter the number: " << endl;
	// cin>>n;
	// int result=countSetBits(n);
	// cout<<"Now your result is: "<<result<<endl;

	// digitToNum();

	// int n;
	// cout << "Enter the number: " << endl;
	// cin>>n;
	// int ans=numtoDigit(n);

	// int n1,n2;
	// cout << "Enter the 1st value " << endl;
	// cin >> n1;
	// cout << "Enter the 2nd value " << endl;
	// cin >> n2;
	// int ans = createNumUsingDigit(n1,n2);
 	// cout << "The number after concat " << n1<<"and"<<n2<< "is: " << ans << endl;

	int n;
	cout<<"Put the number: "<<"\n";
	cin>>n;
	printAllDigit(n);

	// int n;
	// cout<<"Put the number: "<<"\n";
	// cin>>n;
	// bool isPrime=primeOrNot(n);
	// if(isPrime)
	// cout<<"Prime";
	// else cout<<"Not prime";

	// int n;
	// cout<<"Put the number: "<<"\n";
	// cin>>n;
	// for(int i=2;i<=n;i++){
	// if(primeOrNot(i)==1)
	// cout<<i<<" ";
	// }

	// int n;
	//  cout<<"Put the num: "<<endl;
	//  cin>>n;
	// long long int ans=factorial(n);
	// cout<<ans;

	// int n;
	// cout<<"Put the num: "<<endl;
	// cin>>n;
	// bool result=evenOrOdd(n);
	// if(result==1)
	// cout<<"even";
	// else
	// cout<<"odd";

	// int area=areaOfCircle(r);
	// cout<<area;

    // int n;
	//function call
    // cout<<"Print the number:";
    // cin>>n;
	// printName(n);

	// int a = 5;
	// cout << "Address of a is: " << &a << endl;
	// printNumber(a);

	// int a;
	// cout << "Enter the value of a " << endl;
	// cin >> a;

	// int b;
	// cout << "Enter the value of b " << endl;
	// cin >> b;

	// int sum = add(a, b);

	// cout << "Addition result is: " << sum << endl;

	// int a,b,c;
	// cin >> a >> b >> c;

	// int maximumNumber = findMax(a,b,c);
	// cout << maximumNumber << endl;

	// int n;
	// cout << "Enter the value of n" << endl;
	// cin >> n;

	// //n is argument
	// printCounting(n);

	// int marks;
	// cout << "Enter the marks: " << endl;
	// cin >> marks;

	// char finalGrade = getGrade(marks);
	// cout << finalGrade << endl;
    // for(int i=0;i<=100;i++){
    //     char ans=getGrade(i);
    //     cout<<"For i="<<i<<" "<<"Grade is: "<<ans<<endl;
    // }

	// for(int i=0; i<=100; i++) {
	// 	char ans = getGrade(i);
	// 	cout << "Grade for marks = " << i << " is " << ans << endl;
	// }

	// int n;
	// cout << "Enter the value of n " << endl;
	// cin >> n;
	// int ans = getSumOfnNum(n);
	// cout << "Sum upto " << n << " is  " << ans << endl;

	// int n;
	// cout << "Enter the value of n " << endl;
	// cin >> n;
	// cout << "Calling getEvenSum function" << endl;
	// int ans = getEvenSum(n);
	// cout << "Even sum is  " << ans << endl;
	return 0;
}
//Function defination
// int add(int x,int y){
//    int add=x+y;
//    return add;
// }
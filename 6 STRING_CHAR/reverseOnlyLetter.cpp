class Solution {
public:
    string reverseOnlyLetters(string s) {
        // bool alpha(int ch){
        //     if(ch>=65&&ch<=90||ch>=97&&ch<=122){
        //         return true;
        //     }
        //     else false;
        // }
        //or isalpha(ch);->stl
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if(isalpha(s[i])&&isalpha(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!isalpha(s[i])){
                i++; 
                }
                else //(!isalpha(s[j]))
                j--;
                }
                 return s;
        }

        
    };
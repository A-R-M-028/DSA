class Solution {
public:
bool isVowel(char ch){
    // ch=tolower(ch);
    // if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
    //     return true;
    // }
    // else return false;
    ch=tolower(ch);
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';//only this return true
}
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if(isVowel(s[i]) && isVowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(isVowel(s[i])==false){//(!(isVowel(s[i]))
                i++;
            }
            else{
                j--;
            }

        }
    return s;
        
    }
};
// class Solution {
// public:
//     bool isVowel(char c){
//         c = tolower(c);
//         if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
//             return true;
//         }
//         else 
//             return false;
//     }

//     string reverseVowels(string s) {
//         int i = 0;
//         int j = s.size() - 1;
//         while(i <= j){
//             if(isVowel(s[i]) && isVowel(s[j])){
//                 swap(s[i], s[j]);
//                 i++;
//                 j--;
//             }
//             else if(isVowel(s[i]) == false){
//                 i++;
//             }
//             else{
//                 j--;
//             }
//         }
//         return s;
//     }
// };


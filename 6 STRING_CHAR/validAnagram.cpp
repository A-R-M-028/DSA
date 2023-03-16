class Solution {
public:
    bool isAnagram(string s, string t) {
        // int n1=s.length();
        // int n2=t.length();
        // int n=max(n1,n2);

        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // for(int i=0;i<n;i++){
        //     if(s[i]!=t[i]){
        //         return false;
        //     }

        // }
        // return true;

        int hash[256]={0};
        for(int i=0;i<s.length();i++){
            hash[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            hash[t[i]]--;
        }
        for(int i=0;i<256;i++){
            if(hash[i]!=0){
                return false;
            }
        }
        return true;

        
    }
};
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        bool mapped[256]={0};
        int hash[256]={0};
        for(int i=0;i<s.size();i++){
            if(hash[s[i]]==0&&mapped[t[i]]==0){
            hash[s[i]]=t[i];//for string
            mapped[t[i]]=1;//mark it
            }

        }
        for(int i=0;i<s.size();i++){
            if(char(hash[s[i]])!=t[i]){
                return false;
            }
        }
        return true;
        
    }
};
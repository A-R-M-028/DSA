class Solution {
public:
    string intToRoman(int num) {
string romanSymbol[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
int value[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
string ans="";
for(int i=0;i<13;i++){
    while(num>=value[i]){
        ans+=romanSymbol[i];
        num-=value[i];
    }
    // if(num>=value[i]){
    //     ans+=romanSymbol[i];
    //     num-=value[i];
    // }//2 loop is required as when num 3 then i=12, then only inside while
    //3 iteration will be happened!
}
return ans;   
    }
};
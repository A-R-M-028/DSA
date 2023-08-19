    int firstRepeated(int arr[], int n) {
        // code here
        //2 for loop not used here as t.c is nlogn
        for (int i=0;i<n;i++){
            bool isRep=false;
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                isRep=true
                return i+1; 
                }

            }
        }
        return -1;
    
    //unordered_map4<int,int>hash //using stl hashmap 
    //but i will create it manually its also called hashing technique
    //find max value in that array
    // int maxi=INT_MIN;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>maxi){
    //         maxi=arr[i];
    //     }
        
    // }
    // //creating hash
    // int hash[maxi]={0};
    // for (int i=0;i<n;i++){
    //     hash[arr[i]]++;
        
    // }
    // for (int i=0;i<maxi;i++){
    //     if(hash[i]>1){
    //         return i+1;
    //     }
    // }
    
    // return -1;
    // unordered_map<int,int>hash; //using stl hashmap 
    //     for (int i=0;i<n;i++){
    //     hash[arr[i]]++;
    //     }
    //     for (int i=0;i<n;i++){//one problem is why here n?why not max? (done) ok ok clear as you are iterating using old array arr
    //         if(hash[arr[i]]>1){
    //             return i+1; 
    //         }//it is the catch

    //     }
        
    //   return -1; 
    
    
    }
};
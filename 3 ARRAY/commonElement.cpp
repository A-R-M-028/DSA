       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
  
            vector<int>ans;
            set<int>st;//like vector without duplicate
            int i,j,k;
            i=j=k=0;
            while(i<n1&&j<n2&&k<n3){
                //code fatbe for duplicate soln is set data structure (only 1 value no duplicate)
                if(A[i]==B[j]&&B[j]==C[k]){//you cant write a of i == b of j == c of k
                // ans.push_back(A[i]);
                st.insert(A[i]);//for no duplicate push to set 
                
                i++,j++,k++;
                }
                else if(A[i]<B[j]){
                    i++;
                }
                else if(B[j]<C[k]){
                   j++ ;
                }
                else 
                k++;
            }
            
                // return ans;
                for(auto i:st){
                    ans.push_back(i);
                    //without set data structure
                    //soln is you have to remove duplicates from 
                }
            return ans;
            
        }


};

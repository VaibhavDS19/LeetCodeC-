class Solution {
public:
    bool backspaceCompare(string S, string T) {
       int i =S.size()-1;
       int hashcount = 0;
       int s1 =0;
       int s2 =0;
       while(i >=0){
           if(S[i]=='#'){
               ++hashcount;
               S[i]=-1;
               ++s1;
               
           }else{
               if(hashcount > 0){
                   S[i]=-1;
                   --hashcount;
                   ++s1;
               }
           }
           --i;
       }
        
       i = T.size()-1;
        hashcount =0;
        while(i>=0){
            if(T[i]=='#'){
                ++hashcount;
                T[i]=-1;
                ++s2;
            }else{
                if(hashcount>0){
                    T[i]=-1;
                    --hashcount;
                    ++s2;
                }
            }
            --i;
        }
        if(S.size()-s1 != T.size()-s2){
            return false;
        }
        
        i = 0;
        int j = 0;
        while (i<S.size() && j <T.size() ){
            if(S[i]==-1 && T[i]==-1){
                ++i;
                ++j;
            }else if(S[i] ==-1){
                ++i;
            }else if (T[i]==-1){
                ++j;
            }else{
                if(S[i]!=T[j]){
                    return false;
                }
                ++i;
                ++j;
            }
        }      
        return true;
    }
};
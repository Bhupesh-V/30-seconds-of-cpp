class Solution {
public:
    string addBinary(string a, string b) {
        vector<char>V1;
        vector<char>V2;
        vector<char>result;
        string ans;
        char carry = '0';
        int a_size = a.size();
        int b_size = b.size();
       
        if(a_size!=b_size){
            if(a_size<b_size){
                for(int i=0;i<b_size;i++){
                    V2.push_back(b[i]);
                }
                int len = b_size-a_size;
                while(len){
                    V1.push_back('0');
                    len--;
                }
                for(int i=0;i<a_size;i++){
                    V1.push_back(a[i]);
                }
                 reverse(V1.begin(),V1.end());
                 reverse(V2.begin(),V2.end());
            }
            else{
                for(int i=0;i<a_size;i++){
                    V1.push_back(a[i]);
                }
                 int len = a_size-b_size;
                while(len){
                    V2.push_back('0');
                    len--;
                }
                for(int i=0;i<b_size;i++){
                    V2.push_back(b[i]);
                }
                reverse(V1.begin(),V1.end());
                reverse(V2.begin(),V2.end());
            }
            //cout<<V1.size()<<V2.size();
            string val;
            int s = V2.size();
            for(int i = 0;i<s;i++){
                  val = V1[i];
                  val+= V2[i];
                  val+= carry;
                 
                if(val == "110" || val == "011" || val == "101"){
                     carry = '1';
                     result.push_back('0');
                }
                else if(val == "000"){
                    carry = '0';
                    result.push_back('0');
                }
                else if(val == "111"){
                    carry  = '1';
                    result.push_back('1');
                }
                else{
                    carry = '0';
                    result.push_back('1');
                }
               
            }
            
         if(carry == '1'){
             result.push_back(carry);
         }
         reverse(result.begin(),result.end());
         for(auto &i:result){
            ans+=i; 
         }
        }
        else{
            for(int i = 0;i<a_size;i++){
                V1.push_back(a[i]);
                V2.push_back(b[i]);
            }
            reverse(V1.begin(),V1.end());
            reverse(V2.begin(),V2.end());
            string val;
            int s = V2.size();
            for(int i = 0;i<s;i++){
                  val = V1[i];
                  val+= V2[i];
                  val+= carry;
                 
                if(val == "110" || val == "011" || val == "101"){
                     carry = '1';
                     result.push_back('0');
                }
                else if(val == "111"){
                    carry = '1';
                    result.push_back('1');
                }
                else if(val == "000"){
                    carry = '0';
                    result.push_back('0');
                }
                else {
                    carry = '0';
                    result.push_back('1');
                }
               
            }
         if(carry == '1'){
             result.push_back(carry);
         }
         reverse(result.begin(),result.end());
         for(auto &i:result){
            ans+=i; 
         }
        }
       
       
        return(ans);
    }
};

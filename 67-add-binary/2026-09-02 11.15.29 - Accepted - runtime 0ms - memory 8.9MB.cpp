class Solution {
public:
    string addBinary(string a, string b) {
        int m=a.size();
        int n=b.size();
        char carry='0';
        string ans;
        while(m>=0 && n>=0){
            if(a[m]=='1' && b[n]=='1'){
                // carry='1';
                if(carry=='1'){
                    ans.push_back('1');
                    carry='1';    
                }
                else{
                    ans.push_back('0');
                    carry='1';
                }
            }
            else if(a[m]=='0' && b[n]=='0'){
                if(carry=='1'){
                    ans.push_back('1');
                    carry='0';
                }
                else{
                    ans.push_back('0');
                }
            }
            else if((a[m]=='0' && b[n]=='1') || (a[m]=='1' && b[n]=='0')){
                if(carry=='1'){
                    ans.push_back('0');
                    carry='1';
                }
                else{
                    ans.push_back('1');
                }
            }
            m--;
            n--;
        }
        while(m>=0){
            if(carry=='1' && a[m]=='1'){
                ans.push_back('0');
                carry='1';
            }
            else if((carry=='1' && a[m]=='0' )|| (a[m]=='1' && carry=='0')){
                ans.push_back('1');
                carry='0';
            }
            else{
                ans.push_back(a[m]);
            }
            m--;
        }
        while(n>=0){
            if(carry=='1' && b[n]=='1'){
                ans.push_back('0');
                carry='1';
            }
            else if((carry=='1' && b[n]=='0' )|| (b[n]=='1' && carry=='0')){
                ans.push_back('1');
                carry='0';
            }
            else{
                ans.push_back(b[n]);
            }
            n--;
        }
        if(carry=='1'){
            ans.push_back('1');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
class Solution {
public:
    string intToRoman(int num) {
        string s = "";
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string symbols[] = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
                            "XL", "X",  "IX", "V",  "IV", "I"};
        int i = 0;
        while (num > 0) {
            if(num>=values[i]){
                int x=num/values[i];
                for(int k=0;k<x;k++){
                s+=symbols[i];}
                num=num%values[i];
                i++;
            }
            else{
                i++;
            }
        }
        return s;
    }
};
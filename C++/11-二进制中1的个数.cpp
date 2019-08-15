class Solution {
public:
     int  NumberOf1(int n) {
         int count = 0;
         if(n < 0){
             n = n & 0x7fffffff;
             count++;
         }
         while(n != 0){
             count += n & 1;
             n = n >> 1;
         }
         return count;
     }
};

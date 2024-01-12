class Solution {
public:
    auto solve(int x){
        long rev=0  ;
        // we use x cause it will accept - and + values i.e -x , +x;
        while(x){
         rev = rev*10 + x%10;
         x=x/10;
        }
        if(rev>INT_MAX || rev<INT_MIN){return 0;}
       return int(rev);

    }
    int reverse(int x) {
       return solve (x);
    }
};
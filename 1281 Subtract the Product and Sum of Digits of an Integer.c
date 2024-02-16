// Example 1:

// Input: n = 234
// Output: 15 
// Explanation: 
// Product of digits = 2 * 3 * 4 = 24 
// Sum of digits = 2 + 3 + 4 = 9 
// Result = 24 - 9 = 15
// Example 2:

// Input: n = 4421
// Output: 21
// Explanation: 
// Product of digits = 4 * 4 * 2 * 1 = 32 
// Sum of digits = 4 + 4 + 2 + 1 = 11 
// Result = 32 - 11 = 21
int subtractProductAndSum(int n) {
    int a=1,b=0,ans,c,d,v=n;
    while(n>0)
    {
        c=n%10;
        a*=c;
        b+=c;
        n/=10;
    }
    
    ans=a-b;
    return ans;
}
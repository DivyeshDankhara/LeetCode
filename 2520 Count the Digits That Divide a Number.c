// Example 1:

// Input: num = 7
// Output: 1
// Explanation: 7 divides itself, hence the answer is 1.
// Example 2:

// Input: num = 121
// Output: 2
// Explanation: 121 is divisible by 1, but not 2. Since 1 occurs twice as a digit, we return 2.
// Example 3:

// Input: num = 1248
// Output: 4
// Explanation: 1248 is divisible by all of its digits, hence the answer is 4.
int countDigits(int num) {
    int a=0,count=0,v=num;
    while(num>0)
    {
        a=num%10;
        if(v%a==0)
        {
            count++;
        }
        num/=10;
    }
    return count;
}
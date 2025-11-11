class Solution {
public:
 int divide( long int dividend,long int divisor) {
  if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX; 
        }
        
        // --- 2. Determine Sign ---
        bool isNegative = (dividend > 0) != (divisor > 0);
        
        // --- 3. Convert to Absolute Values (Use long long for safety) ---
        // Work only with positive long long values (absA and absB)
        long long absA = std::abs((long long)dividend);
        long long absB = std::abs((long long)divisor);
        
        long long quotient = 0;

        // --- 4. Binary Shifting/Doubling Division ---
        // This is the efficient O(log(A)) part.
        while (absA >= absB) {
            long long tempB = absB;
            long long multiple = 1;
            
            // Find the largest multiple (tempB * 2^multiple) that is still <= absA
            // Use bitwise left shift (<< 1) for fast multiplication by 2.
            while (absA >= (tempB << 1)) {
                tempB <<= 1;     // tempB = tempB * 2
                multiple <<= 1;  // multiple = multiple * 2
            }
            
            // Subtract the largest found multiple from absA
            absA -= tempB;
            
            // Add the multiple to the final quotient
            quotient += multiple;
        }
        
        // --- 5. Apply Sign and Return ---
        if (isNegative) {
            return (int)-quotient;
        } else {
            // No need to check for INT_MAX as the initial edge case handles the only overflow scenario.
            return (int)quotient;
        }
    }
};
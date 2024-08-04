#User function Template for python3

class Solution:
    
    #Function to count the number of substrings that start and end with 1.
    def binarySubstring(self,n, s):
        # Count the number of '1's in the string
        count_of_ones = s.count('1')
    
        # Calculate the number of substrings that start and end with '1'
        # using the combinatorial formula
        result = (count_of_ones * (count_of_ones - 1)) // 2
    
        return result
#{ 
 # Driver Code Starts
#Initial Template for Python 3

import atexit
import io
import sys

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())

if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n=int(input())
        s=str(input())
        obj = Solution()
        print(obj.binarySubstring(n,s))
# } Driver Code Ends
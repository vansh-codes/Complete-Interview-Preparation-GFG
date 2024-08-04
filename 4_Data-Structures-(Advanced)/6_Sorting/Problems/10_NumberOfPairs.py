#User function Template for python3

class Solution:
    
     #Function to count number of pairs such that x^y is greater than y^x.     
    def countPairs(self,a,b,M,N):
        #code here
        x = [i ** (1/i) for i in a]
        y = [i ** (1/i) for i in b]
        y.sort()
        x.sort()
        cnt = 0
        j = 0
        for i in range(M):
            while j < N and x[i] > y[j]:
                j += 1
            cnt += j
        return cnt
#{ 
 # Driver Code Starts
#Initial Template for Python 3

#Initial Template for Python 3

import atexit
import io
import sys
import bisect

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
        M,N=map(int,input().strip().split())
        a=list(map(int,input().strip().split()))
        b=list(map(int,input().strip().split()))
        ob=Solution();
        print(ob.countPairs(a,b,M,N))
        #code here
# } Driver Code Ends
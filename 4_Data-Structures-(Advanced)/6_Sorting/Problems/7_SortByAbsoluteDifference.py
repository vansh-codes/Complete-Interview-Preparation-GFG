#{ 
 # Driver Code Starts

# } Driver Code Ends
#User function Template for python3

class Solution:
    
    #Function to sort the array according to difference with given number.
    def sortAbs(self,a, n, k):
        #code here
        
        return sorted(a, key = lambda item: abs(k-item))


#{ 
 # Driver Code Starts.


def main():
    import sys
    input = sys.stdin.read
    data = input().split('\n')

    t = int(data[0].strip())
    index = 1

    for _ in range(t):
        k = int(data[index].strip())
        index += 1
        arr = list(map(int, data[index].strip().split()))
        index += 1

        solution = Solution()
        solution.sortABS(k, arr)

        print(" ".join(map(str, arr)))

if __name__ == "__main__":
    main()
# } Driver Code Ends
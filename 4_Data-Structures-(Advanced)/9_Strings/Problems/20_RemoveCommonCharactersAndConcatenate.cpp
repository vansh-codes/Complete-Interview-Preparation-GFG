//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG
{
public
    static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();

        while (t-- != 0)
        {
            String s1 = in.next(),
                   s2 = in.next();

            Solution obj = new Solution();

            System.out.println(obj.concatenatedString(s1, s2));
        }
    }
}

// } Driver Code Ends

class Solution
{
    // Function to remove common characters and concatenate two strings.
public
    static String concatenatedString(String s1, String s2)
    {
        // Your code here
        HashSet<Character> arr = new HashSet<>();
        for (char x : s1.toCharArray())
            arr.add(x);
        HashSet<Character> arr2 = new HashSet<>();
        for (char x : s2.toCharArray())
            arr2.add(x);
        String res = "";
        for (char x : s1.toCharArray())
        {
            if (!arr2.contains(x))
                res += x;
        }
        for (char x : s2.toCharArray())
        {
            if (!arr.contains(x))
                res += x;
        }
        return res.equals("") ? "-1" : res;
    }
}

/* Dynamic Programming Java implementation
of LIS problem */
using System;
public class GFG
{
 
  /*
    * lis() returns the length of the longest 
    * increasing subsequence in arr[] of size n
    */
  static int lis(int[] arr, int n) 
  {
    int max = 0;
    int[] lst = new int[n];
 
    // initialize LIS values for all indexes
    Array.Fill(lst, 1);
 
    /* Compute optimized LIS values 
        in bottom up manner */
    for (int i = 1; i < n; i++) 
    {
      for (int j = 0; j < i; j++) 
      {
        if (arr[i] > arr[j] && lst[i] < lst[j] + 1)
        { 
          lst[i] = lst[j] + 1;
        }
      }
    }
 
    /* Pick maximum of all LIS values */
    for (int i = 0; i < n; i++)
      if (max < lst[i])
        max = lst[i];
    return max;
  }
 
  // Driver code
  static public void Main ()
  {
    int[] arr = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int n = arr.Length;
    Console.WriteLine("Length of lis is " +  lis(arr, n));
  }
}
 

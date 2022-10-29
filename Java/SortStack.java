// Java program to sort an
// array using stack
import java.io.*;
import java.util.*;
 
class SortStack
{
    // This function return
    // the sorted stack
    static Stack<Integer> sortStack(Stack<Integer> input)
    {
        Stack<Integer> tmpStack =
                       new Stack<Integer>();
     
        while (!input.empty())
        {
            // pop out the
            // first element
            int tmp = input.peek();
            input.pop();
     
            // while temporary stack is
            // not empty and top of stack
            // is smaller than temp
            while (!tmpStack.empty() &&
                    tmpStack.peek() < tmp)
            {
                // pop from temporary
                // stack and push it
                // to the input stack
                input.push(tmpStack.peek());
                tmpStack.pop();
            }
     
            // push temp in
            // temporary of stack
            tmpStack.push(tmp);
        }
     
        return tmpStack;
    }
     
    static void sortArrayUsingStacks(int []arr,
                                     int n)
    {
        // push array elements
        // to stack
        Stack<Integer> input =
                       new Stack<Integer>();
        for (int i = 0; i < n; i++)
            input.push(arr[i]);
     
        // Sort the temporary stack
        Stack<Integer> tmpStack =
                       sortStack(input);
     
        // Put stack elements
        // in arrp[]
        for (int i = 0; i < n; i++)
        {
            arr[i] = tmpStack.peek();
            tmpStack.pop();
        }
    }
     
    // Driver Code
    public static void main(String args[])
    {
        int []arr = {10, 5, 15, 45};
        int n = arr.length;
     
        sortArrayUsingStacks(arr, n);
     
        for (int i = 0; i < n; i++)
            System.out.print(arr[i] + " ");
    }
}


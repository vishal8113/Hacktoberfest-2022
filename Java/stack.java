import java.util.*;
class MyClass{
  public static void main (String[] args) 
  { 
    Stack<Integer> even = new Stack<>();
    even.push(0);
    even.push(2);
    even.push(4);
    even.push(6);
    even.push(8);
    even.push(10);
    even.push(12);
    even.push(14);
    even.push(16);
    System.out.println("Print Stack before pop:");
    System.out.println(even);
    System.out.println("pop => " + even.pop());
    System.out.println("pop => " + even.pop());
    System.out.println("pop => " + even.pop());
    System.out.println("Print Stack after pop:");
    System.out.println(even);
    System.out.println("Number on top of the stack is => " + even.peek());
    System.out.println("Is stack empty?  Ans:" + even.empty());
    System.out.println("Position of 8 from the top is " + even.search(8));
    System.out.println("Position of 20 from the top is " + even.search(20));
  }
}

// Java code to demonstrate insert
// operation in binary search tree
import java.util.*;
class BSTSort
{
  static class node
  {
    int key;
    node left, right;
  };
  static node root = null;
  static Queue<Integer> q1;
  static int k;
 
  // A utility function to
  // create a new BST node
  static node newNode(int item)
  {
    node temp = new node();
    temp.key = item;
    temp.left = temp.right = null;
    return temp;
  }
 
  // A utility function to
  // do inorder traversal of BST
  static void inorder(node root)
  {
    if (root != null)
    {
      inorder(root.left);
      System.out.print(root.key + " ");
      inorder(root.right);
    }
  }
 
  // reverse tree path using queue
  static void reversePath(node node)
  {
 
    /* If the tree is empty,
        return a new node */
    if (node == null)
      return;
 
    // If the node key equal
    // to key then
    if ((node).key == k)
    {
 
      // push current node key
      q1.add((node).key);
 
      // replace first node
      // with last element
      (node).key = q1.peek();
 
      // remove first element
      q1.remove();
 
      // return
      return;
    }
 
    // if key smaller than node key then
    else if (k < (node).key)
    {
 
      // push node key into queue
      q1.add((node).key);
 
      // recursive call itself
      reversePath((node).left);
 
      // replace queue front to node key
      (node).key = q1.peek();
 
      // perform pop in queue
      q1.remove();
    }
 
    // if key greater than node key then
    else if (k > (node).key)
    {
 
      // push node key into queue
      q1.add((node).key);
 
      // recursive call itself
      reversePath((node).right);
 
      // replace queue front to node key
      (node).key = q1.peek();
 
      // perform pop in queue
      q1.remove();
    }
 
    // return
    return;
  }
 
  /* A utility function to insert
    a new node with given key in BST */
  static node insert(node node, int key)
  {
 
    /* If the tree is empty,
        return a new node */
    if (node == null)
      return newNode(key);
 
    /* Otherwise, recur down the tree */
    if (key < node.key)
      node.left = insert(node.left, key);
    else if (key > node.key)
      node.right = insert(node.right, key);
 
    /* return the (unchanged) node pointer */
    return node;
  }
 
  // Driver code
  public static void main(String[] args)
  {
 
    /* Let us create following BST
                  50
               /     \
              30      70
             /  \    /  \
           20   40  60   80 */
    q1 = new LinkedList<>();
 
    // reverse path till k
    k = 80;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    System.out.print("Before Reverse :"
                     + "\n");
    // print inorder traversal of the BST
    inorder(root);
    System.out.print("\n");
 
    // reverse path till k
    reversePath(root);
    System.out.print("After Reverse :"
                     + "\n");
 
    // print inorder of reverse path tree
    inorder(root);
  }
}
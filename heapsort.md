A complete binary tree is a tree where every node has either two children or no children.The array is visualised as a complete binary tree and is sorted.
The heapify function builds a max heap where every node is such that it is greater than its children.
when the parent node is at index i its left child and right child are in indices 2*i+1 and 2*i+2
the heap2 fn uses recursion to build the max heap .
the heap2 function can be applied only when the children are also heapified,so it is performed in bottom-up order
the time complexity of the build max heap if the full array is considered is O(n) not O(nlogn)
This is because a heap of size n can have atmost Least Integer(n/2^(h+1)) nodes at height h and if take summation for each node we get O(n).
The time complexity of the heap sort function is O(nlogn) as it is called on every node and each node can have a height of atmost logn
 so the overall time complexity of the heapsort fn is O(nlogn).

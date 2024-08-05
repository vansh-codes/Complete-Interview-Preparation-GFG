#User function Template for python3

''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    def reverse(self, root):
        prev = None
        while root:
            temp_next = root.next
            root.next = prev
            prev = root
            root = temp_next
        return prev
    def addTwoLists(self, num1, num2):
        root1 = self.reverse(num1)
        root2 = self.reverse(num2)
        new_list = Node(None)
        dummy_ptr = new_list
        carry = 0
        while((root1 is not None) or (root2 is not None)):
            data_r1 = 0
            data_r2 = 0
            if(root1):
                data_r1 = root1.data
            if(root2):
                data_r2 = root2.data
            curr = data_r1 + data_r2 + carry
            if(curr > 9):
                carry = curr // 10
                curr = curr % 10
            else:
                carry = 0
            new_node = Node(curr)
            dummy_ptr.next = new_node
            dummy_ptr = new_node
            if(root1):
                root1 = root1.next
            if(root2):
                root2 = root2.next
        while (carry > 0):
            curr = carry % 10
            carry = carry // 10
            new_node = Node(curr)
            dummy_ptr.next = new_node
            dummy_ptr = new_node
        new_head = self.reverse(new_list.next)
#remove starting zeros
        while (new_head and new_head.data == 0):
            new_head = new_head.next
        if(new_head):
            return new_head
        return Node(0)

#{
#Driver Code Starts
#Initial Template for Python 3

#Node Class
class Node:

    def __init__(self, data):
        self.data = data
        self.next = None

#Linked List Class
class LinkedList:

    def __init__(self):
        self.head = None
        self.tail = None

#creates a new node with given value and appends it at the end of the linked list
    def insert(self, val):
        if self.head is None:
            self.head = Node(val)
            self.tail = self.head
        else:
            self.tail.next = Node(val)
            self.tail = self.tail.next

#prints the elements of linked list starting with head
def printList(n):
    while n:
        print(n.data, end=' ')
        n = n.next
    print()


if __name__ == '__main__':
    for _ in range(int(input())):

        arr1 = (int(x) for x in input().split())
        num1 = LinkedList()
        for i in arr1:
            num1.insert(i)

        arr2 = (int(x) for x in input().split())
        num2 = LinkedList()
        for i in arr2:
            num2.insert(i)

        res = Solution().addTwoLists(num1.head, num2.head)
        printList(res)

#} Driver Code Ends
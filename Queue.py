

class Node:
    def __init__(self, data) :
        self.data = data
        self.next = None


"""

This defines the Node with data and pointer callled next

"""


class Queue:
    def __init__(self) :
        self.front = self.rear = None


    def isEmpty(self) :

        if self.front == None:
            return True

    # Method to add an item
    def Enqueue(self,n):
        
        temp = Node(n)

        if self.rear == None:
            self.front = self.rear = temp

        self.rear.next = temp
        self.rear = temp

    def Dequeue(self):

        if self.isEmpty():
            return

        temp = self.front
        self.front = temp.next

        if self.front == None:
            self.rear = None

    def print(self):

        if(self.front == None):
            return

        temp = self.front

        while(temp):
            print(temp.data)
            temp = temp.next            



Q = Queue()

Q.Enqueue(10)
Q.Enqueue(30)
Q.Enqueue(50)
Q.Enqueue(70)
Q.Dequeue()
Q.print()
Q.Dequeue()
Q.Enqueue(90)
print()
Q.print()


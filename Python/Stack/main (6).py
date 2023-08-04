class Stack:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return len(self.items) == 0

    def push(self, item):
        self.items.append(item)

    def pop(self):
        if (self.is_empty() != 1):
            return self.items.pop()
        else:
            print("Stack is empty.")

    def peek(self):
        if (self.is_empty() != 1):
            return self.items[-1]
          # using -1 here as an index returns the last element (top) of the stack
        else:
            print("Stack is empty.")

    def size(self):
        return len(self.items)


# create a stack object
stack = Stack()

# push elements onto the stack - follows a "LAST IN FIRST OUT" order
stack.push("a")
stack.push("b")
stack.push("c")

# check if stack is empty
print("Is the stack empty?\n", stack.is_empty())

# get the top element of the stack (peek)
print("\nTop element of the stack:\n", stack.peek())

# check the size of the stack
print("\nSize of the stack:", stack.size())

# remove elements from the top of the stack
print("\nPrint top element, then remove it:")
while (stack.is_empty() != 1):
    print(stack.pop())

# check the size of the stack again
print("\nSize of the stack:", stack.size())

class MinStack(object):

    def __init__(self):
        self.st = []
        self.mini = 0
    def push(self, value):
        if not self.st:
            self.st.append(value)
            self.mini = value
        else:
            if value >= self.mini:
                self.st.append(value)
            else:
                newVal = 2*value - self.mini
                self.st.append(newVal)
                self.mini = value
    def pop(self):
        self.x = self.st[-1]
        if self.mini <= self.x:
            self.st.pop()
        else:
            self.mini = 2*self.mini - self.x
            self.st.pop()

    def top(self):
        self.x = self.st[-1]
        if self.mini <= self.x:
            return self.x
        else:
            return self.mini
        
        

    def getMin(self):
        return self.mini
        """
        :rtype: int
        """
        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(value)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()
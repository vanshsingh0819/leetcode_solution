class MinStack(object):

    def __init__(self):
        self.st = []        # intialised with self, st is list acting like stack,use self.st everywhere   
                            # it means: the st belonging to the current MinStack object
        self.mini = 0       # intialised with self, self.mini, use self.mini everywhere
    def push(self, value):  #self tells the function which object is currently using the function.
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
        if self.mini > self.x:
            return self.mini
        else:
            return self.x
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
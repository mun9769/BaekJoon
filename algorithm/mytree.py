# import queue
class Node():
    def __init__(self,value = None, level = 1):
        self.value = value
        self.level = level
        self.left = None
        self.right = None
    
    def add_my_node(self):
        if self.left == None and self.right ==None:
            self.left = Node(self.value-1,self.level + 1)
            self.right = Node(self.value+1,self.level + 1)
            if self.value == 0:
                self.left = None
            if self.value == 9:
                self.right = None


class Tree():
    def __init__(self,value):
        self.root = Node(value)
    
    def levelorder(self,root,_level):
        q = []
        q.append(root)
        while q:
            t = q.pop(0)
            if t.level == _level:
                print(t.value,'',end='')
            if t.left != None:
                q.append(t.left)
            if t.right != None:
                q.append(t.right)
    


if __name__ == "__main__":

    lst = []
    for i in range(1,10):
        lst.append(Tree(i))
    
    for i in lst:
        i.root.add_my_node()
        if i.root.left != None:
            i.root.left.add_my_node()
        if i.root.right != None:
            i.root.right.add_my_node()

    for i in lst:
        i.levelorder(i.root,2)
    
    # lst[0].levelorder(lst[0].root,2)
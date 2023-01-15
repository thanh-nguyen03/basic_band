from queue import Queue
class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None
        self.parent = None
        self.height = 1
    
class AVL:
    address = {}
    def __init__(self, root: Node=None):
        self.root = root
    def update(self, cur=None):
        if cur is None:
            cur = self.root
        if cur.left is not None:
            cur.left.parent = cur
            self.update(cur.left)
        if cur.right is not None:
            cur.right.parent = cur
            self.update(cur.right)
        
    @staticmethod
    def insert(root: Node, value):
        if root is None:
            AVL.address[value] = Node(value)
            return AVL.address[value]
        elif value > root.value:
            root.right = AVL.insert(root.right, value)
        elif value < root.value:
            root.left = AVL.insert(root.left, value)
        else:
            return root
        
        root.height = 1 + max(
            AVL.get_height(root.left),
            AVL.get_height(root.right)
        )

        diffheight = AVL.get_height(root.left) - AVL.get_height(root.right)
        
        if diffheight > 1:
            if value > root.left.value:
                root.left = AVL.rotate_left(root.left)
            return AVL.rotate_right(root)
        elif diffheight < -1:
            if value < root.right.value:
                root.right = AVL.rotate_right(root.right)
            return AVL.rotate_left(root)

        return root
    @staticmethod
    def get_height(root: Node):
        if root is None:
            return 0
        return root.height
    @staticmethod
    def rotate_right(root: Node):
        left_root = root.left
        root.left = left_root.right
        left_root.right = root

        root.height = 1 + max(
            AVL.get_height(root.left),
            AVL.get_height(root.right)
        )
        left_root.height = 1 + max(
            AVL.get_height(left_root.left),
            AVL.get_height(left_root.right)
        )
        return left_root
    @staticmethod
    def rotate_left(root: Node):
        right_root = root.right
        root.right = right_root.left
        right_root.left = root

        root.height = 1 + max(
            AVL.get_height(root.left),
            AVL.get_height(root.right)
        )
        right_root.height = 1 + max(
            AVL.get_height(right_root.left),
            AVL.get_height(right_root.right)
        )
        return right_root
    @staticmethod
    def print2D(root, space='    '):
        if root is None:
            return
        space += '     '
        AVL.print2D(root.right, space)
        print()
        print(f'{space}{root.value}({root.height})')
        AVL.print2D(root.left, space)
            
tree = AVL()
cur = tree.root
for i in input().split():
    tree.root = AVL.insert(tree.root, int(i))
    if cur != tree.root:
        cur = tree.root
        print(i, cur.value)
tree.update()
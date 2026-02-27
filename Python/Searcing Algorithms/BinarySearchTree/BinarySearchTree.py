from Node import Node


class BST():
    def __init__(self):
        self.root = None

    def insert(self, root, data):
        if root is None:
            root = Node(data)
            return root
        else:
            if root.value < data:
                if root.right is None:
                    self.root.right = Node(data)
                    return root
                else:
                    root.right = self.insert(root.right, data)
                    return root
            else:
                if root.left is None:
                    root.left = Node(data)
                    return root
                else:
                    root.left = self.insert(root.left, data)
                    return root

    def inorder(self, root):
        if root is None:
            return None
        self.inorder(root.left)
        print(root.value)
        self.inorder(root.right)

    def search(self, root, data):
        if root is None:
            return False
        if root.value == data:
            return True
        if root.value < data:
            return self.search(root.right, data)
        return self.search(root.left, data)


bst = BST()
bst.root = bst.insert(bst.root, 5)
bst.root = bst.insert(bst.root, 4)
bst.root = bst.insert(bst.root, 11)
bst.root = bst.insert(bst.root, 1)
bst.root = bst.insert(bst.root, 7)
bst.root = bst.insert(bst.root, 6)

bst.inorder(bst.root)

print(bst.search(bst.root, 11))

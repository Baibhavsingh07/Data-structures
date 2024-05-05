class Solution:
    def deleteNode(self, nodeToDelete):
        previousNode = None  # Initialize a pointer to keep track of the previous node
        while nodeToDelete and nodeToDelete.next:
            # Copy the value of the next node to the current node
            nodeToDelete.val = nodeToDelete.next.val
            previousNode = nodeToDelete  # Update the previous node pointer
            nodeToDelete = nodeToDelete.next  # Move to the next node

        # If the previous node exists, set its next pointer to None to remove the last node
        if previousNode:
            previousNode.next = None

public class Solution {
    public void deleteNode(ListNode nodeToDelete) {
        ListNode previousNode = null; // Initialize a pointer to keep track of the previous node
        while (nodeToDelete != null && nodeToDelete.next != null) {
            // Copy the value of the next node to the current node
            nodeToDelete.val = nodeToDelete.next.val;
            previousNode = nodeToDelete; // Update the previous node pointer
            nodeToDelete = nodeToDelete.next; // Move to the next node
        }

        // If the previous node exists, set its next pointer to null to remove the last node
        if (previousNode != null) {
            previousNode.next = null;
        }
    }
}

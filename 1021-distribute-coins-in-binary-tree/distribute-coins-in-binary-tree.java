class Solution {
    int totalMoves = 0;  // Variable to keep track of the total number of moves required.

    // Helper function to solve the problem recursively.
    private int distributeCoinsHelper(TreeNode root) {
        if (root == null)
            return 0;  // Base case: if the node is null, return 0.

        // Recursively calculate the excess coins from the left and right subtrees.
        int leftExcess = distributeCoinsHelper(root.left);
        int rightExcess = distributeCoinsHelper(root.right);

        // Add the absolute value of excess coins from the left and right to the total moves.
        totalMoves += Math.abs(leftExcess) + Math.abs(rightExcess);

        // Return the total excess coins at this node.
        // root.val is the number of coins at this node.
        // We subtract 1 because each node needs exactly 1 coin.
        return root.val + leftExcess + rightExcess - 1;
    }

    public int distributeCoins(TreeNode root) {
        distributeCoinsHelper(root);  // Call the helper function with the root node.
        return totalMoves;  // Return the total number of moves required.
    }
}
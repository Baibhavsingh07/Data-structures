class Solution:
    def __init__(self):
        self.total_moves = 0  # Variable to keep track of the total number of moves required.

    # Helper function to solve the problem recursively.
    def distributeCoinsHelper(self, root):
        if not root:
            return 0  # Base case: if the node is null, return 0.

        # Recursively calculate the excess coins from the left and right subtrees.
        left_excess = self.distributeCoinsHelper(root.left)
        right_excess = self.distributeCoinsHelper(root.right)

        # Add the absolute value of excess coins from the left and right to the total moves.
        self.total_moves += abs(left_excess) + abs(right_excess)

        # Return the total excess coins at this node.
        # root.val is the number of coins at this node.
        # We subtract 1 because each node needs exactly 1 coin.
        return root.val + left_excess + right_excess - 1

    def distributeCoins(self, root):
        self.distributeCoinsHelper(root)  # Call the helper function with the root node.
        return self.total_moves  # Return the total number of moves required.

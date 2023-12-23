class Solution:
    def isPathCrossing(self, a: str) -> bool:
        x, y = 0, 0

        coordinate_set = set()
        coordinate_set.add((0, 0))

        for v in a:
            if v == 'N':
                y += 1
            elif v == 'W':
                x -= 1
            elif v == 'E':
                x += 1
            else:
                y -= 1

            if (x, y) in coordinate_set:
                return True

            coordinate_set.add((x, y))

        return False

class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        i, j = 0, 0

        # Create lists to store the integer parts of version strings version1 and version2
        version1_parts = []
        version2_parts = []

        # Extract integer parts from version string version1
        while i < len(version1):
            part = ''
            while i < len(version1) and version1[i] != '.':
                part += version1[i]
                i += 1

            i += 1
            version1_parts.append(int(part))  # Convert the extracted string to an integer and append to version1_parts list

        # Extract integer parts from version string version2
        while j < len(version2):
            part = ''
            while j < len(version2) and version2[j] != '.':
                part += version2[j]
                j += 1

            j += 1
            version2_parts.append(int(part))  # Convert the extracted string to an integer and append to version2_parts list

        # Compare the corresponding integer parts of versions version1 and version2
        i, j = 0, 0
        while i < len(version1_parts) and j < len(version2_parts):
            if version1_parts[i] > version2_parts[j]:
                return 1  # If version version1 is greater than version version2, return 1
            elif version1_parts[i] < version2_parts[j]:
                return -1  # If version version1 is less than version version2, return -1
            i += 1
            j += 1

        # Handle cases where one version string has more integer parts than the other and the remaining parts are all 0
        while i < len(version1_parts) and version1_parts[i] == 0:
            i += 1
        while j < len(version2_parts) and version2_parts[j] == 0:
            j += 1

        # Check if there are remaining non-zero integer parts in version version1
        if i < len(version1_parts):
            return 1  # If version version1 has more non-zero parts, it is greater, so return 1
        # Check if there are remaining non-zero integer parts in version version2
        if j < len(version2_parts):
            return -1  # If version version2 has more non-zero parts, it is greater, so return -1
        # Both versions are equal
        return 0

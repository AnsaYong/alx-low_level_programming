#!/usr/bin/python3
"""
This module provides a function that returns the perimeter of an island.
"""

def island_perimeter(grid):
    """Calculates the perimeter of an island.

    Args:
        grid: List of lists describing the island

    Return:
        The perimeter of the island
    """
    blocks = 0

    # Count the number of blocks (sum of 1's)
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            blocks = blocks + grid[i][j]

    # If no land - blocks = 0, then perimeter is 0
    if blocks == 0:
        return 0

    # Blocks/land so return the calculated perimeter
    else:
        return 2 + blocks * 2

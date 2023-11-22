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
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                # For each land cell, add 4 to the perimeter
                perimeter += 4

                # Check the adjacent cells, subtracting 1 for
                # each neighboring land cell
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i < len(grid) - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < len(grid[i]) - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

    return perimeter

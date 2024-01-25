#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """calculate the perimeter of an island.
       The grid represents water by 0 and land by 1.
       Args:
            grid (list): A list of list of integers representing an island.
       Returns:
         The perimeter of the island defined in grid.
    """

    width = len(grid[0])
    height = len(grid)
    edges = 0
    perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Subtract 2 for each shared vertical edge
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2  # Subtract 2 for horizontal edge

    return perimeter

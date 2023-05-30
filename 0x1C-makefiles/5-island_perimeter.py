#!/usr/bin/python3
"""
Module Island Perimeter
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in th grid
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4 # Add 4 to the perimter for each land cell

                # Check adjacent cells to subtract shared sides
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2 # Subtract 2 for shared side
                if j > 0  and grid[i][j-1] == 1:
                    perimeter -= 2 # Subtract 2 for shared side
    return perimeter

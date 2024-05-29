#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
    - grid : Rep the grid where 0 reps water and 1 reps land.

    Returns:
    - int: The perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Each land cell adds 4 to the perimeter
                # Check adjacent cells to subtract from perimeter
                if i > 0 and grid[i - 1][j] == 1:  # Up
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:  # Left
                    perimeter -= 2

    return perimeter

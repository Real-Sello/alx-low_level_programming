#!/usr/bin/python3
"""island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid:

        grid is a list of list of integers:
            0 represents a water zone
            1 represents a land zone
            One cell is a square with side length 1
            Grid cells are connected horizontally/vertically (not diagonally).
            Grid is rectangular, width and height don’t exceed 100
    """
    width = len(grid[0])
    height = len(grid)
    edge = 0
    size = 0

    for x in range(height):
        for y in range(width):
            if grid[x][y] == 1:
                size += 1
                if (y > 0 and grid[x][y - 1] == 1):
                    edge += 1
                if (x > 0 and grid[x - 1][y] == 1):
                    edge += 1
    return size * 4 - edge * 2

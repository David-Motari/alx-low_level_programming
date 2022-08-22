#!/usr/bin/python3
"""
5-island_perimeter.py
Creates perimeter grid
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid:

    * grid is a list of list of integers:
        * 0 represents a water zone
        * 1 represents a land zone
        * One cell is a square with side length 1
        * Grid cells are connected horizontally/vertically (not diagonally).
        * Grid is rectangular, width and height don’t exceed 100
    * Grid is completely surrounded by water,
    and there is one island (or nothing).
    * The island doesn’t have “lakes” (water inside that isn’t
    connected to the water around the island).
    """
    row = grid[0]
    row_items = len(row)
    grid_items = len(grid)
    corners = 0
    dimension = 0

    for i in range(grid_items):
        for j in range(row_items):
            if grid[i][j] == 1:
                dimension += 1
                if j > 0 and grid[i][j - 1] == 1:
                    corners += 1
                if i > 0 and grid[i - 1][j] == 1:
                    corners += 1
    return dimension * 4 - corners * 2

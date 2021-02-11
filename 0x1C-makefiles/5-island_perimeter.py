#!/usr/bin/python3
'''island perimeter function'''


def island_perimeter(grid):
    '''Returns the perimeter of the island described in grid'''
    perimeter = 0

    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:

                if i == 0:
                    perimeter += 1
                elif grid[i - 1][j] == 0:
                    perimeter += 1

                if j == 0:
                    perimeter += 1
                elif grid[i][j - 1] == 1:
                    perimeter += 1

                if i >= (len(grid) - 1):
                    perimeter += 1
                elif grid[i + 1][j] == 0:
                    perimeter += 1

                if j >= (len(grid[0]) - 1):
                    perimeter += 1
                elif grid[i][j + 1] == 1:
                    perimeter += 1
    return perimeter

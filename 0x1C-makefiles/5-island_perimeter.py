#!/usr/bin/python3
"""Calculate the perimeter of a grid island"""


def island_perimeter(grid):
    perimeter = 0

    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                block_p = 4;
                if x > 0:
                    if grid[x - 1][y] == 1:
                        block_p -= 1
                if x < len(grid):
                    if grid[x + 1][y] == 1:
                        block_p -= 1
                if y > 0:
                    if grid[x][y - 1] == 1:
                        block_p -= 1
                if y < len(grid[x]):
                    if grid[x][y + 1] == 1:
                        block_p -= 1

                perimeter += block_p
    return(perimeter)

#!/usr/bin/python3
"""this module have a function to calculate the perimeter of a islan 
into a grid"""

def island_perimeter(grid):
    """ calculate the perimetr of a island"""
    if len(grid) <= 100 and len(grid[0]) <= 100 and len(grid) != len(grid[0]):
        perimetre = 0
        for fil in range (len(grid)):
            for col in range (len(grid[0])):
                if grid[fil][col] == 1:
                    if grid[fil - 1][col] == 0:
                        perimetre += 1
                    if grid[fil][col - 1] == 0:
                        perimetre += 1
                    if grid[fil + 1][col] == 0:
                        perimetre += 1
                    if grid[fil][col + 1] == 0:
                        perimetre += 1
        return perimetre

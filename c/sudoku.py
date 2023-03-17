import numpy as np
import math 
import random
from random import choice
#initial sudoku state
# 0 -> to be filled, else -> fixed
startingSudoku = """
                    306508400
                    520000000
                    087000031
                    003010080
                    900863005
                    050090600
                    130000250
                    000000074
                    005206300
                """

sudoku = np.array([[int(i) for i in line] for line in startingSudoku.split()])

#prints the sudoku
def coutSudoku(sudoku):
    print("\n")
    for i in range(len(sudoku)):
        line = ""
        for j in range(len(sudoku[i])-1):
            line +=str(sudoku[i,j])+", "
        line += str(sudoku[i,-1])
        print(line)

        
#contains 1 if position is fixed
#contains 0 if position is yet to be filled
def fixSudokuValues(fixed_sudoku):
    for i in range (0,9):
        for j in range (0,9):
            if fixed_sudoku[i,j] != 0:
                fixed_sudoku[i,j] = 1
    
    return(fixed_sudoku)

# Cost Function 
def Cost_f(sudoku):
    numberOfErrors = 0 
    for i in range (0,9):
        numberOfErrors += errors(i ,i ,sudoku)
    return(numberOfErrors)

# Calculates error in a row and column associated with it
def errors(row, column, sudoku):
    numberOfErrors = (9 - len(np.unique(sudoku[:,column]))) + (9 - len(np.unique(sudoku[row,:])))
    return(numberOfErrors)

# Indexes 9*9 into 9 3*3 miniblocks
def make3x3Squares ():
    finalListOfBlocks = []
    for r in range (0,9):
        tmpList = []
        block1 = [i + 3*((r)%3) for i in range(0,3)]
        block2 = [i + 3*math.trunc((r)/3) for i in range(0,3)]
        for x in block1:
            for y in block2:
                tmpList.append([x,y])
        finalListOfBlocks.append(tmpList)
    return(finalListOfBlocks)
# finds an empty box(0 filled), fills the box with a number(1,9) that is not present in block containing the chosen box.
def Fill3x3BlocksRandomly(sudoku, listOfBlocks):
    for block in listOfBlocks:
        for box in block:
            if sudoku[box[0],box[1]] == 0:
                currentBlock = sudoku[block[0][0]:(block[-1][0]+1),block[0][1]:(block[-1][1]+1)]
                sudoku[box[0],box[1]] = choice([i for i in range(1,10) if i not in currentBlock])
    return sudoku
# calculates the sum of one 3*3 block
def SumOfOneBlock (sudoku, oneBlock):
    finalSum = 0
    for box in oneBlock:
        finalSum += sudoku[box[0], box[1]]
    return(finalSum)
# selects two random boxes which are not fixed
def TwoRandomBoxesWithinBlock(fixedSudoku, block):
    while (1): # do until both not fixed blocks are found
        firstBox = random.choice(block)
        secondBox = choice([box for box in block if box is not firstBox ])

        if fixedSudoku[firstBox[0], firstBox[1]] != 1 and fixedSudoku[secondBox[0], secondBox[1]] != 1:
            return([firstBox, secondBox])
# flips the boxes for p
def FlipTheBoxes(sudoku, boxesToFlip):
    preferredSudoku = np.copy(sudoku)
    var = preferredSudoku[boxesToFlip[0][0], boxesToFlip[0][1]]
    preferredSudoku[boxesToFlip[0][0], boxesToFlip[0][1]] = preferredSudoku[boxesToFlip[1][0], boxesToFlip[1][1]]
    preferredSudoku[boxesToFlip[1][0], boxesToFlip[1][1]] = var
    return preferredSudoku
# Flip the boxes and return preferredState
def PreferredState (sudoku, fixedSudoku, listOfBlocks):
    randomBlock = random.choice(listOfBlocks)
    boxesToFlip = TwoRandomBoxesWithinBlock(fixedSudoku, randomBlock)
    preferredSudoku = FlipTheBoxes(sudoku,  boxesToFlip)
    return([preferredSudoku, boxesToFlip])
# Choose new state
def ChooseNewState (currentSudoku, fixedSudoku, listOfBlocks, Temp):
    proposed_var = PreferredState(currentSudoku, fixedSudoku, listOfBlocks)
    newSudoku = proposed_var[0]
    boxesToCheck = proposed_var[1]
    currentCost = errors(boxesToCheck[0][0], boxesToCheck[0][1], currentSudoku) + errors(boxesToCheck[1][0], boxesToCheck[1][1], currentSudoku)
    newCost = errors(boxesToCheck[0][0], boxesToCheck[0][1], newSudoku) + errors(boxesToCheck[1][0], boxesToCheck[1][1], newSudoku)
    # currentCost = CalculateNumberOfErrors(currentSudoku)
    # newCost = CalculateNumberOfErrors(newSudoku)
    costDifference = newCost - currentCost
    if(np.random.uniform(1,0,1) < math.exp(-costDifference/Temp)):
        # if new cost is lower, costDifference will be negative so exp factor is >1, we will surely choose better state

        # if new cost is higher, costDifference will be positive so exp factor is less than 1
        # temp proportional to choosing not better states.
        # as temp gets to 0, we narrow down the choosing rate
        return([newSudoku, costDifference])
    return([currentSudoku, 0])

# Number of iterations
def numOfIters(fixed_sudoku):
    iterations = 0
    for i in range (0,9):
        for j in range (0,9):
            if fixed_sudoku[i,j] != 0:
                iterations += 1
    return iterations
# Solves the Sudoku
def sudokuWithSA (sudoku):
    isSol = 0
    while (isSol == 0):
        coolingRate = 0.999 # suggested cooling factor : 0.999
        stuckCounter = 0
        fixedSudoku = np.copy(sudoku)
        print('\n\n---:InitialSudoku:---')
        coutSudoku(sudoku)
        fixSudokuValues(fixedSudoku)
        block_List = make3x3Squares()
        sudokuDup = Fill3x3BlocksRandomly(sudoku, block_List)
        temp = 0.5 # suggested initial Temp : 0.5
        cost = Cost_f(sudokuDup)
        iterations = numOfIters(fixedSudoku)
        if cost == 0:
            isSol = 1

        while isSol == 0:
            previousCost = cost
            for i in range (0, iterations):
                newState = ChooseNewState(sudokuDup, fixedSudoku, block_List, temp)
                sudokuDup = newState[0]
                scoreDiff = newState[1]
                cost += scoreDiff
                if cost == 0:
                    isSol = 1
                    break
                #print(cost)

            temp *= coolingRate
            if cost == 0:
                isSol = 1
                break
            if cost >= previousCost:
                stuckCounter += 1
            else:
                stuckCounter = 0
            if (stuckCounter > 40):
                # Note : 40 is obtained using hit and trail. 
                # Using diff values, values close to 40 are found better for given puzzle.
                temp += 2 
            if(Cost_f(sudokuDup)==0):
                coutSudoku(sudokuDup)
                break
    return sudokuDup

solution = sudokuWithSA(sudoku)
print('\n\n---:SolvedSudoku:---')
#print(Cost_f(solution))
coutSudoku(solution)

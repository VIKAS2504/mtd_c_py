# Accept a number and find its square and square root
import math
print("Enter a number to find its root")
input_number = int(input()) # input function always returns string

root_number = math.sqrt(input_number)
print('Square root of', input_number, 'is'  + str(root_number)) 
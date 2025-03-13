input_str = input('Enter the input')

digits = []
#digits = list()

for char in input_str:
    if char.isdigit():
        digits.append(char)
    
digits=list(set(digits))

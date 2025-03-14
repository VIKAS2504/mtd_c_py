def find_area_of_rectangle(length,breadth):
    return length * breadth

length =  int(input('Enter length of the Rectangle: '))
breadth = int(input('Enter breadth of the Rectangle: '))
area = find_area_of_rectangle(length,breadth)
print(f'Area of Rectangle = {area}')
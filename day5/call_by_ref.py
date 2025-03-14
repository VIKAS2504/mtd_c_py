def my_func(my_num):
    my_num[0] = 1000
    my_num[-1] = 10000

print('Enter space seperated numbers of your choice')
numbers = [int(element) for element in input().split()]
print(numbers)
my_func(numbers)
print(numbers)



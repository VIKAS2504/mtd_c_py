m = int(input('Enter the M value (start value): '))
n = int(input('Enter the N value (End value): '))
p = int(input('Enter the P value (Increment value): '))

i = m
while i <= n:
    print(i, end=' ')
    i = i + p;

else:
    print('Mostly u gave value to M which is bigger than N')
m = int(input('Enter the M value (start value): '))
n = int(input('Enter the N value (End value): '))
p = int(input('Enter the P value (Increment value): '))

for i in range(m,n,p):
    print(i, end=' ')
    i += 2
    
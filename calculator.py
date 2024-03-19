#Simple calculator :
num1 = int(input('enter first number:'))
op1 = input('enter the operation:')
num2 = int(input('enter second number:'))
if op1 == '+':
    sum = num1+num2
    print(f'{num1} + {num2} = {sum}')
elif op1 == '-':
    subt = num1-num2
    print(f'{num1} - {num2} = {subt}')
elif op1 == '*':
    multi = num1*num2
    print(f'{num1} * {num2} = {multi}')
elif op1 == '/':
    div = num1/num2
    print(f'{num1} / {num2} = {div}')
elif op1 == '%':
    mod = num1%num2
    print(f'{num1} % {num2} = {mod}')
elif op1 == '**':
    expo = num1**num2
    print(f'{num1} ** {num2} = {expo}')
else:
    pass

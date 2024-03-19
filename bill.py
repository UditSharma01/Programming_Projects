#write a program to calculate discount:

a = int(input('enter amount:\n'))

if(a>=1000 and a<=2000):
    print('you will get a discont of 5% &')
    x = a*(5/100)
    y = a - x
    print('your total amount is', y)
elif(a>=2000 and a<=5000):
    print('you will get a discont of 10% &')
    x = a*(10/100)
    y = a - x
    print('your total amount is', y)
elif(a>=5000 and a<=1000):
    print('you will get a discont of 15% &')
    x = a*(15/100)
    y = a - x
    print('your total amount is', y)
else:
    print('your total amount is', a)
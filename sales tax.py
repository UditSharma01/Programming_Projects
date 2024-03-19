#Finding sales tax :
n = int(input("enter the number of items which you want to buy:"))
sub_total = 0
i=1
while i<=n:
    item = int(input("enter price of item:"))
    i=i+1
    sub_total = sub_total+item
    sales_tax = sub_total*0.6
    total = sub_total+sales_tax
    print("sub total:", sub_total)
    print("sales tax:", sales_tax)
    print("amount including sales tax:", total)
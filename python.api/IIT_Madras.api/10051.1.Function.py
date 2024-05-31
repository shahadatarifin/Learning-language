# function for calculating discount

def discount(cost, d):
    final_price = cost - (cost * (d/100))
    return final_price

x = int(input("Enter the price: "))
y = int(input("Enter the percentage of discount: "))
print("Final price is ", discount(x, y))
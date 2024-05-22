'''
Problem 2: Find the total prifit or loss of each trader working
in a trading firm. Information regarding number of traders
and number of transctions is unknown

input                       Output

SJ_323                      57558
3534 56456 -2432 0

PK_874                      10853
9878 32 798 131 14 0

VM_578                      3541
-214-24 -4543 8322 0

AT_194                      -2150
242 -2412 20 0

-1                  
'''
empID = str(input("Enter emply ID: "))

while(empID != '-1'):
    profit_loss = 0
    trade = int(input("Enter the trade amount: "))
    
    while(trade != 0):
        profit_loss = profit_loss + trade
        trade = int(input("Enter the trade amount: "))

    print(f'Profit/Loss of employee {empID} is {profit_loss}')
    empID = str(input("Enter emply ID: "))

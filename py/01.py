p = int(input("enter the amount"))
t = int(input("enter no of years"))
r = 0.05  # intrest rate
ass = p * (1 + r * t)  # final amt
n = 12  # number of times intrest is compunded per unit time
mul = (1 + (r / n)) ** (n * t)
acc = p * mul
print("amount after simple intrest is :", ass)
print("amount after compound intrest is :", acc)

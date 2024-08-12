n1 = int(input("Enter first number: "))
n2 = int(input("Enter second number: "))
n3 = int(input("Enter third number: "))
if(n1 > n2 > n3):
    print("Decreasing")
elif(n1 < n2 < n3):
    print("Increasing")
else:
    print("Neither increasing or decreasing")
n = int(input("Enter a number: "))

sum = 0
temp = n

if(n > 999):
    print("Only 3 digit numbers are allowed!")
else:
    while(n > 0):
        r = n % 10
        sum = sum + (r * r * r)
        n = n // 10
    if(temp == sum):
        print("Armstrong number!")
    else:
        print("Not an Armstrong number!")

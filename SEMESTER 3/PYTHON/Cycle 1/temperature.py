inpData = input("Enter temperature (C/F): ")

if inpData.lower() == 'c':
    celsius = float(input("Enter temperature in Celsius: "))
    fahrenheit = (9 * celsius / 5) + 32
    print("Temperature in Fahrenheit: ", fahrenheit)
    
elif inpData.lower() == 'f':
    fahrenheit = float(input("Enter temperature in Fahrenheit: "))
    celsius = (fahrenheit - 32) * 5 / 9
    print("Temperature in Celsius: ", celsius)
    
else:
    print("Invalid input!")

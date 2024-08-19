# Function to calculate the area of a square
def area_of_square(side_length):
    return side_length ** 2

# Function to calculate the surface area of a cube
def surface_area_of_cube(side_length):
    return 6 * (side_length ** 2)

# Start of the program
print("Choose the shape:")
print("1. Square")
print("2. Cube")

choice = int(input("Enter your choice (1 or 2): "))

if choice == 1:
    side_length = float(input("Enter the side length of the square: "))
    area = area_of_square(side_length)
    print(f"The area of the square is: {area}")
elif choice == 2:
    side_length = float(input("Enter the side length of the cube: "))
    surface_area = surface_area_of_cube(side_length)
    print(f"The surface area of the cube is: {surface_area}")
else:
    print("Invalid choice! Please select either 1 or 2.")

class Circle:
    def __init__(self, radius):
        self.radius = radius

    # Overloading the addition operator
    def __add__(self, other):
        return Circle(self.radius + other.radius)

    # Overloading the multiplication operator
    def __mul__(self, factor):
        return Circle(self.radius * factor)

    # Overloading the equality operator
    def __eq__(self, other):
        return self.radius == other.radius

    # Overloading the not equal to operator
    def __ne__(self, other):
        return self.radius != other.radius

    def __str__(self):
        return f"Circle with radius: {self.radius}"

# Create Circle objects
circle1 = Circle(5)
circle2 = Circle(3)

# Addition
print("Addition:", circle1 + circle2)  # Circle with radius: 8

# Multiplication
print("Multiplication:", circle1 * 2)  # Circle with radius: 10

# Equality
print("Equal:", circle1 == circle2)  # False

# Not Equal
print("Not Equal:", circle1 != circle2)  # True

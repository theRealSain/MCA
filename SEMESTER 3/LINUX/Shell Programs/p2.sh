echo "Enter length of rectangle:" 
read length 
echo "Enter breadth of rectangle:" 
read breadth 
echo "Enter radius of circle:" 
read radius 

rect_area=$(echo "$length * $breadth" | bc)
rect_perimeter=$(echo "2 * ($length + $breadth)" | bc)
circle_area=$(echo "3.14159 * $radius * $radius" | bc)
circle_circumference=$(echo "2 * 3.14159 * $radius" | bc)

echo "Rectangle area: $rect_area" 
echo "Rectangle perimeter: $rect_perimeter" 
echo "Circle area: $circle_area" 
echo "Circle circumference: $circle_circumference"

import math

r = float(input("Enter the radius of the circle: "))

area = math.pi * r**2
perimeter = 2 * math.pi * r

print(f"The area of the circle is {area:.3f}")
print(f"The perimeter of the circle is {perimeter:.3f}")

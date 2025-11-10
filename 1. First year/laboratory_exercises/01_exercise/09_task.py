minutes = int(input("Enter minutes: "))

days = minutes // 1440
hours = minutes // 60
left_minutes = minutes % 60

print(f"{minutes} minutes are equal to: \n Days: {days}, hours: {hours}, minutes: {minutes}")

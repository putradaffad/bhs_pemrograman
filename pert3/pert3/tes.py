value_str = input("enter value : ")
value = int(value_str)


if value >= 90:
    grade = "A"
elif value >= 80:
    grade = "B"
elif value >= 70:
    grade = "B"
elif value >= 60:
    grade = "B"
else :
    grade = "E"

print("Grade : %s" % grade)
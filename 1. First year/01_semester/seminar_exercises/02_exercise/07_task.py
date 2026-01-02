import random

length = int(input())

list1 = [random.randint(0, 100) for i in range(length)]
list2 = [random.randint(0, 100) for j in range(length)]

print(list1)
print(list2)

final_result = []

for _ in range(length):
    final_result.append(list1[0])
    del list1[0]

    final_result.append(list2[0])
    del list2[0]

print(final_result)

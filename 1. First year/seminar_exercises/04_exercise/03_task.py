class Numbers:
    def __init__(self, numbers):
        self.numbers = numbers

    def get_numbers(self):
        return self.numbers


def create_object(nums1_obj, nums2_obj):
    nums1 = nums1_obj.get_numbers()
    nums2 = nums2_obj.get_numbers()

    final_numbers_list = []

    bigger_list = nums1 if len(nums1) > len(nums2) else nums2
    smaller_list = nums2 if len(nums2) < len(nums1) else nums1
    difference = len(bigger_list) - len(smaller_list)

    for i in range(len(smaller_list)):
        final_numbers_list.append(smaller_list[i] + bigger_list[i])

    for _ in range(difference):
        final_numbers_list.append(0)

    return Numbers(final_numbers_list)


numbers1 = Numbers([1, 2, 3])
numbers2 = Numbers([4, 5, 6])
print(create_object(numbers1, numbers2).get_numbers())

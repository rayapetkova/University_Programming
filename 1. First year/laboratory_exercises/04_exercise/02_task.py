def is_palindrome(num):
    return 1 if str(num) == str(num)[::-1] else 0


number = int(input())
print(is_palindrome(number))

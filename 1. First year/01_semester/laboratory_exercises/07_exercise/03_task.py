import re


class PasswordError(Exception):
    @staticmethod
    def validate_password(password):
        if len(password) < 8:
            raise PasswordError('Password must be at least 8 characters long.')

        digit_regex = r'\d+'
        digit_regex_matches = re.findall(digit_regex, password)
        if not digit_regex_matches:
            raise PasswordError('Password must contain at least one digit.')

        uppercase_letter_regex = r'[A-Z]+'
        uppercase_letter_regex_matches = re.findall(uppercase_letter_regex, password)
        if not uppercase_letter_regex_matches:
            raise PasswordError('Password must contain at least one uppercase letter.')

        return True


user_password = input()

try:
    PasswordError.validate_password(user_password)
except PasswordError as p_e:
    print(f'Invalid password: {p_e}')
else:
    print('Password is valid')

class Car:
    def __init__(self, car_brand, car_model, car_price, car_color, manifacture_year):
        self.car_brand = car_brand
        self.car_model = car_model
        self.car_price = car_price
        self.car_color = car_color
        self.manifacture_year = manifacture_year

    def display_info(self):
        return f'Car Info: ' \
               f'Brand - {self.car_brand}; ' \
               f'Model - {self.car_model}; ' \
               f'Price - {self.car_price}; ' \
               f'Color: {self.car_color}; ' \
               f'Manifacture Year - {self.manifacture_year}'


n = int(input('Въведете колко коли искате да се създадат: '))

cars = []
for i in range(n):
    brand = f'Brand {i}'
    model = f'Model {i}'
    price = f'Price {i}'
    color = f'Color {i}'
    manifacture_year = f'Manifacture Year {i}'

    car = Car(brand, model, price, color, manifacture_year)
    cars.append(car)


def sort_price():
    sorted_cars = [car.display_info() for car in sorted(cars, key=lambda x: x.car_price, reverse=True)]

    if not sorted_cars:
        print('Няма коли за сортиране.')
        return 'Няма коли за сортиране.'

    print(sorted_cars)
    return sorted_cars


def list_by_brand(brand):
    cars_by_brand = []

    for car in cars:
        if car.car_brand == brand:
            cars_by_brand.append(car)

    if not cars_by_brand:
        print('Няма коли с тази марка.')
        return 'Няма коли с тази марка.'

    cars_by_brand = [car.display_info() for car in cars_by_brand]
    print(cars_by_brand)
    return cars_by_brand


def search_color(color):
    searched_car = None

    sorted_by_price_cars = sorted(cars, key=lambda x: x.car_price, reverse=True)
    for car in sorted_by_price_cars:
        if car.car_color == color:
            searched_car = car
            break

    if not searched_car:
        return 'Няма кола с този цвят.'

    return searched_car.display_info()


def newest_car():
    searched_cars = []

    for car in cars:
        if car.manifacture_year == 2022:
            searched_cars.append(car)

    if not searched_cars:
        return 'Няма коли, произведени през 2022.'

    searched_cars = [car.display_info() for car in searched_cars]
    return searched_cars


sort_price()
list_by_brand('Brand 1')
print(search_color('Color 2'))
print(newest_car())

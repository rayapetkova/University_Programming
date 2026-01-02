# Създайте система, която управлява автомобили за отдаване под наем.
# Използвайте класове, наследяване, енкапсулация и добра стуктурираност на кода.
# Искаме базов клас Car, който трябва да има:
# id, marka, model, godina, bazova cena na den, probeg, tip gorivo, neobhodima kategoriq shofiorska knijka, dali e nalichen ili ne
# Този клас трябва да има методи за изчисляване на наема на ден, маркиран като наличен или неналичен, представяне на информацията на автомобила
# Подкласове на Car: икономична кола - 10% отстъпка от базовата цена, Premium Car - 50% над базовата цена,sqv - 30% увеличение, електрическа кола - 20% отстъпка

# Създайте клас Customer: име, телефон, имейл, категория шофьорска книжка и списък с резервации
# Методи: дали клиентът може да наема дадена кола и метод за добавяне на резервация

# Клас Reservation: автомобил, клиент, брой дни, крайна цена, статус (дали резервацията е active, pending, completed, cancelled)
# Методи: за активиране, за приключване, за отказ

# Клас CarRental. Управлява списъка с клиенти и списъка с резервации
# Методи: да добавя/премахва автомобил, да показва колко са налични; търсене по марка и модел;
# за клиенти да добавя, да ги намира по телефон;
# за резервации да създава, проверка за валидност, активиране, приключване и отказ; извеждане на активни и приключени резервации
# за отчет - общ приход, клиенти с активни наеми

from abc import ABC, abstractmethod


class Car(ABC):
    def __init__(self, id, brand, model, year, price_per_day, mileage, type_fuel, licence, available):
        self.id = id
        self.brand = brand
        self.model = model
        self.year = year
        self.price_per_day = price_per_day
        self.mileage = mileage
        self.type_fuel = type_fuel
        self.licence = licence
        self.available = available

    @abstractmethod
    def rent_per_day(self):
        pass

    def is_available(self):
        return "Yes, the car is available." if self.available else "No, the car is not available."

    def __repr__(self):
        return f"Car info: \nBrand: {self.brand}\nModel: {self.model}\nYear: {self.year}\nRent per day: {self.rent_per_day()}\n" \
               f"Mileage: {self.mileage}\nType fuel: {self.type_fuel}\nLicence category: {self.licence}\n" \
               f"Is available: {self.is_available()}"


class EconomyCar(Car):
    def __init__(self, id, brand, model, year, price_per_day, mileage, type_fuel, licence, available):
        super().__init__(id, brand, model, year, price_per_day, mileage, type_fuel, licence, available)

    def rent_per_day(self):
        rent_per_day = self.price_per_day - 0.1 * self.price_per_day

        return {rent_per_day}


class PremiumCar(Car):
    def __init__(self, id, brand, model, year, price_per_day, mileage, type_fuel, licence, available):
        super().__init__(id, brand, model, year, price_per_day, mileage, type_fuel, licence, available)

    def rent_per_day(self):
        rent_per_day = self.price_per_day + 0.5 * self.price_per_day

        return {rent_per_day}


class SqvCar(Car):
    def __init__(self, id, brand, model, year, price_per_day, mileage, type_fuel, licence, available):
        super().__init__(id, brand, model, year, price_per_day, mileage, type_fuel, licence, available)

    def rent_per_day(self):
        rent_per_day = self.price_per_day + 0.3 * self.price_per_day

        return {rent_per_day}


class ElectricCar(Car):
    def __init__(self, id, brand, model, year, price_per_day, mileage, type_fuel, licence, available):
        super().__init__(id, brand, model, year, price_per_day, mileage, type_fuel, licence, available)

    def rent_per_day(self):
        rent_per_day = self.price_per_day - 0.2 * self.price_per_day

        return {rent_per_day}


class Customer:
    def __init__(self, name, phone, email, licence, reservations=[]):
        self.name = name
        self.phone = phone
        self.email = email
        self.licence = licence
        self.reservations = reservations

    def can_rent_a_car(self, car):
        if self.licence == car.licence and car.is_available():
            return True

        return False

    def add_reservation(self, car):
        if self.can_rent_a_car(car):
            self.reservations.append(car)

    def __repr__(self):
        return f'Customer: {self.name}, {self.phone}, {self.licence}'


class Reservation:
    def __init__(self, car, customer, days):
        self.car = car
        self.customer = customer
        self.days = days
        self.final_price = car.rent_per_day() * days
        self.status = 'Pending'

    def activate(self):
        if self.customer.can_rent_a_car():
            self.status = 'Active'
            return 'Reservation successfully activated!'

    def complete(self):
        if self.customer.can_rent_a_car() and self.status == 'Active':
            self.status = 'Completed'
            return 'Reservation successfully completed!'

    def cancel(self):
        if self.customer.can_rent_a_car():
            self.status = 'Cancelled'
            return 'Reservation successfully cancelled!'


class CarRental:
    def __init__(self, customers, cars=[], reservations=[]):
        self.customers = customers
        self.cars = cars
        self.reservations = reservations

    def add_car(self, car):
        if car not in self.cars:
            self.cars.append(car)
            return 'Successfully added car!'

        return 'Cannot add car! Car is already in list!'

    def remove_car(self, car):
        if car in self.cars:
            self.cars.remove(car)
            return 'Successfully removed car!'

        return 'Car not in list!'

    def available_cars(self):
        return [car for car in self.cars if car.is_available]

    def find_car(self, brand, model):
        searched_car = None

        for car in self.cars:
            if car.brand == brand and car.model == model:
                searched_car = car

        return searched_car if searched_car else 'There is no such car!'

    def add_customer(self, customer):
        if customer not in self.customers:
            self.customers.append(customer)
            return 'Successfully added customer!'

        return 'Cannot add customer! Customer is already in list!'

    def remove_customer(self, customer):
        if customer in self.customers:
            self.customers.remove(customer)
            return 'Successfully removed customer!'

        return 'Customer not in list!'

    def find_customer_by_phone_number(self, phone_number):
        searched_customer = None

        for customer in self.customers:
            if customer.phone == phone_number:
                searched_customer = customer

        return searched_customer if searched_customer else 'There is no such customer!'

    def add_reservation(self, car, customer, days):
        reservation = Reservation(car, customer, days)

        if reservation not in self.reservations:
            self.reservations.append(reservation)
            return 'Successfully added reservation!'

        return 'Reservation already in list!'

    def activate_reservation(self, reservation):
        if reservation in self.reservations:
            reservation.activate()
            return 'Successfully activated reservation!'

        return 'There is no such reservation!'

    def complete_reservation(self, reservation):
        if reservation in self.reservations:
            reservation.complete()
        else:
            return 'There is no such reservation!'

    def cancel_reservation(self, reservation):
        if reservation in self.reservations:
            reservation.cancel()
        else:
            return 'There is no such reservation!'

    def active_reservations(self):
        return [reservation for reservation in self.reservations if reservation.status == 'Active']

    def completed_reservations(self):
        return [reservation for reservation in self.reservations if reservation.status == 'Completed']

    def report(self):
        total_income = sum([reservation.final_price for reservation in self.reservations])
        customers_with_active_reservations = [reservation.customer for reservation in self.reservations if
                                              reservation.status == 'Active']

        return f"Total income: {total_income}\n" \
               f"Customers with active reservations: {'; '.join(customers_with_active_reservations)}"


economy_car = EconomyCar(1, 'neshto1', 'neshto1', 2007, 40, 10000, 'fuel1', 'licence1', True)
premium_car = EconomyCar(2, 'neshto2', 'neshto2', 2010, 50, 20000, 'fuel2', 'licence2', False)
sqv_car = EconomyCar(3, 'neshto3', 'neshto3', 2017, 60, 30000, 'fuel3', 'licence3', True)
electric_car = ElectricCar(4, 'neshto4', 'neshto4', 2023, 45, 25000, 'fuel4', 'licence4', False)

# print(economy_car)
# print(premium_car)
# print(sqv_car)
# print(electric_car)

customer1 = Customer('Raya', '0888888888', 'rpetkova@hotmail.com', 'licence1', [])
customer1.can_rent_a_car(economy_car)

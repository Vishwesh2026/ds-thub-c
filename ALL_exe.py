###############################################################################################################################################################################
# # Write a program that asks the user for an integer and creates a list that consists of the factors of that
# # integer
# # PROGRAM:
# num = int(input("Enter an integer: "))
# factors = []
# for i in range(1, num + 1):
#     if num % i == 0:
#         factors.append(i)
# print("Factors of", num, "are", factors)
###############################################################################################################################################################################
# # Write a program that removes any repeated items from a list so that each item appears at most once.
# # For instance, the list [1,1,2,3,4,3,0,0] would become [1,2,3,4,0]
# def remove_duplicates(original_list):
#     return list(set(original_list))


# # Example usage
# original_list = list(map(int, input("Enter the list:").strip().split()))
# unique_list = remove_duplicates(original_list)
# print(unique_list)
###############################################################################################################################################################################
# # Write a program that asks the user to enter a length in feet. The program should then give the
# # user the option to convert from feet into inches, yards, miles, millimeters, centimeters, meters, or
# # kilometers. Say if the user enters a 1, then the program converts to inches, if they enter a 2, then
# # the program converts to yards, etc. While this can be done with if statements,it is much shorter
# # with lists and it is also easier to add new conversions if you use lists.
# feet = int(input("Enter feet:"))
# opt = int(
#     input(
#         "enter choice 1:inches 2:yards 3:miles 4:millimeters 5.centimeter 6.meters 7.kilometers"
#     )
# )
# if opt == 1:
#     print(round(feet * 12, 3))
# elif opt == 2:
#     print(round(feet * 0.333, 3))
# elif opt == 3:
#     print(round(feet * 0.000189, 3))
# elif opt == 4:
#     print(round(feet * 304.8, 3))
# elif opt == 5:
#     print(round(feet * 30.48, 3))
# elif opt == 6:
#     print(round(feet * 0.3048, 3))
# elif opt == 7:
#     print(round(feet * 0.0003048, 3))
###############################################################################################################################################################################
# # Write a function called sum_digits that is given an integer num and returns the sum of the digits of
# # num.
# def sum_digits(num):
#     # Convert the number to a string
#     num_str = str(num)

#     # Initialize a variable to store the sum
#     digit_sum = 0

#     # Iterate over each character in the string
#     for digit_char in num_str:
#         # Convert the character back to an integer
#         digit = int(digit_char)

#         # Add the digit to the sum
#         digit_sum += digit

#     # Return the final sum
#     return digit_sum


# number = int(input("Enter the number:"))
# result = sum_digits(number)
# print(result)  # Output: 15


###############################################################################################################################################################################
# # Write a function called first_diff that is given two strings and returns the first location in which the
# # strings differ. If the strings are identical, it should return -1.
# def first_diff(str1, str2):
#     # Find the minimum length of the two strings
#     min_len = min(len(str1), len(str2))

#     # Iterate over the characters of the strings
#     for i in range(min_len):
#         if str1[i] != str2[i]:
#             return i

#     # If all characters up to the minimum length are the same, check for different lengths
#     if len(str1) != len(str2):
#         return min_len

#     # If no differences are found and the lengths are equal, return -1
#     return -1


# string1 = input("Enter the first string:")
# string2 = input("Enter the second string:")
# result = first_diff(string1, string2)
# print(result)  # Output: 4


###############################################################################################################################################################################


# # Write a function called number_of_factors that takes an integer and returns how many factors the
# # number has.
# def number_of_factors(num):
#     count = 0

#     # Iterate from 1 to the number itself
#     for i in range(1, num + 1):
#         if num % i == 0:
#             count += 1

#     return count


# num = int(input("Enter the number:"))
# result = number_of_factors(num)
# print("number of factores for", num, "are:", result)
###############################################################################################################################################################################


# # write a function called is_sorted that is given a list and returns True if the list is sorted and False
# # otherwise
# def is_sorted(lst):
#     return lst == sorted(lst)


# my_list = list(map(int, input("Enter the list number:").strip().split()))
# result = is_sorted(my_list)
# print(result)  # Output: True
###############################################################################################################################################################################
# # write a function root that is given x and an integer n and returns x power 1/n.In the function definition,
# # set the default value of n to 2
# def root(x, n=2):
#     return (x) ** (1 / n)


# x1 = int(input("Enter the first number:"))
# n1 = int(input("Enter the power form the number:"))
# x2 = int(input("Enter the second number:"))
# n2 = int(input("Enter the power form the number:"))
# x3 = int(input("Enter the third number:"))
# n3 = int(input("Enter the power form the number:"))

# print(root(x1, n1))
# print(root(x2, n2))
# print(root(x3, n3))
###############################################################################################################################################################################
# Write a function called merge that takes two already sorted lists of possibly different lengths, and
# merges them into a single sorted list.
# (a) Do this using the sort method. (b) Do this without using the sort method.
# # (a) Do this using the sort method.
# def merge(s1, s2):
#     s = s1 + s2
#     s.sort()
#     return s


# a = list(map(int, input("Enter sorted list1:").split()))
# b = list(map(int, input("Enter sorted list2:").split()))
# x = merge(a, b)
# print("sorted list after merging:", x)


# # (b) Do this without using the sort method.
# def merge(l1, l2):
#     s1 = len(l1)
#     s2 = len(l2)
#     l = []
#     i, j = 0, 0
#     while i < s1 and j < s2:
#         if l1[i] < l2[j]:
#             l.append(l1[i])
#             i += 1
#         else:
#             l.append(l2[j])
#             j += 1
#     return l + l1[i:] + l2[j:]


# a = list(map(int, input("Enter sorted list1:").split()))
# b = list(map(int, input("Enter sorted list2:").split()))
# print("sorted list after merging:", merge(a, b))


###############################################################################################################################################################################

# # Write a program that asks the user for a word and finds all the smaller words that can be made
# # from the letters of that word. The number of occurrences of a letter in a smaller word can’t
# # exceed the number of occurrences of the letter in the user’s word.
# from itertools import permutations

# s = input("Enter a word:")
# for i in range(2, len(s)):
#     for p in permutations(s, i):
#         print("".join(p), end=" ")

###############################################################################################################################################################################
# # Write a program that reads a file consisting of email addresses, each on its own line. Your program
# # should print out a string consisting of those email addresses separated by semicolons.
# file = open(input("Enter filename:"), "r")
# lines = file.readlines()
# for line in range(len(lines)):
#     if line == len(lines) - 1:
#         print("{}".format(lines[line].strip()))
#     else:
#         print("{}".format(lines[line].strip()), end=";")


###############################################################################################################################################################################
# # Write a program that reads a list of temperatures from a file called temps.txt, converts those
# # temperatures to Fahrenheit, and writes the results to a file called ftemps.txt.
# file1 = open("temps.txt", "r")
# lines = file1.readlines()
# file2 = open("ftemps.txt", "w")
# for i in range(len(lines)):
#     c = lines[i].strip()
#     f = round((float(c) * 1.8) + 32, 2)
#     file2.write(str(f) + "\n")
# file2.close()

###############################################################################################################################################################################


# # Write a class called Time whose only field is a time in seconds. It should have a method called
# # convert_to_minutes that returns a string of minutes and seconds formatted as in the following
# # example: if seconds is 230, the method should return '5:50'. It should also have a method called
# # convert_to_hours that returns a string of hours, minutes, and seconds formatted analogously to
# # the previous method.
# class Time:
#     def __init__(self, sec):
#         self.sec = sec

#     def convert_to_minutes(self):
#         n = self.sec
#         minutes = n // 60
#         seconds = n % 60
#         return str(minutes) + ":" + str(seconds)

#     def convert_to_hours(self):
#         n = self.sec
#         hours = n // 3600
#         minutes = (n // 60) % 60
#         seconds = n % 60
#         return str(hours) + ":" + str(minutes) + ":" + str(seconds)


# a = int(input("Enter seconds: "))
# c = Time(a)
# print("Time in minutes:seconds format --->", c.convert_to_minutes())
# print("Time in hours:minutes:seconds format --->", c.convert_to_hours())
###############################################################################################################################################################################
# # Write a Python class to implement pow(x, n).
# class power:
#     def pow(self, x, n):
#         print("pow(", x, ",", n, ") =", x**n)


# p = power()
# x = int(input("Enter 'x' value : "))
# n = int(input("Enter 'n' value : "))
# p.pow(x, n)


###############################################################################################################################################################################
# # Write a Python class to reverse a string word by word.
# class reverse:
#     def rev_sentence(self, sentence):
#         words = sentence.split(" ")
#         reverse_sentence = " ".join(reversed(words))
#         print(reverse_sentence)


# c = reverse()
# c.rev_sentence(input("Enter the string: "))
###############################################################################################################################################################################
# # Write a program to demonstrate Try/except/else.
# try:
#     a = int(input("Enter 'a' value:"))
#     b = int(input("Enter 'b' value:"))
#     c = a // b
# except ZeroDivisionError:
#     print("Division can't possible (b=0)")
# else:
#     print("a//b Value:", c)
###############################################################################################################################################################################
# # Write a program to demonstrate try/finally and with/as.
# # Program for try/finally:
# try:
#     a = int(input("Enter 'a' value:"))
#     b = int(input("Enter 'b' value:"))
#     c = a // b
# except ZeroDivisionError:
#     print("Division can't possible (b=0)")
# else:
#     print(" a//b Value:", c)
# finally:
#     print("End of the program")
# # program for with/as:
# file = open("file1.txt", "w")
# try:
#     file.write("hello friends how are you")
# finally:
#     file.close()
# with open("C:/Users/VISHU/OneDrive/Documents/Python Programs/file2.txt", "w") as file:
#     file.write("hello friends how are you")
###############################################################################################################################################################################
# # In algebraic expressions, the symbol for multiplication is often left out, as in 3x+4y. Computers
# # prefer those expressions to include the multiplication symbol, like 3*x+4*y. Write a program
# # that asks the user for an algebraic expression and then inserts multiplication symbols where
# # appropriate.

# import re


# def insert_multiplication_symbols(expression):
#     # Pattern to match variables or numbers followed by letters
#     pattern = r"(\d+)([a-zA-Z])"
#     # Replace the pattern with multiplication symbol
#     replaced_expression = re.sub(pattern, r"\1*\2", expression)
#     return replaced_expression


# # Ask the user for an algebraic expression
# user_expression = input("Enter an algebraic expression: ")

# # Insert multiplication symbols
# result = insert_multiplication_symbols(user_expression)

# print("Expression with multiplication symbols:", result)

###############################################################################################################################################################################

# # Write a class called Product. The class should have fields called name, amount, and price,
# # holding the product’s name, the number of items of that product in stock, and the regular price of
# # the product. There should be a method get_price that receives the number of items to be bought
# # and returns a the cost of buying that many items, where the regular price is charged for orders of
# # less than 10 items, a 10% discount is applied for orders of between 10 and 99 items, and a 20%
# # discount is applied for orders of 100 or more items. There should also be a method called
# # make_purchase that receives the number of items to be bought and decreases amount by that
# # much.
# class Product:
#     def __init__(self, name, amount, price):
#         self.name = name
#         self.amount = amount
#         self.price = price

#     def get_price(self, num_items):
#         if num_items < 10:
#             return self.price * num_items
#         elif 10 <= num_items < 100:
#             return self.price * num_items * 0.9  # 10% discount
#         else:
#             return self.price * num_items * 0.8  # 20% discount

#     def make_purchase(self, num_items):
#         if num_items <= self.amount:
#             self.amount -= num_items
#         else:
#             print("Insufficient stock!")

# # Example usage:
# product = Product("Example Product", 50, 10.0)
# print("Price for 5 items:", product.get_price(5))
# print("Price for 20 items:", product.get_price(20))
# print("Price for 150 items:", product.get_price(150))

# product.make_purchase(10)
# print("Amount after purchasing 10 items:", product.amount)

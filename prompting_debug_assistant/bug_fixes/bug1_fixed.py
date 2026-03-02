def get_last_items(items, n):
    return items[-n:]

fruits = ["apple", "banana", "cherry", "date", "elderberry"]
print(get_last_items(fruits, 3))

numbers = list(range(10))
print(get_last_items(numbers, 10))
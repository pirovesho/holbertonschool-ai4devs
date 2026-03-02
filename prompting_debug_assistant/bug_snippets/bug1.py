def get_last_items(items, n):
    result = []
    for i in range(-n, -1):
        result.append(items[i])
    return result

fruits = ["apple", "banana", "cherry", "date", "elderberry"]
print(get_last_items(fruits, 3)) 

numbers = list(range(10))
print(get_last_items(numbers, 10))
## Remove duplicate from list using set
# my_list = [1,2,2,3,4,4,5]
# my_list = ["a", "a", "b", "c", "d", "d" ]
# unique_list = list(set(my_list))
# print(unique_list)

### Remove duplicate from list using loop
"""
original_list = [1, 2, 2, 3, 4, 4, 5]
unique_list = []
for item in original_list:
    if item not in unique_list:
        unique_list.append(item)
print(unique_list)
"""
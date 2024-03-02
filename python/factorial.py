# Recursive Approach
# def fact_recursive(n):
#     if n == 0:
#         return 1
#     else:
#         return n * fact_recursive(n-1)
    
# res = fact_recursive(5)
# print(res)

########### Iterative Approach

def fact_iterative(n):
    result = 1
    for i in range(1, n+1):
        result *= i
    return result

res = fact_iterative(5)
print(res)
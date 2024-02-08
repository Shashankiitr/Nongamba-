def construct_k_level_permutation(n, k):
    perm = []
    
    # Place the first k/2 even numbers
    for i in range(2, k + 1, 2):
        perm.append(i)
    
    # Place the first k/2 odd numbers
    for i in range(1, k, 2):
        perm.append(i)
    
    # Place the remaining numbers in any order
    for i in range(k + 1, n + 1):
        perm.append(i)
    
    return perm

# Example usage:
n = 6
k = 4
result = construct_k_level_permutation(n, k)
print(result)

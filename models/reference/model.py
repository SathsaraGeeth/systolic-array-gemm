import numpy as np

A = np.array([
    [1,2,3,4],
    [5,6,7,8],
    [9,10,11,12],
    [13,14,15,16]
])

B = np.array([
    [1,4,2,2],
    [8,11,13,2],
    [1,0,1,3],
    [5,5,2,2]
])

C = np.array([
    [1,2,3,4],
    [5,6,7,8],
    [9,10,11,12],
    [13,14,15,16]
])
D = np.array([[0, 4, 2, 2],
        [18,21,1, 2],
        [1, 0, 19, 33],
        [5, 1, 2, 2],])

# Compute D = A^T @ B + C
E = A.T @ B + C

print("\nD = A^T @ B + C:\n", E)

F = C.T @ D + A

print("\nF = C^T @ D + A:\n", F)

G = D.T @ D + A

print("\nG = D^T @ D + A:\n", G)
import random

def generate_matrix(m, n):
    ls = []
    for i in range(m):
        sub_list = []
        for j in range(n):
            sub_list.append(random.randint(10,20))
        ls.append(sub_list)

    return ls


def matrix_multiply(m1, m2):
    if len(m1[0]) != len(m2):
        return None
    result = []
    for i in range(len(m1)):
        sub = []
        for j in range(len(m2[0])):
            v = 0
            for k in range(len(m2)):
                v += m1[i][k] * m2[k][j]
            sub.append(v)
        result.append(sub)
    return result
matrix1 = generate_matrix(3, 4)
matrix2 = generate_matrix(4, 5)
a = matrix_multiply(matrix1, matrix2)
print(a)

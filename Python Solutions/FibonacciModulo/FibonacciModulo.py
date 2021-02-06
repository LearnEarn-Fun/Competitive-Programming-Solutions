import sys

def pisano(m):
    i, j = 0, 1
    for d in range(0, m*m):
        i, j = j, (i+j)%m
        if (i == 0 and j == 1):
            return d + 1

def fibonacci(n, m):                   
    pis = pisano(m)
    n = n%pis
    if n <= 1:
        return n
    i, j = 0, 1
    for _ in range(n - 1):
        k = i + j
#        k = k%10
        i, j = j, k
    return (k%m)

input = sys.stdin.readline();          
n, m = map(int, input.split()) 
print(fibonacci(n, m))

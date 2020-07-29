def catalan(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    catalan = [0 for _ in range(n+1)]

    catalan[0] =1
    catalan[1] =1

    for i in range(2,n+1):
        catalan[i] = 0
        for j in range(i):
            catalan[i] = catalan[i] + catalan[j]*catalan[i-1-j]
    return catalan[n]

test = int(input())
for i in range(test):
    n = int(input())
    print(catalan(n))
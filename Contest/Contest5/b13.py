def uglyNumber(n):
    uN = [0] * n
    uN[0] = 1;
    m2 = m3 = m5 = 0
    mul2 = 2
    mul3 = 3
    mul5 = 5
    for i in range(1,n):
        uN[i] = min(mul2,mul3,mul5)
        if uN[i] == mul2:
            m2 += 1
            mul2 = uN[m2] * 2
        if uN[i] == mul3:
            m3 += 1
            mul3 = uN[m3] * 3       
        if uN[i] == mul5:
            m5 += 1
            mul5 = uN[m5] * 5 
    return uN[-1]

test = int(input())
for i in range(test):
    n = int(input())
    print(uglyNumber(n))

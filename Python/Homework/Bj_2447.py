def Dstar(n):
    global st
    if n == 3:
        st[0][:3] = st[2][:3] = [1]*3
        st[1][:3] = [1, 0, 1]
        return
    a = n//3
    Dstar(n//3)
    for i in range(3):
        for j in range(3):
            if i == 1 and j == 1:
                continue
            for k in range(a):
                st[a*i+k][a*j:a*(j+1)] = st[k][:a]  
n = int(input())    
st = [[0 for i in range(n)] for j in range(n)]
Dstar(n)
for i in st:
    for j in i:
        if j:
            print('*', end='')
        else:
            print(' ', end='')
    print()
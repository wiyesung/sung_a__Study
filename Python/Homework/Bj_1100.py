chess = []
cnt = 0

for i in range(8):
  chess.append(input())

for i in range(8):
  for j in range(8):
    if j % 2 == i % 2 and chess[i][j] == 'F':
      cnt += 1
print(cnt)
# https://www.youtube.com/watch?v=FYCGV6F1NuY
# 하노이 탑을 구현하는 함수 hanoi()를 정의한다. 
# 매개변수로는 N: 원반의 개수, a: 출발지 기둥 번호, b: 중간지점 기둥 번호, v: 목적지 기둥 번호를 전달받는다.
def hanoi(N, start, end, middle): 
    if N == 1: # 원반의 개수가 1인 경우, 출발지 기둥 번호 a에서 목적지 기둥 번호 v로 이동시키고 출력한다.
        print(start, "->", end)
    else: # 원반의 개수가 1보다 큰 경우, 재귀함수를 호출하여 문제를 분할하여 해결한다.
        hanoi(N-1, start, middle, end) # (1) 맨 아래 원반을 제외한 원반들을 출발지 기둥에서 중간지점 기둥으로 옮긴다.
        print(start, "->", end) # (2) 맨 아래 원반을 출발지 기둥에서 목적지 기둥으로 옮긴다.
         hanoi(N-1, middle, end, start) # (3) 중간지점 기둥에 있는 원반들을 목적지 기둥으로 옮긴다.

N = int(input("원판의 갯수를 입력하세요")) 
hanoi(N, '시작지', '목적지', '보조지') # hanoi 함수를 호출하여

sum = 2 ** N - 1 # 원반을 모두 옮기는데 필요한 이동 횟수를 계산한다.
print("sum=", sum) # 이동 횟수를 출력한다.





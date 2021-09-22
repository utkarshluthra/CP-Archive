# changing language due to lack of time

t=int(input())
while(t):
    n=int(input())
    if n==1:
        print(3)
    elif n==2:
        print(33)
    else:
        print(int("3"+((n-2)*"0")+"3"))
    t-=1
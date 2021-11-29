t =int(input())
while(t):
    n,k = map(int,input().split(" "));
    arr= list(map(int, input().split( )))
    answer=0;
    mx = max(arr)
    for i in range(k-1,n):
        if(arr[i]==mx):
            answer+= n-i;
    print(answer)
    t=t-1;
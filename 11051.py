n,k=map(int,input().split())
def f(n):
    r=1
    while(n>0):
        r*=n
        n-=1
    return r
def q(n,e):
    r=1
    while(n>e):
        r*=n
        n-=1
    return r
print(int(q(n,k)*f(n-k)%10007))

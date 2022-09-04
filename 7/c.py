flg=False
s=str(input())
x=int(s)
l,r=map(int, input().split())
if len(s)==1 or s[0]!='0':
    if l<=x<=r:
        flg=True
    else :
        flg=False
else:
    flg=False

if flg==True:
    print("Yes")
else:
    print("No")
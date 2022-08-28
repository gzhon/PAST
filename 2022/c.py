q="abcdefghijklmnopqrstuvwxyz"
s=str(input())
print(s[:1+((len(s)-1)%3)]+q[(int(len(s)-1)//3)-1])
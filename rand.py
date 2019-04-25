from random import randint, randrange
n=randint(900000,1000000)
k=randint(900000,1000000)
q=randint(900000,1000000)
print(n,k,q)
l=[randint(1000,n) for i in range(k)]
l.sort()
for i in range(1000): print(1,1)
for i in range(len(l)-1000): print(l[i],randint(1,max(1,n-l[i]-1)))
for i in range(1000): print(i+1,end=' ')
for i in range(q-1000): print(randint(1,n),end=' ')
print()
print()

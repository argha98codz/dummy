import math
t = int(input())
mm = 500000500000
while (t > 0):
	n,m = map(int, input().split())
	if n > 2:
		ans = -1
		if m > mm:
			ans = -1
		elif m < n-1 or m > (((n*(n-1))//2)+n):
			ans = -1
		elif m <= n+1:
			ans = 2
		elif m <= 2*n:
			ans = 3
		else:
			ans = (math.ceil((2*(m-2*n))/n)+3)
		print (ans)
	else:
		ans = -1
		if n == 1 and m == 0: ans = 0
		elif n == 1 and m == 1: ans = 1
		elif n == 2 and m == 1: ans = 1
		elif n == 2 and (m == 2 or m == 3): ans = 2
		print (ans)
			
	t-=1

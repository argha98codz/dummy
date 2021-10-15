from itertools import chain

n,k = map(int, input().split())
arr = list(map(int, input().split()))
mod = 10**9+7
if k==0:
	print ('1')
else:
	hmap = {}
	for i in arr:
		if i in hmap:
			hmap[i]+=1
		else:
			hmap[i] = 1
			
	l = []
	ans = 1
	for x in hmap.values():
		l.append(x)
	x = [1]    
	for i in l:
		x = [(a%mod + (b*i)%mod)%mod for a,b in zip(chain([0],x), chain(x,[0]))]
	print (sum(x[max(len(x)-1-k,0):])%mod)

	

class Solution:
    def minFlips(self, a: int, b: int, c: int) -> int:
        ans=bin(c)[2:]
        a=bin(a)[2:]
        b=bin(b)[2:]
        m=len(max([a,b,ans],key=len))
        if m>len(a):
            a='0'*(m-len(a))+a
        if m>len(b):
            b='0'*(m-len(b))+b
        if m>len(ans):
            ans='0'*(m-len(ans))+ans
        print(a,b,ans)
        c=0
        p=m-1
        while p>=0:
            print(a[p],b[p],ans[p])
            if (int(a[p]) or int(b[p]))!=int(ans[p]):
                if ans[p]=='0':
                    print('hi')
                    c+=(a[p]!='0')+(b[p]!='0')
                elif ans[p]=='1':
                    print('bye')
                    c+=1
            p-=1
        return c

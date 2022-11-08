class Solution:
    def factorial(self, N):
        def fact(n):
            if n==1:
                return 1
            return n*fact(n-1)
        ans=fact(N)
        return [ans]
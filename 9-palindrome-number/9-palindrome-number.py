class Solution:
    def isPalindrome(self, x: int) -> bool:
        try:
            return x == int(str(x)[::-1])
        except:
            return False
        
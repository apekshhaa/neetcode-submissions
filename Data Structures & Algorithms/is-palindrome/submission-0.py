class Solution:
    def isPalindrome(self, s: str) -> bool:
        clean_s = "".join(i.lower() for i in s if i.isalnum())
        return clean_s == clean_s[::-1]
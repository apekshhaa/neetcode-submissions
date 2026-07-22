class Solution:
    def countSeniors(self, details: List[str]) -> int:
        sum=0
        for i in range(len(details)):
            if details[i][11:13]>'60':
                sum +=1
        return sum
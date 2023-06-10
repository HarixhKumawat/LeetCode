class Solution:
    def convert(self, s: str, numRows: int) -> str:
        n = len(s)
        if numRows == 1:
            print(str)
            return s
        

        returnStr = ""
        list = [[] for _ in range(numRows + 1)]
        row = 0
        down = True
        
        for char in s :
            list[row] += char

            if row == numRows-1:
                down = False
            elif row == 0:
                down = True

            if down:
                row += 1
            else:
                row -= 1
            

        for i in range(numRows + 1):
            for char in list[i]:
                returnStr = returnStr + char

        return returnStr


s21 = Solution

ans = s21.convert(s21, "PAYPALISHIRING", 3)
print(ans)
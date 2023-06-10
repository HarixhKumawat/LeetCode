class Solution:
    def minReorder(self, n: int, connections: list[list[int]]) -> int:
        line_change: int = 0
        prosible: list[int]
        print(n)
        print(connections)

        for x in range(n):
            for con in connections:
                if(con[0] == n):
                    print(con)
            
        
        
        return 0
    


sol = Solution()
print("ans -> " + str(sol.minReorder(6, [[0,1],[1,3],[2,3],[4,0],[4,5]])) )

### unfinished
##  2316_Count_Unreachable_Pairs_of_Nodes_in_an_Undirected_Graph

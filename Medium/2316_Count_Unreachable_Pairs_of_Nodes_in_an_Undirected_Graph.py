from collections import defaultdict


class Solution:
    def countPairs(self, n: int, edges: list[list[int]]) -> int:
        graph = defaultdict(list)

        for src, dest in edges:
            graph[src].append(dest)
            graph[dest].append(src)

        def dfs(node) :
            if visited[node]:
                return 0
            
            visited[node] = True
            res = 1
            for neighbour in graph[node]:
                res += dfs(neighbour)

            return res


        visited = [False for _ in range(n)]

        component = []
        for node in range(n):
            if not visited(node):
                component.append(dfs(node))

        ans = (n*(n-1)) / 2

        for k in component:
            ans -= k * (k-1) /2
        
        
        return ans
    


sol1 = Solution()

sol1.countPairs(7, [[0,2],[0,5],[2,4],[1,6],[5,4]])
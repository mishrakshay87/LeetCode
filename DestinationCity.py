class Solution:
    from collections import defaultdict

    def destCity(self, paths: List[List[str]]) -> str:
        
        d = defaultdict(list)
        
        for cities in paths:
            d[cities[0]].append(cities[1])
        
        return(find_dest(d,paths[0][0]))
        
        
def find_dest(graph,src):
    
    for elem in graph[src]:
        if len(graph[elem]) == 0:
            return elem
        else:    
            return find_dest(graph,elem)
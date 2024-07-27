def dfs(graph, start, visited):
    stack = [start]
    count = 0
    
    while stack:
        node = stack.pop()
        if not visited[node]:
            visited[node] = True
            count += 1
            for neighbor in graph[node]:
                if not visited[neighbor]:
                    stack.append(neighbor)
    
    return count

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    num_computers = int(data[0])
    num_connections = int(data[1])
    
    graph = [[] for _ in range(num_computers + 1)]
    index = 2
    for _ in range(num_connections):
        a = int(data[index])
        b = int(data[index + 1])
        graph[a].append(b)
        graph[b].append(a)
        index += 2
    
    visited = [False] * (num_computers + 1)
    
    # Start DFS from computer 1
    infected_count = dfs(graph, 1, visited)
    
    # Subtract 1 to exclude the initially infected computer itself
    print(infected_count - 1)

if __name__ == "__main__":
    main()

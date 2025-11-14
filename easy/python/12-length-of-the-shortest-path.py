from collections import deque


def find_line(start: int, end: int, lines: dict) -> int:
    if start == end:
        return 0

    queue = deque([(start, 0)])
    visited = {start}

    while queue:
        curr, distance = queue.popleft()
        for neigh in lines[curr]:
            if neigh == end:
                return distance + 1
            elif neigh not in visited:
                visited.add(neigh)
                queue.append((neigh, distance + 1))

    return -1


def main():
    n = int(input())
    lines = {i + 1: [] for i in range(n)}

    for i in range(n):
        row = list(map(int, input().split()))
        for j in range(n):
            if row[j] > 0:
                lines[i + 1].append(j + 1)
    start, end = map(int, input().split())

    print(find_line(start, end, lines))


if __name__ == '__main__':
    main()

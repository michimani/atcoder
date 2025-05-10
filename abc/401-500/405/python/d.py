def main():
    h, w = map(int, input().split())

    g = [list(input()) for _ in range(h)]
    dist = [[-1] * w for _ in range(h)]
    exits = []

    for i in range(h):
        for j in range(w):
            if g[i][j] == 'E':
                exits.append((i, j))
                dist[i][j] = 0

    dirs = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    q = exits.copy()

    for i, j in q:
        for di, dj in dirs:
            ni, nj = i + di, j + dj
            if 0 <= ni < h and 0 <= nj < w:
                if g[ni][nj] == '.' and dist[ni][nj] == -1:
                    dist[ni][nj] = dist[i][j] + 1
                    q.append((ni, nj))

    ans = [['#'] * w for _ in range(h)]
    dest = ['^', 'v', '<', '>']

    for i in range(h):
        for j in range(w):
            if g[i][j] == '.':
                for k, (di, dj) in enumerate(dirs):
                    ni, nj = i + di, j + dj
                    if 0 <= ni < h and 0 <= nj < w:
                        if dist[ni][nj] == dist[i][j] - 1:
                            ans[i][j] = dest[k]
                            break
            elif g[i][j] == 'E':
                ans[i][j] = 'E'

    for row in ans:
        print(''.join(row))

if __name__ == '__main__':
    main()
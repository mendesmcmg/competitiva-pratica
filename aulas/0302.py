h, w = map(int, input().split())
columns = ['']*w
rows = ['']*h

for i in range(h):
  row = input()
  if '#' not in row:
    row = ' '*w
  rows[i]+=(row)
  for j in range(w):
    column=row[j]
    if '#' not in column:
      column = ' '*w
    columns[j]+=column

print(rows, columns)
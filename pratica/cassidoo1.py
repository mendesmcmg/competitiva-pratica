a = ["C", "D", "E", "F", "G", "H"];
b = [3, 0, 4, 1, 2, 5];

resp = []

for i in range(len(a)):
  resp.append("")


for i in range(len(a)):
  resp[b[i]] = a[i]

print(resp)
import os

for root, dirs, files in os.walk('.'):
    for file in files:
        if file.endswith('.cpp'):
            path = os.path.join(root, file)
            with open(path, 'r', encoding='utf-8', errors='ignore') as f:
                text = f.read()
            
            # Tự động chèn dấu xuống dòng sau các ký tự đặc biệt
            text = text.replace('#include <bits/stdc++.h>', '#include <bits/stdc++.h>\n')
            text = text.replace('#include <iostream>', '#include <iostream>\n')
            text = text.replace('using namespace std;', 'using namespace std;\n')
            text = text.replace('{', '{\n')
            text = text.replace('}', '\n}\n')
            text = text.replace(';', ';\n')
            
            with open(path, 'w', encoding='utf-8') as f:
                f.write(text)
print("Đã bẻ dòng toàn bộ file thành công!")

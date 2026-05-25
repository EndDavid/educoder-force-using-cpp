import os

cppcode = """
#include <cstdio>\n
#include <cstdlib>\n
// Your cpp code, edit in IDE...\n
\n
#include <iostream>\n
\n
int main() {\n
    freopen(\"fr.in\", \"r\", stdin);\n
    int a, b;\n
    std::cin >> a >> b;\n
    std::cout << a + b << \'\\n\';\n
    return 0;\n
}\n
"""

os.system("cp /dev/stdin fr.in")

with open("fc.cpp", "w") as fc:
    fc.write(cppcode)
os.system("g++ fc.cpp -o fc")

with os.popen("fc", "r") as fp:
    result = fp.read()
    print(result, end="")
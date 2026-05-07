// Use for generate cppcode[] variable.
// If "copy & paste" were prohibited in educoder editor, you should not use codevar_generator. Please write code manually. (Imaging you are this generator XD)

#include <stdio.h>
#include <string.h>

void print_escaped_string(const char *str) {
    if (str == NULL) return;
    
    for (const char *p = str; *p != '\0'; ++p) {
        switch ((unsigned char)*p) {
            case '\a': printf("\\a"); break;
            case '\b': printf("\\b"); break;
            case '\f': printf("\\f"); break;
            case '\n': printf("\\n"); break;
            case '\r': printf("\\r"); break;
            case '\t': printf("\\t"); break;
            case '\v': printf("\\v"); break;
            case '\\': printf("\\\\"); break;
            case '\'': printf("\\'"); break;
            case '\"': printf("\\\""); break;
            default:
                if (*p < 32 || *p == 127) {
                    printf("\\x%02x", (unsigned char)*p);
                } else {
                    putchar(*p);
                }
                break;
        }
    }
}

char line[1024] = "";
int main() {
    freopen("cppcode.cpp", "r", stdin);
    freopen("codevar.c", "w", stdout);

    puts("const char cppcode[] =");
	puts("    \"#include <cstdio>\\n\"");
	puts("    \"#include <cstdlib>\\n\"");

	while (gets(line)) {
		//printf("    \"%s\\n\"\n", line);
		printf("	\"");
		print_escaped_string(line);
		printf("\\n\"\n");

		if(strstr(line, "int main()")) {
			printf("    \"    freopen(\\\"fr.in\\\", \\\"r\\\", stdin);\\n\"\n");
		}
	}

	puts(";");
	return 0;
}

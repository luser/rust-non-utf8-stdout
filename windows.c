#include <windows.h>

int main(int argc, char** argv) {
  const char buf[] = "hello \xAD\n";
  WriteFile(GetStdHandle(STD_OUTPUT_HANDLE), buf, sizeof(buf), NULL, NULL);
  return 0;
}

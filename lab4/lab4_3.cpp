#include <iostream>
using namespace std;

struct Rectangle {
  int width;
  int height;
};

int main() {
  Rectangle rec;

  rec.width = 1;
  rec.height = 2;

  cout << rec.width << " " << rec.height << endl;

  return 0;
}

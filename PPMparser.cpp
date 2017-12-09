#include <iostream>
#include <fstream>
using namespace std;

int main() {
  streampos size;
  char *memblock;
  int myint = 0;
  int super;

  ifstream file ("screendump.ppm", ios::in|ios::binary|ios::ate);
  if (file.is_open())
  {
    size = file.tellg();
    memblock = new char [size];
    file.seekg (0, ios::beg);
    file.read (memblock, size);
    file.close();
    super = static_cast<int>(size);
    cout << super << endl;
    char *iterator = memblock;
    for(int i = 0; i < (super); ++i) {
        myint = static_cast<int>(*iterator);
        if(i < (super-1)) {
            iterator += 1;
        }
        cout << myint << endl;
    }

    cout << "the entire file content is in memory" << endl;

    delete[] memblock;
  }

    return 0;
}

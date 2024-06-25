#include <iostream>
#include <map>

std::map<std::string, int> my_map;
my_map["foo"] = 1;
my_map["bar"] = 2;
my_map["baz"] = 3;
my_map["qux"] = 4;
my_map.erase("foo");
for (auto& pair : my_map) {
  std::cout << pair.first << " " << pair.second << "\n";
}
// bar 2
// baz 3
// qux 4

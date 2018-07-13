#include <Cache.h>
#include <iostream>

int main() {
   Cache c;

   c.put("foo", "bar");

   std::cout << "foo is " <<
             c.get("foo").value_or("not found")
             << std::endl;

   return 0;
}

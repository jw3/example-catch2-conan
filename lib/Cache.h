#pragma once

#include <map>
#include <string>
#include <experimental/optional>

using std::experimental::nullopt;
using std::experimental::optional;

struct Cache
{
   optional<std::string> get(const std::string& k) const {
      if(data.find(k) != data.end())
         return data.at(k);
      return nullopt;
   }
   void put(const std::string& k, const std::string& v) {
      data[k] = v;
   }

private:
   std::map<std::string, std::string> data;
};



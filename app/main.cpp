#include <cassert>
#include <iostream>

#include "leveldb/db.h"

int main() {
  std::cout << "Hi" << std::endl;
  leveldb::DB* db;
  leveldb::Options options;
  options.create_if_missing = true;
  leveldb::Status status = leveldb::DB::Open(options, "/tmp/testdb", &db);
  assert(status.ok());

  delete db;
  return 0;
}

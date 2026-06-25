#include <cstddef>
#include <string>

namespace lavrentev
{
  void anons();
  void deanon(size_t anonId, size_t id);
  void redesc(size_t id, std::string description);
  void desc(size_t id);
  void meets(size_t id);
  void commons(size_t id1, size_t id2);
  void less(size_t time, size_t id);
  void greater(size_t time, size_t id);
  void outPersons(std::string filename);
}

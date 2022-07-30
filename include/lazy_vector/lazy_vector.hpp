#include <vector>
#include <optional>

namespace rd {

template<typename T> class lazy_vector {
private:
  mutable std::vector<std::optional<T>> data_;

public:
};

}// namespace rd

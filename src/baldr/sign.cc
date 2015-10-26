#include "../../valhalla/baldr/sign.h"

namespace valhalla {
namespace baldr {

// Constructor given parameters.
Sign::Sign(const uint32_t idx, const Sign::Type& type,
           const uint32_t text_offset)
    : text_offset_(text_offset),
      edgeindex_(idx),
      type_(static_cast<uint32_t>(type)),
      spare_(0) {
}

// Get the directed edge index to which this sign applies.
uint32_t Sign::edgeindex() const {
  return edgeindex_;
}

// Get the sign type.
Sign::Type Sign::type() const {
  return static_cast<Sign::Type>(type_);
}

// Get the offset within the text/names list for the sign text.
uint32_t Sign::text_offset() const {
  return text_offset_;
}

}
}

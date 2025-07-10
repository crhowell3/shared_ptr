// firewall.cpp
#include "firewall.hpp"

class Firewall::impl {
 public:
  uint64_t data_;
};

/// Firewall class ctor
Firewall::Firewall() : pimpl_(std::make_unique<impl>()) {}
/// Firewall class dtor
Firewall::~Firewall() = default;

/// Copy constructor
Firewall::Firewall(Firewall const& other)
    : pimpl_(std::make_unique<impl>(*other.pimpl_)) {}

/// Copy assignment
Firewall& Firewall::operator=(Firewall const& rhs) {
  if (this != &rhs) {
    pimpl_.reset(new Firewall::impl(*rhs.pimpl_));
  }
  return *this;
}

/// Move constructor
Firewall::Firewall(Firewall&& other) noexcept = default;

/// Move assignment
Firewall& Firewall::operator=(Firewall&& other) noexcept = default;

/// Accessor
uint64_t Firewall::GetData() const {
  return pimpl_->data_;
}

/// Mutator
void Firewall::SetData(uint64_t data) {
  pimpl_->data_ = data;
}

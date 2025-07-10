// firewall.hpp
#include <memory>
#include <cstdint>

class Firewall {
 public:
  /// Default Constructor
  Firewall();
  /// Default Destructor
  ~Firewall();

  /// Copy constructor
  Firewall(Firewall const&);
  /// Copy assignment
  Firewall& operator=(Firewall const&);
  /// Move constructor
  Firewall(Firewall&&) noexcept;
  /// Move assignment
  Firewall& operator=(Firewall&&) noexcept;
  
  /// Simple mutator
  void SetData(uint64_t data);
  /// Simple accessor
  uint64_t GetData() const;

 private:
  /// Forward declaration of the implementation class
  class impl;
  /// Opaque pointer to implementation details
  std::unique_ptr<impl> pimpl_;
};

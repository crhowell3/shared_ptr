// singleton.h
#pragma once
#include <string>

class Singleton {
 public:
  /// Deleted Singleton Copy Constructor
  Singleton(Singleton const&) = delete;

  /// Deleted Singleton Assignment Operator
  void operator=(Singleton const&) = delete;

  /// Static accessor method
  static Singleton& Instance() {
    static Singleton singleton;
    return singleton;
  }
  
  void SetValue(const std::string& str) {
    this->value_ = str;
  }

  std::string GetValue() {
    return value_;
  }

 private:
  /// Privatizing the Singleton default constructor
  Singleton() = default;
  /// Dummy member field for demonstration
  std::string value_;
};

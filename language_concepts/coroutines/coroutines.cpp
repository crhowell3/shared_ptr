#include <coroutine>
#include <iostream>
#include <thread>


struct generator {
  struct promise_type {
    uint32_t current_value;
    generator get_return_object() {
      return generator{std::coroutine_handle<promise_type>::from_promise(*this)};
    }
    std::suspend_always initial_suspend() noexcept {
      return {};
    }
    std::suspend_always final_suspend() noexcept {
      return {};
    }
    void return_void() {}
    auto yield_value(int value) {
      current_value = value;
      return std::suspend_always{};
    }
    void unhandled_exception() { std::terminate(); }
  };

  std::coroutine_handle<promise_type> handle;
  generator(std::coroutine_handle<promise_type> h) : handle(h) {}
  ~generator() { handle.destroy(); }
};

generator count_up_to(int n) {
  for (auto i = 1; i <= n; ++i) {
    co_yield i;
  }
}

int main() {
  auto gen = count_up_to(5);
  while (gen.handle) {
    gen.handle.resume();
    if (gen.handle.done()) {
      break;
    }
    std::cout << gen.handle.promise().current_value << std::endl;
  }
  return 0;
}

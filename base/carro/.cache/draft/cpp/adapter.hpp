struct Adapter {
  Adapter() {}

  void enter() { car.enter(); }
  void leave() { car.leave(); }
  void fuel(int q) {
    (void) q;
  }
  void drive(int q) {
    (void) q;
  }
  std::string str() {
    return "";
  }
};

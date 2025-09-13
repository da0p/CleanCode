#include "PizzaStore.h"

namespace ThisIsAPizzaStoreNamespace {
void PizzaStore::orderPizza(const std::string& pizzaName) {
  // check if the order is valid
  if (pizzaName != "Margherita" && pizzaName != "Hawaiian" &&
      pizzaName != "Napoletan" && pizzaName != "Marinara" &&
      pizzaName != "Ortolana") {
    return;
  }

  // accept the order
  p.push_back(pizzaName);
}

void PizzaStore::makePizza() {
  for (const auto& n : p) {
    std::string topping = t.count(n) ? " with topping " + t.at(n) : "";
    std::cout << "Doing " << n << " pizza" << topping << "\n";
  }
}

void PizzaStore::tiktok() {
  for (const auto& n : p) {
    std::cout << "Showing pizza " << n << " on tiktok\n";
  }
}

void PizzaStore::orderDrink(const std::string& drinkName) {
  if (drinkName != "Vodka" && drinkName != "Whiskey" &&
      drinkName != "Rice Wine" && drinkName != "Coke") {
    return;
  }

  d.push_back(drinkName);
}

void PizzaStore::makeDrink() {
  for (const auto& r : d) {
    std::cout << "Making drink " << r << "\n";
  }
}

void PizzaStore::addTopping(const std::string& pizza_name,
                            const std::string& topping_name) {
  t[pizza_name] = topping_name;
}

void PizzaStore::showAllOrders() {
  for (const auto& pizza : p) {
    std::cout << "Pizza order:\n";
    std::cout << "Name: " << pizza << "\n";
    if (t.count(pizza)) {
      std::cout << "Topping: " << t.at(pizza) << "\n";
    }
  }
}

void PizzaStore::partyHard() {
  // This is cute and I like it!
  std::cout << "order everything!\n";
}
}  // namespace ThisIsAPizzaStoreNamespace

#include <iostream>

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
  m_pizzaOrders.push_back(pizzaName);
}

void PizzaStore::makePizza() {
  for (const auto& order : m_pizzaOrders) {
    std::string topping = m_toppingOrders.count(order) > 0 ? " with topping " + m_toppingOrders.at(order) : "";
    std::cout << "Doing " << order << " pizza" << topping << "\n";
  }
}

void PizzaStore::tiktok() {
  for (const auto& order : m_pizzaOrders) {
    std::cout << "Showing pizza " << order << " on tiktok\n";
  }
}

void PizzaStore::orderDrink(const std::string& drinkName) {
  if (drinkName != "Vodka" && drinkName != "Whiskey" &&
      drinkName != "Rice Wine" && drinkName != "Coke") {
    return;
  }

  m_drinkOrders.push_back(drinkName);
}

void PizzaStore::makeDrink() {
  for (const auto& drink : m_drinkOrders) {
    std::cout << "Making drink " << drink << "\n";
  }
}

void PizzaStore::addTopping(const std::string& pizzaName,
                            const std::string& toppingName) {
  m_toppingOrders[pizzaName] = toppingName;
}

void PizzaStore::showAllOrders() {
  for (const auto& pizza : m_pizzaOrders) {
    std::cout << "Pizza order:\n";
    std::cout << "Name: " << pizza << "\n";
    if (m_toppingOrders.count(pizza) > 0) {
      std::cout << "Topping: " << m_toppingOrders.at(pizza) << "\n";
    }
  }
}

void PizzaStore::partyHard() {
  // This is cute and I like it!
  std::cout << "order everything!\n";
}
}  // namespace ThisIsAPizzaStoreNamespace

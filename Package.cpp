#include "Package.h"

Package::Package() {
  length = 0.0;
  width = 0.0;
  height = 0.0;
  weight = 0.0;
  costPerKg = 0.0;
}

Package::Package(std::string nameS, std::string addyS, std::string cityS, std::string stateS, std::string zipS, std::string nameR, std::string addyR, std::string cityR, std::string stateR, std::string zipR, int shippingCost, double lengthIn, double widthIn, double heightIn, double weightIn, double costPerKgIn)
: Shipment(nameS, addyS, cityS, stateS, zipS, nameR, addyR, cityR, stateR, zipR, shippingCost) {
  if (weight < 0 || costPerKg < 0) {
    throw std::invalid_argument("Arguments 'weight' or 'costPerKg' must be positive");
  }

  length = lengthIn;
  width = widthIn;
  height = heightIn;
  weight = weightIn;
  costPerKg = costPerKgIn;
}

void Package::setShippingCost(double shippingCostIn) {
  shippingCost = shippingCostIn;
}

double Package::calculateCost() {
  return shippingCost + (costPerKg * weight);
}
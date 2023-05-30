#include "Envelope.h"

Envelope::Envelope() {
  length = 0.0;
  width = 0.0;
  extraCharge = 0.0;
}

Envelope::Envelope(std::string nameS, std::string addyS, std::string cityS, std::string stateS, std::string zipS, std::string nameR, std::string addyR, std::string cityR, std::string stateR, std::string zipR, int shippingCost, double lengthIn, double widthIn, double extraChargeIn) 
: Shipment(nameS, addyS, cityS, stateS, zipS, nameR, addyR, cityR, stateR, zipR, shippingCost) {
  length = lengthIn;
  width = widthIn;
  extraCharge = extraChargeIn;
}

void Envelope::setShippingCost(double shippingCostIn) {
  shippingCost = shippingCostIn;
}

double Envelope::calculateCost() {
  double cost = (length * width > 25) ? shippingCost + extraCharge : shippingCost;
  return cost;
}
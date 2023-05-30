#ifndef PACKAGE_H
#define PACKAGE_H

#include "Shipment.h"

class Package : public Shipment {
  public:
    Package();
    Package(
      std::string nameS, 
      std::string addyS, 
      std::string cityS, 
      std::string stateS, 
      std::string zipS, 
      std::string nameR, 
      std::string addyR, 
      std::string cityR, 
      std::string stateR, 
      std::string zipR,
      int shippingCost,
      double lengthIn, 
      double widthIn, 
      double heightIn, 
      double weightIn, 
      double costPerKgIn
    );
    void setShippingCost(double shippingCostIn);
    double calculateCost() override;
  private:
    double length;
    double width;
    double height;
    double weight;
    double costPerKg;
};

#endif
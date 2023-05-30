#ifndef ENVELOPE_H
#define ENVELOPE_H

#include "Shipment.h"

class Envelope : public Shipment {
  public:
    Envelope();
    Envelope(
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
      double extraChargeIn
    );
    void setShippingCost(double shippingCostIn);
    double calculateCost() override;
  private:
    double length;
    double width;
    double extraCharge;
};

#endif
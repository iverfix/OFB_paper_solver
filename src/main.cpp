#include <iostream>
#include "google/googleMapsApi.h"

int main () {

    GoogleMapsAPI api = GoogleMapsAPI();


    std::cout << "Hello world" << api.add(7,9) << std::endl;

    return 0;
}
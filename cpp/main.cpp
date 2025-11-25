#include "mysystem/mymessages.pb.h"
#include <iostream>

int main() {
    mysystem::DeviceStatus status;
    status.set_device_id("abc123");
    status.set_battery_level(78);
    status.set_is_online(true);

    std::cout << "Device ID: " << status.device_id() << "\n";
    std::cout << "Battery: " << status.battery_level() << "%\n";
    std::cout << "Online: " << (status.is_online() ? "yes" : "no") << "\n";
    return 0;
}
using System;
using Mysystem;

class Program
{
    static void Main()
    {
        var status = new DeviceStatus
        {
            DeviceId = "abc123",
            BatteryLevel = 78,
            IsOnline = true
        };

        Console.WriteLine($"Device ID: {status.DeviceId}");
        Console.WriteLine($"Battery: {status.BatteryLevel}%");
        Console.WriteLine($"Online: {(status.IsOnline ? "yes" : "no")}");
    }
}
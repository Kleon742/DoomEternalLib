struct idVolume_FlightObstacle : idVolume_PlacedFlightVolume
{
    // start with the obstacle on which means AI can't path through the area
    bool startOn; // Offset: 0x0

    // the current state of the flight obstacle.
    bool enabled; // Offset: 0x0

}; // Size: 0xC30

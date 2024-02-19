struct idMassProperties
{
    enum type_t : int
    {
        MASS = 0,
        DENSITY = 1
    };

    // Density or Mass
    idMassProperties::type_t type; // Offset: 0x0

    // Density value in kg/m3 or Mass value in in kg depending on m_type
    float value; // Offset: 0x4

}; // Size: 0x8

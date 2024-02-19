// idCircularBuffer_Scaled < aiSensoryPercept_t >
template <typename _type_>
struct idCircularBuffer_Scaled
{
    idAIScaledList < _type_ > buffer; // Offset: 0x0

    int num; // Offset: 0x10

    int head; // Offset: 0x14

    // technically we don't need this
    int size; // Offset: 0x18

}; // Size: 0x20

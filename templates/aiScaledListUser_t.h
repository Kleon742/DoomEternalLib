// aiScaledListUser_t < entityModel_t >
template <typename _type_>
struct aiScaledListUser_t
{
    idAI2* user; // Offset: 0x0

    aiScaledListPriority_t priority_desired; // Offset: 0x8

    aiScaledListPriority_t priority_current; // Offset: 0xC

    aiScaledListPriority_t priority_minimum; // Offset: 0x10

    int groupIndex; // Offset: 0x14

    aiScaledListReseatStatus_t status; // Offset: 0x18

    int reseatSize; // Offset: 0x1C

    idList < _type_ , TAG_AI_SCALEDLIST , false >* list; // Offset: 0x20

}; // Size: 0x28

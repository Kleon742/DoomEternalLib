struct idHUDEvent_DiagnosticsOnlineUpdate
{
    struct entityVec_t
    {
        float x; // Offset: 0x0

        float y; // Offset: 0x4

        float z; // Offset: 0x8

    }; // Size: 0xC

    struct diagnosticsInfo_t
    {
        struct entityInfo_t
        {
            idHUDEvent_DiagnosticsOnlineUpdate::entityVec_t pos; // Offset: 0x0

            float distance; // Offset: 0xC

            float healthPercentage; // Offset: 0x10

            float armorPercentage; // Offset: 0x14

            float alpha; // Offset: 0x18

            bool isDemon; // Offset: 0x1C

            int entityNum; // Offset: 0x20

            int healthPips; // Offset: 0x24

            int armorPips; // Offset: 0x28

            idMaterial2* icon; // Offset: 0x30

        }; // Size: 0x38

        idHUDEvent_DiagnosticsOnlineUpdate::diagnosticsInfo_t::entityInfo_t entityList[32]; // Offset: 0x0

        int numEntities; // Offset: 0x700

    }; // Size: 0x708

    idHUDEvent_DiagnosticsOnlineUpdate::diagnosticsInfo_t info; // Offset: 0x0

}; // Size: 0x708

struct idHUDEvent_DiagnosticsUpdate
{
    struct entityVec_t
    {
        float x; // Offset: 0x0

        float y; // Offset: 0x4

        float z; // Offset: 0x8

    }; // Size: 0xC

    struct colorVec_t
    {
        float r; // Offset: 0x0

        float g; // Offset: 0x4

        float b; // Offset: 0x8

    }; // Size: 0xC

    struct diagnosticsInfo_t
    {
        struct entityInfo_t
        {
            idHUDEvent_DiagnosticsUpdate::entityVec_t pos; // Offset: 0x0

            idHUDEvent_DiagnosticsUpdate::colorVec_t colorArmor; // Offset: 0xC

            idHUDEvent_DiagnosticsUpdate::colorVec_t colorCritical; // Offset: 0x18

            float distance; // Offset: 0x24

            float curHealth; // Offset: 0x28

            float maxHealth; // Offset: 0x2C

            float alpha; // Offset: 0x30

            unsigned long long criticalHitTime; // Offset: 0x38

            bool critialHitThisFrame; // Offset: 0x40

            unsigned long long armorHitTime; // Offset: 0x48

            bool armorHitThisFrame; // Offset: 0x50

            bool isEnemy; // Offset: 0x51

        }; // Size: 0x58

        idHUDEvent_DiagnosticsUpdate::diagnosticsInfo_t::entityInfo_t entityList[32]; // Offset: 0x0

        int numEntities; // Offset: 0xB00

        int maxVisible; // Offset: 0xB04

        float maxDistance; // Offset: 0xB08

    }; // Size: 0xB10

    idHUDEvent_DiagnosticsUpdate::diagnosticsInfo_t info; // Offset: 0x0

}; // Size: 0xB10

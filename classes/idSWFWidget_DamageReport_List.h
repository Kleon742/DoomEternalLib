struct idSWFWidget_DamageReport_List : idSWFWidget
{
    idSWFWidget_List* damageList; // Offset: 0x180

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > rollOnStartTime; // Offset: 0x188

    int currentCascadeIndex; // Offset: 0x190

    int numItemSprites; // Offset: 0x194

}; // Size: 0x198

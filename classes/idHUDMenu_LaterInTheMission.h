struct idHUDMenu_LaterInTheMission : idMenuElement
{
    idStrId description; // Offset: 0x100

    idEntity* target; // Offset: 0x108

    idMaterial2* bg; // Offset: 0x110

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > minDismissTime; // Offset: 0x118

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > maxDismissTime; // Offset: 0x120

}; // Size: 0x128

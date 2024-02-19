struct idFadeHelper
{
    // time fade started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeStartTime; // Offset: 0x0

    // time fade ends
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeEndTime; // Offset: 0x8

    // fade from this
    float fadeFrom; // Offset: 0x10

    // fade to this
    float fadeTo; // Offset: 0x14

    // do not apply the stipple fade to the presentable
    bool noStippleFade; // Offset: 0x18

}; // Size: 0x20

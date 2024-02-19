struct idSWFWidget_ProgressBar : idSWFWidget
{
    long long progress; // Offset: 0x180

    long long goal; // Offset: 0x188

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > tweenDuration; // Offset: 0x190

    float (*tweenEasingFunction)(float t , float b , float c , float d); // Offset: 0x198

}; // Size: 0x1A0

struct idSWFWidget_HordeSummary_progressBarMedal : idSWFWidget
{
    enum MedalState_t : int
    {
        INACTIVE = 0,
        CURRENT = 1,
        ACTIVE = 2
    };

    idSWFWidget_HordeSummary_progressBarMedal::MedalState_t medalState; // Offset: 0x180

}; // Size: 0x188

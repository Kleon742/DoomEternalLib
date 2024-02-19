struct idPhonemeTrack_Annosoft : idPhonemeTrack
{
    enum extendedPhoneme_t : int
    {
        EXPHONEME_PHONEME = 0,
        EXPHONEME_WORD = 1,
        EXPHONEME_PUNCTUATION = 2,
        EXPHONEME_MAX = 3
    };

    struct weight_t
    {
        int startMS; // Offset: 0x0

        int endMS; // Offset: 0x4

        float weight; // Offset: 0x8

    }; // Size: 0xC

    struct idPhonemeEvent
    {
        int type; // Offset: 0x0

        idPhonemeTrack_Annosoft::extendedPhoneme_t exType; // Offset: 0x4

        int startMS; // Offset: 0x8

        int endMS; // Offset: 0xC

        short numWeights; // Offset: 0x10

        idPhonemeTrack_Annosoft::weight_t* weights; // Offset: 0x18

        idStr text; // Offset: 0x20

    }; // Size: 0x50

    idList < idPhonemeTrack_Annosoft::idPhonemeEvent , TAG_VOICETRACK_PHONEMES , false > phonemes; // Offset: 0x8

}; // Size: 0x20

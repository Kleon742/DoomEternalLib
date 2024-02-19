struct idDeclVisemeSet : idDecl
{
    // name of the phoneme set
    idStr phonemeSet; // Offset: 0x78

    // all visemes in this set
    idList < idViseme , TAG_VISEMESET_VISEMES , false > visemes; // Offset: 0xA8

    // all phonemes in this set
    idList < idPhoneme , TAG_VISEMESET_PHONEMES , false > phonemes; // Offset: 0xC0

    // index of the viseme for silence
    int silenceViseme; // Offset: 0xD8

    // index of the phoneme for silence
    int silencePhoneme; // Offset: 0xDC

}; // Size: 0xE0

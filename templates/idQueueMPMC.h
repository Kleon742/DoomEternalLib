// idQueueMPMC < idGeomCacheStreamerLocal::staticDataUploadRequest_t , 2 >
template <typename _type_, auto _N0_>
struct idQueueMPMC
{
    interlockedInt_t pushIndex; // Offset: 0x0

    unsigned char padding_0[1_N0_8-sizeof(interlockedInt_t)]; // Offset: 0x4

    interlockedInt_t pushAvail; // Offset: 0x80

    unsigned char padding_1[1_N0_8-sizeof(interlockedInt_t)]; // Offset: 0x84

    interlockedInt_t popIndex; // Offset: 0x100

    unsigned char padding__N0_[1_N0_8-sizeof(interlockedInt_t)]; // Offset: 0x104

    interlockedInt_t popAvail; // Offset: 0x180

    unsigned char padding_3[1_N0_8-sizeof(interlockedInt_t)]; // Offset: 0x184

    interlockedInt_t freeNext; // Offset: 0x200

    unsigned char padding_4[16-sizeof(interlockedInt_t)]; // Offset: 0x204

    interlockedInt_t freeList[_N0_]; // Offset: 0x210

    unsigned char padding_5[16-((_N0_*sizeof(interlockedInt_t))&15)]; // Offset: 0x218

    unsigned char storage[_N0_*sizeof(_type_)]; // Offset: 0x220

    unsigned char padding_6[16-((_N0_*sizeof(_type_))&15)]; // Offset: 0x250

    _type_* elementList[_N0_]; // Offset: 0x260

}; // Size: 0x270

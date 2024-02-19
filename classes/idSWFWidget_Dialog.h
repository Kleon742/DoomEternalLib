struct idSWFWidget_Dialog : idSWFWidget
{
    idSWFWidget_List* buttonList; // Offset: 0x180

    dialogType_t dialogType; // Offset: 0x188

    idStr headerOverride; // Offset: 0x190

    idStr body; // Offset: 0x1C0

    idMaterial2* icon; // Offset: 0x1F0

    swfNamedColors_t iconColor; // Offset: 0x1F8

    int viewIndexOverride; // Offset: 0x1FC

    bool playFlourish; // Offset: 0x200

    idTypesafeTime < int , millisecondUnique_t , 1000 > showTime; // Offset: 0x204

    idStaticList < idSWFScriptFunction * , 2 , false , TAG_IDLIST > callbacks; // Offset: 0x208

    idStaticList < idStrId , 2 , false , TAG_IDLIST > optionText; // Offset: 0x230

}; // Size: 0x250

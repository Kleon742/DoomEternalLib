struct idAIDamageState_LinkCondition_Armor : idAIDamageState_LinkCondition
{
    // if true, makes it valid for armored body parts
    bool armor_allow; // Offset: 0x20

    // if true, makes it valid for armored and only armored body parts
    bool armor_only; // Offset: 0x21

}; // Size: 0x28

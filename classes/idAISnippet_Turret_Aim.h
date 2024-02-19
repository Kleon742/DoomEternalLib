struct idAISnippet_Turret_Aim : idAISnippet
{
    // turret joint name to rotate towards the target
    idJointName turretJointName; // Offset: 0x18

    // specifies what part of target to aim at
    aimPoint_t targetAimPoint; // Offset: 0x48

    // if true predicts target location based on senses, otherwise uses exact location
    bool predictTraget; // Offset: 0x4C

}; // Size: 0x50

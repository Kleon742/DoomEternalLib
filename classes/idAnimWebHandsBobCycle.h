struct idAnimWebHandsBobCycle : idAnimator_GameAnimWeb
{
    // 0=back, 1=forward
    float weight_forward; // Offset: 0x888

    // 0=left, 1=right
    float weight_right; // Offset: 0x88C

    // 0=stopped, 1=moving
    float weight_move; // Offset: 0x890

    // 0=not firing, 1=firing
    float weight_shoot_idle; // Offset: 0x894

    // 0=not firing, 1=firing
    float weight_shoot_run; // Offset: 0x898

    // 0=not firing, 1=firing
    float weight_shoot_sprint; // Offset: 0x89C

    // 0=not firing, 1=firing
    float weight_shoot_crouch; // Offset: 0x8A0

    float rate_idle; // Offset: 0x8A4

    float rate_crouch; // Offset: 0x8A8

    float rate_run; // Offset: 0x8AC

    float rate_sprint; // Offset: 0x8B0

    float rate_sprint2idle; // Offset: 0x8B4

    float rate_sprint2run; // Offset: 0x8B8

    float berserkBlend; // Offset: 0x8BC

}; // Size: 0x8C0

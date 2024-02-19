struct idAnimWebDemonPlayerHands : idAnimator_GameAnimWeb
{
    idManagedClassPtr < idDemonPlayer > player; // Offset: 0x888

    // run speed, used to scale the movePercent {{ units = m / s }}
    float runSpeed; // Offset: 0x8A8

    // 0 when stationary, 1 when moving at run speed. scales in between.
    float movePercent; // Offset: 0x8AC

    // used however we need it
    float generic1; // Offset: 0x8B0

    // select an anim in the node
    float animIndex; // Offset: 0x8B4

    // select an anim in the land node
    float landAnimIndex; // Offset: 0x8B8

    // spawn animation playback rate scalar
    float spawnAnimRate; // Offset: 0x8BC

    float adsPct; // Offset: 0x8C0

    float adsPctTarget; // Offset: 0x8C4

    float berserkBlend; // Offset: 0x8C8

}; // Size: 0x8D0

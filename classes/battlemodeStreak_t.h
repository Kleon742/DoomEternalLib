struct battlemodeStreak_t
{
    idStr streakName; // Offset: 0x0

    idWeakPtr < battlemodeStreak_t > demotionTarget; // Offset: 0x30

    idWeakPtr < battlemodeStreak_t > promotionTarget; // Offset: 0x38

    unsigned char demotionThreshold; // Offset: 0x40

    unsigned char promotionThreshold; // Offset: 0x41

}; // Size: 0x48

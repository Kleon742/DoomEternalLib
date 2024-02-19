struct renderProgCompilerOpts_t
{
    struct compilerOptionsScarlett_t
    {
        // __XBOX_DISABLE_CSE Disable common subexpression elimination which attempts to identify short sequences of code that can be expected to produce the same result and replaces the duplicate sequences with the already-available value
        bool disableCommonSubexpressionElimination; // Offset: 0x0

        // __XBOX_DISABLE_LICM Disable loop invariant code motion. LICM removes as much from the body of a loop as possible by hoisting into the block before the loop or by sinking to the block after the loop according to what can be done without changing the behavior safely
        bool disableLoopInvariantCodeMotion; // Offset: 0x1

        // __XBOX_DISABLE_GVN Disable global value number pass which examines and numbers values at a global scope to identify those that are redundant and replaces them with stored values to eliminate unneeded instructions.
        bool disableGlobalValueNumberPass; // Offset: 0x2

        // __XBOX_ENABLE_REMAT Enables rematerializing, which will identify places where a stored value can be cheaply recalculated to save register space by cloning instruction instead of using the stored value.
        bool enableRematerializing; // Offset: 0x3

        // __XBOX_ENABLE_AGGRESSIVE_REMAT Aggressively clone instructions for better occupancy.May cause a performance drop in case the compiler clones too much.
        bool enableAggressiveRematerializing; // Offset: 0x4

        // __XBOX_ENABLE_STRUCTURIZE_RETURNS Enable coercing of a function of multiple returns into one with only one return on the front end. This avoids the necessity of cloning instructions to reconstruct control flow structure on the backend
        bool enableStructurizeReturns; // Offset: 0x5

        // __XBOX_ENABLE_FLOAT_V_TO_S Enable vector to scalar optimization on uniform float instructions which may save VGPRs at the cost of more SGPRs used or more instructions.
        bool enableVectorToScalarOpt; // Offset: 0x6

        // __XBOX_SELECT_SCHEDULER 0 = Default. Default is a balance between compile time and schedule result. It will try different strategies and find the best result.  1 = MinReg.Alternative strategy that attempts to minimize registure pressure. 2 = Agressivly Scheduled.This will enable a scheduling strategy which targets minimum register usage.Compilation time may be be slow. 3 = Disable.This will skip instruction scheduling which reorders instructions to balance latency and register pressure.It helps in cases where the user wants to control the order of instruction themselves or for debugging.
        unsigned char scheduler; // Offset: 0x7

        // __XBOX_TARGET_OCCUPANCY Hint to the compiler to optimize for a certain occupancy target.  0 = Disable hint 1 - 10 = valid range for Xbox One and for Scarlett using Wave64 1 - 20 = valid range for Scarlett using Wave32.
        unsigned char targetOccupancy; // Offset: 0x8

        // __XBOX_MIN_VGPR_COUNT  If > 0, artificially sets the minimum number of VGPRs that must be used and also limits the max number of VGPRs that are available.
        unsigned char minVGPRCount; // Offset: 0x9

        // __XBOX_MAX_VGPR_COUNT If > 0, artificially limit the number of VGPRs that are available
        unsigned char maxVGPRCount; // Offset: 0xA

        // __XBOX_FORCE_VGPR_COUNT If > 0, artificially sets the minimum number of VGPRs that must be used
        unsigned char forceVGPRCount; // Offset: 0xB

    }; // Size: 0xC

    int maxProgramSGPR; // Offset: 0x0

    int maxUserSGPR; // Offset: 0x4

    int maxProgramVGPR; // Offset: 0x8

    int maxProgramScratchDwords; // Offset: 0xC

    int optimizationLevel; // Offset: 0x10

    progSchedulerType_t schedulerType; // Offset: 0x14

    progShaderCompiler_t shaderCompiler; // Offset: 0x18

    bool xboxRespectLoopAttributes; // Offset: 0x1C

    bool xboxDisableOptimisticScalarAllocation; // Offset: 0x1D

    bool ps4IndirectSGPRs; // Offset: 0x1E

    bool enableWave32Mode; // Offset: 0x1F

    renderProgCompilerOpts_t::compilerOptionsScarlett_t compilerOptionsScarlett[8]; // Offset: 0x20

}; // Size: 0x80

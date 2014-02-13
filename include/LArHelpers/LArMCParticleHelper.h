/**
 *  @file   LArContent/include/LArHelpers/LArMCParticleHelper.h
 * 
 *  @brief  Header file for the lar monte carlo particle helper helper class.
 * 
 *  $Log: $
 */
#ifndef LAR_MC_PARTICLE_HELPER_H
#define LAR_MC_PARTICLE_HELPER_H 1

#include "Pandora/PandoraInternal.h"

namespace lar
{

/**
 *  @brief  LArMCParticleHelper class
 */
class LArMCParticleHelper
{
public:
    /**
     *  @brief  Whether a mc particle is a final-state particle from a neutrino (or antineutrino) interaction
     * 
     *  @param  pMCParticle
     * 
     *  @return boolean
     */
    static bool IsNeutrinoInduced(const pandora::MCParticle *const pMCParticle);

    /**
     *  @brief  Whether a mc particle is a neutrino or (antineutrino)
     * 
     *  @param  pMCParticle
     * 
     *  @return boolean
     */
    static bool IsNeutrino(const pandora::MCParticle *const pMCParticle);

    /**
     *  @brief  Get the primary parent mc particle
     * 
     *  @param  pMCParticle
     * 
     *  @return address of the primary parent mc particle
     */
    static const pandora::MCParticle *GetParentMCParticle(const pandora::MCParticle *const pMCParticle);

    /**
     *  @brief  Get primary neutrino or antineutrino
     * 
     *  @param  pMCParticle
     * 
     *  @return pdg code of neutrino (or zero, otherwise)
     */
    static int GetPrimaryNeutrino(const pandora::MCParticle *const pMCParticle);
};

} // namespace lar

#endif // #ifndef LAR_MC_PARTICLE_HELPER_H

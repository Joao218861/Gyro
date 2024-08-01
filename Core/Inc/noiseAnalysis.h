/*
 * noiseAnalysis.h
 *
 * Description: This module focus in methods and procedures to analyze the noise in the PCB
 *
 *  Created on: Aug 1, 2024
 *      Author: Joao Santos
 */

#ifndef INC_NOISEANALYSIS_H_
#define INC_NOISEANALYSIS_H_

// Libraries

#include <stdint.h>
#include <math.h>

// Functions

void v_noise_analysis_add_sample_to_pool(float newSample);

//-- Gets

float f_noise_analysis_get_variance();
float f_noise_analysis_get_standard_deviation();

#endif /* INC_NOISEANALYSIS_H_ */

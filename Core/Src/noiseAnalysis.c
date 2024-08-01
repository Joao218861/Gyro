/*
 * noiseAnalysis.c
 *
 *  Created on: Aug 1, 2024
 *      Author: Joao Santos
 */

#include "noiseAnalysis.h"

// Variables

uint32_t u32_number_of_samples = 0;
float f_sum_of_samples_value = 0.0;
float f_sum_of_samples_square_value = 0.0;

float f_variance = 0.0;
float f_standard_deviation = 0.0;

// Public Functions

void noise_analysis_add_sample_to_pool(float newSample)
{
	u32_number_of_samples += 1;
	f_sum_of_samples_value += newSample;
	f_sum_of_samples_square_value += pow(newSample,2);
}

// Private Functions

void update_variance()
{
	f_variance = (f_sum_of_samples_square_value - pow(f_sum_of_samples_value,2)/u32_number_of_samples)/(u32_number_of_samples-1);
}

void update_standard_deviation()
{
	update_variance();
	f_standard_deviation = sqrtf(f_variance);
}

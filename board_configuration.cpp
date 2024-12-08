#include "pch.h"

Gpio getCommsLedPin() {
	return Gpio::B7;
}

Gpio getRunningLedPin() {
	return Gpio::Unassigned;
}

Gpio getWarningLedPin() {
	return Gpio::Unassigned;
}

// board-specific configuration setup
void setBoardDefaultConfiguration() {


	// SPI1 AUX
	engineConfiguration->is_enabled_spi_1 = true;
	engineConfiguration->max31855spiDevice = SPI_DEVICE_1;
	engineConfiguration->spi1mosiPin = Gpio::B4;
	engineConfiguration->spi1misoPin = Gpio::B5;
	engineConfiguration->spi1sckPin = Gpio::B3;

	// SPI2 EGT
	engineConfiguration->is_enabled_spi_2 = true;
	engineConfiguration->max31855spiDevice = SPI_DEVICE_2;
	engineConfiguration->spi2mosiPin = Gpio::A10;
	engineConfiguration->spi2misoPin = Gpio::A9;
	engineConfiguration->spi2sckPin = Gpio::A15;
	engineConfiguration->max31855_cs[0] = Gpio::B10;

        //SPI3 SD card
	engineConfiguration->isSdCardEnabled = true;
	engineConfiguration->is_enabled_spi_3 = true;
	engineConfiguration->sdCardSpiDevice = SPI_DEVICE_3;
	engineConfiguration->spi3mosiPin = Gpio::C12;
	engineConfiguration->spi3misoPin = Gpio::C11;
	engineConfiguration->spi3sckPin = Gpio::C10;
	engineConfiguration->sdCardCsPin = Gpio::D2;
	engineConfiguration->sdCardLogFrequency = 20;

	//CAN bus overwrites
	engineConfiguration->canTxPin = Gpio::D1;
	engineConfiguration->canRxPin = Gpio::D0;
        engineConfiguration->canWriteEnabled = true;
	engineConfiguration->canReadEnabled = true;
	engineConfiguration->canSleepPeriodMs = 50;
	engineConfiguration->canBaudRate = B500KBPS;

	engineConfiguration->enableSoftwareKnock = true;

	engineConfiguration->ignitionMode = IM_INDIVIDUAL_COILS;
	engineConfiguration->crankingInjectionMode = IM_SEQUENTIAL;
	engineConfiguration->injectionMode = IM_SEQUENTIAL;

	//Bias resistor
	engineConfiguration->clt.config.bias_resistor = 2490;
	engineConfiguration->iat.config.bias_resistor = 2490;

	//Analog calc
        engineConfiguration->analogInputDividerCoefficient = 1.55f;
        engineConfiguration->vbattDividerCoeff = (7.47f / 1.0f);
        engineConfiguration->adcVcc = 3.12f;

        //Map and baro sensor
	engineConfiguration->map.sensor.type = MT_MPXH6400;
	engineConfiguration->baroSensor.type = MT_MPXH6400;

	//Digital out
	engineConfiguration->boostControlPin = Gpio::D8;
	engineConfiguration->fanPin = Gpio::E9;
	engineConfiguration->tachOutputPin = Gpio::E8;
	engineConfiguration->fuelPumpPin = Gpio::E11;

	//Input pin
	engineConfiguration->vehicleSpeedSensorInputPin = Gpio::B6;
	engineConfiguration->triggerInputPins[0] = Gpio::D3;
	engineConfiguration->camInputs[0] = Gpio::D4;

	// Idle configuration
        engineConfiguration->useStepperIdle = false;
        engineConfiguration->isDoubleSolenoidIdle = true;
        engineConfiguration->idle.solenoidPin = Gpio::D9;
        engineConfiguration->secondSolenoidPin = Gpio::D10;

	//Analog
	engineConfiguration->clt.adcChannel = A1;
	engineConfiguration->iat.adcChannel = A0;
	engineConfiguration->tps1_1AdcChannel = A2;
	engineConfiguration->vbattAdcChannel = A4;
	engineConfiguration->map.sensor.hwChannel = A3;
	
}

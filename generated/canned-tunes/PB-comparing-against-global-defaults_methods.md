```
static void pbcannedvvtTable1() {
	static const float hardCodedvvtTable1[8][8] = {
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	30.000,	35.000,	35.000,	35.000,	30.000,	20.000,	10.000,	},
{0.000,	30.000,	35.000,	35.000,	35.000,	30.000,	20.000,	10.000,	},
{0.000,	30.000,	35.000,	35.000,	35.000,	30.000,	20.000,	10.000,	},
{0.000,	30.000,	35.000,	35.000,	35.000,	30.000,	20.000,	10.000,	},
};
	copyTable(config->vvtTable1, hardCodedvvtTable1);
}

static void pbcannedvvtTable2() {
	static const float hardCodedvvtTable2[8][8] = {
{45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	},
{45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	},
{45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	},
{45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	},
{45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	},
{45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	},
{45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	},
{45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	45.000,	},
};
	copyTable(config->vvtTable2, hardCodedvvtTable2);
}

static void pbcannedscriptTable4() {
	static const float hardCodedscriptTable4[8][10] = {
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
};
	copyTable(config->scriptTable4, hardCodedscriptTable4);
}

static void pbcannedignitionTable() {
	static const float hardCodedignitionTable[16][16] = {
{12.200,	14.200,	0.000,	0.000,	36.400,	39.700,	-10.000,	-10.000,	-10.000,	-10.000,	-10.000,	-10.000,	-10.000,	-10.000,	-10.000,	-10.000,	},
{12.100,	14.000,	0.000,	0.000,	35.600,	39.500,	-10.000,	-10.000,	-10.000,	-10.000,	-10.000,	-10.000,	-10.000,	-10.000,	-10.000,	-10.000,	},
{11.800,	13.700,	10.000,	14.900,	34.800,	39.200,	39.500,	39.500,	40.500,	41.000,	41.000,	41.000,	41.000,	41.000,	41.000,	41.000,	},
{11.600,	13.400,	12.300,	17.100,	33.900,	39.000,	39.300,	39.300,	39.800,	40.000,	40.000,	40.000,	40.000,	40.000,	40.000,	40.000,	},
{14.400,	11.500,	12.100,	16.500,	28.100,	33.700,	34.000,	34.000,	34.000,	34.000,	34.000,	34.000,	34.000,	34.000,	34.000,	34.000,	},
{10.200,	10.300,	11.900,	16.000,	27.600,	31.800,	32.600,	32.900,	33.100,	33.300,	33.400,	33.400,	33.400,	33.400,	33.400,	33.400,	},
{9.900,	9.000,	11.800,	15.600,	25.000,	27.800,	29.300,	29.700,	30.100,	30.600,	30.700,	30.700,	30.700,	30.700,	30.700,	30.700,	},
{6.100,	7.800,	11.600,	15.200,	21.500,	22.800,	24.900,	25.600,	26.200,	26.800,	27.100,	27.100,	27.100,	27.100,	27.100,	27.100,	},
{4.100,	5.700,	9.300,	12.600,	18.500,	19.800,	21.900,	22.600,	23.200,	23.800,	24.100,	24.100,	24.100,	24.100,	24.100,	24.100,	},
{2.200,	3.500,	6.900,	10.100,	15.600,	16.900,	19.000,	19.700,	20.300,	20.900,	21.200,	21.200,	21.200,	21.200,	21.200,	21.200,	},
{0.200,	1.400,	4.500,	7.500,	12.600,	13.900,	16.000,	16.700,	17.300,	17.900,	18.200,	18.200,	18.200,	18.200,	18.200,	18.200,	},
{-1.800,	-0.700,	2.100,	5.000,	9.600,	10.900,	13.000,	13.700,	14.300,	14.900,	15.200,	15.200,	15.200,	15.200,	15.200,	15.200,	},
{-3.800,	-2.800,	-0.300,	2.400,	6.600,	7.900,	10.000,	10.700,	11.300,	11.900,	12.200,	12.200,	12.200,	12.200,	12.200,	12.200,	},
{-5.000,	-4.900,	-2.700,	-0.100,	3.700,	5.000,	7.100,	7.800,	8.400,	9.000,	9.300,	9.300,	9.300,	9.300,	9.300,	9.300,	},
{-5.000,	-5.000,	-5.000,	-2.700,	0.700,	2.000,	4.100,	4.800,	5.400,	6.000,	6.300,	6.300,	6.300,	6.300,	6.300,	6.300,	},
{-5.000,	-5.000,	-5.000,	-5.000,	-2.000,	-1.300,	-0.500,	0.100,	0.800,	1.500,	2.000,	2.000,	2.000,	2.000,	2.000,	2.000,	},
};
	copyTable(config->ignitionTable, hardCodedignitionTable);
}

static void pbcannedveTable() {
	static const float hardCodedveTable[16][16] = {
{50.300,	50.300,	50.400,	50.500,	50.600,	50.600,	50.300,	29.900,	29.800,	29.900,	30.400,	31.400,	33.000,	35.100,	37.700,	40.900,	},
{55.800,	56.500,	57.100,	57.900,	53.300,	52.800,	52.000,	31.300,	31.200,	31.500,	32.200,	33.500,	35.300,	37.700,	40.500,	43.900,	},
{66.700,	67.900,	69.000,	69.900,	74.900,	74.000,	73.000,	82.300,	82.100,	82.400,	83.200,	84.500,	86.300,	88.700,	91.600,	95.000,	},
{70.100,	72.400,	73.500,	73.600,	77.700,	76.200,	75.000,	84.100,	84.000,	84.200,	85.100,	86.400,	88.300,	90.700,	93.600,	97.100,	},
{80.400,	82.100,	82.300,	81.500,	79.900,	78.200,	76.900,	86.400,	86.200,	86.500,	87.400,	88.700,	90.600,	93.000,	96.000,	99.500,	},
{85.000,	85.500,	85.000,	83.700,	86.000,	88.200,	90.400,	89.600,	89.500,	89.700,	90.600,	91.000,	92.900,	95.300,	98.400,	101.900,	},
{88.500,	88.200,	87.300,	85.800,	89.300,	90.200,	92.900,	91.900,	91.700,	92.000,	92.900,	93.200,	95.200,	97.700,	100.700,	104.300,	},
{86.200,	85.400,	84.300,	82.700,	92.500,	92.300,	95.400,	94.100,	94.000,	94.200,	95.100,	95.500,	97.500,	100.000,	103.100,	106.700,	},
{105.600,	104.600,	103.400,	101.700,	95.800,	94.300,	97.900,	96.400,	96.200,	96.500,	97.400,	102.800,	99.800,	102.300,	105.500,	109.100,	},
{113.400,	112.100,	110.800,	109.000,	106.900,	104.800,	103.300,	102.300,	102.100,	102.400,	103.300,	104.800,	106.900,	109.600,	112.900,	116.800,	},
{121.400,	120.000,	118.600,	116.600,	114.400,	112.200,	110.600,	109.500,	109.300,	109.600,	110.600,	112.200,	114.400,	117.300,	120.800,	124.900,	},
{127.600,	126.500,	125.100,	123.000,	120.700,	118.300,	116.600,	115.500,	115.300,	115.600,	116.600,	118.300,	120.700,	123.700,	127.400,	127.600,	},
{127.600,	127.600,	127.600,	127.600,	125.700,	123.300,	121.500,	120.400,	120.100,	120.500,	121.500,	123.300,	125.700,	127.600,	127.600,	127.600,	},
{127.600,	127.600,	127.600,	127.600,	127.600,	127.000,	125.200,	124.000,	123.800,	124.200,	125.200,	127.000,	127.600,	127.600,	127.600,	127.600,	},
{127.600,	127.600,	127.600,	127.600,	127.600,	127.600,	127.600,	126.500,	126.300,	126.700,	127.600,	127.600,	127.600,	127.600,	127.600,	127.600,	},
{127.600,	127.600,	127.600,	127.600,	127.600,	127.600,	127.600,	127.600,	127.600,	127.600,	127.600,	127.600,	127.600,	127.600,	127.600,	127.600,	},
};
	copyTable(config->veTable, hardCodedveTable);
}

static void pbcannedinjectionPhase() {
	static const float hardCodedinjectionPhase[16][16] = {
{-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-250.000,	-250.000,	-250.000,	-240.000,	-240.000,	-240.000,	-240.000,	-240.000,	},
{-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-250.000,	-250.000,	-250.000,	-240.000,	-240.000,	-240.000,	-240.000,	-240.000,	},
{-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-250.000,	-250.000,	-250.000,	-240.000,	-240.000,	-240.000,	-240.000,	-240.000,	},
{-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-250.000,	-250.000,	-250.000,	-240.000,	-240.000,	-240.000,	-240.000,	-240.000,	},
{-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-250.000,	-250.000,	-250.000,	-240.000,	-240.000,	-240.000,	-240.000,	-240.000,	},
{-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-250.000,	-250.000,	-230.000,	-200.000,	-200.000,	-200.000,	-200.000,	-200.000,	},
{-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-250.000,	-250.000,	-230.000,	-200.000,	-200.000,	-200.000,	-200.000,	-200.000,	},
{-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-250.000,	-250.000,	-230.000,	-200.000,	-200.000,	-200.000,	-200.000,	-200.000,	},
{-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-250.000,	-250.000,	-230.000,	-200.000,	-200.000,	-200.000,	-200.000,	-200.000,	},
{-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-250.000,	-250.000,	-230.000,	-200.000,	-200.000,	-200.000,	-200.000,	-200.000,	},
{-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-250.000,	-250.000,	-230.000,	-200.000,	-200.000,	-200.000,	-200.000,	-200.000,	},
{-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-250.000,	-250.000,	-230.000,	-200.000,	-200.000,	-200.000,	-200.000,	-200.000,	},
{-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-250.000,	-250.000,	-230.000,	-200.000,	-200.000,	-200.000,	-200.000,	-200.000,	},
{-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-250.000,	-250.000,	-230.000,	-180.000,	-180.000,	-180.000,	-180.000,	-180.000,	},
{-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-250.000,	-250.000,	-230.000,	-180.000,	-180.000,	-180.000,	-180.000,	-180.000,	},
{-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-220.000,	-250.000,	-250.000,	-230.000,	-180.000,	-180.000,	-180.000,	-180.000,	-180.000,	},
};
	copyTable(config->injectionPhase, hardCodedinjectionPhase);
}

static void pbcannedmaxKnockRetardTable() {
	static const float hardCodedmaxKnockRetardTable[6][6] = {
{5.000,	5.000,	5.000,	5.000,	5.000,	5.000,	},
{5.000,	5.000,	5.000,	5.000,	5.000,	5.000,	},
{5.000,	5.000,	5.000,	5.000,	5.000,	5.000,	},
{5.000,	5.000,	5.000,	5.000,	5.000,	5.000,	},
{5.000,	5.000,	5.000,	5.000,	5.000,	5.000,	},
{5.000,	5.000,	5.000,	5.000,	5.000,	5.000,	},
};
	copyTable(config->maxKnockRetardTable, hardCodedmaxKnockRetardTable);
}

static void pbcannedlambdaTable() {
	static const float hardCodedlambdaTable[16][16] = {
{14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	},
{14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	},
{14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	},
{14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	},
{14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	},
{14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	},
{13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	},
{13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	},
{13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	},
{12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	},
{12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	},
{12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	},
{11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	},
{11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	},
{11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	},
{10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	},
};
	copyTable(config->lambdaTable, hardCodedlambdaTable);
}

static void pbcannedtcuSolenoidTable() {
	static const float hardCodedtcuSolenoidTable[6][10] = {
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
};
	copyTable(config->tcuSolenoidTable, hardCodedtcuSolenoidTable);
}

```
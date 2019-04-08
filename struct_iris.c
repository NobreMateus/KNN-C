#include <stdio.h>
#include <math.h>

/*
Class:
0 : Iris Setosa
1: Iris Versicolour
2: Iris Virginica
*/


typedef struct data_teste{
    float sepal_length;
    float sepal_width;
    float petal_length;
    float petal_width;
    int class;
}plant;

typedef struct dist_data{
	float dist;
	int class;
}distancia;


int cmpfunc (const void * a, const void * b) { 
    distancia *ia = (distancia *)a;
    distancia *ib = (distancia *)b;
    return (int)(100.f*ia->dist - 100.f*ib->dist);
	/* float comparison: returns negative if b > a 
	and positive if a > b. We multiplied result by 100.0
	to preserve decimal fraction */ 
}

int main()
{
    plant plants[150];
    distancia distancias[120];
    
    //
    // 0
    plants[0].sepal_length = 5.1;
    plants[0].sepal_width = 3.5;
    plants[0].petal_length = 1.4;
    plants[0].petal_width = 0.2;
    plants[0].class = 0;
    //
    // 1
    plants[1].sepal_length = 4.9;
    plants[1].sepal_width = 3.0;
    plants[1].petal_length = 1.4;
    plants[1].petal_width = 0.2;
    plants[1].class = 0;
    //
    // 2
    plants[2].sepal_length = 4.7;
    plants[2].sepal_width = 3.2;
    plants[2].petal_length = 1.3;
    plants[2].petal_width = 0.2;
    plants[2].class = 0;
    //
    // 3
    plants[3].sepal_length = 4.6;
    plants[3].sepal_width = 3.1;
    plants[3].petal_length = 1.5;
    plants[3].petal_width = 0.2;
    plants[3].class = 0;
    //
    // 4
    plants[4].sepal_length = 5.0;
    plants[4].sepal_width = 3.6;
    plants[4].petal_length = 1.4;
    plants[4].petal_width = 0.2;
    plants[4].class = 0;
    //
    // 5
    plants[5].sepal_length = 5.4;
    plants[5].sepal_width = 3.9;
    plants[5].petal_length = 1.7;
    plants[5].petal_width = 0.4;
    plants[5].class = 0;
    //
    // 6
    plants[6].sepal_length = 4.6;
    plants[6].sepal_width = 3.4;
    plants[6].petal_length = 1.4;
    plants[6].petal_width = 0.3;
    plants[6].class = 0;
    //
    // 7
    plants[7].sepal_length = 5.0;
    plants[7].sepal_width = 3.4;
    plants[7].petal_length = 1.5;
    plants[7].petal_width = 0.2;
    plants[7].class = 0;
    //
    // 8
    plants[8].sepal_length = 4.4;
    plants[8].sepal_width = 2.9;
    plants[8].petal_length = 1.4;
    plants[8].petal_width = 0.2;
    plants[8].class = 0;
    //
    // 9
    plants[9].sepal_length = 4.9;
    plants[9].sepal_width = 3.1;
    plants[9].petal_length = 1.5;
    plants[9].petal_width = 0.1;
    plants[9].class = 0;
    //
    // 10
    plants[10].sepal_length = 5.4;
    plants[10].sepal_width = 3.7;
    plants[10].petal_length = 1.5;
    plants[10].petal_width = 0.2;
    plants[10].class = 0;
    //
    // 11
    plants[11].sepal_length = 4.8;
    plants[11].sepal_width = 3.4;
    plants[11].petal_length = 1.6;
    plants[11].petal_width = 0.2;
    plants[11].class = 0;
    //
    // 12
    plants[12].sepal_length = 4.8;
    plants[12].sepal_width = 3.0;
    plants[12].petal_length = 1.4;
    plants[12].petal_width = 0.1;
    plants[12].class = 0;
    //
    // 13
    plants[13].sepal_length = 4.3;
    plants[13].sepal_width = 3.0;
    plants[13].petal_length = 1.1;
    plants[13].petal_width = 0.1;
    plants[13].class = 0;
    //
    // 14
    plants[14].sepal_length = 5.8;
    plants[14].sepal_width = 4.0;
    plants[14].petal_length = 1.2;
    plants[14].petal_width = 0.2;
    plants[14].class = 0;
    //
    // 15
    plants[15].sepal_length = 5.7;
    plants[15].sepal_width = 4.4;
    plants[15].petal_length = 1.5;
    plants[15].petal_width = 0.4;
    plants[15].class = 0;
    //
    // 16
    plants[16].sepal_length = 5.4;
    plants[16].sepal_width = 3.9;
    plants[16].petal_length = 1.3;
    plants[16].petal_width = 0.4;
    plants[16].class = 0;
    //
    // 17
    plants[17].sepal_length = 5.1;
    plants[17].sepal_width = 3.5;
    plants[17].petal_length = 1.4;
    plants[17].petal_width = 0.3;
    plants[17].class = 0;
    //
    // 18
    plants[18].sepal_length = 5.7;
    plants[18].sepal_width = 3.8;
    plants[18].petal_length = 1.7;
    plants[18].petal_width = 0.3;
    plants[18].class = 0;
    //
    // 19
    plants[19].sepal_length = 5.1;
    plants[19].sepal_width = 3.8;
    plants[19].petal_length = 1.5;
    plants[19].petal_width = 0.3;
    plants[19].class = 0;
    //
    // 20
    plants[20].sepal_length = 5.4;
    plants[20].sepal_width = 3.4;
    plants[20].petal_length = 1.7;
    plants[20].petal_width = 0.2;
    plants[20].class = 0;
    //
    // 21
    plants[21].sepal_length = 5.1;
    plants[21].sepal_width = 3.7;
    plants[21].petal_length = 1.5;
    plants[21].petal_width = 0.4;
    plants[21].class = 0;
    //
    // 22
    plants[22].sepal_length = 4.6;
    plants[22].sepal_width = 3.6;
    plants[22].petal_length = 1.0;
    plants[22].petal_width = 0.2;
    plants[22].class = 0;
    //
    // 23
    plants[23].sepal_length = 5.1;
    plants[23].sepal_width = 3.3;
    plants[23].petal_length = 1.7;
    plants[23].petal_width = 0.5;
    plants[23].class = 0;
    //
    // 24
    plants[24].sepal_length = 4.8;
    plants[24].sepal_width = 3.4;
    plants[24].petal_length = 1.9;
    plants[24].petal_width = 0.2;
    plants[24].class = 0;
    //
    // 25
    plants[25].sepal_length = 5.0;
    plants[25].sepal_width = 3.0;
    plants[25].petal_length = 1.6;
    plants[25].petal_width = 0.2;
    plants[25].class = 0;
    //
    // 26
    plants[26].sepal_length = 5.0;
    plants[26].sepal_width = 3.4;
    plants[26].petal_length = 1.6;
    plants[26].petal_width = 0.4;
    plants[26].class = 0;
    //
    // 27
    plants[27].sepal_length = 5.2;
    plants[27].sepal_width = 3.5;
    plants[27].petal_length = 1.5;
    plants[27].petal_width = 0.2;
    plants[27].class = 0;
    //
    // 28
    plants[28].sepal_length = 5.2;
    plants[28].sepal_width = 3.4;
    plants[28].petal_length = 1.4;
    plants[28].petal_width = 0.2;
    plants[28].class = 0;
    //
    // 29
    plants[29].sepal_length = 4.7;
    plants[29].sepal_width = 3.2;
    plants[29].petal_length = 1.6;
    plants[29].petal_width = 0.2;
    plants[29].class = 0;
    //
    // 30
    plants[30].sepal_length = 4.8;
    plants[30].sepal_width = 3.1;
    plants[30].petal_length = 1.6;
    plants[30].petal_width = 0.2;
    plants[30].class = 0;
    //
    // 31
    plants[31].sepal_length = 5.4;
    plants[31].sepal_width = 3.4;
    plants[31].petal_length = 1.5;
    plants[31].petal_width = 0.4;
    plants[31].class = 0;
    //
    // 32
    plants[32].sepal_length = 5.2;
    plants[32].sepal_width = 4.1;
    plants[32].petal_length = 1.5;
    plants[32].petal_width = 0.1;
    plants[32].class = 0;
    //
    // 33
    plants[33].sepal_length = 5.5;
    plants[33].sepal_width = 4.2;
    plants[33].petal_length = 1.4;
    plants[33].petal_width = 0.2;
    plants[33].class = 0;
    //
    // 34
    plants[34].sepal_length = 4.9;
    plants[34].sepal_width = 3.1;
    plants[34].petal_length = 1.5;
    plants[34].petal_width = 0.1;
    plants[34].class = 0;
    //
    // 35
    plants[35].sepal_length = 5.0;
    plants[35].sepal_width = 3.2;
    plants[35].petal_length = 1.2;
    plants[35].petal_width = 0.2;
    plants[35].class = 0;
    //
    // 36
    plants[36].sepal_length = 5.5;
    plants[36].sepal_width = 3.5;
    plants[36].petal_length = 1.3;
    plants[36].petal_width = 0.2;
    plants[36].class = 0;
    //
    // 37
    plants[37].sepal_length = 4.9;
    plants[37].sepal_width = 3.1;
    plants[37].petal_length = 1.5;
    plants[37].petal_width = 0.1;
    plants[37].class = 0;
    //
    // 38
    plants[38].sepal_length = 4.4;
    plants[38].sepal_width = 3.0;
    plants[38].petal_length = 1.3;
    plants[38].petal_width = 0.2;
    plants[38].class = 0;
    //
    // 39
    plants[39].sepal_length = 5.1;
    plants[39].sepal_width = 3.4;
    plants[39].petal_length = 1.5;
    plants[39].petal_width = 0.2;
    plants[39].class = 0;
    //
    // 50
    plants[40].sepal_length = 5.0;
    plants[40].sepal_width = 3.5;
    plants[40].petal_length = 1.3;
    plants[40].petal_width = 0.3;
    plants[40].class = 0;
    //
    // 51
    plants[41].sepal_length = 4.5;
    plants[41].sepal_width = 2.3;
    plants[41].petal_length = 1.3;
    plants[41].petal_width = 0.3;
    plants[41].class = 0;
    //
    // 52
    plants[42].sepal_length = 4.4;
    plants[42].sepal_width = 3.2;
    plants[42].petal_length = 1.3;
    plants[42].petal_width = 0.2;
    plants[42].class = 0;
    //
    // 53
    plants[43].sepal_length = 5.0;
    plants[43].sepal_width = 3.5;
    plants[43].petal_length = 1.6;
    plants[43].petal_width = 0.6;
    plants[43].class = 0;
    //
    // 54
    plants[44].sepal_length = 5.1;
    plants[44].sepal_width = 3.8;
    plants[44].petal_length = 1.9;
    plants[44].petal_width = 0.4;
    plants[44].class = 0;
    //
    // 55
    plants[45].sepal_length = 4.8;
    plants[45].sepal_width = 3.0;
    plants[45].petal_length = 1.4;
    plants[45].petal_width = 0.3;
    plants[45].class = 0;
    //
    // 56
    plants[46].sepal_length = 5.1;
    plants[46].sepal_width = 3.8;
    plants[46].petal_length = 1.6;
    plants[46].petal_width = 0.2;
    plants[46].class = 0;
    //
    // 57
    plants[47].sepal_length = 4.6;
    plants[47].sepal_width = 3.2;
    plants[47].petal_length = 1.4;
    plants[47].petal_width = 0.2;
    plants[47].class = 0;
    //
    // 58
    plants[48].sepal_length = 5.3;
    plants[48].sepal_width = 3.7;
    plants[48].petal_length = 1.5;
    plants[48].petal_width = 0.2;
    plants[48].class = 0;
    //
    // 59
    plants[49].sepal_length = 5.0;
    plants[49].sepal_width = 3.3;
    plants[49].petal_length = 1.4;
    plants[49].petal_width = 0.2;
    plants[49].class = 0;
    //
    // 60
    plants[50].sepal_length = 7.0;
    plants[50].sepal_width = 3.2;
    plants[50].petal_length = 4.7;
    plants[50].petal_width = 1.4;
    plants[50].class = 1;
    //
    // 61
    plants[51].sepal_length = 6.4;
    plants[51].sepal_width = 3.2;
    plants[51].petal_length = 4.4;
    plants[51].petal_width = 1.5;
    plants[51].class = 1;
    //
    // 62
    plants[52].sepal_length = 6.9;
    plants[52].sepal_width = 3.1;
    plants[52].petal_length = 4.9;
    plants[52].petal_width = 1.5;
    plants[52].class = 1;
    //
    // 63
    plants[53].sepal_length = 5.5;
    plants[53].sepal_width = 2.3;
    plants[53].petal_length = 4.0;
    plants[53].petal_width = 1.3;
    plants[53].class = 1;
    //
    // 64
    plants[54].sepal_length = 6.5;
    plants[54].sepal_width = 2.8;
    plants[54].petal_length = 4.6;
    plants[54].petal_width = 1.5;
    plants[54].class = 1;
    //
    // 65
    plants[55].sepal_length = 5.7;
    plants[55].sepal_width = 2.8;
    plants[55].petal_length = 4.5;
    plants[55].petal_width = 1.3;
    plants[55].class = 1;
    //
    // 66
    plants[56].sepal_length = 6.3;
    plants[56].sepal_width = 3.3;
    plants[56].petal_length = 4.7;
    plants[56].petal_width = 1.6;
    plants[56].class = 1;
    //
    // 67
    plants[57].sepal_length = 4.9;
    plants[57].sepal_width = 2.4;
    plants[57].petal_length = 3.3;
    plants[57].petal_width = 1.0;
    plants[57].class = 1;
    //
    // 68
    plants[58].sepal_length = 6.6;
    plants[58].sepal_width = 2.9;
    plants[58].petal_length = 4.6;
    plants[58].petal_width = 1.3;
    plants[58].class = 1;
    //
    // 69
    plants[59].sepal_length = 5.2;
    plants[59].sepal_width = 2.7;
    plants[59].petal_length = 3.9;
    plants[59].petal_width = 1.4;
    plants[59].class = 1;
    //
    // 70
    plants[60].sepal_length = 5.0;
    plants[60].sepal_width = 2.0;
    plants[60].petal_length = 3.5;
    plants[60].petal_width = 1.0;
    plants[60].class = 1;
    //
    // 71
    plants[61].sepal_length = 5.9;
    plants[61].sepal_width = 3.0;
    plants[61].petal_length = 4.2;
    plants[61].petal_width = 1.5;
    plants[61].class = 1;
    //
    // 72
    plants[62].sepal_length = 6.0;
    plants[62].sepal_width = 2.2;
    plants[62].petal_length = 4.0;
    plants[62].petal_width = 1.0;
    plants[62].class = 1;
    //
    // 73
    plants[63].sepal_length = 6.1;
    plants[63].sepal_width = 2.9;
    plants[63].petal_length = 4.7;
    plants[63].petal_width = 1.4;
    plants[63].class = 1;
    //
    // 74
    plants[64].sepal_length = 5.6;
    plants[64].sepal_width = 2.9;
    plants[64].petal_length = 3.6;
    plants[64].petal_width = 1.3;
    plants[64].class = 1;
    //
    // 75
    plants[65].sepal_length = 6.7;
    plants[65].sepal_width = 3.1;
    plants[65].petal_length = 4.4;
    plants[65].petal_width = 1.4;
    plants[65].class = 1;
    //
    // 76
    plants[66].sepal_length = 5.6;
    plants[66].sepal_width = 3.0;
    plants[66].petal_length = 4.5;
    plants[66].petal_width = 1.5;
    plants[66].class = 1;
    //
    // 77
    plants[67].sepal_length = 5.8;
    plants[67].sepal_width = 2.7;
    plants[67].petal_length = 4.1;
    plants[67].petal_width = 1.0;
    plants[67].class = 1;
    //
    // 78
    plants[68].sepal_length = 6.2;
    plants[68].sepal_width = 2.2;
    plants[68].petal_length = 4.5;
    plants[68].petal_width = 1.5;
    plants[68].class = 1;
    //
    // 79
    plants[69].sepal_length = 5.6;
    plants[69].sepal_width = 2.5;
    plants[69].petal_length = 3.9;
    plants[69].petal_width = 1.1;
    plants[69].class = 1;
    //
    // 80
    plants[70].sepal_length = 5.9;
    plants[70].sepal_width = 3.2;
    plants[70].petal_length = 4.8;
    plants[70].petal_width = 1.8;
    plants[70].class = 1;
    //
    // 81
    plants[71].sepal_length = 6.1;
    plants[71].sepal_width = 2.8;
    plants[71].petal_length = 4.0;
    plants[71].petal_width = 1.3;
    plants[71].class = 1;
    //
    // 82
    plants[72].sepal_length = 6.3;
    plants[72].sepal_width = 2.5;
    plants[72].petal_length = 4.9;
    plants[72].petal_width = 1.5;
    plants[72].class = 1;
    //
    // 83
    plants[73].sepal_length = 6.1;
    plants[73].sepal_width = 2.8;
    plants[73].petal_length = 4.7;
    plants[73].petal_width = 1.2;
    plants[73].class = 1;
    //
    // 84
    plants[74].sepal_length = 6.4;
    plants[74].sepal_width = 2.9;
    plants[74].petal_length = 4.3;
    plants[74].petal_width = 1.3;
    plants[74].class = 1;
    //
    // 85
    plants[75].sepal_length = 6.6;
    plants[75].sepal_width = 3.0;
    plants[75].petal_length = 4.4;
    plants[75].petal_width = 1.4;
    plants[75].class = 1;
    //
    // 86
    plants[76].sepal_length = 6.8;
    plants[76].sepal_width = 2.8;
    plants[76].petal_length = 4.8;
    plants[76].petal_width = 1.4;
    plants[76].class = 1;
    //
    // 87
    plants[77].sepal_length = 6.7;
    plants[77].sepal_width = 3.0;
    plants[77].petal_length = 5.0;
    plants[77].petal_width = 1.7;
    plants[77].class = 1;
    //
    // 88
    plants[78].sepal_length = 6.0;
    plants[78].sepal_width = 2.9;
    plants[78].petal_length = 4.5;
    plants[78].petal_width = 1.5;
    plants[78].class = 1;
    //
    // 89
    plants[79].sepal_length = 5.7;
    plants[79].sepal_width = 2.6;
    plants[79].petal_length = 3.5;
    plants[79].petal_width = 1.0;
    plants[79].class = 1;
    //
    // 100
    plants[80].sepal_length = 5.5;
    plants[80].sepal_width = 2.4;
    plants[80].petal_length = 3.8;
    plants[80].petal_width = 1.1;
    plants[80].class = 1;
    //
    // 101
    plants[81].sepal_length = 5.5;
    plants[81].sepal_width = 2.4;
    plants[81].petal_length = 3.7;
    plants[81].petal_width = 1.0;
    plants[81].class = 1;
    //
    // 102
    plants[82].sepal_length = 5.8;
    plants[82].sepal_width = 2.7;
    plants[82].petal_length = 3.9;
    plants[82].petal_width = 1.2;
    plants[82].class = 1;
    //
    // 103
    plants[83].sepal_length = 6.0;
    plants[83].sepal_width = 2.7;
    plants[83].petal_length = 5.1;
    plants[83].petal_width = 1.6;
    plants[83].class = 1;
    //
    // 104
    plants[84].sepal_length = 5.4;
    plants[84].sepal_width = 3.0;
    plants[84].petal_length = 4.5;
    plants[84].petal_width = 1.5;
    plants[84].class = 1;
    //
    // 105
    plants[85].sepal_length = 6.0;
    plants[85].sepal_width = 3.4;
    plants[85].petal_length = 4.5;
    plants[85].petal_width = 1.6;
    plants[85].class = 1;
    //
    // 106
    plants[86].sepal_length = 6.7;
    plants[86].sepal_width = 3.1;
    plants[86].petal_length = 4.7;
    plants[86].petal_width = 1.5;
    plants[86].class = 1;
    //
    // 107
    plants[87].sepal_length = 6.3;
    plants[87].sepal_width = 2.3;
    plants[87].petal_length = 4.4;
    plants[87].petal_width = 1.3;
    plants[87].class = 1;
    //
    // 108
    plants[88].sepal_length = 5.6;
    plants[88].sepal_width = 3.0;
    plants[88].petal_length = 4.1;
    plants[88].petal_width = 1.3;
    plants[88].class = 1;
    //
    // 109
    plants[89].sepal_length = 5.5;
    plants[89].sepal_width = 2.5;
    plants[89].petal_length = 4.0;
    plants[89].petal_width = 1.3;
    plants[89].class = 1;
    //
    // 110
    plants[90].sepal_length = 5.5;
    plants[90].sepal_width = 2.6;
    plants[90].petal_length = 4.4;
    plants[90].petal_width = 1.2;
    plants[90].class = 1;
    //
    // 111
    plants[91].sepal_length = 6.1;
    plants[91].sepal_width = 3.0;
    plants[91].petal_length = 4.6;
    plants[91].petal_width = 1.4;
    plants[91].class = 1;
    //
    // 112
    plants[92].sepal_length = 5.8;
    plants[92].sepal_width = 2.6;
    plants[92].petal_length = 4.0;
    plants[92].petal_width = 1.2;
    plants[92].class = 1;
    //
    // 113
    plants[93].sepal_length = 5.0;
    plants[93].sepal_width = 2.3;
    plants[93].petal_length = 3.3;
    plants[93].petal_width = 1.0;
    plants[93].class = 1;
    //
    // 114
    plants[94].sepal_length = 5.6;
    plants[94].sepal_width = 2.7;
    plants[94].petal_length = 4.2;
    plants[94].petal_width = 1.3;
    plants[94].class = 1;
    //
    // 115
    plants[95].sepal_length = 5.7;
    plants[95].sepal_width = 3.0;
    plants[95].petal_length = 4.2;
    plants[95].petal_width = 1.2;
    plants[95].class = 1;
    //
    // 116
    plants[96].sepal_length = 5.7;
    plants[96].sepal_width = 2.9;
    plants[96].petal_length = 4.2;
    plants[96].petal_width = 1.3;
    plants[96].class = 1;
    //
    // 117
    plants[97].sepal_length = 6.2;
    plants[97].sepal_width = 2.9;
    plants[97].petal_length = 4.3;
    plants[97].petal_width = 1.3;
    plants[97].class = 1;
    //
    // 118
    plants[98].sepal_length = 5.1;
    plants[98].sepal_width = 2.5;
    plants[98].petal_length = 3.0;
    plants[98].petal_width = 1.1;
    plants[98].class = 1;
    //
    // 119
    plants[99].sepal_length = 5.7;
    plants[99].sepal_width = 2.8;
    plants[99].petal_length = 4.1;
    plants[99].petal_width = 1.3;
    plants[99].class = 1;
    //
    // 120
    plants[100].sepal_length = 6.3;
    plants[100].sepal_width = 3.3;
    plants[100].petal_length = 6.0;
    plants[100].petal_width = 2.5;
    plants[100].class = 2;
    //
    // 121
    plants[101].sepal_length = 5.8;
    plants[101].sepal_width = 2.7;
    plants[101].petal_length = 5.1;
    plants[101].petal_width = 1.9;
    plants[101].class = 2;
    //
    // 122
    plants[102].sepal_length = 7.1;
    plants[102].sepal_width = 3.0;
    plants[102].petal_length = 5.9;
    plants[102].petal_width = 2.1;
    plants[102].class = 2;
    //
    // 123
    plants[103].sepal_length = 6.3;
    plants[103].sepal_width = 2.9;
    plants[103].petal_length = 5.6;
    plants[103].petal_width = 1.8;
    plants[103].class = 2;
    //
    // 124
    plants[104].sepal_length = 6.5;
    plants[104].sepal_width = 3.0;
    plants[104].petal_length = 5.8;
    plants[104].petal_width = 2.2;
    plants[104].class = 2;
    //
    // 125
    plants[105].sepal_length = 7.6;
    plants[105].sepal_width = 3.0;
    plants[105].petal_length = 6.6;
    plants[105].petal_width = 2.1;
    plants[105].class = 2;
    //
    // 126
    plants[106].sepal_length = 4.9;
    plants[106].sepal_width = 2.5;
    plants[106].petal_length = 4.5;
    plants[106].petal_width = 1.7;
    plants[106].class = 2;
    //
    // 127
    plants[107].sepal_length = 7.3;
    plants[107].sepal_width = 2.9;
    plants[107].petal_length = 6.3;
    plants[107].petal_width = 1.8;
    plants[107].class = 2;
    //
    // 128
    plants[108].sepal_length = 6.7;
    plants[108].sepal_width = 2.5;
    plants[108].petal_length = 5.8;
    plants[108].petal_width = 1.8;
    plants[108].class = 2;
    //
    // 129
    plants[109].sepal_length = 7.2;
    plants[109].sepal_width = 3.6;
    plants[109].petal_length = 6.1;
    plants[109].petal_width = 2.5;
    plants[109].class = 2;
    //
    // 130
    plants[110].sepal_length = 6.5;
    plants[110].sepal_width = 3.2;
    plants[110].petal_length = 5.1;
    plants[110].petal_width = 2.0;
    plants[110].class = 2;
    //
    // 131
    plants[111].sepal_length = 6.4;
    plants[111].sepal_width = 2.7;
    plants[111].petal_length = 5.3;
    plants[111].petal_width = 1.9;
    plants[111].class = 2;
    //
    // 132
    plants[112].sepal_length = 6.8;
    plants[112].sepal_width = 3.0;
    plants[112].petal_length = 5.5;
    plants[112].petal_width = 2.1;
    plants[112].class = 2;
    //
    // 133
    plants[113].sepal_length = 5.7;
    plants[113].sepal_width = 2.5;
    plants[113].petal_length = 5.0;
    plants[113].petal_width = 2.0;
    plants[113].class = 2;
    //
    // 134
    plants[114].sepal_length = 5.8;
    plants[114].sepal_width = 2.8;
    plants[114].petal_length = 5.1;
    plants[114].petal_width = 2.4;
    plants[114].class = 2;
    //
    // 135
    plants[115].sepal_length = 6.4;
    plants[115].sepal_width = 3.2;
    plants[115].petal_length = 5.3;
    plants[115].petal_width = 2.3;
    plants[115].class = 2;
    //
    // 136
    plants[116].sepal_length = 6.5;
    plants[116].sepal_width = 3.0;
    plants[116].petal_length = 5.5;
    plants[116].petal_width = 1.8;
    plants[116].class = 2;
    //
    // 137
    plants[117].sepal_length = 7.7;
    plants[117].sepal_width = 3.8;
    plants[117].petal_length = 6.7;
    plants[117].petal_width = 2.2;
    plants[117].class = 2;
    //
    // 138
    plants[118].sepal_length = 7.7;
    plants[118].sepal_width = 2.6;
    plants[118].petal_length = 6.9;
    plants[118].petal_width = 2.3;
    plants[118].class = 2;
    //
    // 139
    plants[119].sepal_length = 6.0;
    plants[119].sepal_width = 2.2;
    plants[119].petal_length = 5.0;
    plants[119].petal_width = 1.5;
    plants[119].class = 2;

    
	//Declaracaco de Variaveis
    const K = 60, classes = 3, itensTeste = 120;
	float dists[120], sl, sw, pl, pw, a, b, c, d;
    int i, class, cl[3], countClass= -1;

	//Inicializa o vetor de contagem de classes com todos zerados
	for(i=0; i<classes; i++){
 		cl[i] = 0;
    }


	//Pede pro usuário entrar com valores do item a ser descoberto
	//printf("Digite as propriedades da flor na ordem: \n");
	//scanf("%f %f %f %f", &sl, &sw, &pl, &pw);
	
	//6.2,3.4,5.4,2.3,
	sl = 6.2;
	sw = 3.4;
	pl = 5.4;
	pw = 2.3;
    
    
    //Calcula a distancia de cada item e populada array de distancias
    for(i=0; i<itensTeste; i++){
        a = (plants[i].sepal_length - sl) * (plants[i].sepal_length - sl);
        b = (plants[i].sepal_width - sw) * (plants[i].sepal_width - sw);
        c = (plants[i].petal_length - pl) * (plants[i].petal_length - pl);
        d = (plants[i].petal_width - pw) * (plants[i].petal_width - pw);
        
		//dists[i] = sqrt(a+b+c+d);

        distancias[i].dist = sqrt(a+b+c+d);
        distancias[i].class = plants[i].class;
		
    }
    
    //Ordena struct de distancias em relação a distancia
	qsort(distancias, itensTeste, sizeof(distancia), cmpfunc);
    
	//Imprime o struct de distancias ordenado
	for(i=0; i<itensTeste; i++){
    	printf("%d - %f \n", distancias[i].class, distancias[i].dist);
	}
  	printf("\n");
    
    
    //Faz a contagem das primeiras N classes
    for(i=0; i<K; i++){
 		//printf("%f - %d \n", distancias[i].dist, distancias[i].class);	
		cl[distancias[i].class]++; 
    }
    
    //Verifica qual classe obteve a maior contagem
    for(i=0; i<classes; i++){
 		printf("Count %d: %d\n", i, cl[i]);
		if(cl[i] > countClass ){
			countClass = cl[i];
			class = i;    
		 }
    }
    
    //

	//Imprime o resultado encontrado
    printf("\nClasse: %d\n", class);

    return 0;
}




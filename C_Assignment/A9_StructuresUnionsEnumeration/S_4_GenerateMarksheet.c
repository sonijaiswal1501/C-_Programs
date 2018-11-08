/*Develop a program to generate marks sheet of C-DAC, Hyderabad Students (DSSD, DESD and
DAC courses). Modules are different for each course. Implement this using structures, unions,
arrays, loops and variables.*/

#include<stdio.h>

struct DSSD{
	int C;
	int ComputerNetworkSecurity;
	int SoftwareEngineering;
	int CloudComputing;
};
struct DESD{
	int ProgrammingConcepts;
	int MicrocontrollersInterfacing;
	int EmbeddedOS;
	int IoT;
};
struct DAC{
	int OperatingSystems;
	int OOPswithC;
	int AlgorithmDS;
	int DatabaseTechnologies;
};
union marksheet{
	
	struct DSSD S;
	struct DESD E;
	struct DAC A;
};

int main()
{
	union marksheet M;
	
	printf("\nEnter the marks for DSSD students: ");	
	
	printf("\nC/C++ = ");
	scanf("%d", &M.S.C);
	printf("\nComputerNetworkSecurity = ");
	scanf("%d", &M.S.ComputerNetworkSecurity);	
	printf("\nSoftwareEngineering = ");
	scanf("%d", &M.S.SoftwareEngineering);
	printf("\nCloudComputing = ");
	scanf("%d", &M.S.CloudComputing);

	printf("\nEnter the marks for DESD students: ");	
	scanf("%d%d%d%d", &M.E.ProgrammingConcepts, &M.E.MicrocontrollersInterfacing, &M.E.EmbeddedOS, &M.E.IoT);

	printf("\nEnter the marks for DAC students: ");	
	scanf("%d%d%d%d", &M.A.OperatingSystems, &M.A.OOPswithC, &M.A.AlgorithmDS, &M.A.DatabaseTechnologies);

	printf("\nResult of DSSD students:\n");	
	printf("\nC/C++ = %d", M.S.C);
	printf("\nComputerNetworkSecurity = %d", M.S.ComputerNetworkSecurity);	
	printf("\nSoftwareEngineering = %d", M.S.SoftwareEngineering);
	printf("\nCloudComputing = %d", M.S.CloudComputing);

	printf("\nResult of DESD students: ");	
	printf("\nProgramming Concepts=%d", M.E.ProgrammingConcepts);
	printf("\nMicrocontrollers & Interfacing=%d", M.E.MicrocontrollersInterfacing);
	printf("\nEmbedded OS=%d", M.E.EmbeddedOS);
	printf("\nIoT=%d\n",M.E.IoT);
	
	printf("\nResult of DAC students: ");	
	printf("\nOperating Systems=%d", M.A.OperatingSystems);
	printf("\nOOPs with C++=%d", M.A.OOPswithC);
	printf("\nAlgorithm & DS=%d", M.A.AlgorithmDS);
	printf("\nDatabase & Technologies=%d", M.A.DatabaseTechnologies);	


	return 0;
}

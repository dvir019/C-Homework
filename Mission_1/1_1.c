// 1_1.c

#define FORM_TIME_IN_MINUTES 10
#define FORM_SALARY_IN_SHEKELS 6.3
#define MINUTS_IN_HOUR 60
#define MULTUPLY_TWO(nFirstNumber, nSecondNumber) (nFirstNumber * nSecondNumber)

//---------------------------------------------------------------------------------
//                         Clerk Work Time And Salary
//                         --------------------------
//
// General : Calculates the work time and the salary of a clerk.
//
// Input   : None.
//
// Process : Calculates the total time of the work in minutes,
//           and uses it to calculate the hours and minutes.
//
// Output  : None.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 04.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	unsigned short num_of_forms = 25;
	unsigned short usTotalWorkTime = MULTUPLY_TWO(num_of_forms, FORM_TIME_IN_MINUTES);
	unsigned short usWorkTimeInHours = usTotalWorkTime / MINUTS_IN_HOUR;
	unsigned short usWorkTimeInMinutes = usTotalWorkTime % MINUTS_IN_HOUR;
	unsigned short usSalary = MULTUPLY_TWO(num_of_forms, FORM_SALARY_IN_SHEKELS);
}
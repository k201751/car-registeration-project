#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int page1(int com2, int com3, int com5, int com6, int com7, int com8)
{
	printf("Press 1 for Yaris\nPress 2 for 4Runner 2021\nPress 3 for Avalon\nPress 4 for Camry\nPress 5 for Corolla\n");
	scanf("%d", &com2);
	if (com2==1){
		printf("Price of Yaris is PKR 2,775,000\nPress 1 to confirm registeration\nPress 2 to cancel registeration\n");
		scanf("%d", &com3);
		if (com3==1){
			printf("Your bill is PKR 2,775,000\nThe process will take 15 days\nYour Registeration Number is 12345678\n");	
		}
		if (com3==2){
			return 0;
		}
	}
	if (com2==2){
		printf("Price of 4Runner is PKR 6,078,400\nPress 1 to confirm registeration\nPress 2 to cancel registeration\n");
		scanf("%d", &com3);
		if (com5==1){
			printf("Your bill is PKR 6,078,400\nThe process will take 15 days\nYour Registeration Number is 12345678\n");	
		}
		if (com5==2){
			return 0;
		}
		
	}
	if (com2==3){
		printf("Price of Avalon is PKR 6,811,200\nPress 1 to confirm registeration\nPress 2 to cancel registeration\n");
		scanf("%d", &com3);
		if (com6==1){
			printf("Your bill is PKR 6,811,200\nThe process will take 15 days\nYour Registeration Number is 12345678\n");	
		}
		if (com6==2){
			return 0;
		}
	}
	if (com2==4){
		printf("Price of Camry is PKR 16,050,000\nPress 1 to confirm registeration\nPress 2 to cancel registeration\n");
		scanf("%d", &com3);
		if (com7==1){
			printf("Your bill is PKR 16,050,000\nThe process will take 15 days\nYour Registeration Number is 12345678\n");	
		}
		if (com7==2){
			return 0;
		}
	}
	if (com2==5){
		printf("Price of Corolla is PKR 3,899,000\nPress 1 to confirm registeration\nPress 2 to cancel registeration\n");
		scanf("%d", &com3);
		if (com8==1){
			printf("Your bill is PKR 3,899,000\nThe process will take 15 days\nYour Registeration Number is 12345678\n");	
		}
		if (com8==2){
			return 0;
		}
	}
}
int page2(int com4)
{
	printf("Press 1 for Yaris\nPress 2 for 4Runner 2021\nPress 3 for Avalon\nPress 4 for Camry\nPress 5 for Corolla\n");
	scanf("%d", &com4);
	if (com4==1){
		printf("\n\nINFORMATION OF TOYOTA YARIS\n\n");
		printf("ARAI Mileage\t\t\t\t18.1 kmpl\n");
		printf("Engine Displacement (cc)\t\t1496\n");
		printf("Max Torque (nm@rpm)\t\t\t140Nm@4200rpm\n");
		printf("TransmissionType\t\t\tAutomatic\n");
		printf("Fuel Tank Capacity\t\t\t42\n");
		printf("Service Cost (Avg. of 5 years)\t\tRs.3,272\n");
		printf("Fuel Type\t\t\t\tPetrol\n");
		printf("Max Power (bhp@rpm)\t\t\t105.94bhp@6000rpm\n");
		printf("Seating Capacity\t\t\t5\n");
		printf("Boot Space (Litres)\t\t\t476\n");
		printf("Body Type\t\t\t\tSedan\n\n");
		getch();
		printf("\t\t******************************************************************************\n\n");
		printf("**KEY FEATURES OF YARIS**\n\n");
		printf("Power Steering\nAnti Lock braking system\nDriver Airbag\nAutomatic Climate Control\nAlloy Wheels\n");
		printf("Power Window front\nAir Conditioner\nPassenger Airbag\nFoglight-Front\n\n");
		getch();
		printf("\t\t******************************************************************************\n\n");
		printf("**Engine and Transmission**\n\n");
		printf("Engine Type\t\t\t1.5 Dual VVT-i Engine\n");
		printf("Displacement(cc)\t\t1496\n");
		printf("Max Power\t\t\t105.94bhp@6000rpm\n");
		printf("Max Torque\t\t\t140Nm@4200rpm\n");
		printf("No. of Cylinders\t\t4\n");
		printf("Valves per Cylinder\t\t4\n");
		printf("Valve Configuration\t\tDOHC\n");
		printf("Fuel Supply System\t\tEFI\n");
		printf("Transmission Type\t\tAutomatic\n");
		printf("Gear Box\t\t\t7 Speed CVT\n");
		printf("Drive Type\t\t\tFWD\n");
		getch();
	}
	if (com4==2)
	{
		printf("\n\nINFORMATION OF TOYOTA 4RUNNER\n\n");\
		printf("Engine Type\t\t\tGas\n");
		printf("Transmission\t\t\t5-speed shiftable\n");
		printf("Drive Type\t\t\t4 Wheel\n");
		printf("Cylinders\t\t\tV6\n");
		printf("Combined MPG\t\t\t18\n");
		printf("Total Seating\t\t\t5\n\n");
		getch();
		printf("\t\t******************************************************************************\n\n");
		printf("**Engine**\n\n");
		printf("Torque\t\t\t\t278 lb-ft @ 4400 rpm\n");
		printf("Base Engine Size\t\t4.0l\n");
		printf("Horsepower\t\t\t270 hp @ 5600 rpm\n");
		printf("Turning Circle\t\t\t37.4 ft\n");
		printf("Valves\t\t\t\t24\n");
		printf("Valve timing\t\t\tVariable\n");
		getch();
		printf("\t\t******************************************************************************\n\n");
		printf("**Fuel and MPG**\n\n");
		printf("EPA Mileage Est.\t\t17\\20mpg\n");
		printf("Range in miles\t\t\t391.0\\460.0mi\n");
		printf("Fuel Tank Capacity\t\t23.0 gal\n");
		printf("Combined MPG\t\t\t18\n");
		printf("Fuel\t\t\t\tRegular Unleaded\n\n");
		getch();
		printf("**Safety Features**\n\n");
		printf("4 Wheel ABS\n");
		printf("Rear door child Safety Locks\n");
		printf("Engine Immobilizer\n");
		printf("Front foglights\n");
		printf("Rear Centre 3-point belt\n");
		printf("Child Seat Anchor\n");
		getch();
		
	}
		if (com4==3)
	{
		printf("\n\nINFORMATION OF TOYOTA AVALON\n\n");\
		printf("Engine Type\t\t\tGas\n");
		printf("Transmission\t\t\t8-speed shiftable\n");
		printf("Drive Type\t\t\tFront Wheel-Drive\n");
		printf("Cylinders\t\t\tV6\n");
		printf("Combined MPG\t\t\t25\n");
		printf("Total Seating\t\t\t5\n\n");
		getch();
		printf("\t\t******************************************************************************\n\n");
		printf("**Engine**\n\n");
		printf("Torque\t\t\t\t267 lb-ft @ 4700 rpm\n");
		printf("Base Engine Size\t\t3.5l\n");
		printf("Horsepower\t\t\t301 hp @ 6600 rpm\n");
		printf("Turning Circle\t\t\t38.6 ft\n");
		printf("Valves\t\t\t\t24\n");
		printf("Valve timing\t\t\tVariable\n");
		getch();
		printf("\t\t******************************************************************************\n\n");
		printf("**Fuel and MPG**\n\n");
		printf("EPA Mileage Est.\t\t22\\31mpg\n");
		printf("Range in miles\t\t\t347.6\\489.8mi\n");
		printf("Fuel Tank Capacity\t\t15.8 gal\n");
		printf("Combined MPG\t\t\t25\n");
		printf("Fuel\t\t\t\tRegular Unleaded\n\n");
		getch();
		printf("**Safety Features**\n\n");
		printf("4 Wheel ABS\n");
		printf("Rear door child Safety Locks\n");
		printf("Engine Immobilizer\n");
		printf("Front foglights\n");
		printf("Rear Centre 3-point belt\n");
		printf("Child Seat Anchor\n");
		getch();
	}
		if (com4==4){
		printf("\n\nINFORMATION OF TOYOTA CAMRY\n\n");
		printf("ARAI Mileage\t\t\t\t19.16kmpl\n");
		printf("Engine Displacement (cc)\t\t2487\n");
		printf("Max Torque (nm@rpm)\t\t\t221Nm@3600-5200rpm\n");
		printf("TransmissionType\t\t\tAutomatic\n");
		printf("Fuel Tank Capacity\t\t\t50\n");
		printf("Fuel Type\t\t\t\tPetrol\n");
		printf("Max Power (bhp@rpm)\t\t\t214.5bhp@5700rpm\n");
		printf("Seating Capacity\t\t\t5\n");
		printf("Body Type\t\t\t\tSedan\n\n");
		getch();
		printf("\t\t******************************************************************************\n\n");
		printf("**KEY FEATURES OF YARIS**\n\n");
		printf("Power Steering\nAnti Lock braking system\nDriver Airbag\nAlloy Wheels\n");
		printf("Power Window front\nAir Conditioner\nPassenger Airbag\nFoglight-Front\n\n");
		getch();
		printf("\t\t******************************************************************************\n\n");
		printf("**Engine and Transmission**\n\n");
		printf("Engine Type\t\t\t2.5 Gasoline Hybrid Petrol Engine\n");
		printf("Displacement(cc)\t\t2487\n");
		printf("Max Power\t\t\t214.5bhp@5700rpm\n");
		printf("Max Torque\t\t\t221Nm@3600-5200rpm\n");
		printf("No. of Cylinders\t\t4\n");
		printf("Valves per Cylinder\t\t4\n");
		printf("Valve Configuration\t\tDOHC\n");
		printf("Fuel Supply System\t\tEFI\n");
		printf("Transmission Type\t\tAutomatic\n");
		printf("Gear Box\t\t\t6 Speed\n");
		printf("Drive Type\t\t\tFWD\n");
		getch();
			
	}
	if (com4==5){
		printf("\n\nINFORMATION OF TOYOTA COROLLA\n\n");
		printf("ARAI Mileage\t\t\t\t13.4 kmpl\n");
		printf("Engine Displacement (cc)\t\t1794\n");
		printf("Max Torque (nm@rpm)\t\t\t16.1@4,200 (kgm@rpm)\n");
		printf("TransmissionType\t\t\tManual\n");
		printf("Fuel Tank Capacity\t\t\t\n");
		printf("Service Cost (Avg. of 5 years)\t\tRs.3,272\n");
		printf("Fuel Type\t\t\t\tPetrol\n");
		printf("Max Power (bhp@rpm)\t\t\t125@6,000 (PS@rpm)\n");
		printf("Seating Capacity\t\t\t5\n");
		printf("Boot Space (Litres)\t\t\t430\n");
		printf("Body Type\t\t\t\tSedan\n\n");
		getch();
		printf("\t\t******************************************************************************\n\n");
		printf("**KEY FEATURES OF YARIS**\n\n");
		printf("Power Steering\nAnti Lock braking system\nWheelcover\n");
		printf("Power Window front\nAir Conditioner\n\n");
		getch();
		printf("\t\t******************************************************************************\n\n");
		printf("**Engine and Transmission**\n\n");
		printf("Engine Type\t\t\t1.5 Dual VVT-i Engine\n");
		printf("Displacement(cc)\t\t1794\n");
		printf("Max Power\t\t\t105.94bhp@6000rpm\n");
		printf("Max Torque\t\t\t125@6,000 (PS@rpm)\n");
		printf("No. of Cylinders\t\t4\n");
		printf("Valves per Cylinder\t\t4\n");
		printf("Valve Configuration\t\tDOHC\n");
		printf("Fuel Supply System\t\tEFI\n");
		printf("Transmission Type\t\tManual\n");
		printf("Gear Box\t\t\t5 Speed\n");
		printf("Drive Type\t\t\tFWD\n");
		printf("Clutch Type\t\t\tSingle, Dry plate clutch\n");
		getch();
	}
}
int main()
{
	int com1, com2, com3, com4, com5, com6, com7, com8;
	printf("Welcome to Toyota Car Registeration Setup\n\nPress 1 to register a car\nPress 2 for information of vehicles\nPress 3 for contact information\nPress 4 to surf Website\n= ");
	scanf("%d", &com1);
	switch(com1){
	case 1:
		page1(com2, com3, com5, com6, com7, com8);
		break;
	case 2:
		page2(com4);
		break;
	case 3:
		printf("\n Toyota Central Motors\nAddress: 3, Main Shahrah-e-Faisal Near AwamiMarkaz, Karachi -75350\n\n\nUAN: (+92-21) 111-786-122\nTel No: 021-34537609\nFax: 021-34521760, 021-34546047\ncustomer.relations@toyota-central.com");
		break;
	case 4:
		system("explorer https://www.toyota.com");
		
	}
}

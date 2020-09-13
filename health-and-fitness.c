#include<stdio.h>
 /*   			 ____         ____ 
		        /   /\       /   /\
		       /   / /	    /	/ /
		      /   / /______/   / /
		     /   / _______    / /
		    /   / /------/   / /
		   /   / /      /   / /
		  /___/ /      /___/ /
	   	  \___\/       \___\/
    This tool is subjected to copyright. Please take care of that dear user.
    */
exe()
{
	printf("----------------------------Redy-Made-Exercise Section--------------------------\n");
	int a;
	printf("NOTE: Make shedule of cardio, any 3 days in a week\n");
	printf("Press 1 if you are a beginner Else press 2\n");
	scanf("%d",&a);
	if(a==1)
	{
		printf("Here is your Exercises:\n");
		printf("In first two weeks try to do all exercises with less weight and after a 20 to 30 minutes of warm-up seccion\n");
		printf("After two weeks\n\n#Monday:chest Exercise(Three sets,each with 7kg/10kg/15kg)\n*Plane bench-press\t*Inclind bench-press\t*Decline bench-press\n\n#Tuesday:Back Exercise(Three sets,each with 7kg/10kg/15kg)\n*Front pull down\t*Back pull down\t*Single hand row\t*Seated rowing\n\n#Wednesday:Shoulders(Three sets,each with 7kg/10kg/15kg)\n*Front press rod\t*Doumble-press(Standng)\t*Side Latreys\t*Upright plain rod(Waste to chest)\t*Strugs(NOTE: Three sets of 8kgs)\n\n#Thrusday:Bysaps(Three sets,each with 7kg/10kg/15kg)\n*Plane rod\t*Doumbles\t*Cables\t*Doumble concentration\n\n#Friday:Trisaps(Three sets,each with 7kg/10kg/15kg)\n*Dimond Push-ups\t*Triceps Pull-Down\t*Scull-pressure\t*Doumble Double Hand Extreme\t*Reverse Pull-Down\n\n#Saturday:Legs(Three sets,each with 7kg/10kg/15kg)\n*Squats\t*Barble Squats\t*Leg-Press(Machine)\t*Latrays\n");
	}
	if(a==2)
	printf("After 2 weeks\n\n#Monday: Legs and Shoulders\n\n#Tuesday: Back and Biceps\n\n#Wednesday: Chest and Triceps\n\n#Thrusday: Taks rest\n\n#Friday: Legs and Shoulders\n\n#Saturday: Back and Biceps\n\n#Sunday:Chest and Triceps\n");
}
exe2()
{
		printf("----------------------------Customisable-Exercise Section--------------------------\n");
		printf("This is Paid Service you should contact to the Developer Instagram:@harshitbhatt69\n");
}
food(float a)
{
	printf("---------------------------------FOOD INFO------------------------------- :)\n");
	float x=a;
	int s;
	if(x<=18.5)
	printf("you are under case 1");
	else if(x>=18.6 && x<=24.9)
	printf("you are under case 2");
	else if(x>=25 && x<=29.9)
	printf("you are under case 3");
	else
	printf("you are under case 4");
	
	printf("\nShould we provide you a ready diet plan>>select 1 \nor \nyou want us to make a flexible one for you :)>>select 0\n");
	scanf("%d",&s);
	if(s==1)
	diet();
	else if(s==0)
	diet2();
	else
	printf("Error response\n");
}
diet()
{
	printf("-------------------------Diet Section-------------------------\n");
	int a;
	printf("**********This is a Ready-Mate-Diet**********\n");
	printf("Select 1 for Fat Loss\nselect 2 for Mss Gain");
	scanf("%d",&a);
	if(a==1)
	printf("Day 1 involves having only fruits, with the exception of bananas. Finnigan recommends sticking to only watermelons; it promotes faster and steadier weight loss because the calorie intake is very low.\nDay 2 involves having only vegetables, cooked or raw. There is no limit to the vegetables you can have, but try to stick to high-fiber food items.\nDay 3 allows you to have a mixture of fruits and vegetables, with the exclusion of bananas and potatoes.\nDay 4 involves eating up to eight bananas and three glasses of milk. You are allowed to have a vegetable soup if you like.\nDay 5 allows you to have sprouts, tomatoes, and other vegetables, though you need to increase your intake of water in order to detoxify the internal system of the body.\nDay 6 also includes an abundance of sprouts, vegetables and water.\nDay 7 ends with having fruit juices, vegetables, and brown rice. Ideally on day 7, The vegetables should be taken in a salad form.\n");
	else if(a==2)
	{
	printf("1. Homemade Protein Smoothies\n*Chocolate banana nut shake: Combine 1 banana, 1 scoop of chocolate whey protein and 1 tablespoon (15 ml) of peanut or another nut butter.\n**Vanilla berry shake: Combine 1 cup (237 ml) of fresh or frozen mixed berries, ice, 1 cup (237 ml) of high-protein natural yogurt and 1 scoop of vanilla whey protein.\n***Chocolate hazelnut shake: Combine 15 ounces (444 ml) of chocolate milk with 1 scoop of chocolate whey protein, 1 tablespoon (15 ml) of hazelnut butter and 1 avocado.");
	printf("2. Drinking milk is a great way to add protein to your diet. It contains both casein and whey proteins.\n3. Rice is a convenient, low-cost carb source to help you gain weight. Just 1 cup (165 grams) of cooked rice provides 190 calories, 43 grams of carbs and very little fat.\n4. Nuts and nut butters are a perfect choice if you're looking to gain weight. Just one small handful of almonds contains over 7 grams of protein and 18 grams of healthy fats.\n5. Red meats are probably one of the best muscle-building foods available. For example, steak contains around 3 grams of leucine per 6 ounces (170 grams). Leucine is the key amino acid your body needs to stimulate muscle protein synthesis and add new muscle tissue\n6. Healthy starches are a great way to get important nutrients and fiber, boost your calorie intake and increase your muscle glycogen stores.\n7. Like red meat, salmon and oily fish are excellent sources of protein and important healthy fats. Out of all the nutrients that salmon and oily fish provide, omega-3 fatty acids are among the most significant and well known.\n8. Protein supplements are a simple and affordable addition to your diet to help you increase your protein intake.\n9. Dried fruit is packed with calories, healthy fiber and antioxidants. It's an easy way to add nutrients and calories to your diet.\n10. Whole-grain breads can be effective to gain weight, especially when combined with a good protein source.\n");
	}
	printf("\n\nFor more info contact to the Developer Instagram:harshitbhatt69");
}
diet2()
{
	printf("-------------------------Diet Section-------------------------\n");
	printf("**********Flexiable Diet**********");
	printf("This is Paid Service you should contact to the Developer Instagram:@harshitbhatt69\n");
}
med()
{
	printf("This is Medicine Section\nFollow the link to know more: https://www.medicalnewstoday.com/articles/320774.php#1");
	
}
float cal(float w,float h)
{
	float k,j;
	j=h*h;
	k=w/j;
	return k;
}
comment(float x)
{
	if(x<=18.5)
		printf("You are Underweight !!");
	else if(x>=18.6 && x<=24.9)
		printf("You are Healthy !!");
	else if(x>=25.0 && x<=29.9)
		printf("You are a Bit Overweight !!");
	else if(x>=30)
		printf("You are Obese, Plese do some training !!");	
}
int main()						// main program //
{
	{
	float w,h,x;
	char c;
	printf("Enter your weight\n");
	scanf("%f",&w);
	printf("Enter your height in Meters\n");
	scanf("%f",&h);
	x=cal(w,h);
	printf("Your BMI is %f\n",x);
	comment(x);
	}
	{
		int a;
	float b;
	printf("Thanks for selecting this\nNOTE: This is to inform you about your daily food habits..!\n");
	printf("If you want to lookup some Medical Advice then press 1 For Diet Related issue press 2\n");
	scanf("%d",&a);
	if(a==1)
	med();
	else if(a==2)
	printf("Input your BMI\n");
	scanf("%f",&b);
	food(b);
	}
	{
		float x;
	printf("-------------You are undre Exercise Section--------------\n");
	printf("Enter your BMI\n");
	scanf("%f",&x);
	if(x<=18.5)
		printf("Case 1: Eat good food and do weight tranning !!");
	else if(x>=18.6 && x<=24.9)
		printf("Case 2: You are Healthy !!");
	else if(x>=25.0 && x<=29.9)
		printf("Case 3: You have still time !!");
	else if(x>=30)
		printf("Case 4: Extreme Situation, just follow the commands !!");
	int a;	
	printf("\nSelect:\n1.For Redy-Made-Exercise\n2.For Customised Exercise\n");
	scanf("%d",&a);
	if(a==1)
	exe();
	else if(a==2)
	exe2();	
	}
}



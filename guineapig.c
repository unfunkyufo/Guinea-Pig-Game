#include <stdio.h>

int main() {

	char cmd1;
	char cmd2;

	printf("You wake up surrounded by soft blankets and the smell of grass.\nGood morning! You are a guinea pig.\n A – Stretch\n B – Sniff	\n C – Run\n D – Scream\n What do you do? \n");
	scanf("\n%c", &cmd1);

		switch (cmd1) {
			case 'A':
				printf("You stretch your front paws as far forward as they will go, which is just past your nose.\n You yawn.\n 						\nYou are hungry. \n A – Stretch \n B – Sniff \n C – Run \n D – Scream\n What do you do? ");
				scanf("\n%c", &cmd2);
				break;
				
			case 'B':
				printf("You tilt your head back and sniff the air. You don’t smell any vegetables. You are hungry.\n A – Stretch \n B – Sniff \n C – Run \n D – Scream\n What do you do? ");
				scanf("\n%c", &cmd2);
				break;
			case 'C':
				printf("Overcome by a strange compulsion, you take off.\n Sprinting as fast as you can, banking around the corners, you gain speed, when suddenly, CRASH!\n You slam into another guinea pig. A – Threaten \n B – Speak \n C – Turn around \n D – Sniff \n");
				scanf("\n%c", &cmd2);
				break;
			case 'D':
				printf("You plant your front paws firmly should-width apart to ground yourself and inhale. You let out an ear-piercing scream that echoes off the walls.\n WHEEEEEEEEEEEEEEEEEEEEEEEEEEEEEK! \n You continue to scream until you are forced to rest and recuperate. \n However, the magic ritual seems to have succeeded. \n You hear the familiar sound of a vegetable approaching. \n A – Run \n B – Speak \n C – Sniff \n D - Scream \n");
				scanf("\n%c", &cmd2);
				break;
			default:
				printf("You feel confused. A – Stretch \n B – Sniff \n C – Run \n D – Scream\n What do you do? ");
				scanf("\n%c", &cmd2);
		}
	return 0;
}

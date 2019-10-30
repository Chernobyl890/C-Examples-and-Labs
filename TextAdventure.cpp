#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	string characterName = "" ;  // Holds Character Name
	int choiceA;
	int choiceB;
	int choiceC;
	int choiceD;
	int choiceE;
	int choiceF;
	int choiceG;
	int choiceH;
	int choiceI;
	int choiceJ;
	int outcomeA;
	
cout<< "Cross the Chasm"<<endl; //flush forces the printing to the screen before it pauses
cout<<"\nMade by: Shane Irons, Jordan Mason, Caleb Hunt, Vanna Davis, and Briana Frometa\n"<<endl;
system ("PAUSE");  // system pause used to halt text progress and force user to hit a button to continue
system ("CLS");  // system CLS clears the screen 
cout<<"This is a short text adventure fantasy game developed in 2018 for COM207 Programming in C/C++\n"<<endl;
system ("PAUSE");
system ("CLS");
cout<<"Please enter your desired character name: ";
getline(cin, characterName);
system ("PAUSE");
system ("CLS");
cout<<"Make haste, "<<characterName<<", to the arcane sanctums across the western pass!"<<endl;
system ("PAUSE");
system ("CLS");
cout<<"As the last living wizard of a ruined empire, "<<characterName<<" must journey to the sorcerer kings of the west.\n"<<endl;
cout<<"Without safe passage, the magical secrets of the eastern empire die with "<<characterName<<".\n"<<endl;
system ("PAUSE");
cout<<"\nFar behind, rows of lights dot the hills as a torch-bearing army pursues a fleeing wizard.\n"<<endl;
cout<<characterName<<" stands before an ancient chasm, torn between a narrow stone bridge and a rocky -- but manageable -- descent.\n"<<endl;
cout<<"Legends of this pass tell of two magical creatures, one that lurks in the darkness below, and one that haunts the skies above.\n"<<endl;
cout<<"Many adventurers have fallen prey to the Nguruvilu of the chasm -- a fox-headed serpent of ancient legend."<<endl;
cout<<"This beast, however, lives in fear of the Mongoose Wyvern that patrols the skies overhead.\n"<<endl;

cout<<"1.Take the higher path, bringing "<<characterName<<" closer to the top of the chasm.\n\n2.Take the lower path, and descend into darkness.\n"<<endl;
	cin >> choiceA;
system ("CLS");
		switch (choiceA) {
			case 1:												// Go High 1st Time for Choice A
				cout<<characterName<<" decides to take the higher path.\n"<<endl;
				system ("PAUSE");
				cout<<"\nOn either side of the lone wizard, the chasm below fades into sheer darkness.\n"<<endl; 
				cout<<"The path beyond is empty and dimly lit by the first stars of the night.\n"<<endl; 
				cout<<"For a while, the howling wind through "<<characterName<<"'s robes remains the only sound to be heard... '"<<endl;
				system ("PAUSE");
				system ("CLS");
				cout<<"As you cross the chasm, the silence is eventually broken by a throaty shriek carried on the wind."<<endl;
				system ("PAUSE");
											
				cout<<"\n1. Despite the unusual cry, "<<characterName<<" decides to continue along the higher path."<<endl;
				cout<<"\n2. "<<characterName<<" decides to chance the darkness of the chasm, and descends to a lower section.\n"<<endl;
				cin >> choiceB;																	// Choice B to go high or low after hearing dragon
					switch (choiceB) { 
					
					case 1: 
					cout<<"\nA second shriek pierces the night as a creature comes into view, with large leathery wings and the grinning visage of a mongoose.\n"<<endl;
					cout<<"The beast descends upon the wizard, claws raised and fangs bared."<<endl;
					cout<<"\n1. Use magic to attack! \n2. Use magic to defend! \n3. Use magic to escape!\n"<<endl; 
						cin >> choiceC;														// Choice C to attack, defend, or run from dragon... Running is death
						switch (choiceC) {	
							case 1: 
							cout<<"\nAs the dragon bears down on "<<characterName<<", the wizard begins an incantation.\n"<<endl; 
							cout<<"Ancient, magical words ring out in the darkness, and an orb of electricity forms in "<<characterName<<"'s grasp"<<endl; 
							cout<<"before splitting the air as an arc of lightning.\n"<<endl;
							cout<<"Struck by the fury of a storm, the beast spirals down into the chasm with a great cry of agony."<<endl;
							system ("PAUSE");
							system ("CLS");
							cout<<"Although the creature is gone, the sound of falling stones makes "<<characterName<<" suspect that it may be climbing back up."<<endl;
							system ("PAUSE");
							cout<<"\n1. "<<characterName<<" decides to continue on the higher path, taking a steep rise into the next cavern.\n"<<endl;
							cout<<"\n2. "<<characterName<<" decides not to chance another encounter with the wyvern, and enacts a levitation spell to take a lower route.\n"<<endl;
							cin >> choiceD;					// Choice D after attacking dragon to go high or low again
								
							switch (choiceD){
							
								case 1:
									cout<<"\nThe journey becomes a steady slog upward, shrouded almost entirely in darkness"<<endl;
									cout<<"as the stars fade behind the cavern entrance.\n"<<endl;
									cout<<"A thunderous crash precedes the reappearance of the wounded wyvern,"<<endl;
									cout<<"clambering up the rocky cliffside to leap out at the wizard.\n"<<endl;
									system ("PAUSE");
									system ("CLS");
									cout<<"Still shaken from the lightning bolt, the beast comes skidding over stones with its fangs bared.\n"<<endl;
									cout<<"\n1. Use magic to attack!\n2. Use magic to defend!\n3. Use magic to escape!\n"<<endl;
										cin >> choiceE; 			// Choice E after 1 successful attack and dragon comes back
										switch (choiceE) {
										
										case 1: 
											cout<<"\n"<<characterName<<" begins another incantation as the creature appears,"<<endl; 
											cout<<"making the cavern shake by ripping stones from the earth."<<endl;         // GAME OVER!
											cout<<"\nThe wyvern, however, surprises "<<characterName<<" with its incredible speed, and bears down on"<<endl;
											cout<<"the wizard before the spell is completed."<<endl;
											cout<<"\nThe beast catches "<<characterName<<" in jagged talons, pressing the wizard to"<<endl; 
											cout<<"a rocky wall. A jet of flames pours from the wyvern's maw, and then all goes dark."<<endl;
											system ("PAUSE");
											system ("CLS");
											cout<<"GAME OVER!"<<endl;
											
											break;
										case 2:  				//Knocks you down leading to only 1 way to survive
											cout<<"\n"<<characterName<<" begins another incantation as the creature appears, enacting an arcane barrier"<<endl;
											cout<<"that envelops the wizard in a shield of wavering purple energy."<<endl; 
											cout<<"\nCompleting the barrier just in time, "<<characterName<<" watches the beast crash into the arcane wall."<<endl;
											cout<<"\nAlthough the shield protects "<<characterName<<" from gnashing teeth and sharp claws, the impact"<<endl;
											cout<<"sends the wizard off into the chasm, falling for several seconds."<<endl;
											cout<<"\nThe barrier shatters as "<<characterName<<" lands, but the fall was not a fatal one."<<endl;
											cout<<characterName<<" arises in total darkness,"     // THIS IS WHERE YOU LEFT OFF, DUMB IDIOT JORDAN! MAKE SURE YOU PICK BACK UP HERE, DUMB IDIOT JORDAN!
											cout<<"\n1. Stay still\n2. Defend\n3. Run"<<endl;
												cin >> choiceF;                    //  Choice F after Nguruvilu ambushed you, only good choice is to run
												switch (choiceF) {
													case 1:  // Death
														cout<<characterName<<" stands still, hoping the monster took notice to something else (or something like that)"<<endl;
														cout<<"\nWhile standing still, the Nguruvilu eats "<<characterName<<" whole."<<endl;
														system ("PAUSE");
														system ("CLS");
														cout<<"GAME OVER!"<<endl;
														break;
													
													case 2: // Death
														cout<<characterName<<" decided to defend!"<<endl;
														cout<<"Write how you did not have enough time to defend and the Nguruvilu kills you"<<endl;
														system ("PAUSE");
														system ("CLS");
														cout<<"GAME OVER!"<<endl;
														break;
													
													case 3: 
														cout<<characterName<<" decided to run!"<<endl;
														cout<<"write about how this is a good choice and you successfully escape the ambush."<<endl;
														cout<<"write about how it is chasing your ass and you see a way back up but also a lower path that continues further"<<endl;
														cout<<"1. High\n2. Low"<<endl;
															cin >> choiceG;
															switch (choiceG) {
																case 1: 
																	cout<<characterName<<" decides to go high!"<<endl;
																	cout<<"write about how you hear the dragon above, but continue anyway with the Nguruvilu continues to give chase"<<endl;
																	system ("PAUSE");
																	cout<<""<<endl;
																	
																	break;
																
																case 2:  // Going low while monster is chasing leads to death
																	cout<<characterName<<" decides to go low!"<<endl;
																	cout<<"Write about how the Nguruvilu is faster than "<<characterName<<" and eats you, leading to death"<<endl;
																	system ("PAUSE");
																	cout<<"GAME OVER"<<endl;
																	
																	break;
															
														}
														
														
														break;
												}
																						
											break;
											
										case 3:				// Lure the 2 creatures to fight each other
											cout<<characterName<<" decided to run!"<<endl;
											cout<<"Write about how you teleport or something into a low area quietly and swiftly, not alerting Nguruvilu"<<endl;
											
											break;
										}
											
									
									
									break;
									
								case 2:
									cout<<characterName<<" decides to go low!"<<endl;
									
									
									break;
								}
							
							break;
							
							case 2: // suffer a wound, this is for Choice A and 1st dragon encounter
								cout<<characterName<<" decides to defend!"<<endl;
								
								break;
								
								
							
							case 3: // this is for Choice A and leads to death
							cout<<characterName<<" decides to run!"<<endl;
							cout<<"The dragon is faster than it originally appeared. You are engulfed in flames and swallowed whole."<<endl;
							system ("PAUSE");
							system ("CLS");
							cout<<"GAME OVER!"<<endl;
							
							
							
							
							
						}
					
					
					
					break;
					case 2:
					cout<<"You chose the low path!"<<endl;
					system ("PAUSE");
					system ("CLS");
					
				}
				break;
				
			case 2:																	// Go Low 1st Time for Choice A
				cout<<"You decide to descend"<<endl;
				system ("PAUSE");
				cout<<"Write about how this kills you in some funny way"<<endl;
				cout<<"GAME OVER!"<<endl;
				
				
					
				break;
			
}
return 0; }

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
	
cout<< "Text Adventure Game"<<endl; //flush forces the printing to the screen before it pauses
cout<<"\nMade by: Shane Irons, Jordan Mason, Caleb Hunt, Vanna Davis, Briana Frometa\n"<<endl;
system ("PAUSE");  // system pause used to halt text progress and force user to hit a button to continue
system ("CLS");  // system CLS clears the screen 
cout<<"This is a short text adventure fantasy game developed in 2018 for COM207 Programming in C/C++\n"<<endl;
system ("PAUSE");
system ("CLS");
cout<<"Please enter your desired character name: ";
getline(cin, characterName);
system ("PAUSE");
system ("CLS");
cout<<"Nice to meet you, "<<characterName<<"!"<<endl;
system ("PAUSE");
system ("CLS");
cout<<"You're a wizard from the Adderall empire on a quest to...\n"<<endl;
system ("PAUSE");
cout<<"\nStory stuff explaining casm going high and low"<<endl;
cout<<"1. High\n2. Low\n"<<endl;
	cin >> choiceA;
system ("CLS");
		switch (choiceA) {
			case 1:												// Go High 1st Time for Choice A
				cout<<"You decide to ascend!"<<endl;
				system ("PAUSE");
				cout<<"Story stuff..."<<endl;
				system ("PAUSE");
				cout<<"Noise is heard B"<<endl;
				system ("PAUSE");
				system ("CLS");
				cout<<"                             ______________  "<<endl;                             
cout<<"                       ,===:'.,            `-._   "<<endl;                        
cout<<"                             `:.`---.__         `-._   "<<endl;                    
cout<<"                               `:.     `--.         `.   "<<endl;                  
cout<<"                                 \.        `.         `.   "<<endl;                
cout<<"                         (,,(,    \.         `.   ____,-`.,   "<<endl;             
cout<<"                      (,'     `/   \.   ,--.___`.'            "<<endl;             
cout<<"                  ,  ,'  ,--.  `,   \.;'         `             "<<endl;            
cout<<"                   `{D, {    \  :    \;                        "<<endl;            
cout<<"                     V,,'    /  /    //                       "<<endl;             
cout<<"                     j;;    /  ,' ,-//.     ,---.      ,       "<<endl;             
cout<<"                     \;'   /  ,' /  _   \  /  _  \   ,'/        "<<endl;            
cout<<"                           \    `'  / \  `'  / \  `.' /         "<<endl;            
cout<<"                            `.___,'   `.__,'   `.__,'         " <<endl;
cout<<"\n"<<endl;
				
				system ("PAUSE");	
				cout<<"Do you continue on the high path or duck into a crevice\n1. High path\n2. Low path"<<endl;
				cin >> choiceB;																	// Choice B to go high or low after hearing dragon
					switch (choiceB) { 
					
					case 1: 
					cout<<"You chose the high path!"<<endl;
					system ("PAUSE");
					system ("CLS");
					cout<<"You see the monster right away write this part Jordan"<<endl;
					cout<<characterName<<" decides to\n1. Fight\n2. Defend\n3. Run"<<endl; 
						cin >> choiceC;														// Choice C to attack, defend, or run from dragon... Running is death
						switch (choiceC) {	
							case 1: 
							cout<<characterName<<" decides to fight!"<<endl;
							cout<<"Write a spell here and the creature fucks off"<<endl;
							system ("PAUSE");
							cout<<"The dragon has left but can return JORDAN WRITE THIS"<<endl;
							system ("PAUSE");
							cout<<"Some way to choose high or low again (Story Stuff Buddy)\n1. High\n2. Low"<<endl;
							cin >> choiceD;					// Choice D after attacking dragon to go high or low again
								
							switch (choiceD){
							
								case 1:
									cout<<characterName<<" decides to go high!"<<endl;
									cout<<characterName<<" notices the dragon coming back"<<endl;
									cout<<"Dragon came back on some ambush type of shit\n1. Fight\n2. Defend\n3. Run"<<endl;
										cin >> choiceE; 			// Choice E after 1 successful attack and dragon comes back
										switch (choiceE) {
										
										case 1: 
											cout<<characterName<<" decided to fight!"<<endl;         // GAME OVER!
											cout<<"Write how you try to attack and fail and this leads to death, also write the death"<<endl;
											system ("PAUSE");
											system ("CLS");
											cout<<"GAME OVER!"<<endl;
											
											break;
										case 2:  				//Knocks you down leading to only 1 way to survive
											cout<<characterName<<" decided to defend!"<<endl;
											cout<<"Write about magic barrier and dragon knocks you down and knocks you down into the lower area, monster in low area takes notice!"<<endl; 
											cout<<"Write some type of story here about nguruvilu seeing you and ambushing you in the dark"<<endl;
											cout<<"Because it ambushed you, you cannot attack\n1. Stay still\n2. Defend\n3. Run"<<endl;
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

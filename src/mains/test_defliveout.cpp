#include <iostream>
#include <string>
#include <Program.h>
#include <Basic_block.h>
#include <Function.h>


int main(int argc, char * argv[]){

  if (argc < 2) {
    cout << "erreur : pas de fichier assembleur" << endl;
  }	  	
  
  // r�cup�re le nom du fichier dans le chemin entr�e et sans extension
  std::string argv1(argv[1]);	
  
  size_t debut = argv1.find_last_of("/");
  if (debut == std::string::npos)
    debut = -1;
  
  size_t fin = argv1.find_last_of(".");
  if (fin == std::string::npos)
    fin = argv1.size();
  string name = argv1.substr(debut + 1, fin - (debut + 1));
  
  Program prog(argv[1]);
  cout<<"Le programme a "<<prog.size()<<" lignes\n"<<endl;
  
  // delimitation et construction des fonctions du fichier
  prog.compute_function();
  cout<<"nombre de fonctions : "<<prog.nbr_func()<<endl;
  
  //traitement pour toutes les fonction 
  for(int i=0; i<  prog.nbr_func(); i++){
    
  
    Function* functmp= prog.get_function(i);
    
    cout<<"========== Function "<<i<< ": "<< functmp ->get_name() <<"==========="<<endl;
    

  // delimitation des BB de la fonction
    functmp->compute_basic_block();
    
    // determination des liens entre les BB
    functmp->compute_succ_pred_BB();
    
     // calcul des registres vivants en entr�e et sortie des BB
    functmp ->compute_live_var();
  
    // montre les registres vivants en entr�e et sortie des BB
    functmp ->show_live_var();
   
    // production d'un fichier .dot pour le CFG de la fonction 
    string name_f_cfg = "./tmp/" + name + "_cfg_func_" + functmp->get_name() +".dot";
    Cfg *c = new Cfg(functmp->get_BB(0), functmp->nbr_BB());
    c->restitution(nullptr, name_f_cfg);
    
    
    
    // iteration sur tous les BB du CFG
    for(int j = 0;  j< functmp->nbr_BB(); j++){
      
      Basic_block * bb = functmp -> get_BB(j);
      cout<<"---------- BB "<<j<<" -----------"<<endl;
      
      //affichage du BB
      bb->display();
      // cr�ation des liens entre les instructions du BB 
      bb->link_instructions();
      
      //calcul des liens de d�pendances entre les instructions du BB
      bb->compute_pred_succ_dep();
      
      bb->compute_def_liveout();
      bb->show_def_liveout();
      
    }
  }
	return 0;
}
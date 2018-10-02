#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "muldiv.hpp"

struct muldiv_entry ** generate_tables(int n)
{
  // Allocate memory for struct of tables
  struct muldiv_entry ** m;

  m = new struct muldiv_entry *[n];
  
	// generate multiplication table
	for(int i=0; i<n; i++){
	m[i]= new struct muldiv_entry [n];
		for(int j=0; j<n; j++){
    		m[i][j].mult = double(i+1)*(j+1);
  	}
	}

  // generate division table
  for(int i=0; i<n; i++){
	for(int j=0; j<n; j++){
    	  m[i][j].div = (float(i+1.00)/(j+1.00));
	 }
   	}    
return m;
}

void print_tables(struct muldiv_entry** tables, int n)
{
	std::cout << "__________Multiplication Table__________ \n" << std::endl;
    // Print Multiplication Table
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
         std::cout << tables[i][j].mult << "\t";
    }	
      std::cout<< std::endl;
    }

      std::cout <<"\n\n\n" <<std::endl;

   // Print Division Table
	std::cout << "_______________________________Division Table________________________________ \n" <<std::endl;
	for(int i=0; i<n; i++){
      	  for(int j=0; j<n; j++){
      	    std::cout << float(tables[i][j].div) << "\t \t";
      	}	
	   std::cout << std::endl;
	}
}

void free_tables(struct muldiv_entry** tables, int n)
{
    for(int i=0; i<n; i++)
        delete [] tables[i];

    delete [] tables;

}

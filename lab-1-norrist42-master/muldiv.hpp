#ifndef muldiv.hpp
#define muldiv.hpp

struct muldiv_entry
{
      double mult;
      float div;
};


struct muldiv_entry ** generate_tables(int n);

void print_tables(struct muldiv_entry** tables, int n);

void free_tables(struct muldiv_entry** tables, int n);

#endif

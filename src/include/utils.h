extern void print_error(char* msg);
extern token_t t_init_token(char* value, tag_t tag, tag_t tag2);
extern char* stracpy(char* source, char* dest);
extern bool is_operator(char ch);
extern bool is_identifier(char ch);
extern void dstr_init(dstr_t* dstr); 
extern void dstr_free(dstr_t* dstr); 
extern void dstr_erase(dstr_t* dstr); 
extern void dstr_append(dstr_t* dest, char* str);

typedef struct term{
    char term[200]; // assume terms are not longer than 200
    double weight;
    } term;

void read_in_terms(term **terms, int *pnterms, char *filename);




int lowest_match(term *terms, int nterms, char *substr);




int highest_match(term *terms, int nterms, char *substr);



void autocomplete(term **answer, int *n_answer, term *terms, int nterms, char *substr);




int main(){
    return 0;
}
#ifndef CREDIT_H
#define CREDIT_H

long long get_long(const char *mensagem);
int luhn_check(long long cardNumber);
void identify_card_type(long long cardNumber);
void card_credit_verification();

#endif

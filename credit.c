#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>
#include "credit.h"

long long get_long(const char *mensagem) {
    char buffer[20];
    long long numero;

    while (1) {
        printf("%s", mensagem);
        fgets(buffer, sizeof(buffer), stdin);
        char *endptr;

        // Limpar errno antes da conversão
        errno = 0;
        numero = strtoll(buffer, &endptr, 10); // Usar strtoll para long long

        // Verifica se a conversão foi válida
        if (endptr == buffer || *endptr != '\n') {
            printf("Tipo incorreto! Voce deve digitar um numero inteiro.\n");
        } else if ((errno == ERANGE && (numero == LLONG_MAX || numero == LLONG_MIN)) || numero < 0) {
            printf("Voce ultrapassou o limite do tipo long long.\n");
        } else {
            return numero; // Retorna o número válido
        }
    }
}

int luhn_check(long long cardNumber) {
    int sum = 0;
    int alternate = 0;

    // Processar os dígitos do cartão de crédito da direita para a esquerda
    while (cardNumber > 0) {
        int digit = cardNumber % 10; // Obtém o último dígito
        cardNumber /= 10; // Remove o último dígito

        // Multiplica os dígitos alternados por 2
        if (alternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9; // Adiciona os dígitos do produto
            }
        }
        sum += digit; // Soma o dígito (ou o produto)
        alternate = !alternate; // Alterna entre multiplicar e não multiplicar
    }

    // Se o total é divisível por 10, o número é válido
    return sum % 10 == 0;
}

void identify_card_type(long long cardNumber) {
    int digitCount = 0;
    long long tempNumber = cardNumber;

    // Conta o número de dígitos
    while (tempNumber > 0) {
        tempNumber /= 10;
        digitCount++;
    }

    // Verifica o tipo de cartão
    if (digitCount == 15 && (cardNumber >= 340000000000000 && cardNumber < 350000000000000 ||
        cardNumber >= 370000000000000 && cardNumber < 380000000000000)) {
        printf("Tipo do cartao: American Express\n");
    } else if (digitCount == 16 && (cardNumber >= 5100000000000000 && cardNumber < 5600000000000000)) {
        printf("Tipo do cartao: Mastercard\n");
    } else if ((digitCount >= 13 && digitCount <= 16) && (cardNumber / 1000000000000 >= 4)) {
        printf("Tipo do cartao: Visa\n");
    } else {
        printf("Tipo de cartao desconhecido.\n");
    }
}

void card_credit_verification() {
    long long cardNumber;
    
    do {
        cardNumber = get_long("Number CC: ");
        
        if (luhn_check(cardNumber)) {
            printf("Numero do cartao de credito e valido!\n");
            identify_card_type(cardNumber); // Identifica o tipo do cartão
        } else {
            printf("Numero do cartao de credito e invalido.\n");
        }
        
        // Perguntar se deseja continuar
        char continuar;
        printf("Deseja verificar outro numero? (s/n): ");
        scanf(" %c", &continuar);
        while (getchar() != '\n'); // Limpar o buffer do stdin

        if (continuar != 's' && continuar != 'S') {
            break; // Sai do loop se não for 's' ou 'S'
        }

    } while (1);
}

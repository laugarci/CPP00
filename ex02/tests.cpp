// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"


/*int		main( void )
{

	typedef std::vector<Account::t>							  accounts_t;
	typedef std::vector<int>								  ints_t;
	//std::pair es una estructura de datos que contiene dos elementos, uno llamado "first" (primero) y otro llamado "second" (segundo).
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };

	//calculo del tamano de amounts, almacenado en amounts_size
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );

	//creacion de un vector utilizando los valores del array amounts
	accounts_t				accounts( amounts, amounts + amounts_size );

	//iteradores que apuntan al inicio y al final del vector accounts
	accounts_t::iterator	acc_begin	= accounts.begin();
	accounts_t::iterator	acc_end		= accounts.end();

	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 };
	size_t const		d_size( sizeof(d) / sizeof(int) );
	ints_t				deposits( d, d + d_size );
	ints_t::iterator	dep_begin	= deposits.begin();
	ints_t::iterator	dep_end		= deposits.end();

	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };
	size_t const		w_size( sizeof(w) / sizeof(int) );
	ints_t				withdrawals( w, w + w_size );
	ints_t::iterator	wit_begin	= withdrawals.begin();
	ints_t::iterator	wit_end		= withdrawals.end();

	//debe mostrar la informacion de las cuentas bancarias
	Account::displayAccountsInfos();
	//itera a traves de las cuentas del rango definido por acc_begin y acc_end y se llama a la funcion Account::displayStatus en cada cuenta, que muestra el estado de la cuenta
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	//bucles que recorren simultaneamente los vectores account y deposits, asi com accounts y withdrawals. En ambos se llama a las funciones de la clase Account para realizar depositos y retiros en las cuentas utilizando los valores de deposits y withdrawals respectivamente
	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeDeposit( *(it.second) );
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeWithdrawal( *(it.second) );
	}
	
	//se vuelve a llamar a las funciones para mostrar la informacion actualizada sobre las cuentas
	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	return 0;
}*/


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //

//Mismo codigo con bucles while y mas ordenado:

#include <iostream>

int main()
{
	typedef std::vector<Account::t> accounts_t;
	typedef std::vector<int> ints_t;
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;
	
	int const amounts[] = {42, 54, 957, 432, 1234, 0, 754, 16576};
	size_t const amounts_size( sizeof(amounts) / sizeof(int) );

	//inicializacion de rango:  se utiliza para copiar un rango de elementos, en este caso, desde el array amounts, en el vector accounts. está utilizando los valores del array amounts para inicializar el vector accounts directamente. Esto se hace para copiar todos los elementos del array amounts en el vector accounts. La variable amounts es tratada como un rango de valores que se copian en el vector accounts.
	accounts_t accounts( amounts, amounts + amounts_size );
	accounts_t::iterator acc_begin = accounts.begin();
	accounts_t::iterator acc_end = accounts.end();

   int const d[] = {5, 765, 564, 2, 87, 23, 9, 20};
    size_t const d_size( sizeof(d) / sizeof(int) );
    ints_t deposits( d, d + d_size );
    ints_t::iterator dep_begin = deposits.begin();
    ints_t::iterator dep_end = deposits.end();

    int const w[] = {321, 34, 657, 4, 76, 275, 657, 7654};
    size_t const w_size( sizeof(w) / sizeof(int) );
    ints_t withdrawals( w, w + w_size );
    ints_t::iterator wit_begin = withdrawals.begin();
    ints_t::iterator wit_end = withdrawals.end();

    Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

    acc_int_t it_dep(acc_begin, dep_begin);
    while (it_dep.first != acc_end && it_dep.second != dep_end) {
        (*(it_dep.first)).makeDeposit( *(it_dep.second) );
        ++(it_dep.first);
        ++(it_dep.second);
    }

    Account::displayAccountsInfos();
//	std::for_each es un algoritmo  que se utiliza para aplicar una función (o función objeto) a cada elemento en un rango especificado.
//	td::mem_fun_ref: Es una función o adaptador que se utiliza para crear objetos función que envuelven un método de una clase. En este caso, mem_fun_ref se utiliza para envolver el método displayStatus de la clase Account en un objeto función. Un objeto función es un objeto que se comporta como una función
//	En resumen, esta línea de código aplica el método displayStatus de la clase Account a cada elemento dentro del rango definido por acc_begin y acc_end.
    std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

    acc_int_t it_wit(acc_begin, wit_begin);
    while (it_wit.first != acc_end && it_wit.second != wit_end) {
        (*(it_wit.first)).makeWithdrawal( *(it_wit.second) );
        ++(it_wit.first);
        ++(it_wit.second);
    }

    Account::displayAccountsInfos();
    std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

    return 0;
}


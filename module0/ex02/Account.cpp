#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    _nbDeposits = 0 ;
    _nbWithdrawals = 0;
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}


void Account::_displayTimestamp(void) {
    struct tm *loc_time;
    time_t cur_time;

    cur_time = time(NULL);
    loc_time = std::localtime(&cur_time);
    std::cout << std::put_time(loc_time, "[%G%m%d_%H%M%S]");
}

int Account::getTotalAmount(void) {
    return _totalAmount;
}

int Account::getNbAccounts(void) {
    return _nbAccounts;
}

int Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount
    << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << " accounts:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit ;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;

}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount;
    if (withdrawal > _amount){
        std::cout << ";withdrawal:refused" << std::endl;
        return false;
    }
    std::cout << ";withdrawal:" << withdrawal;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

int Account::checkAmount(void) const {
    return _amount;
}

Account::~Account(void) {
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

Account::Account(void) : _accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0) {}

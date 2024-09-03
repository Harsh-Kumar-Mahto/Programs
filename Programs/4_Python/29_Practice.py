# Create Account class with balance and account no.
# Create methods for debit, credit & printing the balance
class Account:
    def __init__(self,account_no,balance):
        self.account_no=account_no
        self.__balance=balance   #This attribute is now private
    def debit(self,amount):
        self.__balance-=amount
        print(amount,"debitted from account no.",self.account_no,"\nBalance Remaining:",self.__balance)
    def credit(self,amount):
        self.__balance+=amount
        print(amount,"creditted to account no.",self.account_no,"\nBalance:",self.__balance)
    def ac_balance(self):
        print("Balance of account",self.account_no,":",self.__balance)

Account1=Account(1,1500)
Account1.credit(500)
Account1.debit(500)
# print(Account1.__balance)  This will throw error as we can't access private members outside class
Account1.ac_balance()
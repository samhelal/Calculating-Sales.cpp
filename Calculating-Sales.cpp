/*(Calculating Sales) An online retailer sells five products whose retail prices are
as follows: Product 1, $2.98; product 2, $4.50; product 3, $9.98; product 4, $4.49 and
product 5, $6.87. Write an application that reads a series of pairs of numbers as follows:
A. product number
B. quantity sold
(c++ how to program)*/
#include <iostream>
using namespace std ;

int main () {

    int    productNumber(0) , quantitySold(0) ;
    double Product1(2.98) , product2(4.50) , product3(9.98) ,
           product4(4.49) , product5(6.87) , total(0) ;
    
    cout << " Enter product Number : " ;
    cin >> productNumber ;

    while(productNumber !=-1 ){

        switch (productNumber )
        {
        case 1:
            cout << " Enter quantitySold " ;
            cin  >> quantitySold ;
                total = total + (Product1 * quantitySold ) ;
            break;
        case 2:
            cout << " Enter quantitySold " ;
            cin  >> quantitySold ;
                total = total + (product2 * quantitySold ) ;
            break;
        case 3:
            cout << " Enter quantitySold " ;
            cin  >> quantitySold ;
                total = total + (product3 * quantitySold ) ;
            break;
        case 4:
            cout << " Enter quantitySold " ;
            cin  >> quantitySold ;
                total = total + (product4 * quantitySold ) ;
            break;
        case 5:
            cout << " Enter quantitySold " ;
            cin  >> quantitySold ;
                total = total + (product5 * quantitySold ) ;
            break;
        
        default:
            cout << "\nWrong Number \n Please Enter product Number" 
                 << "(between 1 and 5) \n" ;
            break;
        }

        cout << " Enter product Number : " ;
        cin >> productNumber ;


    }
    cout << "Total = " << total << endl;
    
}
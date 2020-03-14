
#include <iostream>
#include "Drama.h"
#include "MovieBST.h"
#include "DramaBST.h"
#include "CustomerFactory.h"
#include "CustomerFactory.cpp"
#include "ComedyBST.h"
#include "ClassicBST.h"
#include "MovieFactory.h"
#include "Classic.h"
#include "TransactionFactory.h"

using namespace std;

int main() {
  
    CustomerDatabase cd;
    Customer John(001, "John", "Muir");
    cd.insert(&John);
    
    History history(001);
    history.executeTransactions(cd);

    MovieFactory mf;
    mf.readFile();
    ClassicBST pleaseWork = mf.getClassicBST();
    pleaseWork.printTree();

    Inventory inv;
    inv.executeTransactions(mf);
    
    
};



/*
   Classic aClassic;
  /* Drama aDrama;
   Movie mov;
   MovieBST movBST;
   Movie amovie;
   Movie bmovie;

   //aClassic.setReleaseDate("JULY2020");
   //aClassic.getReleaseDate();




   amovie.setDirector("Steven");
   cout << amovie.getDirector() << endl;

   amovie.setTitle("Atitle");
   cout << amovie.getTitle() << endl;;

   amovie.setQuantity(100);
   cout << amovie.getQuantity() << endl;

   amovie.setMovieType('D');
   cout << amovie.getMovieType() << endl;

   amovie.setYear(2006);
   cout << amovie.getYear() << endl;

   bmovie.setDirector("bmovieDirector");
   cout << bmovie.getDirector() << endl;

   bmovie.setTitle("Btitle");
   cout << bmovie.getTitle() << endl;;

   bmovie.setQuantity(199);
   cout << bmovie.getQuantity() << endl;

   bmovie.setMovieType('D');
   cout << bmovie.getMovieType() << endl;

   bmovie.setYear(2006);
   cout << bmovie.getYear() << endl;
   movBST.insert(amovie);
   movBST.insert(bmovie);

   cout << "Print tree" << endl;
   movBST.printTree(movBST.root);

   DramaBST dbst;

   Drama dmovie;
   dmovie.setDirector("Genny");
   cout << dmovie.getDirector() << endl;

   dmovie.setTitle("Dtitle");
   cout << dmovie.getTitle() << endl;;

   dmovie.setQuantity(64);
   cout << dmovie.getQuantity() << endl;

   dmovie.setMovieType('D');
   cout << dmovie.getMovieType() << endl;

   dmovie.setYear(2009);
   cout << dmovie.getYear() << endl;

   cout << "cout << dmovie" << endl;
   cout << dmovie << endl;

   dbst.insert(dmovie);
   cout << "printTree" << endl;
   dbst.printTree(dbst.root);


   ComedyBST cbst;

   Comedy cmovie;
   cmovie.setDirector("Biscuit");
   cout << cmovie.getDirector() << endl;

   cmovie.setTitle("Ctitle");
   cout << cmovie.getTitle() << endl;;

   cmovie.setQuantity(99);
   cout << cmovie.getQuantity() << endl;

   cmovie.setMovieType('F');
   cout << cmovie.getMovieType() << endl;

   cmovie.setYear(2011);
   cout << cmovie.getYear() << endl;

   cout << "cout << cmovie" << endl;
   cout << cmovie << endl;
   */
   // ClassicBST clbst;
    //ClassicBST cbdt;
    //cbst.insert(cmovie);
    //cout << "printTree" << endl;
    //cbst.printTree(cbst.root);

   /* Classic clmovie;
    clmovie.setDirector("Freckes");
    cout << clmovie.getDirector() << endl;

    clmovie.setTitle("ClassicTitle");
    cout << clmovie.getTitle() << endl;;

    clmovie.setQuantity(11);
    cout << clmovie.getQuantity() << endl;

    clmovie.setMovieType('C');
    cout << clmovie.getMovieType() << endl;

    clmovie.setReleaseMonth(3);
    cout << clmovie.getReleaseMonth() << endl;

    clmovie.setReleaseYear(2010);
    cout << clmovie.getReleaseYear() << endl;

    cout << "cout << clmovie" << endl;
    cout << clmovie << endl;

    clbst.insert(clmovie);
    cout << "printTree" << endl;
    clbst.printTree(clbst.root);

    MovieFactory mf;
    mf.readFile();
    ifstream input("testFile.txt");
    mf.storeMovie(input);*/


    /*
       cout << "movBST test" << endl;
       movBST.retrieve(amovie);
       dbst.retrieve(dmovie);

       clbst.insert(clmovie);
       clbst.retrieve(clmovie);

       cbst.insert(cmovie);
       cbst.retrieve(cmovie);

       movBST.retrieve(bmovie);
       */
       //CustomerFactory cf;
       //cf.readFile();
       //CustomerDatabase cd;
       //cd.print();
      // TransactionFactory tf;
      // tf.readFile();

       //MovieFactory mf;
     //mf.readFile();

       //CustomerFactory cf;
       //cf.readFile();

       /*cout << "cout clmovie" << endl;
       cout << clmovie << endl;
       cout << clmovie.releaseMonth << " " << clmovie.releaseYear << endl;
       */

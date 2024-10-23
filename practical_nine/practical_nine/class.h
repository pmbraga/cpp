//
//  class.h
//  practical_nine
//
//  Created by Pedro on 23/10/2024.
//

class Rational {
public:
    Rational (int, int);
    
    int num() {return numerator;}
    int denom() {return denominator;}
    int value() {return final_value;}
    
    // different operator overloads - integers
    
    Rational operator+ (int x)const;
    Rational operator* (int x)const;
    Rational operator/ (int x)const;
    Rational operator- (int x)const;
    
    Rational operator+= (int x)const;
    Rational operator*= (int x)const;
    Rational operator/= (int x)const;
    Rational operator-= (int x)const;
    
    // different operator overloads - other rationals
    
    Rational operator+ (Rational x)const;
    Rational operator* (Rational x)const;
    Rational operator/ (Rational x)const;
    Rational operator- (Rational x)const;
    
    Rational operator+= (Rational x)const;
    Rational operator*= (Rational x)const;
    Rational operator/= (Rational x)const;
    Rational operator-= (Rational x)const;

    
private:
    int numerator, denominator;
    double final_value;
    
};

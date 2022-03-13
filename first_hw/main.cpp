#include <iostream>


using namespace std;
struct Complex{
    int r;
    int i;
    Complex operator + (const Complex& other){
        return {r+other.r, i+other.i};
    }
    Complex operator * (const Complex& other){
        return {(r*other.r)-(i*other.i),(r*other.i)+(i*other.r)};
    }
    bool operator > (const Complex& other){
        if(i*i+r*r > other.i*other.i+other.r*other.r){
            return{true};
        }
        else{
            return {false};
        }
    }
    bool operator < (const Complex& other){
        if(i*i+r*r < other.i*other.i+other.r*other.r){
            return{true};
        }
        else{
            return {false};
        }
    }
    bool operator == (const Complex& other){
        if(i*i+r*r == other.i*other.i+other.r*other.r){
            return{true};
        }
        else{
            return {false};
        }
    }
    bool operator >= (const Complex& other){
        if(i*i+r*r >= other.i*other.i+other.r*other.r){
            return{true};
        }
        else{
            return {false};
        }
    }
    bool operator <= (const Complex& other){
        if(i*i+r*r <= other.i*other.i+other.r*other.r){
            return{true};
        }
        else{
            return {false};
        }
    }

    bool operator != (const Complex& other){
        if(i*i+r*r != other.i*other.i+other.r*other.r){
            return{true};
        }
        else{
            return {false};
        }
    }
};
int main(){
    Complex a{1,2}, b{3,4},c,d;
    const Complex g ={5,6},e ={5,6};
    c =  a + b;
    d = a*b;
    cout<<c.r<<' '<<c.i<<endl;
    cout<<d.r<<' '<<d.i<<endl;
    d = g+e;
    if (a!=b){
        cout<<1<<endl;
    }
    return 0;
}
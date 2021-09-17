/*
    - Problem
    https://www.hackerrank.com/challenges/30-class-vs-instance/problem
*/

using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        /* If initialAge < 0, set age = 0 */
        if (initialAge < 0) {
            printf("Age is not valid, setting age to 0.\n");
            age = 0;
        }
        
        else
            age = initialAge;
    }

    void Person::amIOld(){
        /* Check age range */
        if (age < 13)
            printf("You are young.\n");
        
        else if (age >= 13 && age < 18)
            printf("You are a teenager.\n");
        
        else
            printf("You are old.\n");
    }

    void Person::yearPasses(){
        /* age = age + 1 by yearPasses() */
        age += 1;
    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}

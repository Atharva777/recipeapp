//Recipe app
//Find recipes based on entered ingredients
//Enter your ingredients and track calories from each one
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

struct ingredients
    {
        char name[100];
        char type[100];
        int calories;
};

void list(){
    cout<<"1: Onion"<<endl;
    cout<<"2: Egg"<<endl;
    cout<<"3: Rice"<<endl;
    cout<<"4: Bread"<<endl;
    cout<<"5: Tomato"<<endl;
    cout<<"6: Milk"<<endl;
    cout<<"7: Chicken"<<endl;
    cout<<"8: Mutton"<<endl;
    cout<<"9: Pork"<<endl;
    cout<<"10: Capsicum"<<endl;
}

void recipes(int num1, int num2){
    if(num1==1 && num2==5){
        int cal = 40 + 18;
        cout<<"Based on your ingredients, you can make a Curry"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==1 && num2==2){
        int cal = 40 + 155;
        cout<<"Based on your ingredients, you can make an Omellette"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==1 && num2==3){
        int cal = 40 + 130;
        cout<<"Basd on your ingredients, you can make Onion Rice"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==1 && num2==10){
        int cal = 40 + 40;
        cout<<"Based on your ingredients, you can make a Salad"<<endl;
        cout<<"It will have"<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==2 && num2==3){
        int cal = 40 + 130;
        cout<<"Based on your ingredients, you can make Egg Rice. Perfect for gym bros"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==2 && num2==4){
        int cal = 40 + 265;
        cout<<"Based on your ingredients, you can make an Egg Toast"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==2 && num2==5){
        int cal = 40 + 18;
        cout<<"Based on your ingredients, you can make an Omellette"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==2 && num2==7){
        int cal = 40 + 239;
        cout<<"Based onyour ingredients, you can make protein rich food. Don't know how that will turn out"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==2 &&num2==8){
        int cal = 40 + 294;
        cout<<"Based onyour ingredients, you can make protein rich food. Don't know how that will turn out"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==2 && num2==9){
        int cal = 40 + 242;
        cout<<"Based on your ingredients, you can make protein rich food. Don't know how that will turn out"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==2 && num2==10){
        int cal = 40 + 40;
        cout<<"Based on your ingredients, you can make a Omellette"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==3 && num2==1){
        int cal = 130 + 40;
        cout<<"Basd on your ingredients, you can make Onion Rice"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==3 && num2==2){
        int cal = 130 + 155;
        cout<<"Based on your ingredients, you can make Egg Rice. Perfect for gym bros"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==3 && num2==5){
        int cal = 130 + 18;
        cout<<"Based on your ingredients, you can make Tomato Rice"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==3 && num2==7){
        int cal = 130 + 239;
        cout<<"Based on your ingredients, you can make Chicken Fried Rice. Perfect to get that protein in!"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==3 && num2==8){
        int cal = 130 + 294;
        cout<<"Based on your ingredients, you can make Mutton Rice. Perfect to get that protein in!"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==3 && num2==9){
        int cal = 130 + 242;
        cout<<"Based on your ingredients, you can make Pork Rice. Perfect to get that protein in!"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==3 && num2==10){
        int cal = 130 + 40;
        cout<<"Based on your ingredients, you can make Capsicum Rice"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==4 && num2==2){
        int cal = 265 + 155;
        cout<<"Based on your ingredients, you can make an Egg Toast"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==4 && num2==6){
        int cal = 265 + 42;
        cout<<"Based on your ingredients, you can only dip bread in the milk and eat it"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==5 && num2==1){
        int cal = 18 + 40;
        cout<<"Based on your ingredients, you can make a Curry"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==5 && num2==2){
        int cal = 18 + 40;
        cout<<"Based on your ingredients, you can make an Omellette"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==5 && num2==10){
        int cal = 18 + 40;
        cout<<"Based on your ingredients, you can make a Salad"<<endl;
        cout<<"It will have"<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==6 && num2==4){
        int cal = 42 + 265;
        cout<<"Based on your ingredients, you can only dip bread in the milk and eat it"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==7 && num2==2){
        int cal = 239 + 155;
        cout<<"Based on your ingredients, you can make protein rich food. Don't know how that will turn out"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==7 && num2==3){
        int cal = 239 + 130;
        cout<<"Based on your ingredients, you can make Chicken Fried Rice. Perfect to get that protein in!"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==7 && num2==8){
        int cal = 239 + 294;
        cout<<"Based on your ingredients, you can make protein rich food. Don't know how that will turn out"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==7 && num2==9){
        int cal = 239 + 242;
        cout<<"Based on your ingredients, you can make protein rich food. Don't know how that will turn out"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==8 && num2==2){
        int cal = 294 + 155;
        cout<<"Based on your ingredients, you can make protein rich food. Don't know how that will turn out"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==8 && num2==3){
        int cal = 294 + 130;
        cout<<"Based on your ingredients, you can make Mutton Rice. Perfect to get that protein in!"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==8 && num2==7){
        int cal = 294 + 239;
        cout<<"Based on your ingredients, you can make Mutton Rice. Perfect to get that protein in!"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==8 && num2==9){
        int cal = 294 + 242;
        cout<<"Based on your ingredients, you can make protein rich food. Don't know how that will turn out"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==9 && num2==3){
        int cal = 242 + 130;
        cout<<"Based on your ingredients, you can make Pork Rice. Perfect to get that protein in!"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==9 && num2==7){
        int cal = 242 + 239;
        cout<<"Based on your ingredients, you can make protein rich food. Don't know how that will turn out"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==9 && num2==8){
        int cal = 242 + 294;
        cout<<"Based on your ingredients, you can make protein rich food. Don't know how that will turn out"<<endl;
        cout<<"It will have "<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==10 && num2==5){
        int cal = 40 + 18;
        cout<<"Based on your ingredients, you can make a Salad"<<endl;
        cout<<"It will have"<<cal<<" calories per 100grams"<<endl;
    }
    else if(num1==10 && num2==1){
        int cal = 40 + 40;
        cout<<"Based on your ingredients, you can make a Salad"<<endl;
        cout<<"It will have"<<cal<<" calories per 100grams"<<endl;
    }
    else{
        cout<<"No available recipes :("<<endl;
    }
}

int main(){
    int num1, num2;
    struct ingredients ingredients1;
    struct ingredients ingredients2;
    struct ingredients ingredients3;
    struct ingredients ingredients4;
    struct ingredients ingredients5;
    struct ingredients ingredients6;
    struct ingredients ingredients7;
    struct ingredients ingredients8;
    struct ingredients ingredients9;
    struct ingredients ingredients10;
    //Ingredient data entry
    strcpy(ingredients1.name, "Onion");
    strcpy(ingredients1.type, "Vegetable");
    ingredients1.calories = 40;

    strcpy(ingredients2.name, "Egg");
    strcpy(ingredients2.type, "Poultry");
    ingredients2.calories = 155;

    strcpy(ingredients3.name, "Rice");
    strcpy(ingredients3.type, "Crop");
    ingredients3.calories = 130;

    strcpy(ingredients4.name, "Bread");
    strcpy(ingredients4.type, "Wheat-type");
    ingredients4.calories = 265;

    strcpy(ingredients5.name, "Tomato");
    strcpy(ingredients5.type, "Vegetable");
    ingredients5.calories = 18;

    strcpy(ingredients6.name, "Milk");
    strcpy(ingredients6.type, "Poultry");
    ingredients6.calories = 42;

    strcpy(ingredients7.name, "Chicken");
    strcpy(ingredients7.type, "Meat");
    ingredients7.calories = 239;

    strcpy(ingredients8.name, "Mutton");
    strcpy(ingredients8.type, "Meat");
    ingredients8.calories = 294;

    strcpy(ingredients9.name, "Pork");
    strcpy(ingredients9.type, "Meat");
    ingredients9.calories = 242;

    strcpy(ingredients10.name, "Capsicum");
    strcpy(ingredients10.type, "Vegetable");
    ingredients10.calories = 40;
    cout<<"----------------Find Your Recipe!---------------"<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Enter your first ingredient from the list below:"<<endl;
    list();
    cin>>num1; 
    if (num1==1)
    {
        cout<<"Selected ingredient is: "<<ingredients1.name<<endl;
        cout<<"It belongs to the family of: "<<ingredients1.type<<endl;
        cout<<"The calories per 100grams is: "<<ingredients1.calories<<endl;
    }
    else if(num1==2){
        cout<<"Selected ingredient is: "<<ingredients2.name<<endl;
        cout<<"It belongs to the family of: "<<ingredients2.type<<endl;
        cout<<"The calories per 100grams is: "<<ingredients2.calories<<endl;
    }
    else if(num1==3){
        cout<<"Selected ingredient is: "<<ingredients3.name<<endl;
        cout<<"It belongs to the family of: "<<ingredients3.type<<endl;
        cout<<"The calories per 100grams is: "<<ingredients3.calories<<endl;
    }
    else if(num1==4){
        cout<<"Selected ingredient is: "<<ingredients4.name<<endl;
        cout<<"It belongs to the family of: "<<ingredients4.type<<endl;
        cout<<"The calories per 100grams is: "<<ingredients4.calories<<endl;
    }
    else if(num1==5){
        cout<<"Selected ingredient is: "<<ingredients5.name<<endl;
        cout<<"It belongs to the family of: "<<ingredients5.type<<endl;
        cout<<"The calories per 100grams is: "<<ingredients5.calories<<endl;
    }
    else if(num1==6){
        cout<<"Selected ingredient is: "<<ingredients6.name<<endl;
        cout<<"It belongs to the family of: "<<ingredients6.type<<endl;
        cout<<"The calories per 100grams is: "<<ingredients6.calories<<endl;
    }
    else if(num1==7){
        cout<<"Selected ingredient is: "<<ingredients7.name<<endl;
        cout<<"It belongs to the family of: "<<ingredients7.type<<endl;
        cout<<"The calories per 100grams is: "<<ingredients7.calories<<endl;
    }
    else if(num1==8){
        cout<<"Selected ingredient is: "<<ingredients8.name<<endl;
        cout<<"It belongs to the family of: "<<ingredients8.type<<endl;
        cout<<"The calories per 100grams is: "<<ingredients8.calories<<endl;
    }
    else if(num1==9){
        cout<<"Selected ingredient is: "<<ingredients9.name<<endl;
        cout<<"It belongs to the family of: "<<ingredients9.type<<endl;
        cout<<"The calories per 100grams is: "<<ingredients9.calories<<endl;
    }
    else if(num1==10){
        cout<<"Selected ingredient is: "<<ingredients10.name<<endl;
        cout<<"It belongs to the family of: "<<ingredients10.type<<endl;
        cout<<"The calories per 100grams is: "<<ingredients10.calories<<endl;
    }
    else{
        cout<<"The selected ingredient is not in the list :("<<endl;
    }
    cout<<"-------------------------------------------------"<<endl;
    cout<<"Enter your second ingredient from the list below:"<<endl;
    list();
    cin>>num2;
    if (num2==1)
    {
        cout<<"Selected ingredient is: "<<ingredients1.name<<endl;
        cout<<"It belongs to the family of: "<<ingredients1.type<<endl;
        cout<<"The calories per 100grams is: "<<ingredients1.calories<<endl;
    }
    else if(num2==2){
        cout<<"Selected ingredient is: "<<ingredients2.name<<endl;
        cout<<"It belongs to the family of: "<<ingredients2.type<<endl;
        cout<<"The calories per 100grams is: "<<ingredients2.calories<<endl;
    }
    else if(num2==3){
        cout<<"Selected ingredient is: "<<ingredients3.name<<endl;
        cout<<"It belongs to the family of: "<<ingredients3.type<<endl;
        cout<<"The calories per 100grams is: "<<ingredients3.calories<<endl;
    }
    else if(num2==4){
        cout<<"Selected ingredient is: "<<ingredients4.name<<endl;
        cout<<"It belongs to the family of: "<<ingredients4.type<<endl;
        cout<<"The calories per 100grams is: "<<ingredients4.calories<<endl;
    }
    else if(num2==5){
        cout<<"Selected ingredient is: "<<ingredients5.name<<endl;
        cout<<"It belongs to the family of: "<<ingredients5.type<<endl;
        cout<<"The calories per 100grams is: "<<ingredients5.calories<<endl;
    }
    else if(num2==6){
        cout<<"Selected ingredient is: "<<ingredients6.name<<endl;
        cout<<"It belongs to the family of: "<<ingredients6.type<<endl;
        cout<<"The calories per 100grams is: "<<ingredients6.calories<<endl;
    }
    else if(num2==7){
        cout<<"Selected ingredient is: "<<ingredients7.name<<endl;
        cout<<"It belongs to the family of: "<<ingredients7.type<<endl;
        cout<<"The calories per 100grams is: "<<ingredients7.calories<<endl;
    }
    else if(num2==8){
        cout<<"Selected ingredient is: "<<ingredients8.name<<endl;
        cout<<"It belongs to the family of: "<<ingredients8.type<<endl;
        cout<<"The calories per 100grams is: "<<ingredients8.calories<<endl;
    }
    else if(num2==9){
        cout<<"Selected ingredient is: "<<ingredients9.name<<endl;
        cout<<"It belongs to the family of: "<<ingredients9.type<<endl;
        cout<<"The calories per 100grams is: "<<ingredients9.calories<<endl;
    }
    else if(num2==10){
        cout<<"Selected ingredient is: "<<ingredients10.name<<endl;
        cout<<"It belongs to the family of: "<<ingredients10.type<<endl;
        cout<<"The calories per 100grams is: "<<ingredients10.calories<<endl;
    }
    else{
        cout<<"The selected ingredient is not in the list :("<<endl;
    }
    recipes(num1, num2);
    system("pause");
    return 0;
    
}
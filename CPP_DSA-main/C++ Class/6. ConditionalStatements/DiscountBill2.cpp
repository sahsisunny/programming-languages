#include<iostream>
using namespace std;
void Discount(){
    // 12/pcs ,if u buy more then 500 rupees then discount 15%.
    float Price=12.0;
    float quantity,discount, origPrice, DiscountPrice;
    cout<<"Alert - '10%' discount on purchase more than 100/-\n";
    cout<<"Alert - '20%' discount on purchase more than 500/-\n";
    cout<<"Quantity : ";
    cin>>quantity;
    origPrice=Price*quantity;
    
    if (origPrice>=100){
        discount=origPrice*10/100;
        DiscountPrice=origPrice-discount;
        cout<<"Original Price: "<<origPrice<<endl;
        cout<<"Discount Amount: "<<discount<<endl;
        cout<<"Discounted Price: "<<DiscountPrice<<endl;
    }else if (origPrice>=500){
        discount=origPrice*20/100;
        DiscountPrice=origPrice-discount;
        cout<<"Original Price: "<<origPrice<<endl;
        cout<<"Discount Amount: "<<discount<<endl;
        cout<<"Discounted Price: "<<DiscountPrice<<endl;
    }else{
        cout<<"Obbs! No discount apply....\n";
        cout<<"Price: "<<origPrice<<endl;
    }
}
int main(){
    Discount();
    return 0;
}
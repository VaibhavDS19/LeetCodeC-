class Solution {
public:
    string intToRoman(int num) {
        string str = "";
        string nums[]={"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        while(num>999)
        {
            str+='M';
            num-=1000;
        }
        
        if(num>=500)
        {
            if(num>=900)
            {
                str+="CM";
                num-=900;
            }
            else
            {
                str+='D';
                num-=500;
            }
        }
        while(num>99)
        {
            if(num>=400)
            {
                num-=400;
                str+="CD";
            }
            else
            {
                str+='C';
                num-=100;
            }
        }
        if(num>=90)
        {
            str+="XC";
            num=num-90;
        }
        if(num>=50)
        {
            num-=50;
            str+='L';
        }
        if(num>=40)
        {
            str=str+"XL";
            num-=40;
        }
        while(num>9)
        {
            num-=10;
            str+='X';
        }
        str+=nums[num];
        return str;
    }
};

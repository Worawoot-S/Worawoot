//
//  main.cpp
//  Worawoot License1
//
//  Created by worawoot on 2/7/2568 BE.
//

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{float width,high,x,y,z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,foam_qty;
    string SVL,surface,DDL,response,foam_size;
    int type;
    cout<<"     //โปรแกรมคำนวณวัตถุดิบของบานประตูWPC By Biw//"<<endl;
    do{
    cout<<"Door Type (1)EPS,(2)Rigid,(3)Hybrid,(4)MDF Plus : ";
    cin>>type;
    cout<<"Door Width(cm.) Not over 106 cm. : ";
    cin>>width;
    cout<<"Door high(cm.) Not over 240 cm. : ";
    cin>>high;
    cout<<"What Surface(Revo/เรียบ) : ";
    cin>>surface;
    cout<<"What SVL (Enter '0' if none): ";
    cin>>SVL;
    cout<<"Have Digital Door Lock (0)No/(1)Yes : " ;
    cin>>DDL;
    x=(width*2)/(150-0.3);//ไส้โฟม 150  cm.
    y=(high*2)/(202-0.3);//ไส้โฟม 202 cm.
    r=(high*2)/(207-0.3);//ไส้โฟม 207 cm.
    a=(high*2)/(222-0.3);//ไส้โฟม 222 cm.
    h=(high*2)/(242-0.3);//ไส้โฟม 242 cm.
    z=(width*2)/(88-0.3);//แผ่นชีท 88x214 cm.
    i=(width*2)/(88-0.3);//แผ่นชีท 88x225 cm.
    k=(width*2)/(88-0.3);//แผ่นชีท 88x245 cm.
    b=(width*2)/(98-0.3);//แผ่นชีท 98x214 cm.
    j=(width*2)/(98-0.3);//แผ่นชีท 98x225 cm.
    l=(width*2)/(98-0.3);//แผ่นชีท 98x245 cm.
    e=(width*2)/(110-0.3);//แผ่นชีท 110x245 cm.
    s=(width-7)*(high-7)/(63*193);//โฟม 63x193 cm.
    c=((width-7)*(high-7)/(73*193));//โฟม 73x193 cm.
    m=(width-7)*(high-7)/(69.3*199);//Rigid 69.3x199 cm.
    n=(width-7)*(high-7)/(69.3*225);//Rigid 69.3x225 cm.
    d=(high*2)+50;//ความยาว SVL
    f=(high-7)/193;//อลุข้าง ยาว 193 cm.
    g=(high-7)/225;//อลูข้าง 225 cm.
    o=(width-14)*2/193;//อลูหัว(อลูรอบ) 193 cm.
    q=(high-14-2.54-2.54)/193;//อลูข้าง(อลูรอบ) 193 cm.
    p=(high-14-2.54-2.54)/225;//อลูข้าง(อลูรอบ) 225 cm.
       
        // เงื่อนไขเลือกโฟมเรียบ
                if (width <= 70) {
                    foam_size = "63x193";
                    foam_qty = s;
                } else {
                    foam_size = "73x193";
                    foam_qty = c;
                }
        
        if(type==1)//บาน EPS
            //บานสูงไม่เกิน 200 cm.
        {if(high<=200 && (width<=40 || width>51) && width<=70 && width<=84 && SVL=="0" && DDL=="0") //ปกติ size 70x200 cm.
        {
            cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
            "uPVC Sheet is : 88x214 cm. "<<surface<<" ="<<" "<<ceil(z)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
        }
            if(high<=200 && (width<=40 || width>51) && width>70 && width<=84 && SVL=="0" && DDL=="0") //ปกติ size 80x200 cm.
        {
            cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
            "uPVC Sheet is : 88x214 cm. "<<surface<<" ="<<" "<<ceil(z)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
        }
            if(high<=200 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL=="0" && DDL=="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 98x214 cm. "<<surface<<" ="<<" "<<ceil(b)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            if(high<=200 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL=="0" && DDL=="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            
            //มีSVL ไม่มีDDL
            if(high<=200 && (width<=40 || width>51) && width<=70 && width<=84 && SVL!="0" && DDL=="0") //ปกติ size 70x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 88x214 cm. "<<surface<<" ="<<" "<<ceil(z)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            if(high<=200 && (width<=40 || width>51) && width>70 && width<=84 && SVL!="0" && DDL=="0") //ปกติ size 80x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 88x214 cm. "<<surface<<" ="<<" "<<ceil(z)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            if(high<=200 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL!="0" && DDL=="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 98x214 cm. "<<surface<<" ="<<" "<<ceil(b)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            if(high<=200 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL!="0" && DDL=="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            
            
            //ไม่มีSVL มีDDL
            if(high<=200 && (width<=40 || width>51) && width<=70 && width<=84 && SVL=="0" && DDL!="0") //ปกติ size 70x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 88x214 cm. "<<surface<<" ="<<" "<<ceil(z)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            if(high<=200 && (width<=40 || width>51) &&width>70 && width<=84 && SVL=="0" && DDL!="0") //ปกติ size 80x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 88x214 cm. "<<surface<<" ="<<" "<<ceil(z)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
                if(high<=200 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL=="0" && DDL!="0") //ปกติ size 90x200 cm.
                {
                    cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                    "uPVC Sheet is : 98x214 cm. "<<surface<<" ="<<" "<<ceil(b)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
                }
                if(high<=200 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL=="0" && DDL!="0") //ปกติ size (110,120)x200 cm.
                {
                    cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                    "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
                }
            
        
            
            //มีSVL มีDDL
            if(high<=200 && (width<=40 || width>51) && width<=70 &&width<=84 && SVL!="0" && DDL!="0") //ปกติ size 70x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 88x214 cm. "<<surface<<" ="<<" "<<ceil(z)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            if(high<=200 && (width<=40 || width>51) && width>70 && width<=84 && SVL!="0" && DDL!="0") //ปกติ size 80x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 88x214 cm. "<<surface<<" ="<<" "<<ceil(z)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            if(high<=200 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL!="0" && DDL!="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 98x214 cm. "<<surface<<" ="<<" "<<ceil(b)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            if(high<=200 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL!="0" && DDL!="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            
            
            //บานประตูสูง 200-205 cm.
            if(high>200 && high<=205 && (width<=40 || width>51) && width<=70 && width<=84 && SVL=="0" && DDL=="0") //ปกติ size 70x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 88x214 cm. "<<surface<<" ="<<" "<<ceil(z)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            if(high>200 && high<=205 && (width<=40 || width>51) && width>70 && width<=84 && SVL=="0" && DDL=="0") //ปกติ size 80x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 88x214 cm. "<<surface<<" ="<<" "<<ceil(z)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
                if(high>200 && high<=205 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL=="0" && DDL=="0") //ปกติ size 90x200 cm.
                {
                    cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                    "uPVC Sheet is : 98x214 cm. "<<surface<<" ="<<" "<<ceil(b)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
                }
                if(high>200 && high<=205 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL=="0" && DDL=="0") //ปกติ size (110,120)x200 cm.
                {
                    cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                    "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
                }
                
                //มีSVL ไม่มีDDL
                if(high>200 && high<=205 && (width<=40 || width>51) && width<=70 && width<=84 && SVL!="0" && DDL=="0") //ปกติ size (70,80)x200 cm.
                {
                    cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                    "uPVC Sheet is : 88x214 cm. "<<surface<<" ="<<" "<<ceil(z)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
                }
            if(high>200 && high<=205 && (width<=40 || width>51) && width>70 && width<=84 && SVL!="0" && DDL=="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 88x214 cm. "<<surface<<" ="<<" "<<ceil(z)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
                if(high>200 && high<=205 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL!="0" && DDL=="0") //ปกติ size 90x200 cm.
                {
                    cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                    "uPVC Sheet is : 98x214 cm. "<<surface<<" ="<<" "<<ceil(b)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
                }
                if(high>200 && high<=205 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL!="0" && DDL=="0") //ปกติ size (110,120)x200 cm.
                {
                    cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                    "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
                }
                
                
                //ไม่มีSVL มีDDL
                if(high>200 && high<=205 && (width<=40 || width>51) && width<=70 && width<=84 && SVL=="0" && DDL!="0") //ปกติ size (70,80)x200 cm.
                {
                    cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                    "uPVC Sheet is : 88x214 cm. "<<surface<<" ="<<" "<<ceil(z)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
                }
            if(high>200 && high<=205 && (width<=40 || width>51) && width>70 && width<=84 && SVL=="0" && DDL!="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 88x214 cm. "<<surface<<" ="<<" "<<ceil(z)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
                    if(high<=200 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL=="0" && DDL!="0") //ปกติ size 90x200 cm.
                    {
                        cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                        "uPVC Sheet is : 98x214 cm. "<<surface<<" ="<<" "<<ceil(b)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
                    }
                    if(high<=200 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL=="0" && DDL!="0") //ปกติ size (110,120)x200 cm.
                    {
                        cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                        "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
                    }
                
            
                
                //มีSVL มีDDL
                if(high>200 && high<=205 && (width<=40 || width>51) && width<=70 && width<=84 && SVL!="0" && DDL!="0") //ปกติ size 90x200 cm.
                {
                    cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                    "uPVC Sheet is : 88x214 cm. "<<surface<<" ="<<" "<<ceil(z)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
                }
                if(high>200 && high<=205 && (width<=40 || width>51) && width>70 && width<=84 && SVL!="0" && DDL!="0") //ปกติ size 90x200 cm.
                    {
                        cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                        "uPVC Sheet is : 88x214 cm. "<<surface<<" ="<<" "<<ceil(z)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
                }
                if(high>200 && high<=205 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL!="0" && DDL!="0") //ปกติ size 90x200 cm.
                {
                    cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                    "uPVC Sheet is : 98x214 cm. "<<surface<<" ="<<" "<<ceil(b)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
                }
                if(high>200 && high<=205 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL!="0" && DDL!="0") //ปกติ size (110,120)x200 cm.
                {
                    cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                    "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
                }
            
            
            //บานประตูสูง 200-219.9
            if(high>205 && high<220 && (width<=40 || width>51) && width<=70 && width<=84 && SVL=="0" && DDL=="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 88x225 cm. "<<surface<<" ="<<" "<<ceil(i)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
                if(high>205 && high<220 && (width<=40 || width>51) && width>70 && width<=84 && SVL=="0" && DDL=="0") //ปกติ size (70,80)x200 cm.
                {
                    cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                    "uPVC Sheet is : 88x225 cm. "<<surface<<" ="<<" "<<ceil(i)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            if(high>205 && high<220 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL=="0" && DDL=="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 98x225 cm. "<<surface<<" ="<<" "<<ceil(j)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            if(high>205 && high<220 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL=="0" && DDL=="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            
            //มีSVL ไม่มีDDL
            if(high>205 && high<220 && (width<=40 || width>51) && width<=70 && width<=84 && SVL!="0" && DDL=="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 88x225 cm. "<<surface<<" ="<<" "<<ceil(i)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            if(high>205 && high<220 && (width<=40 || width>51) && width>70 && width<=84 && SVL!="0" && DDL=="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 88x225 cm. "<<surface<<" ="<<" "<<ceil(i)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            if(high>205 && high<220 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL!="0" && DDL=="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 98x225 cm. "<<surface<<" ="<<" "<<ceil(j)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            if(high>205 && high<220 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL!="0" && DDL=="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            
            
            //ไม่มีSVL มีDDL
            if(high>205 && high<220 && (width<=40 || width>51) && width<=70 && width<=84 && SVL=="0" && DDL!="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 88x225 cm. "<<surface<<" ="<<" "<<ceil(i)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
                if(high>205 && high<220 && (width<=40 || width>51) && width>70 && width<=84 && SVL=="0" && DDL!="0") //ปกติ size (70,80)x200 cm.
                {
                    cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                    "uPVC Sheet is : 88x225 cm. "<<surface<<" ="<<" "<<ceil(i)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
                }
            if(high>205 && high<220 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL=="0" && DDL!="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 98x225 cm. "<<surface<<" ="<<" "<<ceil(j)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            if(high>205 && high<220 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL=="0" && DDL!="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            
            
            //มีSVL มีDDL
            if(high>205 && high<220 && (width<=40 || width>51) && width<=70 && width<=84 && SVL!="0" && DDL!="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 88x225 cm. "<<surface<<" ="<<" "<<ceil(i)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
                if(high>205 && high<220 && (width<=40 || width>51) && width>70 && width<=84 && SVL!="0" && DDL!="0") //ปกติ size 90x200 cm.
                {
                    cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                    "uPVC Sheet is : 88x225 cm. "<<surface<<" ="<<" "<<ceil(i)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
                }
            if(high>205 && high<220 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL!="0" && DDL!="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 98x225 cm. "<<surface<<" ="<<" "<<ceil(j)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            if(high>205 && high<220 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL!="0" && DDL!="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            
            
            //บานประตูสูง 220-240
            if(high>=220 && high<=240 && (width<=40 || width>51) && width<=70 && width<=84 && SVL=="0" && DDL=="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 88x245 cm. "<<surface<<" ="<<" "<<ceil(k)<<" PCS"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)*2<<" เส้น"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
                if(high>=220 && high<=240 && (width<=40 || width>51) && width>70 && width<=84 && SVL=="0" && DDL=="0") //ปกติ size (70,80)x200 cm.
                {
                    cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                    "uPVC Sheet is : 88x245 cm. "<<surface<<" ="<<" "<<ceil(k)<<" PCS"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)*2<<" เส้น"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
                }
            if(high>=220 && high<=240 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL=="0" && DDL=="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 98x245 cm. "<<surface<<" ="<<" "<<ceil(l)<<" PCS"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)*2<<" เส้น"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            if(high>=220 && high<=240 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL=="0" && DDL=="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)*2<<" เส้น"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            
            //มีSVL ไม่มีDDL
            if(high>=220 && high<=240 && (width<=40 || width>51) && width<=70 && width<=84 && SVL!="0" && DDL=="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 88x245 cm. "<<surface<<" ="<<" "<<ceil(k)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)*2<<" เส้น"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
                if(high>=220 && high<=240 && (width<=40 || width>51) && width>70 && width<=84 && SVL!="0" && DDL=="0") //ปกติ size (70,80)x200 cm.
                {
                    cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                    "uPVC Sheet is : 88x245 cm. "<<surface<<" ="<<" "<<ceil(k)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)*2<<" เส้น"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
                }
            if(high>=220 && high<=240 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL!="0" && DDL=="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 98x245 cm. "<<surface<<" ="<<" "<<ceil(l)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)*2<<" เส้น"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            if(high>=220 && high<=240 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL!="0" && DDL=="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)*2<<" เส้น"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            
            
            //ไม่มีSVL มีDDL
            if(high>=220 && high<=240 && (width<=40 || width>51) && width<=70 && width<=84 && SVL=="0" && DDL!="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 88x245 cm. "<<surface<<" ="<<" "<<ceil(k)<<" PCS"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)*2<<" เส้น"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
                if(high>=220 && high<=240 && (width<=40 || width>51) && width>70 && width<=84 && SVL=="0" && DDL!="0") //ปกติ size (70,80)x200 cm.
                {
                    cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                    "uPVC Sheet is : 88x245 cm. "<<surface<<" ="<<" "<<ceil(k)<<" PCS"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)*2<<" เส้น"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
                }
            if(high>=220 && high<=240 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL=="0" && DDL!="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 98x245 cm. "<<surface<<" ="<<" "<<ceil(l)<<" PCS"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)*2<<" เส้น"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            if(high>=220 && high<=240 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL=="0" && DDL!="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)*2<<" เส้น"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            
            
            //มีSVL มีDDL
            if(high>=220 && high<=240 && (width<=40 || width>51) && width<=70 && width<=84 && SVL!="0" && DDL!="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 88x245 cm. "<<surface<<" ="<<" "<<ceil(k)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)*2<<" เส้น"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
                if(high>=220 && high<=240 && (width<=40 || width>51) && width>70 && width<=84 && SVL!="0" && DDL!="0") //ปกติ size 90x200 cm.
                {
                    cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                    "uPVC Sheet is : 88x245 cm. "<<surface<<" ="<<" "<<ceil(k)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)*2<<" เส้น"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
                }
            if(high>=220 && high<=240 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL!="0" && DDL!="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 98x245 cm. "<<surface<<" ="<<" "<<ceil(l)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)*2<<" เส้น"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }
            if(high>=220 && high<=240 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL!="0" && DDL!="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)*2<<" เส้น"<<endl<<"โฟมเรียบ 1.0 lb ขนาด " << foam_size << " cm. = " << ceil(foam_qty) << " PCS" << endl;
            }}
        
        
        
        else if(type==2)//Rigid
        {    if(high<=200 && (width<=40 || width>51) && width<=84 && SVL=="0" && DDL=="0") //ปกติ size (70,80)x200 cm.
        {
            cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
            "uPVC Sheet is : 88x214 cm. "<<surface<<" ="<<" "<<ceil(z)<<" PCS"<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
        }
            if(high<=200 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL=="0" && DDL=="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 98x214 cm. "<<surface<<" ="<<" "<<ceil(b)<<" PCS"<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
            }
            if(high<=200 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL=="0" && DDL=="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
            }
            
            //มีSVL ไม่มีDDL
            if(high<=200 && (width<=40 || width>51) && width<=84 && SVL!="0" && DDL=="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 88x214 cm. "<<surface<<" ="<<" "<<ceil(z)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
            }
            if(high<=200 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL!="0" && DDL=="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 98x214 cm. "<<surface<<" ="<<" "<<ceil(b)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
            }
            if(high<=200 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL!="0" && DDL=="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
            }
            
            
            //ไม่มีSVL มีDDL
            if(high<=200 && (width<=40 || width>51) && width<=84 && SVL=="0" && DDL!="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 88x214 cm. "<<surface<<" ="<<" "<<ceil(z)<<" PCS"<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
            }
                if(high<=200 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL=="0" && DDL!="0") //ปกติ size 90x200 cm.
                {
                    cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                    "uPVC Sheet is : 98x214 cm. "<<surface<<" ="<<" "<<ceil(b)<<" PCS"<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
                }
                if(high<=200 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL=="0" && DDL!="0") //ปกติ size (110,120)x200 cm.
                {
                    cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                    "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
                }
            
            
            //มีSVL มีDDL
            if(high<=200 && (width<=40 || width>51) && width<=84 && SVL!="0" && DDL!="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 88x214 cm. "<<surface<<" ="<<" "<<ceil(z)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
            }
            if(high<=200 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL!="0" && DDL!="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 98x214 cm. "<<surface<<" ="<<" "<<ceil(b)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
            }
            if(high<=200 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL!="0" && DDL!="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 202 cm. = "<<ceil(y)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
            }
            

            //บานประตูสูง 200-219.9
            if(high>200 && high<=205 && (width<=40 || width>51) && width<=84 && SVL=="0" && DDL=="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 88x225 cm. "<<surface<<" ="<<" "<<ceil(i)<<" PCS"<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
            }
            if(high>205 && high<=220 && (width<=40 || width>51) && width<=84 && SVL=="0" && DDL=="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 88x225 cm. "<<surface<<" ="<<" "<<ceil(i)<<" PCS"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>200 && high<=205 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL=="0" && DDL=="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 98x225 cm. "<<surface<<" ="<<" "<<ceil(j)<<" PCS"<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
            }
            if(high>205 && high<=220 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL=="0" && DDL=="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 98x225 cm. "<<surface<<" ="<<" "<<ceil(j)<<" PCS"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>200 && high<=205 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL=="0" && DDL=="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
            }
            if(high>205 && high<=220 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL=="0" && DDL=="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            
            //มีSVL ไม่มีDDL
            if(high>200 && high<=205 && (width<=40 || width>51) && width<=84 && SVL!="0" && DDL=="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 88x225 cm. "<<surface<<" ="<<" "<<ceil(i)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
            }
            if(high>205 && high<=220 && (width<=40 || width>51) && width<=84 && SVL!="0" && DDL=="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 88x225 cm. "<<surface<<" ="<<" "<<ceil(i)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>200 && high<=205 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL!="0" && DDL=="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 98x225 cm. "<<surface<<" ="<<" "<<ceil(j)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
            }
            if(high>200 && high<=205 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL!="0" && DDL=="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 98x225 cm. "<<surface<<" ="<<" "<<ceil(j)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>200 && high<=205 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL!="0" && DDL=="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
            }
            if(high>205 && high<=220 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL!="0" && DDL=="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            
            
            //ไม่มีSVL มีDDL
            if(high>200 && high<=205 && (width<=40 || width>51) && width<=84 && SVL=="0" && DDL!="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 88x225 cm. "<<surface<<" ="<<" "<<ceil(i)<<" PCS"<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
            }
            if(high>205 && high<=220 && (width<=40 || width>51) && width<=84 && SVL=="0" && DDL!="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 88x225 cm. "<<surface<<" ="<<" "<<ceil(i)<<" PCS"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>200 && high<=205 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL=="0" && DDL!="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 98x225 cm. "<<surface<<" ="<<" "<<ceil(j)<<" PCS"<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
            }
            if(high>205 && high<=220 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL=="0" && DDL!="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 98x225 cm. "<<surface<<" ="<<" "<<ceil(j)<<" PCS"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>200 && high<=205 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL=="0" && DDL!="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
            }
            if(high>205 && high<=220 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL=="0" && DDL!="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            
            
            //มีSVL มีDDL
            if(high>200 && high<=205 && (width<=40 || width>51) && width<=84 && SVL!="0" && DDL!="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 88x225 cm. "<<surface<<" ="<<" "<<ceil(i)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
            }
            if(high>205 && high<=220 && (width<=40 || width>51) && width<=84 && SVL!="0" && DDL!="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 88x225 cm. "<<surface<<" ="<<" "<<ceil(i)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>200 && high<=205 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL!="0" && DDL!="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 98x225 cm. "<<surface<<" ="<<" "<<ceil(j)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
            }
            if(high>205 && high<=220 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL!="0" && DDL!="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 98x225 cm. "<<surface<<" ="<<" "<<ceil(j)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>200 && high<=205 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL!="0" && DDL!="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 207 cm. = "<<ceil(r)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"Rigid 69.3x199 cm. = "<<m<<" PCS"<<endl;
            }
            if(high>205 && high<=220 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL!="0" && DDL!="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 222 cm. = "<<ceil(a)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            
            
            //บานประตูสูง 220-234.9
            if(high>220 && high<235 && (width<=40 || width>51) && width<=84 && SVL=="0" && DDL=="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 88x245 cm. "<<surface<<" ="<<" "<<ceil(k)<<" PCS"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>220 && high<235 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL=="0" && DDL=="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 98x245 cm. "<<surface<<" ="<<" "<<ceil(l)<<" PCS"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>220 && high<235 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL=="0" && DDL=="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            
            //มีSVL ไม่มีDDL
            if(high>220 && high<235 && (width<=40 || width>51) && width<=84 && SVL!="0" && DDL=="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 88x245 cm. "<<surface<<" ="<<" "<<ceil(k)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>220 && high<235 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL!="0" && DDL=="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 98x245 cm. "<<surface<<" ="<<" "<<ceil(l)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>220 && high<235 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL!="0" && DDL=="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            
            
            //ไม่มีSVL มีDDL
            if(high>220 && high<235 && (width<=40 || width>51) && width<=84 && SVL=="0" && DDL!="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 88x245 cm. "<<surface<<" ="<<" "<<ceil(k)<<" PCS"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>220 && high<235 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL=="0" && DDL!="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 98x245 cm. "<<surface<<" ="<<" "<<ceil(l)<<" PCS"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>220 && high<235 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL=="0" && DDL!="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            
            
            //มีSVL มีDDL
            if(high>220 && high<235 && (width<=40 || width>51) && width<=84 && SVL!="0" && DDL!="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 88x245 cm. "<<surface<<" ="<<" "<<ceil(k)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>220 && high<235 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL!="0" && DDL!="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 98x245 cm. "<<surface<<" ="<<" "<<ceil(l)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>220 && high<235 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL!="0" && DDL!="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(g)<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            
            
            //บานประตูสูง 235-240
            if(high>=235 && high<=240 && (width<=40 || width>51) && width<=84 && SVL=="0" && DDL=="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 88x245 cm. "<<surface<<" ="<<" "<<ceil(k)<<" PCS"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 193 cm. = "<<ceil(o)<<" เส้น"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(p)*2<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>=235 && high<=240 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL=="0" && DDL=="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 98x245 cm. "<<surface<<" ="<<" "<<ceil(l)<<" PCS"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 193 cm. = "<<ceil(o)<<" เส้น"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(p)*2<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>=235 && high<=240 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL=="0" && DDL=="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 193 cm. = "<<ceil(o)<<" เส้น"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(p)*2<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            
            //มีSVL ไม่มีDDL
            if(high>=235 && high<=240 && (width<=40 || width>51) && width<=84 && SVL!="0" && DDL=="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 88x245 cm. "<<surface<<" ="<<" "<<ceil(k)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 193 cm. = "<<ceil(o)<<" เส้น"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(p)*2<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>=235 && high<=240 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL!="0" && DDL=="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 98x245 cm. "<<surface<<" ="<<" "<<ceil(l)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 193 cm. = "<<ceil(o)<<" เส้น"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(p)*2<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>=235 && high<=240 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL!="0" && DDL=="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 1 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 193 cm. = "<<ceil(o)<<" เส้น"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(p)*2<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            
            
            //ไม่มีSVL มีDDL
            if(high>=235 && high<=240 && (width<=40 || width>51) && width<=84 && SVL=="0" && DDL!="0") //ปกติ size (70,80)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 88x245 cm. "<<surface<<" ="<<" "<<ceil(k)<<" PCS"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 193 cm. = "<<ceil(o)<<" เส้น"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(p)*2<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>=235 && high<=240 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL=="0" && DDL!="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 98x245 cm. "<<surface<<" ="<<" "<<ceil(l)<<" PCS"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 193 cm. = "<<ceil(o)<<" เส้น"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(p)*2<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>=235 && high<=240 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL=="0" && DDL!="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 193 cm. = "<<ceil(o)<<" เส้น"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(p)*2<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            
            
            //มีSVL มีDDL
            if(high>=235 && high<=240 && (width<=40 || width>51) && width<=84 && SVL!="0" && DDL!="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 88x245 cm. "<<surface<<" ="<<" "<<ceil(k)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 193 cm. = "<<ceil(o)<<" เส้น"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(p)*2<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>=235 && high<=240 && (width>84 || (width>40 && width<=45)) && width<=94 && SVL!="0" && DDL!="0") //ปกติ size 90x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 98x245 cm. "<<surface<<" ="<<" "<<ceil(l)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 193 cm. = "<<ceil(o)<<" เส้น"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(p)*2<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }
            if(high>=235 && high<=240 && (width>94 || (width>45 && width<=51)) && width<=106 && SVL!="0" && DDL!="0") //ปกติ size (110,120)x200 cm.
            {
                cout<<"วัตถุดิบ มีดังนี้ครับ"<<endl<<"uPVC stick is : 242 cm. = "<<ceil(h)<<" PCS, 150 cm. = "<<ceil(x)<<" PCS, 125 cm. = 2 PCS"<<endl<<
                "uPVC Sheet is : 110x245 cm. "<<surface<<" ="<<" "<<ceil(e)<<" PCS"<<endl<<"SVL "<<SVL<<" = "<<d<<" cm."<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 193 cm. = "<<ceil(o)<<" เส้น"<<endl<<"อลูมิเนียม 25.4x25.4 ยาว 225 cm. = "<<ceil(p)*2<<" เส้น"<<endl<<"Rigid 69.3x225 cm. = "<<n<<" PCS"<<endl;
            }}
        cout<<"ต้องการคำนวณวัตถุดิบต่อไหมครับ? (y/n) : ";
        cin>>response;
        cout<<endl;
    }
    while(response=="y");
    cout<<"โปรแกรมสิ้นสุดการคำนวณครับ"<<endl;
    return 0;
}

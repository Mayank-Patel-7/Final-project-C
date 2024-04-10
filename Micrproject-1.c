#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <unistd.h>

int laptop();
int hp(int Hc);
int dell(int Dc);
int asus(int Ac);
int lenovo(int Lc);
int phone();
int apple();
int samsung();
int vivo();
int xiomi();
int Headphone();
int boat();
int jbl();
int sony();
int television();
int benq();
int lg();
int sonny();
int samsunng();

struct user
{
    char name[20];
    int mobile;
} u;

// This function is for laptop

int laptop()

{
    int Ac, Dc, Hc, Lc;
    int a, b, c, d;
    int choice;
    printf("press the given code value to procced\n~ASUS-[1]\n~HP-[2]\n~DELL-[3]\n~LENOVO-[4]\n");
    scanf("%d", &choice);

    usleep(500000);

    switch (choice)
    {
    case 1:
        printf("\n\tWe Have 5 Models from the brand ASUS\n");
        printf("\n[1]Asus TUF Gaming latop \n[2]Asus Vivobook 16 \n[3]Asus Vivobook 15 \n[4]Asus ROG Striks(2023)\n[5]Asus Aspire lite\n");
        scanf("%d", &Ac);
        a = asus(Ac);
        return a;
        break;
    case 2:
        printf("We Have 4 Models from the brand HP\n");
        printf("[1]HP 15s (For working Professionals)\n[2]HP Pavilion 14\n[3]HP OMEN Gaming Laptop\n[4]HP Victus Gaming Laptop\n");
        scanf("%d", &Hc);
        b = hp(Hc);
        return b;
        break;
    case 3:
        printf("We Have 3 Models from the brand DELL\n");
        printf("[1]Dell 15 Laptop\n[2]Dell Inspiron 5430 Laptop\n[3]Dell G15-5530 Gaming Laptop\n");
        scanf("%d", &Dc);
        c = dell(Dc);
        return c;
        break;
    case 4:
        printf("We Have 5 Models from the brand LENOVO\n");
        printf("[1]Lenovo IdeaPad Slim 3\n[2]Lenovo Yoga Slim 6\n[3]Lenovo IdeaPad Gaming 3\n[4]Lenovo Legion 5 Pro\n[5]Lenovo LOQ 2024\n");
        scanf("%d", &Lc);
        d = lenovo(Lc);
        return d;
        break;

    default:
        printf("The number you have entered '%d' is invalid\n", choice);
        laptop();
    }
}

int asus(int Ac)
{
    if (Ac == 1)
    {
        printf("ASUS TUF Gaming F15 (2023)\n90WHr Battery, Intel Core i7-12700H 12th Gen, 15.6 FHD 144Hz, 8GB RTX 4060 \n");
        printf("Gaming Laptop (16GB/512GB SSD/Windows 11//1-Zone RGB/Gray/2.20 Kg) \n\nPrice(Including all inclusive taxes)- Rs 99,990/-only\n");
        return 99990;
    }
    else if (Ac == 2)
    {
        printf("ASUS Vivobook 16 (2023),\n~ Intel Core i9-13900H 13th Gen, 16 (40.64 cm) FHD+ ");
        printf("Thin & Light Laptop (16GB/512GB SSD/Intel Iris Xe/Win 11/Office 2021/Backlit KB/Fingerprint/Silver/1.88 kg)\nPrice(Including all inclusive taxes)- 54,000 /-only");
        return 54000;
    }
    else if (Ac == 3)
    {
        printf("ASUS Vivobook 15\n~ Intel Core i3-1220P 12th Gen\n15.6 (39.62 cm) FHD, Thin and Laptop (8GB/512GB SSD/Integrated Graphics\n");
        printf("Windows 11/Office 2021/Alexa Built-in/FP Sensor/Blue/1.7 kg\n\nPrice(Including all inclusive taxes)- Rs 39,400 /-only");
        return 39400;
    }
    else if (Ac == 4)
    {
        printf("ASUS ROG Strix G15, AMD Ryzen 7 6800H\n(Included - ROG Impact Mouse & Mat), 15.6(39.62 cm) FHD 144Hz, 4GB RTX 3050 GPU, Gaming Laptop\n");
        printf("(16GB/1TB SSD/Win11/Office 21/Electro Punk/2.1 Kg)\n\nPrice(Including all inclusive taxes)- Rs 89,540/-only");
        return 89540;
    }
    else
    {
        printf("Acer Aspire Lite AMD Ryzen 5 5500U \nPremium Thin and Light Laptop (16 GB RAM/512 GB SSD\n");
        printf("Windows 11 Home) AL15-41, 39.62 cm (15.6) Full HD Display, Metal Body, Steel Gray, 1.59 KG\n\nPrice(Including all inclusive taxes) - Rs 37,490 /-only");
        return 37490;
    }
}

int hp(int Hc)
{
    if (Hc == 1)
    {
        printf("\nHP 15s, Ryzen 5-5500U, 16GB RAM/512GB SSD 15.6-inches(39.6 cm) FHD, Micro-Edge, Anti-Glare Laptop/Alexa Built-in\n");
        printf("Windows 11 /AMD Radeon Graphics/Dual Speakers/MS Office 2021/1.69 Kg\n\nPrice(Including all inclusive taxes)- Rs43,310 /-Only\n");
        return 43310;
    }
    else if (Hc == 2)
    {
        printf("\nHP Pavilion 14 12th Gen Intel Core i7 16GB SDRAM/1TB SSD 14 inch(35.6cm) FHD,IPS,Micro-Edge Display/Intel Iris Xe\n");
        printf("Graphics/B&O/Win 11/Alexa Built-in/Backlit KB/FPR/MSO 2021/Natural Silver\n\nPrice(Including all inclusive taxes)- Rs 76,990/-Only\n");
        return 76990;
    }
    else if (Hc == 4)
    {
        printf("\nHP Victus Gaming Laptop, AMD Ryzen 7 7840HS AI powered, 6GB RTX 3050 GPU, 16.1-inch (40.9 cm), 95W TGP, FHD, IPS, 144Hz");
        printf("16GB DDR5, 1TB SSD, 300 nits, RGB Backlit KB, B&O (MSO, Blue, 2.29 kg)\n\nPrice(Including all inclusive taxes)- Rs 82,490/-Only\n");
        return 82490;
    }
    else
    {
        printf("\nHP OMEN Gaming Laptop, AMD Ryzen 7 6800H, 8GB RTX 3070Ti GPU, 16.1-inch (40.9 cm), QHD, IPS, 165Hz, 16GB DDR5\n");
        printf("1TB SSD, 300 nits, RGB Backlit KB, B&O, Dual Speakers (MSO, Silver, 2.37 kg)\n\nPrice(Including all inclusive taxes)- Rs 1,05,990/-Only\n");
        return 105990;
    }
}

int dell(int Dc)
{
    if (Dc == 1)
    {
        printf("\nDell 15 Laptop, Intel 12th Gen Core i3-1215U Proc/8GB DDR4/512GB SSD\nIntel UHD Graphic/15.6(38cm) FHD Display\n");
        printf("Spill-Resistant Keyboard/Win11+MSO'21/15 Month McAfee/Black/Thin & Light 1.69kg\n\nPrice(Including all inclusive taxes)- Rs 35,990/-Only\n");
        return 35990;
    }
    else if (Dc == 2)
    {
        printf("\nDell Inspiron 5430 Laptop, 13th Gen Intel Core i7-1360P Processor\n/16GB/1TB SSD/14.0 (35.56cm) FHD+ WVA 250\n");
        printf("nits/Backlit KB + FPR/Win 11 + MSO'21/15 Month McAfee/Platinum Silver/Thin & Light- 1.59kg\n\nPrice(Including all inclusive taxes)- Rs 86,730/-Only\n");
        return 86730;
    }
    else
    {
        printf("\nDell G15-5530 Gaming Laptop, Intel Core i7-13650HX Processor\n/16GB/512GB SSD/NVIDIA RTX 4050 6GB GDDR6/15.6(39.62cm) FHD 165Hz\n");
        printf("sRGB-100*/Win 11+MSO'21/Backlit KB 4-Zone RGB/Dark Shadow Gray/2.65Kgs\n\nPrice(Including all inclusive taxes)- Rs 1,07,900/-Only\n");
        return 107900;
    }
}

int lenovo(int Lc)
{
    if (Lc == 1)
    {
        printf("\nLenovo IdeaPad Slim 3 Intel Core i5-12450H 15 (39.6cm) FHD IPS 300 Nits Thin & Light Laptop");
        printf("(16GB/512GB SSD/Win 11/Office 2021/Alexa Built-in/3 Month Game Pass/Arctic Grey/1.62Kg)\n\nPrice(Including all inclusive taxes)- Rs 54,540/-Only\n");
        return 54540;
    }
    else if (Lc == 2)
    {
        printf("\nLenovo Yoga Slim 6 Intel Evo Core i5 1240P 14(35.5cm) 2.2K 300Nit Laptop");
        printf("(16GB/512GB SSD/60Hz Refresh/Win 11/Office 2021/Backlit KB/1Yr Warranty/Alexa/3 Month Game Pass/Storm Grey/1.35Kg\n\nPrice(Including all inclusive taxes)- Rs 64,990/-Only\n");
        return 64990;
    }
    else if (Lc == 3)
    {
        printf("\nLenovo IdeaPad Gaming 3 Intel Core i5-11320H 15.6 (39.62cm) FHD IPS 60Hz Gaming Laptop (8GB/512GB SSD)\n");
        printf("Windows 11/NVIDIA RTX 2050 4GB/Alexa/3 Month Game Pass/Shadow Black/2.25Kg)\n\nPrice(Including all inclusive taxes)- Rs 48,990/-Only\n");
        return 48990;
    }
    else if (Lc == 4)
    {
        printf("Lenovo Legion 5 Pro AMD Ryzen 7 5800H40cm 500Nits QHD Gaming Laptop(16GB/1TB SSD/RTX 3060 6GB GDDR6\n");
        printf("Graphics/165Hz/Windows 11/Office 2021/RGB Backlit/3mnth Xbox Game Pass/Storm Grey\n\nPrice(Including all inclusive taxes)- Rs 91,190/-Only\n");
        return 91190;
    }
    else
    {
        printf("Lnenovo LOQ 2024 Intel Core i5-12450HX 15.6 (39.6cm) 144Hz 300Nits FHD Gaming Laptop (8GB/512GB SSD");
        printf("Win 11/Intel Arc A530M 4GB Graphics/100% sRGB/3 Month Game Pass/Luna Grey/2.4Kg)\n\nPrice(Including all inclusive taxes)- Rs 59,990/-Only\n");
        return 59990;
    }
}

int apple()
{
    int Aac, sel;
    printf("\n[1]For iPhone 15 pro Max (Stroge 1Tb )\nPrice(Including all inclusive taxes)- 199,900 /-only\n\n[2]For iPhone 14 plus (Storage 512 gb)\nPrice(Including all inclusive taxes)- 109,900 /-only  \n\n[3]For iPhone 12 pro (Storage 256 gb)\nPrice(Including all inclusive taxes)- 99,900 /-only\n\n[4]For iPhone 11 pro (Storage 128 gb)\nPrice(Including all inclusive taxes)- 98,900 /-only\n");
    scanf("%d", &Aac);

    printf("TO Confirm your selection enter [4] to return to the main menu enter [3]");
    scanf("%d", &sel);
    if (sel == 3)
        phone();
    else
    {
        if (Aac == 1)
            return 199900;
        else if (Aac == 2)
            return 109900;
        else if (Aac == 3)
            return 99900;
        else if (Aac == 4)
            return 98900;
    }
}

int samsung()
{
    int Sc, sel;
    printf("\n[1]For Samsang Galaxy S24 Ultra (Ram 12gb | Stroge 1tb )\nPrice(Including all inclusive taxes)- 158,900 /-only  \n\n[2] For Samsung Galaxy S23 Ultra (Ram 12gb | Stroge 521gb )\nPrice(Including all inclusive taxes)- 119,900 /-only \n\n[3]For Samsung Galaxy S21 Fe 5g (Ram 8gb | Stroge 256gb )\nPrice(Including all inclusive taxes)- 33,900 /-only \n\n[4]For Samsung M34 (Ram 8gb | Stroge 128gb )\nPrice(Including all inclusive taxes)- 17,900 /-only  \n");
    scanf("%d", &Sc);

    printf("TO Confirm your selection enter [4] to return to the main menu enter [3]");
    scanf("%d", &sel);
    if (sel == 3)
        phone();
    else
    {
        if (Sc == 1)
            return 158900;
        else if (Sc == 2)
            return 119900;
        else if (Sc == 3)
            return 33900;
        else if (Sc == 4)
            return 17900;
    }
}

int vivo()
{
    int Vc, sel;
    printf("\n[1]For Vivo X100 Pro (Ram 16gb | Stroge 512gb )\nPrice(Including all inclusive taxes)- 89,900 /-only  \n\n[2]For Vivo V30 Pro (Ram 8gb | Stroge 256gb )\nPrice(Including all inclusive taxes)- 41,900 /-only \n\n[3]For Vivo Y200e 5g (Ram 8gb | Stroge 128gb )\nPrice(Including all inclusive taxes)- 19,900 /-only  \n\n[4]For Vivo T2 5g (Ram 8gb | Stroge 128gb )\nPrice(Including all inclusive taxes)- 16,900 /-only \n");
    scanf("%d", &Vc);

    printf("TO Confirm your selection enter [4] to return to the main menu enter [3]");
    scanf("%d", &sel);
    if (sel == 3)
        phone();
    else
    {
        if (Vc == 1)
            return 89900;
        else if (Vc == 2)
            return 41900;
        else if (Vc == 3)
            return 19900;
        else if (Vc == 4)
            return 16900;
    }
}
int xiomi()
{
    int Xc, sel;
    printf("\n[1]For Redmi Note 13 Pro (Ram 12gb | Stroge 512gb )\nPrice(Including all inclusive taxes)- 35,000 /-only \n\n[2]For Xiaomi 13 Pro (Ram 12gb | Stroge 256gb )\nPrice(Including all inclusive taxes)- 75,000 /-only  \n\n[3]For Xiaomi Redmi Note 11 (Ram 6gb | Stroge 128gb )\nPrice(Including all inclusive taxes)- 11,900 /-only \n\n[4]For Xiaomi 14 (Ram 12gb | Stroge 512gb )\nPrice(Including all inclusive taxes)- 69,000 /-only \n");
    scanf("%d", &Xc);

    printf("TO Confirm your selection enter [4] to return to the main menu enter [3]");
    scanf("%d", &sel);
    if (sel == 3)
        phone();
    else
    {
        if (Xc == 1)
            return 35000;
        else if (Xc == 2)
            return 75000;
        else if (Xc == 3)
            return 11900;
        else if (Xc == 4)
            return 69000;
    }
}
// function for phone
int phone()
{
    int choice, a, b, c, d;
    printf("\rShowing Top Smartphones brands\n");
    printf("press the given code value to procced\n[1]-For APPLE\n[2]-For SAMSUNG\n[3]-For Vivo\n[4]-For Xiomi\n");
    scanf("%d", &choice);

    usleep(500000);

    switch (choice)
    {
    case 1:
        printf("We Have 4 Models from the brand Apple\n");
        apple();
        break;
    case 2:
        printf("We Have 4 Models from the brand Samsung\n");
        samsung();
        break;
    case 3:
        printf("We Have 4 Models from the brand Vivo\n");
        vivo();
        break;
    case 4:
        printf("We Have 4 Models from the brand Xiomi /n");
        xiomi();
        break;
    default:
        printf("Invalid Choice !, Enter a number between '1-4'\n");
        phone();
    }
}

int boat(int Bc)
{
    if (Bc == 1)
    {
        printf("boAt Rockerz 460 with upto 30 Hours Playback\nBeast Mode & ENx Technology Bluetooth Headset (Active Black, On the Ear)\n");
        printf("Price(includiing all inclusive taxes)- Rs1,799/- Only");

        return 1799;
    }
    else if (Bc == 2)
    {
        printf("boAt Immortal IM1300 Bluetooth Gaming Headset (Black Sabre, On the Ear)");
        printf("Price(includiing all inclusive taxes)- Rs3,799/- Only");
        return 3799;
    }
}

int jbl(int Jc)
{
    int a;
    if (Jc == 1)
    {

        printf("JBL Tune 770NC Active Noise Cancelling, 70Hr Playtime\nFast Pair & Multi Connect Bluetooth Headset  (Black, On the Ear)\nPrice(includiing all inclusive taxes)- Rs7,499/- Only");
        return 7499;
    }
    else if (Jc == 2)
    {
        printf("JBL Tune 520 BT 57Hr Playtime, Pure Bass\n Multi Connect Bluetooth Headset, BT 5.3LE Bluetooth Headset (Black, On the Ear)\nPrice(includiing all inclusive taxes)- Rs3,799/- Only");
        return 3799;
    }
    else if (Jc == 3)
    {
        printf("JBL Tune 230NC TWS, Active Noise Cancellation, 40Hr Playtime, JBLApp & SpeedCharge Bluetooth Headset (Blue, True Wireless)\nPrice(including all inclusive taxes)- Rs 3,100/-\n");
        return 3100;
    }
}

int sony(int Sc)
{

    if (Sc == 1)
    {
        printf("SONY PS5 Pulse 3D Bluetooth Gaming Headset (Gray Camouflage, On the Ear)\n");
        printf("Price(includiing all inclusive taxes)- Rs7,499/- Only");
        return 7499;
    }
    else if (Sc == 2)
    {
        printf("SONY WH-XB910N with 30Hrs Battery Life, Active Noise Cancellation enabled Bluetooth Headset  (Black, On the Ear)\n");
        printf("Price(includiing all inclusive taxes)- Rs9,999/- Only");
        return 9999;
    }
    else if (Sc == 3)
    {
        printf("SONY WH1000XM4/SM Bluetooth Headset  (Silver, On the Ear)\n");
        printf("Price(includiing all inclusive taxes)- Rs19,199/- Only");
        return 19199;
    }
}
// Credits goes to Gitanshu Hatwar and Mayank Patel for drafting of this Code.
//  hope this works well.......


// This function is for Headphone
int Headphone()
{
    int Sc, Bc, Jc, Mc;
    int choice, a, b, c, d;
    printf("\rShowing Top Headphones brands\n");
    printf("press the given code value to procced\n[1]-For Boat\n[2]-For JBL\n[3]-For Sony\n[4]-For MSI\n");
    scanf("%d", &choice);
    usleep(500000);
    switch (choice)
    {
    case 1:
        printf("\tWe Have 2 Models from the brand  Boat\n");
        printf("[1]boAt Rockerz 460\n[2]boAt Immortal IM1300\n");
        scanf("%d", &Bc);
        a = boat(Bc);
        return a;
        break;
    case 2:
        printf("We Have 3 Models from the brand JBL\n");
        printf("[1]JBL Tune 770NC\n[2]JBL Tune 520 BT\n[3]JBL Tune 230NC");
        scanf("%d", &Jc);
        b = jbl(Jc);
        return b;
        break;

    case 3:
        printf("We Have 3 Models from the brand Sony\n");
        printf("[1]SONY PS5 Pulse 3D\n[2]SONY WH-XB910N\n[3]SONY WH1000XM4/SM\n");
        scanf("%d", &Sc);
        c = sony(Sc);
        return c;
        break;
    case 4:
        printf("\nWe are having a specific model from MSI\n");
        printf("[1]MSI Adjustable Microphon(Gaming)\nPrice(including all inclusive taxes)- Rs 3,100/-\n");
        scanf("%d", &Mc);
        return 3100;
        break;
    default:
        printf("Invalid Choice !, Enter a number between '1-4'\n");
        Headphone();
    }
}

int sonny()
{
    int Sc, sel;
    printf("[1]Sony Bravia 108 cm (43 inches) 4K Ultra HD\nPrice(Including all inclusive taxes)- Rs 37,999/-Only\n\n[2]Sony Bravia 164 cm (65 inches) 4K Ultra HD Smart\nPrice(Including all inclusive taxes)- Rs 97,499/-Only\n\n");
    scanf("%d", &Sc);
    printf("TO Confirm your selection enter [4] to return to the main menu enter [3]\n");
    scanf("%d", &sel);
    if (sel == 3)
        television();
    else
    {
        if (Sc == 1)
            return 37999;
        else if (Sc == 2)
            return 97499;
    }
}

int lg()
{
    int Lc, sel;
    printf("[1]LG 80 cm (32 inches) HD Ready Smart LED TV\nPrice(Including all inclusive taxes)- Rs 13,900/-Only\n\n[2]LG 139 cm (55 inches) 4K Ultra HD Smart LED TV\nPrice(Including all inclusive taxes)- Rs 44,000/-Only\n\n[3]LG 108 cm (43 inches) 4K Ultra HD Smart LED TV\nPrice(Including all inclusive taxes)- Rs 30,100/-Only\n\n");
    scanf("%d", &Lc);
    printf("TO Confirm your selection enter [4] to return to the main menu enter [3]\n");
    scanf("%d", &sel);
    if (sel == 3)
    {
        television();
    }
    else
    {
        if (Lc == 1)
            return 13900;
        else if (Lc == 2)
            return 44000;
        else if (Lc = 3)
            return 30100;
    }
}

int benq()
{
    int Bc, sel;
    printf("[1]BenQ EW3880R 38' (96 cm) WQHD+ Ultrawide 2300R Curved Monitor\nIPS, Bezel-Less, HDR, 3840 x 1600 Pixels\nPrice(Including all inclusive taxes)- Rs 67,999/-Only\n\n[2]BenQ MOBIUZ EX3210U 4K UHD 32'(81cm) 3840x2160 Pixels VESA DisplayHDR600 IPS Gaming Monito\nPrice(Including all inclusive taxes)- Rs 45,329/-Only\n\n");
    printf("[3]BenQ PD3205U 31.5'(80.01 cm) LCD 3840 x 2160 Pixels 4K Monitor\nPrice(Including all inclusive taxes)- Rs 24,000/-Only\n\n");
    scanf("%d", &Bc);
    printf("TO Confirm your selection enter [4] to return to the main menu enter [3]\n");
    scanf("%d", &sel);
    if (sel == 3)
    {
        television();
    }
    else
    {
        if (Bc == 1)
            return 67999;
        else if (Bc == 2)
            return 45329;
        else if (Bc = 3)
            return 24000;
    }
}

int samsunng()
{
    int Sac, sel;
    printf("[1]Samsung 80 cm (32 inches) HD Ready Smart LED TV\nPrice(Including all inclusive taxes)- Rs 14,000/-Only\n\n[2]Samsung 138 cm (55 Inches) Crystal Vision 4K Ultra HD Smart LED TV \nPrice(Including all inclusive taxes)- Rs 28,000/-Only\n\n[3]Samsung 108 cm (43 inches) Full HD Smart LED TV\nPrice(Including all inclusive taxes)- Rs 22,000/-Only\n\n");
    scanf("%d", &Sac);
    printf("TO Confirm your selection enter [4] to return to the main menu enter [3]\n");
    scanf("%d", &sel);
    if (sel == 3)
    {
        television();
    }
    else
    {
        if (Sac == 1)
            return 14000;
        else if (Sac == 2)
            return 28000;
        else if (Sac = 3)
            return 22000;
    }
}


// This funcion is for Televisons..

int television()
{

    int Sc, Bc, Lc, Sac;
    int choice, a, b, c, d;
    printf("\rShowing Top Television brands\n");
    printf("press the given code value to procced\n[1]-For SONY\n[2]-For BenQ\n[3]-For LG\n[4]-For Samsung\n");
    scanf("%d", &choice);

    usleep(500000);
    switch (choice)
    {
    case 1:
        printf("\nWe Have few Models from the brand  SONY\n");
        a = sonny();
        return a;
    case 2:
        printf("We Have 3 Models from the brand BenQ\n");
        b = benq();
        return b;
    case 3:
        printf("We Have 3 Models from the brand LG\n");
        c = lg();
        return c;
    case 4:
        printf("We Have 3 Models from the brand Samsung \n");
        d = samsunng();
        return d;
    default:
        printf("Invalid Choice !, Enter a number between '1-4'\n");
        television();
    }
    return 0;
}

int main()
{
    int result;
    char buy[15];
    char cop;
    int exit = 1, i;
    int l = 0, p = 0, h = 0, t = 0, num;
    float tprizee, tprize = 0, tprizeee;
    struct user u;
    int menu2, menu;

    printf("\t**** Weclome To GPN Digitals **** \n");
    usleep(50000);
    do
    {
        printf("\n What would you like to purchase\n Smartphone, Laptop, Headphone, TV : ");
        scanf("%s", &buy);
        printf("\nSearching for '%s'.....\n\n", buy);
        sleep(1);
        if (strcmpi(buy, "Laptop") == 0)
        {
            printf("\rShowing Top Laptop Brands\n");
            l = laptop();
            printf("\nTo Confirm your selection enter-[4] and Press [3]-to return in the main menu !");
            scanf("%d", &menu);
            if (menu == 3)
                laptop();
            else
                printf("Item added to the Cart...");
        }
        else if (strcmpi(buy, "Smartphone") == 0)
        {
            p = phone();
        }
        else if (strcmpi(buy, "Headphone") == 0)
        {
            h = Headphone();

            printf("\nTo Confirm your selection enter-[4] and Press [3]-to return in the main menu !\n");
            scanf("%d", &menu2);
            if (menu2 == 3)
                Headphone();
        }
        else if (strcmpi(buy, "TV") == 0)
        {
            t = television();
        }
        else
        {
            printf("Sorry Were are enable to provide you with '%s'....\n", buy);
        }

        tprize = l + p + h + t;
        tprizee = tprize * 0.10;
        tprizeee = tprize - tprizee;
        printf("\nTo continue Shopping Enter [1] and If you want to exit Enter [0]\n");
        scanf("%d", &exit);

    } while (exit == 1 || exit == 9);
    for (i = 0; i <= 100; i += 25)
    {
        printf("\rCalculating Items and Cost for the products %d%%.....", i);
        fflush(stdout); 
		// Flush the output buffer to ensure the text is displayed immediately
        usleep(300000);
        if (i == 75)
            usleep(800000);
    }
    
//Other thing like Name , coupan code are taken here
printf("\n\n*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*\n");
    printf("\nFor next Step Enter \n Your Name : ");
    scanf("%s", &u.name);

    printf("\nDo you have a coupon code\n[Y] - For Yes and [N] - For NO :\n");
    scanf(" %c", &cop);

    if (cop == 'y')
    {
        printf("\nEnter coupn Code :  ");
        scanf("%d", &num);

        if (num == 007)
        {
           
           sleep(1);
             printf("\n %s Your Grand total bill is : \n\n Rs %d.0/-\n Rs %d.0/-\n Rs %d.0/-\n+Rs %d.0/-\n____________\n Rs %.2f/-\n",u.name,l,p,h,t,tprize);
              printf("Your Discouted bill after 10%%  Coupon discount is Rs %.2f /-\n", tprizeee);

        }
        else
        {
        	sleep(1);
            printf("\nThis coupan code is invalid !!");
        }
    }
    else
    {
    	usleep(500000);
        printf("\n %s Your Grand total bill is : \n Rs %d.0/-\n Rs %d.0/-\n Rs %d.0/-\n+Rs %d.0/-\n____________\n Rs %.2f/-\n",u.name,l,p,h,t,tprize);
}
    printf("\n\n  *** Thanks for Visiting Hope you Visit again ! Mr/Mrs : %s  ***", u.name);
	printf("\n\n*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+**+*+*+*+*+*+*+\n");
    getch();
    return 0;
}
// Made By Gitanshu Hatwar - 2307029
// Mayank Patel - 2307044
// Project Name -  Electronics Retail Platform/Center"
// Course - Basics of Programming



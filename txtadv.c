#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <wchar.h>
#include <wctype.h>

#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_BOLD    "\x1b[1m"
#define ANSI_COLOR_UNDER   "\x1b[4m"
#define ANSI_COLOR_BLINK   "\x1b[5m"
#define ANSI_COLOR_REVERSE "\x1b[7m"
#define ANSI_COLOR_BLACK   "\x1b[30m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_WHITE   "\x1b[37m"
#define ANSI_BGCOLOR_BLACK "\x1b[40m"
#define ANSI_BGCOLOR_RED   "\x1b[41m"
#define ANSI_BGCOLOR_GREEN "\x1b[42m"
#define ANSI_BGCOLOR_YELLOW "\x1b[43m"
#define ANSI_BGCOLOR_BLUE  "\x1b[44m"
#define ANSI_BGCOLOR_MAGENTA "\x1b[45m"
#define ANSI_BGCOLOR_CYAN  "\x1b[46m"
#define ANSI_BGCOLOR_WHITE "\x1b[47m"




void Class();
void Weapon_class();
void Stats();
void Name();
void Race();
void Applied_stats();
void Save_check();
void Stat_check();
void Itemdrop();
void Useinv();
void Inventory();
void Map();
void Save();
void Load_Save();
void Story();
void Key();
void Commands();
void List_Commands();
void Look();
void Coordinates();
void Hud();
void Level();
void Exp();
void Randbat();
void Enemy();
void Battlesystem();
void Spells();
void Skills();
void Enemyturn();
void Credits();
void Character();
void Weapons();
void Chests();
void Heads();
void Leg();
void Unequip();
void Equip();



char playername[50];
int inventory[18];
int weapon;
int chest;
int head;
int legs;
char string[2];
char hr1[]="01";
char hr2[]="02";
char hr3[]="03";
char hr4[]="04";
char hr5[]="05";
char hr6[]="06";
char hr7[]="07";
char hr8[]="08";
char hr9[]="09";
char hr10[]="10";
char hr11[]="11";
char hr12[]="12";
char hr13[]="13";
char hr14[]="14";
char hr15[]="15";
char hr16[]="16";
char hr17[]="17";
char hr18[]="18";
char hr19[]="19";
char hr20[]="20";
char hr21[]="21";
char hr22[]="22";
char hr23[]="23";
char command[15];
char command2[15];
char enemyname[20];
char spellcmd[15];
char legend[]="legend";
char lgd[]="lgd";
char ky[]="ky";
char cmdeast[]="east";
char cmdwest[]="west";
char cmdnorth[]="north";
char cmdsouth[]="south";
char cmds[]="s";
char cmdn[]="n";
char cmde[]="e";
char cmdw[]="w";
char spark[]="spark";
char cmdmenu[]="menu";
char cmdstats[]="stats";
char cmdinventory[]="inventory";
char cmdinv[]="inv";
char cmdsave[]="save";
char cmdmap[]="map";
char cmdreturn[]="return";
char cmdquit[]="quit";
char cmdlook[]="look";
char cmdcommand[]="commands";
char cmdlist[]="list";
char cmdls[]="ls";
char cmdat[]="at";
char cmdattack[]="attack";
char cmdr[]="r";
char cmdrun[]="run";
char cmdmagic[]="magic";
char cmdmg[]="mg";
char cmdsk[]="sk";
char cmdskills[]="skills";
char cmdd[]="d";
char cmddefend[]="defend";
char cmdusinv[]="usinv";
char cmduseinventory[]="useinventory";
char cmdpo[]="po";
char cmdpotion[]="potion";
char cmdmanapotion[]="manapotion";
char cmdmapo[]="mapo";
char cmdcr[]="cr";
char cmdcredits[]="credits";
char cmdch[]="ch";
char cmdchar[]="char";
char cmdcharacter[]="character";
char cmdue[]="ue";
char cmdread[]="read";
char inspect[]="inspect";
char sparktome[]="sparktome";
char ueweapon[]="ueweapon";
char uedagger[]="uedagger";
char uedag[]="uedag";
char cmdsp[]="sp";
char cmdspells[]="spells";
char uechest[]="uechest";
char cmdeq[]="eq";
char eqweapon[]="eqweapon";
char eqdagger[]="eqdagger";
char eqdag[]="eqdag";
char eqchest[]="eqchest";
char get[]="get";
char getbook[]="getbook";
char tome[]="tome";
char race1[]="Qunari";
char race2[]="Darkspawn";
char race3[]="Elf";
char race4[]="Dwarf";
char race5[]="Kossith";
char race6[]="Human";
char class1[]="Warrior";
char class2[]="Rogue";
char class3[]="Mage";
char weapon1[]="Broadsword";
char weapon2[]="Dagger";
char weapon3[]="Beginner's Staff";
char head1[]="Soldier's Helm";
char head2[]="Studded Leather Helm";
char head3[]="Apprentice's Hood";
char chest1[]="Soldier's Breastplate";
char chest2[]="Studded Leather Armor";
char chest3[]="Apprentice's Robes";
char legs1[]="Soldier's Greaves";
char legs2[]="Studded Leather Greaves";
char legs3[]="Apprentice's Leg Wraps";
char classname[10];
char racename[10];
char specialization[]="None";
char playerweapon[35];
char playerchest[35];
char playerhead[35];
char playerlegs[35];


char *cmdp=NULL;
int namechoice=0;
int gold=0;
int race_menu=0;
int raceswitch=0;
int racechoice=0;
int class_menu=0;
int classswitch=0;
int classchoice=0;
int roll_choice=0;
int strength,
    dexterity,
    magic,
    constitution,
    willpower,
    cunning=0;
float health,
      mana,
      stamina,
      speed=0;
float tmphealth,
      tmpmana,
      maxhealth,
      maxmana;

int speechcraft,
    shortblade,
    longblade,
    staff,
    barehand,
    lightblunt,
    heavyblunt,
    armor,
    barearmor=0;
int initial_save=0;
int map[46][60][100];
int playerlocation;
int key;
int location;
int experience;
int level;
int enemytype;
int enemyhealth;
int enemymana;
int enemyattack;
int enemydefense;
int edamage;
int eattack;
int playerturn;
int damage;
int defense;
int defensive;
int attack;
int encounter;
int firststrike;
int initialmove;
int run;
int skillchoice;
int inbattle;
int expval;
int levelmsg;
int gamechoice;
int gamechoice2;
int  item1;
int i;
int spellwin;
int dagun;
int dageq;
int spelldefault;
int attackland;
int weaponin,
    chestin,
    headin,
    legsin;
int bookin;
int weaponswitch,
    chestswitch,
    headswitch,
    legswitch,
    spell_ls,
    spellchoice,
    spellnum,
    book1use,
    pickup1;



int main()
{
    Save_check();
    
    
    if (initial_save==0)
    {
        do
        {
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf(ANSI_COLOR_BOLD ANSI_COLOR_RED"                                       ,                                     \n");
            printf("                                      ,  ,      ,          ,   ,     ,       \n");
            printf("                                       ,         ,    ,            ,         \n");
            printf("                                     ,       .,,,,,.,.........,,,,,,,,,,.    \n");
            printf("                               ,,  ,,   ,,,,......,,,,,,,,,,,,,,,,,,         \n");
            printf("                                    ,,,,,,,,,,,,,,..,,,,,,.,,,,,             \n");
            printf("                                ,,,,,,,,,,,,,,,,,,,,,,,,,,,~                 \n");
            printf("                       ,     ,,,,,,,,,,,,,,,,,,,,,,,.,,,                     \n");
            printf("                        , ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,                      \n");
            printf("               ,    , ,  ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,    ,                  \n");
            printf("               ,     , ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,, ,                    \n");
            printf("                     ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,                      \n");
            printf("                ,  , ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,                   \n");
            printf("                ,,, ,,,,,,,,,,,,,,,,,:,,,,,,,,,,,,,,,,,,,,  ,,               \n");
            printf("                 ,,,,,,,,,,,,,,,,,,,:,,,,,,,,,,,,,,,,,                       \n");
            printf("             ,   ,,,,,.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,                        \n");
            printf("            ,      ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,                          \n");
            printf("               , , ,,,,,,,,,,,,,,,,,,,,,,,,,,,,                              \n");
            printf("               ,   ,,,,,,,,.:,,,,,::,,,,,,,,    ,,,,,,,                      \n");
            printf("           .    , ,,,,,,,,,...,,,,,,~+=:,,.. ,,,,,,,,,,,,                    \n");
            printf("             ,  ,,......,,.....=,,,,:=~:,,,,,,,,,,,,,,,,,,,                  \n");
            printf("      ,  ,    , , ,,..,,,,,.....:~,,,,,,,,,,,,,,,,,,,,,,,,,                  \n");
            printf("      ,   ,,      ,,,,,,,,...,,..:,,,,,,,,,,,,, ,,,  ,,,,,,,                 \n");
            printf("      ,  , ,       ,,,,,,....,...,~,,,,,,,,,, ,        ,,,,,,                \n");
            printf("      ,,  ,  ,      ,:,,,..,..,..,,,:,,,,,,,          , ,,,,       ,         \n");
            printf("         ,, ,      , ,,,.,.....:.,,,,,,:,,,             ,,,,,                \n");
            printf("     , ,,,,,,,,,     ,,..,,. ,,,,,,.,,,,:, ,             ,,,,                \n");
            printf("       ,,,,,,,,,, ~  ,.,.,..,..,,,,.,..,, ,,,,          ,,,,                 \n");
            printf("     ,,,,,  ,,,,,,,  ,..:..........,,,.,.,,,,,,,       ,,,,,,                \n");
            printf("     ,,,,     ,,,,, ,..,.........,,,,...,,,,.,,     ,,,,,,,                  \n");
            printf("     ,,,      ,,,,,,,,,.,........,,,,.,,,,, ,,,  ,,,,,,,,                    \n");
            printf("    ,,,,,      ,,,,,,,,.,,..,..,,,,,,...,   ,,  ,,,,,,                       \n");
            printf("     , ,         ,,,,,,,.....,,,,,,        ,, ,  ,,,                         \n");
            printf("    ,, ,,   , ,,,,,,,..........  ,        ,,      ,,,,,                      \n");
            printf("           ,,,        .,,, ,      ,        ,         :,,                     \n");
            printf("          ,,,,    :,,,,,,,,,                        :,,                      \n");
            printf("          ,      ,,,    ,,,,, ,                    ,,                        \n");
            printf("                ,,,                                                          \n");
            printf("                                                                             \n");
            printf(ANSI_COLOR_RESET ANSI_COLOR_UNDER".Z$ZZZOO8Z?.                                                  .$                    \n");
            printf("    ++....7O+                                                 ~Z .                  \n");
            printf("   .++.    Z?.. OODOI.   7      ZD$Z8   .OINO.  .O.  .$:..   .ZOI.  ..Z++ZI .$8DO   \n");
            printf("   .+?.     $O  I$ .$?  .$Z    8.   ?   Z. ..Z,  Z8.. Z      =.ZZ.  ,Z    7  O:     \n");
            printf("   .I?      $$  ZO .$   I.I=  $I       Z$    $I. $ZO. $    ..Z..?+. ZZ       $:     \n");
            printf(ANSI_COLOR_RESET ANSI_COLOR_YELLOW"..88Z$$$+:+"ANSI_COLOR_RESET);printf(ANSI_COLOR_UNDER"  $8 .=~?$   7Z7+  Z$..:O7Z $O.   $7  Z..Z:7.   .ID8O7+  II  "ANSI_COLOR_RESET);printf(ANSI_COLOR_YELLOW".Z$OZ7IOO,. \n"ANSI_COLOR_RESET);
            printf(ANSI_COLOR_UNDER"    =Z. ..  I,  +7 ?7. $:  ?=  I..  =  :=    I,. 8 ..$Z.   .$   .?7. $   :7  I:  .  \n");
            printf("   .=~     :.   ~:  ??7.  .,,.  7+..I   ,=~,I .. +    :    +7    ==.. +?=:$  I?~?7  \n");
            printf("  .$O,:,:~,            .        .     .          . .=.    ,:=.                      \n");
            printf(" .                                                                                  \n"ANSI_COLOR_RESET);            printf(ANSI_COLOR_BOLD ANSI_COLOR_YELLOW"                 ______ _______ __   _ _______ _______ _____ _______              \n");
            printf("                |  ____ |______ | \\  | |______ |______   |   |______              \n");
            printf("                |_____| |______ |  \\_| |______ ______| __|__ ______|              \n");
            printf("                                                                              \n");
            printf("                                                                              \n"ANSI_COLOR_RESET);
            

            
            printf(ANSI_COLOR_GREEN"\n\n\nWelcome to the world of Thedas.\n");
        printf("This is a realm in which you can explore your true self.\n"ANSI_COLOR_RESET);
        Name();
        Race();
        Class();
        Stats();
        Applied_stats();
            levelmsg=0;
            level=1;
            Save();
            printf(ANSI_COLOR_GREEN"\nNow let us begin our journey!\n"ANSI_COLOR_RESET);
            playerlocation=0;
        }
        while(initial_save!=1);
    }
    if (initial_save==1)
    {
        ANSI_BGCOLOR_WHITE;
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf(ANSI_COLOR_BOLD ANSI_COLOR_RED"                                       ,                                     \n");
        printf("                                      ,  ,      ,          ,   ,     ,       \n");
        printf("                                       ,         ,    ,            ,         \n");
        printf("                                     ,       .,,,,,.,.........,,,,,,,,,,.    \n");
        printf("                               ,,  ,,   ,,,,......,,,,,,,,,,,,,,,,,,         \n");
        printf("                                    ,,,,,,,,,,,,,,..,,,,,,.,,,,,             \n");
        printf("                                ,,,,,,,,,,,,,,,,,,,,,,,,,,,~                 \n");
        printf("                       ,     ,,,,,,,,,,,,,,,,,,,,,,,.,,,                     \n");
        printf("                        , ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,                      \n");
        printf("               ,    , ,  ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,    ,                  \n");
        printf("               ,     , ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,, ,                    \n");
        printf("                     ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,                      \n");
        printf("                ,  , ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,                   \n");
        printf("                ,,, ,,,,,,,,,,,,,,,,,:,,,,,,,,,,,,,,,,,,,,  ,,               \n");
        printf("                 ,,,,,,,,,,,,,,,,,,,:,,,,,,,,,,,,,,,,,                       \n");
        printf("             ,   ,,,,,.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,                        \n");
        printf("            ,      ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,                          \n");
        printf("               , , ,,,,,,,,,,,,,,,,,,,,,,,,,,,,                              \n");
        printf("               ,   ,,,,,,,,.:,,,,,::,,,,,,,,    ,,,,,,,                      \n");
        printf("           .    , ,,,,,,,,,...,,,,,,~+=:,,.. ,,,,,,,,,,,,                    \n");
        printf("             ,  ,,......,,.....=,,,,:=~:,,,,,,,,,,,,,,,,,,,                  \n");
        printf("      ,  ,    , , ,,..,,,,,.....:~,,,,,,,,,,,,,,,,,,,,,,,,,                  \n");
        printf("      ,   ,,      ,,,,,,,,...,,..:,,,,,,,,,,,,, ,,,  ,,,,,,,                 \n");
        printf("      ,  , ,       ,,,,,,....,...,~,,,,,,,,,, ,        ,,,,,,                \n");
        printf("      ,,  ,  ,      ,:,,,..,..,..,,,:,,,,,,,          , ,,,,       ,         \n");
        printf("         ,, ,      , ,,,.,.....:.,,,,,,:,,,             ,,,,,                \n");
        printf("     , ,,,,,,,,,     ,,..,,. ,,,,,,.,,,,:, ,             ,,,,                \n");
        printf("       ,,,,,,,,,, ~  ,.,.,..,..,,,,.,..,, ,,,,          ,,,,                 \n");
        printf("     ,,,,,  ,,,,,,,  ,..:..........,,,.,.,,,,,,,       ,,,,,,                \n");
        printf("     ,,,,     ,,,,, ,..,.........,,,,...,,,,.,,     ,,,,,,,                  \n");
        printf("     ,,,      ,,,,,,,,,.,........,,,,.,,,,, ,,,  ,,,,,,,,                    \n");
        printf("    ,,,,,      ,,,,,,,,.,,..,..,,,,,,...,   ,,  ,,,,,,                       \n");
        printf("     , ,         ,,,,,,,.....,,,,,,        ,, ,  ,,,                         \n");
        printf("    ,, ,,   , ,,,,,,,..........  ,        ,,      ,,,,,                      \n");
        printf("           ,,,        .,,, ,      ,        ,         :,,                     \n");
        printf("          ,,,,    :,,,,,,,,,                        :,,                      \n");
        printf("          ,      ,,,    ,,,,, ,                    ,,                        \n");
        printf("                ,,,                                                          \n");
        printf("                                                                             \n"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_UNDER".Z$ZZZOO8Z?.                                                  .$                    \n");
        printf("    ++....7O+                                                 ~Z .                  \n");
        printf("   .++.    Z?.. OODOI.   7      ZD$Z8   .OINO.  .O.  .$:..   .ZOI.  ..Z++ZI .$8DO   \n");
        printf("   .+?.     $O  I$ .$?  .$Z    8.   ?   Z. ..Z,  Z8.. Z      =.ZZ.  ,Z    7  O:     \n");
        printf("   .I?      $$  ZO .$   I.I=  $I       Z$    $I. $ZO. $    ..Z..?+. ZZ       $:     \n");
        printf(ANSI_COLOR_RESET ANSI_COLOR_YELLOW"..88Z$$$+:+"ANSI_COLOR_RESET);printf(ANSI_COLOR_UNDER"  $8 .=~?$   7Z7+  Z$..:O7Z $O.   $7  Z..Z:7.   .ID8O7+  II  "ANSI_COLOR_RESET);printf(ANSI_COLOR_YELLOW".Z$OZ7IOO,. \n"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_UNDER"    =Z. ..  I,  +7 ?7. $:  ?=  I..  =  :=    I,. 8 ..$Z.   .$   .?7. $   :7  I:  .  \n");
        printf("   .=~     :.   ~:  ??7.  .,,.  7+..I   ,=~,I .. +    :    +7    ==.. +?=:$  I?~?7  \n");
        printf("  .$O,:,:~,            .        .     .          . .=.    ,:=.                      \n");
        printf(" .                                                                                  \n"ANSI_COLOR_RESET);
        
        
        printf (ANSI_COLOR_BOLD ANSI_COLOR_YELLOW"                 ______ _______ __   _ _______ _______ _____ _______              \n                |  ____ |______ | \\  | |______ |______   |   |______              \n                |_____| |______ |  \\_| |______ ______| __|__ ______|              \n                                                                              \n                                                                              \n"ANSI_COLOR_RESET);
        
        
        printf(ANSI_COLOR_BLINK ANSI_COLOR_CYAN"\nType commands for a list of commands.\n\n\n"ANSI_COLOR_RESET);
        printf("1. Continue\n");
        printf("2. New Game\n");
        scanf("%d",&gamechoice);
        if(gamechoice==1)
        {
        Load_Save();
        Map();
        Look();
        }
        else if(gamechoice==2)
        {
            printf("This will ");printf(ANSI_COLOR_BLINK ANSI_COLOR_RED"ERASE "ANSI_COLOR_RESET);printf("your current save file!\n");
            printf("Are you sure you want to continue?\n1 for Yes\n2 for No\n");
            scanf("%d",&gamechoice2);
            if(gamechoice2==1)
            {
                initial_save=0;
                remove("save.txt");
                gamechoice2=0;
                gamechoice=0;
                main();
            }
            else if (gamechoice2==2)
            {
                printf("Your current save will be loaded.\n");
                main();
                
            }
        }

    }
}


void Name()
{
    printf("Please tell me your name.(First name only)\n");
    scanf("%49s",playername);
    printf("So you are known as %s Konztantien?\n1 for Yes, 2 for No\n",playername);
    scanf("%d",&namechoice);
        if (namechoice == 1)
        {
            printf("\nExcellent! We will call you by %s Konztantien.\n",playername);
            printf("\n---------------------------------------------------------------------------------------------\n");
            
        }
    
        while (namechoice != 1)
        {
            printf("\nPlease tell me your true name.\n");
            scanf("%49s",playername);
            printf("We will call you %s Konztantien.\n",playername);
            printf("\nIs %s Konztantien correct?\n1 for Yes, 2 for No\n",playername);
            scanf("%d",&namechoice);
        }
}

void Race()
{
 
 
 printf("\nIn Thedas there are many races.\n");
 printf("These races include: Qunari, Darkspawn, Elf, Dwarf, Kossith, and Human.\n");
    do
    {
        printf("\nYou can select any of these to learn more about each race: \n");
        printf("1. Qunari\n");
        printf("2. Darkspawn\n");
        printf("3. Elf\n");
        printf("4. Dwarf\n");
        printf("5. Kossith\n");
        printf("6. Human\n");
        printf("7. Decide your race\n");
        scanf("%d",&race_menu);

         switch (race_menu)
         {
             case 1:
             {
                 printf(ANSI_COLOR_GREEN"\n\nThe Qunari (literally, 'People of the Qun') is the common name for the horned race that primarily inhabits the island\nnations of Par Vollen and Seheron, and the settlements of Kont-Aar and Qundalon in northern Rivain and Anderfels respectively.\nThe Qunari homeland is located beyond the turbulent northern oceans of Thedas. However, contact has been intermittent at best and there\nis doubt as to whether a ship has made contact in many years. It is also a term that can refer to a member of any race who adheres to the\nteachings of the Qun: humans, elves and even dwarves can thus become Qunari. Humans of Rivain and elven slaves of Tevinter are especially\nsusceptible to conversion, although it is not unknown for members of other groups to embrace the Qun.Those who abandon the Qun are\nno longer considered to be Qunari. They become Vashoth, 'grey ones', though these outcasts prefer the name Tal-Vashoth, 'true grey ones'.\nMost Tal-Vashoth are former soldiers and become mercenaries, and are considered by Qunari to be worse than bas.\n\n\n"ANSI_COLOR_RESET);
                 break;
             }
                 
             case 2:
             {
                 printf(ANSI_COLOR_GREEN"\n\nThe darkspawn are a race of humanoid tainted creatures that mostly dwell in the underground of Thedas. When the darkspawn\nuncover one of the Old Gods, they expose it to the taint, changing it into an Archdemon, which then leads them in an attack against the\nsurface world called a Blight. The darkspawn are perhaps the greatest single threat to all of Thedas; they are bloodthirsty, exceptionally\nnumerous and willing to indiscriminately kill or corrupt all in their path.\n\n\n"ANSI_COLOR_RESET);
                 break;
             }
             case 3:
             {
                 printf(ANSI_COLOR_GREEN"\n\nA humanoid race, elves are typically shorter than humans and have a slender, lithe build and pointed ears. Long ago, the\nelves were the dominant race on Thedas, and they lived in a civilization based on nature and magic. After the fall of their great city\nof Arlathan to the Tevinter Imperium and the subsequent generations of slavery, the elves lost most of their cultural heritage and\nidentity. They attempted to rebuild their society in the Dales, only to watch that fall to the Chantry. Since then, their few numbers\nhave been scattered all over Thedas in either forests as primitive nomads or in cities as impoverished outcasts, with little hope of\nrecovery for their culture or their race. They're now a people associated with poverty, crime, barbarism, and are often used as scapegoats\nfor humanity's difficulties. Humans use the term 'knife ears' as a racial slur. Though most of the elven language has been lost,\nthey once referred to themselves as 'elvhen' or 'the people'.\n\n\n"ANSI_COLOR_RESET);
                 break;
             }
             case 4:
             {
                 printf(ANSI_COLOR_GREEN"\n\nThe Dwarves, or Dwarva, as the dwarves refer to themselves are one of the major humanoid races of the Dragon Age setting.\nStrong, stocky, and shorter than any other humanoid race, the dwarves are skilled builders and boast a long tradition of courage\nand martial skill that has served them well in their millennia-long battle against the darkspawn. They are a race in decline, once boasting\na huge, great empire spanning across vast underground networks of twelve great great thaigs that spanned the breadth of Thedas.\nHowever their world was all but destroyed during the First Blight. In addition to the loss of thaigs and the abandonment of much of\nthe dwarves' territory of the Deep Roads to darkspawn incursion, dwarves are known to be increasingly infertile due to their proximity\nto the darkspawn, a situation which has given rise to anxiety for the future of the race, as well as the invention of noble hunters\nto bolster the children born to noble houses. Unlike elves and humans, dwarves do not naturally enter the Fade, as they do not dream and\nlack magical ability. However, they are not completely barred and may enter it in exceptional circumstances. This is reflected\nin their resistance to magic, and accounts for their high tolerance to lyrium exposure. Dwarves who live on the surface for a long time\nor who were born there) appear to gradually lose this resistance - however, there is still no recorded exception to their inability\nto learn spellcasting. A unique dwarven ability is 'Stone Sense', a talent for subterranean navigation derived from the race's progenitor,\nthe Stone. However in the games, this talent is not implemented neither as a game mechanic nor as a plot device.\nThe stone sense of dwarves as well as their magic resistance is slowly lost the longer they are on the surface.\n\n\n"ANSI_COLOR_RESET);
                 break;
             }
             case 5:
             {
                 printf(ANSI_COLOR_GREEN"\n\nKossith is the name of the Qunari before the foundation of the Qun. It may refer to the actual name of the race, or the\nname of the culture from which the current-day Qunari hail. It is also unknown if the term refers to the one specific race or a group of\nraces, as little is known about the kossith. Most of the kossith converted to the teachings of the Qun sometime before 6:30 Storm and\nare since then known as Qunari. Prior to that, they prayed to animist gods, however when Qun became law, the temples that kossith built\nto honor their gods were destroyed and the priests were reeducated or driven into exile.\n\n\n"ANSI_COLOR_RESET);
                 break;
             }
             case 6:
             {
                 printf(ANSI_COLOR_GREEN"\n\nHumans are the most numerous, yet also the most contentious of all the races of Thedas. Only four times have they\never united beneath a single banner, the last being centuries ago. The monotheistic faith of the Chant of Light plays a major role in human society.\nThe majority of humanity in Thedas descended from numerous human tribes.\n\n\n"ANSI_COLOR_RESET);
                 break;
             }
         }
 }
    while (race_menu != 7);
    
    if (race_menu == 7)
    {
            printf("\nWhich race are you?\n");
            printf("1. Qunari\n");
            printf("2. Darkspawn\n");
            printf("3. Elf\n");
            printf("4. Dwarf\n");
            printf("5. Kossith\n");
            printf("6. Human\n");
            scanf("%d",&racechoice);
            if (racechoice != 0)
            {
                
                switch(racechoice)
                {
                    case 1:
                    {
                        printf("\nSo you are a Qunari?\n1 for Yes, 2 for No\n");
                        scanf("%d",&raceswitch);
                        if(raceswitch==1)
                        {
                            printf("Please type: Qunari\n");scanf("%s",racename);
                            printf("\nExcellent! We will know you as Qunari.\n");                            printf("\n---------------------------------------------------------------------------------------------\n");
                        }
                        break;
                        
                    }
                    case 2:
                    {
                        printf("\nSo you are a Darkspawn?\n1 for Yes, 2 for No\n");
                        scanf("%d",&raceswitch);
                        if(raceswitch==1)
                        {
                            printf("Please type: Darkspawn\n");scanf("%s",racename);
                            printf("\nExcellent! We will know you as Darkspawn.\n");
                            printf("\n---------------------------------------------------------------------------------------------\n");
                        }
                        break;
                    }
                    case 3:
                    {
                        printf("\nSo you are an Elf\n1 for Yes, 2 for No\n");
                        scanf("%d",&raceswitch);
                        if(raceswitch==1)
                        {
                            printf("Please type: Elf\n");scanf("%s",racename);
                            printf("\nExcellent! We will know you as an Elf.\n");
                            printf("\n---------------------------------------------------------------------------------------------\n");
                        }
                        break;
                    }
                    case 4:
                    {
                        printf("\nSo you are a Dwarf?\n1 for Yes, 2 for No\n");
                        scanf("%d",&raceswitch);
                        if(raceswitch==1)
                        {
                            printf("Please type: Dwarf\n");scanf("%s",racename);
                            printf("\nExcellent! We will know you as a Dwarf.\n");
                            printf("\n---------------------------------------------------------------------------------------------\n");
                        }
                        break;
                    }
                    case 5:
                    {
                        printf("\nSo you are a Kossith?\n1 for Yes, 2 for No\n");
                        scanf("%d",&raceswitch);
                        if(raceswitch==1)
                        {
                            printf("Please type: Kossith\n");scanf("%s",racename);
                            printf("\nExcellent! We will know you as Kossith.\n");                            printf("\n---------------------------------------------------------------------------------------------\n");
                        }
                        break;
                    }
                    case 6:
                    {
                        printf("\nSo you are a Human?\n1 for Yes, 2 for No\n");
                        scanf("%d",&raceswitch);
                        if(raceswitch==1)
                        {
                            printf("Please type: Human\n");scanf("%s",racename);
                            printf("\nExcellent! We will know you as a Human.\n");
                            printf("\n---------------------------------------------------------------------------------------------\n");
                        }
                        break;
                    }
                }
            }
        
        while (raceswitch != 1)
        {
            printf("Which race are you?\n");
            printf("1. Qunari\n");
            printf("2. Darkspawn\n");
            printf("3. Elf\n");
            printf("4. Dwarf\n");
            printf("5. Kossith\n");
            printf("6. Human\n");
            scanf("%d",&racechoice);
            if (racechoice != 0)
            {
                
                switch(racechoice)
                {
                    case 1:
                    {
                        printf("\nSo you are a Qunari?\n1 for Yes, 2 for No\n");
                        scanf("%d",&raceswitch);
                        if(raceswitch==1)
                        {
                            printf("Please type: Qunari\n");scanf("%s",racename);
                            printf("\nExcellent! We will know you as Qunari.\n");
                            printf("\n---------------------------------------------------------------------------------------------\n");
                        }
                        break;
                        
                    }
                    case 2:
                    {
                        printf("\nSo you are a Darkspawn?\n1 for Yes, 2 for No\n");
                        scanf("%d",&raceswitch);
                        if(raceswitch==1)
                        {
                            printf("Please type: Darkspawn\n");scanf("%s",racename);
                            printf("\nExcellent! We will know you as Darkspawn.\n");

                            printf("\n---------------------------------------------------------------------------------------------\n");
                        }
                        break;
                    }
                    case 3:
                    {
                        printf("\nSo you are an Elf\n1 for Yes, 2 for No\n");
                        scanf("%d",&raceswitch);
                        if(raceswitch==1)
                        {
                            printf("Please type: Elf\n");scanf("%s",racename);
                            printf("\nExcellent! We will know you as an Elf.\n");
                            printf("\n---------------------------------------------------------------------------------------------\n");
                        }
                        break;
                    }
                    case 4:
                    {
                        printf("\nSo you are a Dwarf?\n1 for Yes, 2 for No\n");
                        scanf("%d",&raceswitch);
                        if(raceswitch==1)
                        {
                            printf("Please type: Dwarf\n");scanf("%s",racename);
                            printf("\nExcellent! We will know you as a Dwarf.\n");
                            printf("\n---------------------------------------------------------------------------------------------\n");
                        }
                        break;
                    }
                    case 5:
                    {
                        printf("\nSo you are a Kossith?\n1 for Yes, 2 for No\n");
                        scanf("%d",&raceswitch);
                        if(raceswitch==1)
                        {
                            printf("Please type: Kossith\n");scanf("%s",racename);
                            printf("\nExcellent! We will know you as Kossith.\n");                             printf("\n---------------------------------------------------------------------------------------------\n");
                        }
                        break;
                    }
                    case 6:
                    {
                        printf("\nSo you are a Human?\n1 for Yes, 2 for No\n");
                        scanf("%d",&raceswitch);
                        if(raceswitch==1)
                        {
                            printf("Please type: Human\n");scanf("%s",racename);
                            printf("\nExcellent! We will know you as a Human.\n");
                            printf("\n---------------------------------------------------------------------------------------------\n");
                        }
                        break;
                    }
                }
            }

    
        
            if (raceswitch == 1 && racechoice == 1)
            {
                printf("Please type: Qunari\n");scanf("%s",racename);
                printf("\nExcellent! We will know you as Qunari.\n");
                printf("\n---------------------------------------------------------------------------------------------\n");
                
            }
            if (raceswitch == 1 && racechoice == 2)
            {
                printf("Please type: Darkspawn\n");scanf("%s",racename);
                printf("\nExcellent! We will know you as Darkspawn.\n");

                printf("\n---------------------------------------------------------------------------------------------\n");
            
            }
            if (raceswitch == 1 && racechoice == 3)
            {
                printf("Please type: Elf\n");scanf("%s",racename);
                printf("\nExcellent! We will know you as an Elf.\n");
                printf("\n---------------------------------------------------------------------------------------------\n");
            
            }
            if (raceswitch == 1 && racechoice == 4)
            {
                printf("Please type: Dwarf\n");scanf("%s",racename);
                printf("\nExcellent! We will know you as a Dwarf.\n");                printf("\n---------------------------------------------------------------------------------------------\n");
            
            }
            if (raceswitch == 1 && racechoice == 5)
            {
                printf("Please type: Kossith\n");scanf("%s",racename);
                printf("\nExcellent! We will know you as Kossith.\n");
                printf("\n---------------------------------------------------------------------------------------------\n");
            
            }
            if (raceswitch == 1 && racechoice == 6)
            {
                printf("Please type: Human\n");scanf("%s",racename);
                printf("\nExcellent! We will know you as a Human.\n");

                printf("\n---------------------------------------------------------------------------------------------\n");
            
            }
                
        }
    }
}



void Stats()
{
 do
 {
     printf(ANSI_COLOR_CYAN"\nYour starting base stats are: \n");
     strength=rand()%6+1;
     dexterity=rand()%6+1;
     magic=rand()%6+1;
     constitution=rand()%6+1;
     willpower=rand()%6+1;
     cunning=rand()%6+1;
     printf("Strength:       %d\n",strength);
     printf("Dexterity:      %d\n",dexterity);
     printf("Magic:          %d\n",magic);
     printf("Constitution:   %d\n",constitution);
     printf("Willpower:      %d\n",willpower);
     printf("Cunning:        %d\n"ANSI_COLOR_RESET,cunning);
     printf(ANSI_COLOR_MAGENTA"\nDo you accept these stats?\n1 for Yes\n2 for No\n"ANSI_COLOR_RESET);
     scanf("%d",&roll_choice);
 }
 while(roll_choice != 1);
 if (roll_choice == 1)
     {
         printf("\nExcellent! Each race has certain stat bonuses as do each class. Now we will apply your bonuses\n");
         printf("\n---------------------------------------------------------------------------------------------\n");
         
         if (racechoice==1)
         {
             printf("\nQunari get an additional 2 points to their strength.\n");
             strength+=2;
         }
         if (racechoice==2)
         {
             printf("\nDarkspawn get an additional 3 points to their strength.\n");
             strength+=3;
         }

         if (racechoice==3)
         {
             printf("\nElves get an additional 4 points to their cunning.\n");
             cunning+=4;
         }

         if (racechoice==4)
         {
             printf("\nDwarves get an additional 2 points to their consitution.\n");
             constitution+=2;
         }

         if (racechoice==5)
         {
             printf("\nKossith get an additional 2 points to their willpower.\n");
             willpower+=2;
         }

         if (racechoice==6)
         {
             printf("\nHumans get an additional 4 points to their magic.\n");
             magic+=4;
         }

         if (classchoice==1)
         {
             printf("\nWarriors get an additional 3 points to their strength and stamina.\n");
             strength+=3;
             stamina+=3;
         }

         if (classchoice==2)
         {
             printf("\nRogues get an additional 3 points to their cunning.\n");
             cunning+=3;
         }

         if (classchoice==3)
         {
             printf("\nMages get an additional 3 points to their magic.\n");
             magic+=3;
         }
         printf(ANSI_COLOR_BLUE"\nYour final base stats are:\n");
         printf("Strength:       %d\n",strength);
         printf("Dexterity:      %d\n",dexterity);
         printf("Magic:          %d\n",magic);
         printf("Constitution:   %d\n",constitution);
         printf("Willpower:      %d\n",willpower);
         printf("Cunning:        %d\n",cunning);
         printf(ANSI_COLOR_WHITE"\n---------------------------------------------------------------------------------------------\n"ANSI_COLOR_RESET);
     }


 
 
}

void Applied_stats()
{
    experience=100;
    health=((dexterity*2)+(constitution/1.5)+(strength/1.5))*6;
    mana=((magic/2)+(willpower/2))*3;
    stamina=((constitution/4)+(strength/3)+(cunning/2))*2;
    speed=((constitution/1.5)+(strength/1.5)+(cunning/3))*1.5;
    printf(ANSI_COLOR_BLUE"\nYour starting Health is:    %.2f\n",health);
    printf("Your starting Mana is:      %.2f\n",mana);
    printf("Your starting Stamina is:   %.2f\n",stamina);
    printf("Your starting Speed is:     %.2f\n",speed);
    printf(ANSI_COLOR_WHITE"\n---------------------------------------------------------------------------------------------\n"ANSI_COLOR_RESET);
    maxhealth=health;
    maxmana=mana;
    levelmsg=0;
}


void Class()
{
 
    printf("\nIn Thedas, there are also many classes.\n");
    printf("The base classes include: Warrior, Rogue, and Mage.\n");
    printf("These three base classes are accessible to all races with one exception - Dwarves.\n");
    printf("Dwarves are magically inept, and therefore they cannot become mages.");
    printf("Each of these three classes further divide into specializations.\n");
    printf("You will be able to specialize later in your journey.\n");
    do
    {
         printf("\nYou can select any of these to learn more about each class: \n");
         printf("1. Warrior\n");
         printf("2. Rogue\n");
         printf("3. Mage\n");
         printf("4. Decide your class\n");
         scanf("%d",&class_menu);
 
         switch (class_menu)
            {
                case 1:
                {
                    printf(ANSI_COLOR_GREEN"\nWarriors are the front-line fighters, the backbone of any party under assault.\nThey rely on melee and ranged weapons, supplemented by powerful special abilities that draw from deep\nreserves of stamina. They can withstand and deliver a great deal of punishment, and have a strong\nunderstanding of tactics. All races can play as a warrior.\nClass specific talents emphasize on the\nwarrior's role at the front. Unlike the rogue (whose weapon talents are limited to Dual Weapon and archery\nand the mage (who is unable to specialize in weapons at all and may not perform well without sacrificing\nattribute points, unless specializing as an arcane warrior), warriors have access to\nall weapon talents which are categorized by weapon styles:\nDual Weapon\nArchery\nWeapon and Shield\nTwo-Handed\n\n"ANSI_COLOR_RESET);
                    printf(ANSI_COLOR_YELLOW"Specializations:\nBeserker\nBerserkers are fierce warriors who harness their inner rage to gain strength and health at a cost to finesse fighting.\n\nChampion\nChampions are warriors who are confident and skilled at leadership. Because of this, they gain talents that inspire their allies and terrify their foes.\n\nReaver\nReavers are terrifying fighters who are driven by the pain and fear of their enemies. They are created through an unknown method of ritual involving the person intending to become areaver to drink dragon blood—similar to the Grey Warden Joining ceremony.\n\nTemplar\nTemplars are a militaristic branch of the Chantry charged with policing mages. Because of this, they possess talents designed to withstand and dispel magic.\n\nSpirit Warrior\nSpirit Warriors are not unlike Spirit Healers or Arcane Warriors, but are instead fighters who have bargained with spirits for a potent connection to the Fade. They can channel magical energies into their attacks and manifest magical explosions.\n\nGuardian\nGuardians are the defensive ideal, with talents that allow them to suffer damage in place of the party, increase the party's defenses and draw attention from party members.\n\n\n"ANSI_COLOR_RESET);
                    break;
                }
 
                case 2:
                {
                    printf(ANSI_COLOR_GREEN"\nRogues are crafty combatants who succeed in battle by combining speed, subterfuge,\nand a wide range of abilities to bring their opponents down in unexpected ways, sometimes before the\nenemy even perceives danger. Rogues can pick locks with great skill, incapacitate enemies with ease,\nor sneak up on targets to deliver a devious and crippling backstab. Dexterity and cunning are essential\nfor a rogue, as many rogue and rogue specialization abilities rely on high cunning and dexterity.\nUnlike the warrior (who can specialize in any weapon type) or the mage (who is unable to specialize\nin weapon types), the rogue can place talent points into two weapon types:\nDual Weapon\nArchery\nWhile all classes receive a bonus to attack and critical hit chance attacking from behind, backstabs\nare a specific, rogue-only type of attack that occurs whenever the rogue is flanking a foe and said\nfoe does not have immunity (such as from Shield Tactics). When in such a position, the rogue gets\na bonus to attack and every successful hit will deal critical damage, although will not count as a\ncritical hit for the purposes of shattering. Backstabs cannot become critical hits. Rogues also generate \n20%% less threat.\n\n"ANSI_COLOR_RESET);
                    printf(ANSI_COLOR_YELLOW"Specializations:\nAssassin\nThe first Rogue specialization, Assassin, comes with an immediate bonus of +2 to Dexterity and +2.5%% to melee critical chance. Assassins are skilled killers, relying on stealth and poisons rather than brute strength in order to take down their enemies.\n\nBard\nThe Bard is a master of manipulation, using their songs to inspire their comrades and confuse their enemies. Becoming a Bard grants a +2 bonus to Willpower and a +2 to Cunning.\n\nRanger\nRangers are masters of the wilds, capable of summoning animal companions to fight by their sides. They receive a bonus of +1 to Constitution and +5 to Nature Resistance.\nDuelist\nDuelists specialize in light armor and weapons, and are quite skilled at wielding two weapons simultaneously. Their talents grant bonuses to attack and defense that counteract theirweak armor, and they move with a skill and grace unrivaled by other warriors. Becoming a Duelist grants a bonus of +2 to Dexterity and +1 to damage.\n\nShadow\nShadows are self-taught elite rogues, masters of concealment and ambush. They strike from darkness, employing personal decoys and hallucinogenic poisons to distract enemies before sliding a dagger between their ribs. They are not organisation but rather freelancers.\n\nLegionnaire Scout\nMost tales of the dwarven Legion of the Dead are likely minstrels' fabrications, but the trail of darkspawn corpses that the Legion leaves behind proves the efficacy of their training. Legionnaire scouts often travel ahead of their companions, and have consequently become renowned for unusual hardiness, able to survive battles that would kill any other rogue.\n\n\n"ANSI_COLOR_RESET);
                    break;
                }
                case 3:
                {
                    printf(ANSI_COLOR_GREEN"\nA mage is able to interact with the forces of magic, using different elemental powers.\nIn order to qualify to be a mage, one must be either an elf or a human and choose the Mage Origin.\nDwarves cannot play as a mage, since they are unable to connect with the Fade and therefore\nare unable to control the forces of magic. Most elven mages in Origins are assumed to have come\nfrom an alienage, with the notable exception of an elven magi Warden, who might have come from Lothering.\nWhile Dalish elves have magic users in their clans, they are rarely, if ever, sent to the Circle.\nAs a class, mages focus on spells in order to deliver damage and debilitate their enemies, as\nwell as support and heal their allies. In addition to individual spells, mages have the ability to\ncast multiple spells in a row resulting in a spell combination. For example, casting Grease, a\nspell which will cover the ground in a layer of slippery grease, and then casting Fireball onto the greased\nfloor will result in the grease catching on fire, burning anybody caught in the area in a giant inferno.\nTo put out the fire, Blizzard may be used. The default weapon of mages is the staff, which deals\nranged damage and never misses the target but cannot deal critical damage. Mages may also use any armor\nor weapon, provided they meet the minimum strength or dexterity requirements. However, wearing armor\nmakes spells cost more mana, and boosting strength or dexterity to use other weapons weakens\nthe mage's spellcasting power. The Arcane Warrior specialization enables you to counteract most of\nthese effects.\n\n"ANSI_COLOR_RESET);
                    printf(ANSI_COLOR_YELLOW"Specializations:\nArcane Warrior\nArcane Warriors are mages who have channeled magic into their bodies, making them more effective fighters.\n\nBlood Mage\nBlood Mages pursue magic that grants them great power by using blood to fuel their spells.\n\nShapeshifter\nShapeshifters are mages who have learned to alter the form of their bodies.\n\nSpirit Healer\nSpirit Healers draw on the help of the benevolent spirits of the Fade to focus on healing their allies.\n\nBattlemage\nBattlemages utilize powers that enhance self-preservation and control of the elements.\n\nKeeper\nKeepers are mages who harness the power of nature as taught by the Dalish elves.\n\n\n"ANSI_COLOR_RESET);
                    break;
                }
            }
        }
   while (class_menu != 4);
 
   if (class_menu == 4)
    {
        printf("\nWhich class are you?\n");
        printf("1. Warrior\n");
        printf("2. Rogue\n");
        printf("3. Mage\n");
        scanf("%d",&classchoice);
        if (classchoice != 0)
            {
 
                switch(classchoice)
                    {
                        case 1:
                        {
                            printf("\nSo you are a Warrior?\n1 for Yes, 2 for No\n");
                            scanf("%d",&classswitch);
                            if (classswitch == 1 && classchoice == 1)
                            {
                                printf("Please type: Warrior\n");scanf("%s",classname);
                                printf("\nExcellent! We will know you as a Warrior.\n");
                                printf("\n---------------------------------------------------------------------------------------------\n");
                                weapon=1;
                                chest=1;
                                head=1;
                                legs=1;
                                Weapons();
                                Heads();
                                Chests();
                                Leg();
                                return;
                            }
                            break;
                        }
                        case 2:
                        {
                            printf("\nSo you are a Rogue?\n1 for Yes, 2 for No\n");
                            scanf("%d",&classswitch);
                            if (classswitch == 1 && classchoice == 2)
                            {
                                printf("Please type: Rogue\n");scanf("%s",classname);
                                printf("\nExcellent! We will know you as a Rogue.\n");
                                printf("\n---------------------------------------------------------------------------------------------\n");
                                weapon=2;
                                chest=2;
                                head=2;
                                legs=2;
                                Weapons();
                                Heads();
                                Chests();
                                Leg();
                                return;
                            }

                            break;
                        }
                        case 3:
                        {
                            printf("\nSo you are a Mage\n1 for Yes, 2 for No\n");
                            scanf("%d",&classswitch);
                            if (classswitch == 1 && classchoice == 3 && racechoice != 4)
                            {
                                printf("\nYou cannot be a mage because you are a Dwarf.\n");
                                printf("Please choose another class.\n");
                                classswitch=0;
                                break;
                            }
                    
                                if (classswitch == 1 && classchoice == 3 && racechoice != 4)
                                {
                                    printf("Please type: Mage\n");scanf("%s",classname);
                                    printf("\nExcellent! We will know you as a Mage.\n");
                                    printf("\n---------------------------------------------------------------------------------------------\n");
                                    weapon=3;
                                    chest=3;
                                    head=3;
                                    legs=3;
                                    Weapons();
                                    Heads();
                                    Chests();
                                    Leg();
                                    return;

                                }

                            break;
                            }
                        }
                    }
            }
 
        while (classswitch != 1)
            {
                printf("\nWhich class are you?\n");
                printf("1. Warrior\n");
                printf("2. Rogue\n");
                printf("3. Mage\n");
                scanf("%d",&classchoice);
                if (classchoice != 0)
                    {
 
                        switch(classchoice)
                            {
                                case 1:
                                {
                                    printf("\nSo you are a Warrior?\n1 for Yes, 2 for No\n");
                                    scanf("%d",&classswitch);
                                    if (classswitch == 1 && classchoice == 1)
                                    {
                                        printf("Please type: Warrior\n");scanf("%s",classname);
                                        printf("\nExcellent! We will know you as a Warrior.\n");

                                        printf("\n---------------------------------------------------------------------------------------------\n");
                                        weapon=1;
                                        chest=1;
                                        head=1;
                                        legs=1;
                                        Weapons();
                                        Heads();
                                        Chests();
                                        Leg();
                                        return;

                                    }

                                    break;
                                }
                                case 2:
                                {
                                    printf("\nSo you are a Rogue?\n1 for Yes, 2 for No\n");
                                    scanf("%d",&classswitch);
                                    if(classswitch==1)
                                    {
                                        printf("Please type: Rogue\n");scanf("%s",classname);
                                        printf("\nExcellent! We will know you as a Rogue.\n");printf("\n---------------------------------------------------------------------------------------------\n");
                                        weapon=2;
                                        chest=2;
                                        head=2;
                                        legs=2;
                                        Weapons();
                                        Heads();
                                        Chests();
                                        Leg();
                                        return;

                                    }

                                    break;
                                }
                                case 3:
                                {
                                    printf("\nSo you are a Mage\n1 for Yes, 2 for No\n");
                                    scanf("%d",&classswitch);
                                    if(classswitch==1&& classchoice == 3 && racechoice != 4)
                                    {
                                        printf("Please type: Mage\n");scanf("%s",classname);
                                        printf("\nExcellent! We will know you as a Mage.\n");                                        printf("\n---------------------------------------------------------------------------------------------\n");
                                        weapon=3;
                                        chest=3;
                                        head=3;
                                        legs=3;
                                        Weapons();
                                        Heads();
                                        Chests();
                                        Leg();
                                        return;

                                    }
                                    if (classswitch == 1 && classchoice ==3 && racechoice == 4)
                                    {
                                        printf("\nYou cannot be a Mage.\n");
                                        printf("Please choose another class.\n");
                                        classswitch=2;
                                    }


                                    break;
                                }
                            }
                    }
 
 
 
                if (classswitch == 1 && classchoice == 1)
                    {
                        printf("Please type: Warrior\n");scanf("%s",classname);
                        printf("\nExcellent! We will know you as a Warrior.\n");
                        printf("\n---------------------------------------------------------------------------------------------\n");
                        weapon=1;
                        chest=1;
                        head=1;
                        legs=1;
                        Weapons();
                        Heads();
                        Chests();
                        Leg();
                        return;
                        
 
                    }
                if (classswitch == 1 && classchoice == 2)
                    {
                        printf("Please type: Rogue\n");scanf("%s",classname);
                        printf("\nExcellent! We will know you as a Rogue.\n");
                        printf("\n---------------------------------------------------------------------------------------------\n");
                        weapon=2;
                        chest=2;
                        head=2;
                        legs=2;
                        Weapons();
                        Heads();
                        Chests();
                        Leg();
                        return;

 
                    }
                if (classswitch == 1 && classchoice == 3 && racechoice != 4)
                    {
                        printf("Please type: Mage\n");scanf("%s",classname);
                        printf("\nExcellent! We will know you as a Mage.\n");
                        printf("\n---------------------------------------------------------------------------------------------\n");
                        weapon=3;
                        chest=3;
                        head=3;
                        legs=3;
                        Weapons();
                        Heads();
                        Chests();
                        Leg();
                        return;
                    }
                if (classswitch == 1 && classchoice ==3 && racechoice == 4)
                    {
                        printf("\nYou cannot be a Mage.\n");
                        printf("Please choose another class.\n");
                        classswitch=2;
                    }
            
    }
   
 }





void Save_check()
{
    
    FILE *f = fopen("save.txt","r");
    if( f )
    {
        initial_save=1;
        fclose(f);
        return;
    }
    else
    {
        initial_save=0;
        return;
    }
    
}

void Stat_check()
{
    printf(ANSI_COLOR_GREEN"%s              "ANSI_COLOR_RESET,playername);
    printf(ANSI_COLOR_CYAN"%s             "ANSI_COLOR_RESET,racename);
    printf(ANSI_COLOR_MAGENTA"%s          "ANSI_COLOR_RESET,classname);
    printf(ANSI_COLOR_BLUE"Level: %d\n"ANSI_COLOR_RESET,level);
    printf(ANSI_COLOR_CYAN"------------------------------------------------------------\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_WHITE"Exp: %d            ",experience);
    printf("Strength: %d     Dexterity: %d   Magic: %d\nConstitution: %d     Willpower: %d    Cunning: %d    Speed: %.1f\n",strength,dexterity,magic,constitution,willpower,cunning,speed);printf(ANSI_COLOR_RED"Health: %.1f",health);printf(ANSI_COLOR_BLUE"        Mana: %.1f",maxmana);printf(ANSI_COLOR_YELLOW"      Stamina: %.1f\n\n\n",stamina);
    
}

void Inventory()
{
    i=0;
    for(i=1;i<16;i++)
    {
        if(inventory[i]==0)
        {
            printf("Inventory place [%d] is empty\n",i);
        }
       if(inventory[i]==1)
        {
            printf("Inventory place [%d] contains: Potion\n",i);
        }
      if (inventory[i]==2)
        {
            printf("Inventory place [%d] contains: Mana Potion\n",i);
        }
      if (inventory[i]==9)
      {
          if(weaponin==1)
          {
              printf("Inventory place [%d] contains: Broadsword\n",i);
          }
      }
        if (inventory[i]==10)
        {
            if(weaponin==2)
            {
                printf("Inventory place [%d] contains: Dagger\n",i);
            }
        }
        if (inventory[i]==11)
        {
            if(weaponin==3)
            {
                printf("Inventory place [%d] contains: Beginner's Staff\n",i);
            }
        }
        if (inventory[i]==12)
        {
            if(chestin==1)
            {
                printf("Inventory place [%d] contains: Soldier's Breastplate\n",i);
            }
        }
        if (inventory[i]==13)
        {
            if(chestin==2)
            {
                printf("Inventory place [%d] contains: Studded Leather Armor\n",i);
            }
        }
        if (inventory[i]==14)
        {
            if(chestin==3)
            {
                printf("Inventory place [%d] contains: Apprentice's Robes\n",i);
            }
        }
        if (inventory[i]==20)
        {
            
                printf("Inventory place [%d] contains: Spark Tome\n",i);
            
        }


    }
    
}

void Useinv()
{
    int poswitch=0;
    int bookswitch=0;
    int maposwitch=0;
    Inventory();
    printf("\n\nWhich item would you like to use?\n");
    Hud(); scanf("%s",command);
    getchar();
    if(strcmp(command,cmdpotion)==0||strcmp(command,cmdpo)==0)
    {
        printf("\n");
        for(i=0;i<16;i++)
        {
            if(inventory[i]==1&&poswitch==0)
            {
                printf("You use a potion!\n");
                printf("Your health is restored by 20 points!\n\n");
                inventory[i]=0;
                if(health!=maxhealth)
                {
                health+=20;
                  if(health>maxhealth)
                  {
                      health=maxhealth;
                  }
                }
               poswitch=1;
            }
        }
        if(inventory[i]==0&&poswitch!=1)
        {
            printf("You do not currently possess any potions.\n\n");
            return;
        }

        Map();
        Look();
        Commands();
        poswitch=0;
            
    }
    if(strcmp(command,cmdmapo)==0||strcmp(command,cmdmanapotion)==0)
    {
        printf("\n");
        for(i=0;i<16;i++)
        {
            if(inventory[i]==2&&maposwitch==0)
            {
                printf("You use a mana potion!\n");
                printf("Your mana is restored by 10 points!\n\n");
                inventory[i]=0;
                if(tmpmana!=maxmana)
                {
                    tmpmana+=10;
                    if(tmpmana>maxmana)
                    {
                        
                        tmpmana=maxmana;
                    }
                    
                }
                mana=tmpmana;
                maposwitch=1;

                
            }
        }
        if(inventory[i]==0&&maposwitch!=1)
        {
            printf("You do not currently possess any manapotions.\n\n");
            return;
        }
        
        Map();
        Look();
        Commands();
        poswitch=0;
    }
    if((strcmp(command,cmdread)==0)||(strcmp(command,sparktome)==0)||(strcmp(command,tome)==0))
    {
        printf("\n");
        for(i=0;i<16;i++)
        {
            if(inventory[i]==20)
            {
                if(spellnum==0)
                {
                book1use=1;
                spellnum=1;
                printf("You learn the spell: Spark!\n");
                inventory[i]=0;
                bookswitch=1;
                spellnum=1;
                spell_ls=1;
                return;
                }
                else if(spellnum==1)
                {
                    printf("You already know that spell!\n");
                    return;
                }
            }
        }
        if(inventory[i]==0&&bookswitch!=1)
        {
            printf("You do not currently possess any books.\n\n");
            return;
        }

    }

}

void Weapons()
{
  if(weapon==1&&weaponswitch!=1)
  {
      sprintf(playerweapon,"Broadsword");
      strength+=2;
      weaponswitch=1;

      return;
  }
  if(weapon==2&&weaponswitch!=1)
  {
      sprintf(playerweapon,"Dagger");
      strength+=1;
      weaponswitch=1;

      return;
  }
  if(weapon==3&&weaponswitch!=1)
  {
      sprintf(playerweapon,"Beginner's_Staff");
      strength+=.5;
      weaponswitch=1;
      return;
  }
}

void Chests()
{
    if(chest==1&&chestswitch!=1)
    {
        sprintf(playerchest,"Soldier's_Breastplate");
        constitution+=.5;
        chestswitch=1;
        return;
    }
    if(chest==2&&chestswitch!=1)
    {
        sprintf(playerchest,"Studded_Leather_Armor");
        constitution+=.5;
        chestswitch=1;
        return;
    }
    if(chest==3&&chestswitch!=1)
    {
        sprintf(playerchest,"Apprentice's_Robes");
        constitution+=.5;
        chestswitch=1;
        return;
    }

}

void Heads()
{
    if(head==1&&headswitch!=1)
    {
        sprintf(playerhead,"Soldier's_Helm");
        constitution+=.5;
        headswitch=1;

        return;

    }
    if(head==2&&headswitch!=1)
    {
        sprintf(playerhead,"Studded_Leather_Helm");
        constitution+=.5;
        headswitch=1;

        return;

    }
    if(head==3&&headswitch!=1)
    {
        sprintf(playerhead,"Apprentice's_Hood");
        constitution+=.5;
        headswitch=1;
        return;
    }

}

void Leg()
{
    if(legs==1&&legswitch!=1)
    {
        sprintf(playerlegs,"Soldier's_Greaves");
        constitution+=.5;
        legswitch=1;
        return;
        
    }
    if(legs==2&&legswitch!=1)
    {
        sprintf(playerlegs,"Studded_Leather_Greaves");
        constitution+=.5;
        legswitch=1;
        return;
    }
    if(legs==3&&legswitch!=1)
    {
        sprintf(playerlegs,"Apprentice's_Leg_Wraps");
        constitution+=.5;
        legswitch=1;
        return;
    }

}



void Load_Save()
{
    
    FILE *fptr;
    fptr = fopen("save.txt", "r");
    fscanf(fptr, "%s %s %s %d %d %d %d %d %d %d %d %d %f %f %f %f %d %f %f %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %s %s %s %s %d %d %d %d %d %d %d",playername,racename,classname,&level,&gold,&experience,&strength,&dexterity,&magic,&constitution,&willpower,&cunning,&health,&mana,&stamina,&speed,&playerlocation,&maxhealth,&maxmana,&inventory[0],&inventory[1],&inventory[2],&inventory[3],&inventory[4],&inventory[5],&inventory[6],&inventory[7],&inventory[8],&inventory[9],&inventory[10],&inventory[11],&inventory[12],&inventory[13],&inventory[14],&levelmsg,&weapon,&chest,&head,&legs,playerweapon,playerchest,playerhead,playerlegs,&weaponswitch,&chestswitch,&headswitch,&legswitch,&spellnum,&spell_ls,&pickup1);
    tmphealth=health;
    tmpmana=mana;
    
}

void Save()
{
  
    FILE *fptr;
    printf(ANSI_COLOR_CYAN"\nSaving game...\n");
    fptr = fopen("save.txt", "r+");
    if (fptr == NULL)
    {
        fptr=fopen("save.txt","wb");
    }
    
    fprintf(fptr, "%s\n%s\n%s\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%.2f\n%.2f\n%.2f\n%.2f\n%d\n%.2f\n%.2f\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%s\n%s\n%s\n%s\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",playername,racename,classname,level,gold,experience,strength,dexterity,magic,constitution,willpower,cunning,health,mana,stamina,speed,playerlocation,maxhealth,maxmana,inventory[0],inventory[1],inventory[2],inventory[3],inventory[4],inventory[5],inventory[6],inventory[7],inventory[8],inventory[9],inventory[10],inventory[11],inventory[12],inventory[13],inventory[14],levelmsg,weapon,chest,head,legs,playerweapon,playerchest,playerhead,playerlegs,weaponswitch,chestswitch,headswitch,legswitch,spellnum,spell_ls,pickup1);
    fclose(fptr);
    printf(ANSI_COLOR_MAGENTA"Your game has been saved.\n\n"ANSI_COLOR_RESET);
    initial_save=1;
}

void Unequip()
{
    printf("What would you like to unequip?\n\n");
    Hud();
    scanf("%s",command2);
    getchar();
    if (strcmp(command2,uedagger)==0||strcmp(command2,uedag)==0)
    {
        dagun=0;
        weapon=0;
        weaponin=2;
        sprintf(playerweapon,"Empty");
        for(i=1;i<16;i++)
        {
            if(inventory[i]==0)
            {
                inventory[i]=10;
                printf("The dagger has been added to your inventory.\n\n");
                strength-=1;
                dagun=1;
                break;
                return;
            }
            
        }
        if(inventory[0]!=0&&inventory[1]!=0&&inventory[2]!=0&&inventory[3]!=0&&inventory[4]!=0&&inventory[5]!=0&&inventory[6]!=0&&inventory[7]!=0&&inventory[8]!=0&&inventory[9]!=0&&inventory[10]!=0&&inventory[11]!=0&&inventory[12]!=0&&inventory[13]!=0&&inventory[14]!=0)
        {
            printf("Your inventory is full.\n\n");
            return;
        }
        if(dagun==0)
        {
            printf("You do not have a dagger equipped.\n\n");
            return;
        }

    }
    if (strcmp(command2,ueweapon)==0)
    {
        if(weapon==1)
        {
            weapon=0;
            weaponin=1;
            sprintf(playerweapon,"Empty");
            for(i=1;i<16;i++)
            {
                if(inventory[i]==0)
                {
                    inventory[i]=9;
                    printf("The broadsword has been added to your inventory.\n\n");
                    strength-=1;
                    break;
                }
                
            }
            if(inventory[0]!=0&&inventory[1]!=0&&inventory[2]!=0&&inventory[3]!=0&&inventory[4]!=0&&inventory[5]!=0&&inventory[6]!=0&&inventory[7]!=0&&inventory[8]!=0&&inventory[9]!=0&&inventory[10]!=0&&inventory[11]!=0&&inventory[12]!=0&&inventory[13]!=0&&inventory[14]!=0)
            {
                printf("Your inventory is full.\n\n");
                return;
            }

        }

        if(weapon==2)
        {
            weapon=0;
            weaponin=2;
            sprintf(playerweapon,"Empty");
            for(i=1;i<16;i++)
            {
                if(inventory[i]==0)
                {
                    inventory[i]=10;
                    printf("The dagger has been added to your inventory.\n\n");
                    strength-=1;
                    break;
                }
                
            }
            if(inventory[0]!=0&&inventory[1]!=0&&inventory[2]!=0&&inventory[3]!=0&&inventory[4]!=0&&inventory[5]!=0&&inventory[6]!=0&&inventory[7]!=0&&inventory[8]!=0&&inventory[9]!=0&&inventory[10]!=0&&inventory[11]!=0&&inventory[12]!=0&&inventory[13]!=0&&inventory[14]!=0)
            {
                printf("Your inventory is full.\n\n");
                return;
            }

        }
        if(weapon==3)
        {
            weapon=0;
            weaponin=3;
            sprintf(playerweapon,"Empty");
            for(i=1;i<16;i++)
            {
                if(inventory[i]==0)
                {
                    inventory[i]=11;
                    printf("The staff has been added to your inventory.\n\n");
                    strength-=.5;
                    break;
                }
                
            }
           if(inventory[0]!=0&&inventory[1]!=0&&inventory[2]!=0&&inventory[3]!=0&&inventory[4]!=0&&inventory[5]!=0&&inventory[6]!=0&&inventory[7]!=0&&inventory[8]!=0&&inventory[9]!=0&&inventory[10]!=0&&inventory[11]!=0&&inventory[12]!=0&&inventory[13]!=0&&inventory[14]!=0)
            {
                printf("Your inventory is full.\n\n");
                return;
            }

        }


    }
    if (strcmp(command2,uechest)==0)
    {
        if(chest==1)
        {
            chest=0;
            chestin=1;
            sprintf(playerchest,"Empty");
            for(i=1;i<16;i++)
            {
                if(inventory[i]==0)
                {
                    inventory[i]=12;
                    printf("The Soldier's Breastplate has been added to your inventory.\n\n");
                    constitution-=.5;
                    break;
                }
            }
           if(inventory[0]!=0&&inventory[1]!=0&&inventory[2]!=0&&inventory[3]!=0&&inventory[4]!=0&&inventory[5]!=0&&inventory[6]!=0&&inventory[7]!=0&&inventory[8]!=0&&inventory[9]!=0&&inventory[10]!=0&&inventory[11]!=0&&inventory[12]!=0&&inventory[13]!=0&&inventory[14]!=0)
            {
                printf("Your inventory is full.\n\n");
                return;
            }

        }
        
        if(chest==2)
        {
            chest=0;
            chestin=2;
            sprintf(playerchest,"Empty");
            for(i=1;i<16;i++)
            {
                if(inventory[i]==0)
                {
                    inventory[i]=13;
                    printf("The Studded Leather Armor has been added to your inventory.\n\n");
                    constitution-=.5;
                    break;
                }
                
            }
           if(inventory[0]!=0&&inventory[1]!=0&&inventory[2]!=0&&inventory[3]!=0&&inventory[4]!=0&&inventory[5]!=0&&inventory[6]!=0&&inventory[7]!=0&&inventory[8]!=0&&inventory[9]!=0&&inventory[10]!=0&&inventory[11]!=0&&inventory[12]!=0&&inventory[13]!=0&&inventory[14]!=0)
            {
                printf("Your inventory is full.\n\n");
                return;
            }

            
        }
        if(chest==3)
        {
            chest=0;
            chestin=3;
            sprintf(playerchest,"Empty");
            for(i=1;i<16;i++)
            {
                if(inventory[i]==0)
                {
                    inventory[i]=14;
                    printf("The Apprentice's Robes have been added to your inventory.\n\n");
                    constitution-=.5;
                    break;
                }
            }
            if(inventory[0]!=0&&inventory[1]!=0&&inventory[2]!=0&&inventory[3]!=0&&inventory[4]!=0&&inventory[5]!=0&&inventory[6]!=0&&inventory[7]!=0&&inventory[8]!=0&&inventory[9]!=0&&inventory[10]!=0&&inventory[11]!=0&&inventory[12]!=0&&inventory[13]!=0&&inventory[14]!=0)
            {
                printf("Your inventory is full.\n\n");
                return;
            }

            
        }
        
    }

    

}

void Equip()
{
    printf("What would you like to equip?\n\n");
    Hud();
    scanf("%s",command2);
    getchar();
    if (strcmp(command2,eqweapon)==0)
    {
        if(weapon==0)
        {
            for(i=1;i<16;i++)
            {
                if(inventory[i]==9)
                {

                    printf("The broadsword has been equipped.\n\n");
                    strength+=1;
                    weapon=1;
                    weaponin=0;
                    sprintf(playerweapon,"Broadsword");
                    inventory[i]=0;
                    break;
                }
                if(inventory[i]==10)
                {
                    
                    printf("The dagger has been equipped.\n\n");
                    strength+=1;
                    weapon=2;
                    weaponin=0;
                    sprintf(playerweapon,"Dagger");
                    inventory[i]=0;
                    break;
                }
                if(inventory[i]==11)
                {
                    
                    printf("The staff has been equipped.\n\n");
                    strength+=.5;
                    weapon=3;
                    weaponin=0;
                    sprintf(playerweapon,"Apprentice's_Staff");
                    inventory[i]=0;
                    break;
                }

                
            }
        }
        
        }
    if(strcmp(command2,eqdagger)==0||strcmp(command2,eqdag)==0)
    {
        dageq=0;
        for(i=1;i<16;i++)
        {
            if(inventory[i]==10)
            {
                printf("The dagger has been equipped.\n\n");
                strength+=1;
                weapon=2;
                weaponin=0;
                sprintf(playerweapon,"Dagger");
                inventory[i]=0;
                dageq=1;
                break;
            }
        }
        if(dageq==0)
        {
            printf("There is no dagger in your bag.\n\n");
            return;
        }
    }
            
            
    if (strcmp(command2,eqchest)==0)
    {
        if(chest==0)
        {
            for(i=1;i<16;i++)
            {
                if(inventory[i]==12)
                {
                    printf("The Soldier's Breastplate has been equipped.\n\n");
                    constitution+=.5;
                    chest=1;
                    chestin=0;
                    sprintf(playerchest,"Soldier's_Breastplate");
                    inventory[i]=0;
                    break;
                }
                if(inventory[i]==13)
                {
                    printf("The Studded Leather Armor has been equipped.\n\n");
                    constitution+=.5;
                    chest=2;
                    chestin=0;
                    sprintf(playerchest,"Studded_Leather_Armor");
                    inventory[i]=0;
                    break;

                }

                if(inventory[i]==14)
                {
                    printf("The Apprentice's Robes have been equipped.\n\n");
                    constitution+=.5;
                    chest=3;
                    chestin=0;
                    sprintf(playerchest,"Apprentice's_Robes");
                    inventory[i]=0;
                    break;

                }

                
            }
            
        }
    }
}

void Commands()
{
    
    Hud(); scanf("%s",command);
    getchar();
    if (strcmp(command,cmdeast)==0||strcmp(command,cmde)==0)
    {
        if(playerlocation!=1&&playerlocation==0)
        {
            
            playerlocation=1;
            printf("You move east through the field as tall barley grasses graze your knees.\n");
            printf("You see a tall oak in the center of the field further east.\n\n");
            Battlesystem();
            Map();
            Look();
        }
        else if (playerlocation==1)
        {
            printf("You are standing at the east side of the barley field.\nYou can see a tall oak further east.\n\n");
            Map();
            Look();
        }
        else if (playerlocation!=62&&playerlocation==61)
        {
            
            playerlocation=62;
            printf("You move east towards the shy path that vanishes towards the north.\n\n");
            Battlesystem();
            Map();
            Look();
        }
        else if (playerlocation==62)
        {
           
            printf("\n\nYou are standing to the south east of the camp. You can see a worn trail flanked by crab\ngrasses to the west. To the northeast you see a tall oak looming in the distance.\nA very beaten path runs off to the north towards the center of the field.\n\n");
            Map();
            Look();
        }
        
        Commands();
    }
    
    if(strcmp(command,cmdwest)==0||strcmp(command,cmdw)==0)
    {
        if(playerlocation!=0&&playerlocation==1)
        {
            
            playerlocation=0;
            printf("You move west through the field as tall barley grasses graze your knees.\n");
            printf("You see a tall oak in the center of the field to the far far east.\n\n");
            Battlesystem();
            Map();
            Look();
        }
        else if (playerlocation==0)
        {
            
            printf("You are standing at the west side of the barley field.\nYou can see a tall oak off into the far far east.\n\n");
            Map();
            Look();
        }
        else if (playerlocation!=61&&playerlocation==62)
        {
            
            playerlocation=61;
            printf("You move back to the west. You now stand on a beaten path with crab grass surrounding your feet. To the east you can see a trail leading to the fields in the north.\n\n");
            Battlesystem();
            Map();
            Look();
        }
        else if (playerlocation==61)
        {
            
            printf("You are standing to the south of the small camp.\nYou can see a trail leading north to your east.\n\n");
            Map();
            Look();
        }

        Commands();

    }
    else if(strcmp(command,cmdsouth)==0||strcmp(command,cmds)==0)
    {
        
        if (playerlocation!=61&&playerlocation==0)
        {
            
            playerlocation=61;
            printf("You move south away from the campsite located at the west side of the barley field.\n");
            printf("You stand to the south of the campsite. Crab grass, and tampled stones sunken into a dusty trail,\nlie around around and beneath your feet. To the east you see a \ntrail leading to the north.\n\n");
            Battlesystem();
            Map();
            Look();
        }
        else if (playerlocation!=62&&playerlocation==1)
        {
            
            playerlocation=62;
            printf("You move south along the trail and find yourself in the center of another field.\nYou can see a a clearing filled with crab grasses, and a trampeled path in the west.\nTo the north west you can see a small campsite.\n\n");
            Battlesystem();
            Map();
            Look();
        }
        
        Commands();
        
    }
    
    else if (strcmp(command,cmdnorth)==0||strcmp(command,cmdn)==0)
    {
        
        if (playerlocation!=0&&playerlocation==61)
        {
            playerlocation=0;
            printf("\n\nYou move north back towards the campsite located at the west side of the barley field.\n");
            printf("You see a tall oak in the center of the field far off to the east.\n\n");
            Battlesystem();
            Map();
            Look();
            
        }
        else if (playerlocation!=1&&playerlocation==62)
        {
            
            
            playerlocation=1;
            printf("You move north along the trail and find yourself in the center of another field.\nYou can see a tall oak in the next field to your east.\n\n");
            Battlesystem();
            Map();
            Look();
        }
        
        Commands();
    }
    if (strcmp(command,legend)==0||strcmp(command,lgd)==0||strcmp(command,ky)==0)
    {
        printf("\n");
        printf(ANSI_COLOR_CYAN"Map Legend\n");
        printf("-----------\n"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_BOLD ANSI_COLOR_GREEN"Y");printf(ANSI_COLOR_RESET"  = Tree\n");
        printf(ANSI_COLOR_YELLOW"=");printf(ANSI_COLOR_RESET"  = Ground Terrain\n");
        printf(ANSI_COLOR_GREEN"#");printf(ANSI_COLOR_RESET"  = Path\n");
        /*printf(ANSI_COLOR_MAGENTA"@");printf(ANSI_COLOR_RESET"  = Player Location\n");*/
        printf(ANSI_COLOR_CYAN"~");printf(ANSI_COLOR_RESET"  = Passable Water\n");
        printf(ANSI_COLOR_BLUE"~");printf(ANSI_COLOR_RESET"  = Nonpassable Water\n");
        printf(ANSI_COLOR_WHITE"^");printf(ANSI_COLOR_RESET"  = Mountain\n");
        printf(ANSI_COLOR_BOLD ANSI_COLOR_WHITE"[]");printf(ANSI_COLOR_RESET" = Building\n");
        printf(ANSI_COLOR_RED"][");printf(ANSI_COLOR_RESET" = Landmark\n"ANSI_COLOR_RESET);
        Map();
        Look();
        Commands();
        
    }
    if (strcmp(command,cmdstats)==0)
    {
        printf("\n");
        Stat_check();
        Map();
        Look();
        Commands();
    }
    else if (strcmp(command,cmdinv)==0||strcmp(command,cmdinventory)==0)
    {
        printf("\n");
        Inventory();
        printf("\n");
        Map();
        Look();
        Commands();
    }
    else if (strcmp(command,cmdsave)==0)
    {
        printf("\n");
        Save();
        Map();
        Look();
        Commands();
    }
    
    else if (strcmp(command,cmdmap)==0)
    {
        printf("\n");
        Map();
        Look();
        Commands();
    }
    
    else if (strcmp(command,cmdreturn)==0)
    {
        printf("\n");
        Map();
        Look();
        Commands();
    }
    
    else if (strcmp(command,cmdquit)==0)
    {
        printf("\n");
        Save();
        printf(ANSI_COLOR_RED"The game will now exit!\n\n"ANSI_COLOR_RESET);
        exit(0);
    }
    else if (strcmp(command,cmdlook)==0)
    {
        printf("\n");
        Look();
    }
    else if(strcmp(command,cmdcommand)==0||strcmp(command,cmdlist)==0||strcmp(command,cmdls)==0)
    {
        printf("\n");
        List_Commands();
        Map();
        Look();
        Commands();
    }
    else if(strcmp(command,cmdsk)==0||strcmp(command,cmdskills)==0)
    {
        printf("\n");
        Skills();
        Map();
        Look();
        Commands();
        
    }
    else if(strcmp(command,cmdsp)==0||strcmp(command,cmdspells)==0)
    {
        printf("\n");
        Spells();
        Map();
        Look();
        Commands();
    }
    else if(strcmp(command,cmdusinv)==0||strcmp(command,cmduseinventory)==0)
    {
        printf("\n");
        Useinv();
        Map();
        Look();
        Commands();
        
    }
    else if(strcmp(command,cmdcredits)==0||strcmp(command,cmdcr)==0)
    {
        Credits();
        Map();
        Look();
        Commands();
    }
    else if(strcmp(command,cmdch)==0||strcmp(command,cmdchar)==0||strcmp(command,cmdcharacter)==0)
    {
        Character();
        Map();
        Look();
        Commands();
    }
    else if(strcmp(command,cmdue)==0)
    {
        Character();
        Unequip();
        Map();
        Look();
        Commands();
        
    }
    else if(strcmp(command,cmdeq)==0)
    {
        Character();
        Inventory();
        Equip();
        Map();
        Look();
        Commands();
        
    }
    else if(strcmp(command,get)==0)
    {
        printf("What would you like to get?\n");
        scanf("%s",command2);
        getchar();
        if(strcmp(command2,getbook)==0)
        {
            printf("You pick the book up off the ground.\n");
            for(i=1;i<16;i++)
            {
                if(inventory[i]==0)
                {
                    inventory[i]=20;
                    printf("You store the book in your bag!\n\n");
                    pickup1=1;
                    bookin=1;
                    break;
                }
                else if(inventory[0]!=0&&inventory[1]!=0&&inventory[2]!=0&&inventory[3]!=0&&inventory[4]!=0&&inventory[5]!=0&&inventory[6]!=0&&inventory[7]!=0&&inventory[8]!=0&&inventory[9]!=0&&inventory[10]!=0&&inventory[11]!=0&&inventory[12]!=0&&inventory[13]!=0&&inventory[14]!=0)
                {
                    printf("Your inventory is full.\n");
                    return;
                }

            
            }
            Map();
            Look();
            Commands();
        }
        
    }
    else if(strcmp(command,inspect)==0)
    {
        printf("What would you like to inspect?\n");
        Useinv();
        Map();
        Look();
        Commands();
    }


    else
    {
        printf("\n");
        printf("%s is not a valid command.\n\n",command);
        Map();
        Look();
        Commands();
    }

}
void Character()
{
    printf("\n");
    Stat_check();
    printf(ANSI_COLOR_BLUE"Weapon:"ANSI_COLOR_RESET);printf(" %s\n",playerweapon);printf(ANSI_COLOR_BLUE"Chest:"ANSI_COLOR_RESET);printf("  %s\n",playerchest);printf(ANSI_COLOR_BLUE"Head:"ANSI_COLOR_RESET);printf("   %s\n",playerhead);printf(ANSI_COLOR_BLUE"Legs:"ANSI_COLOR_RESET);printf("   %s\n\n\n",playerlegs);
    
}

void Map()
{
    if(playerlocation==0)
    {
        location=map[0][0][0];
        printf("\n");
        printf(ANSI_COLOR_CYAN"~~~~");printf(ANSI_COLOR_YELLOW"========================\n");
        printf(ANSI_COLOR_CYAN"~~");  printf(ANSI_COLOR_YELLOW"==========================\n");
            printf(ANSI_COLOR_CYAN"~~~~");printf(ANSI_COLOR_YELLOW"============");printf(ANSI_COLOR_GREEN"#########");printf(ANSI_COLOR_YELLOW"===\n");
            printf(ANSI_COLOR_CYAN"~~~");printf(ANSI_COLOR_YELLOW"============");printf(ANSI_COLOR_GREEN"############");printf(ANSI_COLOR_YELLOW"=\n");
            printf(ANSI_COLOR_CYAN"~~~");printf(ANSI_COLOR_YELLOW"==========");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"=======");printf(ANSI_COLOR_GREEN"####\n");
            printf(ANSI_COLOR_CYAN"~~");printf(ANSI_COLOR_YELLOW"===========");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"========");printf(ANSI_COLOR_GREEN"###\n");
            printf(ANSI_COLOR_CYAN"~~~~");printf(ANSI_COLOR_YELLOW"========");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"==========");printf(ANSI_COLOR_GREEN"##\n");
            printf(ANSI_COLOR_CYAN"~~~~~~");printf(ANSI_COLOR_YELLOW"======");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"===========");printf(ANSI_COLOR_GREEN"#\n");
            printf(ANSI_COLOR_CYAN"~~~~~~");printf(ANSI_COLOR_YELLOW"======");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"============\n");
            printf(ANSI_COLOR_CYAN"~~~~~");printf(ANSI_COLOR_YELLOW"=======");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"============\n");
            printf(ANSI_COLOR_CYAN"~~");printf(ANSI_COLOR_YELLOW"==========");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"============\n\n"ANSI_COLOR_RESET);
        return;
    }
    if(playerlocation==1)
    {
        
        location=map[0][1][0];
        Coordinates();
        printf(ANSI_COLOR_YELLOW"============================\n");
        printf(ANSI_COLOR_YELLOW"============================\n");
        printf(ANSI_COLOR_GREEN"################");printf(ANSI_COLOR_YELLOW"============\n");
        printf(ANSI_COLOR_GREEN"################");printf(ANSI_COLOR_YELLOW"============\n");
        printf(ANSI_COLOR_YELLOW"============");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"============\n");
        printf(ANSI_COLOR_YELLOW"============");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"============\n");
        printf(ANSI_COLOR_YELLOW"============");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"============\n");
        printf(ANSI_COLOR_YELLOW"============");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"============\n");
        printf(ANSI_COLOR_YELLOW"============");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"============\n");
        printf(ANSI_COLOR_YELLOW"============");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"============\n");
        printf(ANSI_COLOR_YELLOW"============");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"============\n\n"ANSI_COLOR_RESET);

        return;
    }
    if(playerlocation==61)
    {
      
        location=map[1][0][0];
        printf("\n");
        printf(ANSI_COLOR_YELLOW"===========");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"=============\n");
        printf(ANSI_COLOR_YELLOW"===========");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"=============\n");
        printf(ANSI_COLOR_CYAN"~~~~");printf(ANSI_COLOR_YELLOW"=");printf(ANSI_COLOR_GREEN ANSI_COLOR_BOLD"Y"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_YELLOW"=====");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"======");printf(ANSI_COLOR_RED"][");printf(ANSI_COLOR_YELLOW"=====\n");
          printf(ANSI_COLOR_CYAN"~~~");printf(ANSI_COLOR_YELLOW"==");printf(ANSI_COLOR_GREEN ANSI_COLOR_BOLD"Y"ANSI_COLOR_RESET);printf(ANSI_COLOR_YELLOW"=====");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"=============\n");
          printf(ANSI_COLOR_CYAN"~~~");printf(ANSI_COLOR_YELLOW"========");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"=============\n");
          printf(ANSI_COLOR_CYAN"~~~~");printf(ANSI_COLOR_YELLOW"====");printf(ANSI_COLOR_GREEN"####################\n");
          printf(ANSI_COLOR_CYAN"~~~~");printf(ANSI_COLOR_YELLOW"====");printf(ANSI_COLOR_GREEN"####################\n");
        printf(ANSI_COLOR_CYAN"~~~~~");printf(ANSI_COLOR_YELLOW"===");printf(ANSI_COLOR_GREEN ANSI_COLOR_BOLD"YY"ANSI_COLOR_RESET);printf(ANSI_COLOR_YELLOW"==================\n");
          printf(ANSI_COLOR_CYAN"~~~~");printf(ANSI_COLOR_YELLOW"=");printf(ANSI_COLOR_GREEN ANSI_COLOR_BOLD"Y"ANSI_COLOR_RESET);printf(ANSI_COLOR_YELLOW"===============");printf(ANSI_COLOR_GREEN ANSI_COLOR_BOLD"Y"ANSI_COLOR_RESET);printf(ANSI_COLOR_YELLOW"======\n");
          printf(ANSI_COLOR_CYAN"~~~");printf(ANSI_COLOR_YELLOW"==========");printf(ANSI_COLOR_GREEN ANSI_COLOR_BOLD"Y"ANSI_COLOR_RESET);printf(ANSI_COLOR_YELLOW"====");printf(ANSI_COLOR_GREEN ANSI_COLOR_BOLD"YYY"ANSI_COLOR_RESET);printf(ANSI_COLOR_YELLOW"=======\n");
          printf(ANSI_COLOR_CYAN"~~~~~~~");printf(ANSI_COLOR_YELLOW"========");printf(ANSI_COLOR_GREEN ANSI_COLOR_BOLD"Y"ANSI_COLOR_RESET);printf(ANSI_COLOR_YELLOW"===");printf(ANSI_COLOR_GREEN ANSI_COLOR_BOLD"Y"ANSI_COLOR_RESET);printf(ANSI_COLOR_YELLOW"========\n");
          printf(ANSI_COLOR_CYAN"~~~~~");printf(ANSI_COLOR_YELLOW"================");printf(ANSI_COLOR_GREEN ANSI_COLOR_BOLD"YYY"ANSI_COLOR_RESET);printf(ANSI_COLOR_YELLOW"====\n"ANSI_COLOR_RESET);
        return;

    }
    if (playerlocation==62)
    {
        location=map[1][1][0];
        
        
        printf(ANSI_COLOR_YELLOW"=============");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"===========\n");
        printf(ANSI_COLOR_YELLOW"==============");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"==========\n");
        printf(ANSI_COLOR_YELLOW"==============");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"==========\n");
        printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"==========");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"==========\n");
        printf(ANSI_COLOR_GREEN"#####");printf(ANSI_COLOR_YELLOW"=======");printf(ANSI_COLOR_GREEN"####");printf(ANSI_COLOR_YELLOW"============\n");
        printf(ANSI_COLOR_YELLOW"==");printf(ANSI_COLOR_GREEN"#############");printf(ANSI_COLOR_YELLOW"=============\n");
        printf(ANSI_COLOR_YELLOW"====");printf(ANSI_COLOR_GREEN"#########");printf(ANSI_COLOR_YELLOW"===============\n");
        printf(ANSI_COLOR_YELLOW"============================\n");
        printf(ANSI_COLOR_YELLOW"===============");printf(ANSI_COLOR_YELLOW"=============\n");
        printf(ANSI_COLOR_YELLOW"===============");printf(ANSI_COLOR_YELLOW"=============\n");
        printf(ANSI_COLOR_YELLOW"===============");printf(ANSI_COLOR_YELLOW"=============\n\n"ANSI_COLOR_RESET);
                return;
    }
 
 }

void Story()
{
    printf("Story!\n");
}

void List_Commands()
{
    printf(ANSI_COLOR_CYAN"Commands \n");
    printf("---------------------------------------------------------\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_RED"Movement: ");printf("      Character: ");printf("      Deeper: ");printf("      Misc: \n\n"ANSI_COLOR_RESET);
    printf("%s  ",cmdnorth);printf("         %s  ",cmdchar);printf("           %s  ",cmdspells);printf("      %s\n",cmdpo);
    printf("%s  ",cmdsouth);printf("         %s  ",cmdstats);printf("          %s  ",cmdskills);printf("      %s\n",cmdmapo);
    printf("%s  ",cmdwest);printf("          %s  ",cmdinv);printf("            %s  ",cmdsp);printf("          %s\n",cmdread);
    printf("%s  ",cmdeast);printf("          %s  ",cmdue);printf("             %s  ",cmdsk);printf("          %s\n",get);
    printf("%s  ",cmdmap);printf("           %s  ",cmdeq);printf("             %s  ",cmdsave);printf("        %s\n",cmdcredits);
    printf("%s  ",cmdlook);printf("          %s  ",cmdusinv);printf("          %s  ",cmdquit);printf("        %s\n",cmdcr);
    printf("                                 %s            %s\n",ky,cmdls);
    printf(ANSI_COLOR_CYAN"---------------------------------------------------------\n\n"ANSI_COLOR_RESET);
   
}

void Look()
{
    if (playerlocation == 0)
    {
        Coordinates();
        printf("You see a field around you. To the far east you can see a tall oak.\n\n");
        printf(ANSI_COLOR_RED"Exits: ");printf(ANSI_COLOR_CYAN" - East - South\n\n"ANSI_COLOR_RESET);
        
    }
    
    else if(playerlocation==1)
    {
        Coordinates();
        printf("You see a tall oak in the center of the field to your immediate east.\n\n");
        printf(ANSI_COLOR_RED"Exits: ");printf(ANSI_COLOR_CYAN" - West - South\n\n"ANSI_COLOR_RESET);
    }
    else if(playerlocation==61)
    {
        Coordinates();
        printf("You see a worn trail leading up into a field to the north to your east.\n\n");
        printf(ANSI_COLOR_RED"Exits: ");printf(ANSI_COLOR_CYAN" - East - North\n\n"ANSI_COLOR_RESET);
    }
    else if(playerlocation==62)
    {
        Coordinates();
        printf("You see a worn trail flanked by crab grasses to the west. To the northeast you see\na tall oak looming in the distance. A very beaten path runs off to the north, and then east, towards the oak.\n\n");
        if(pickup1==0)
        {
        printf("On the ground, covered by vegetation, you spot a crumbling book.\n");
        }
        
        printf(ANSI_COLOR_RED"Exits: ");printf(ANSI_COLOR_CYAN" - West - North\n\n"ANSI_COLOR_RESET);
    }

    Commands();

}

void Coordinates()
{
    
    if(playerlocation==0)
    {
        location=map[0][0][0];
        printf(ANSI_COLOR_BLUE "\nCoordinates = 0,0\n"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_GREEN"The Kokari Wilds\n"ANSI_COLOR_RESET);
        return;
    }
    if(playerlocation==1)
    {
        location=map[0][1][0];
        printf(ANSI_COLOR_BLUE"\nCoordinates = 0,1\n"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_GREEN"The Kokari Wilds\n"ANSI_COLOR_RESET);
        return;
    }
    if(playerlocation==61)
    {
        location=map[1][0][0];
        printf(ANSI_COLOR_BLUE"\nCoordinates = 1,0\n"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_GREEN"The Kokari Wilds\n"ANSI_COLOR_RESET);
        return;
        
    }
    if (playerlocation==62)
    {
        location=map[1][1][0];
        printf(ANSI_COLOR_BLUE"\nCoordinates = 1,1\n"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_GREEN"The Kokari Wilds\n"ANSI_COLOR_RESET);
        return;
    }
    
}

void Hud()
{
    struct tm *newtime;
    time_t t;
    time(&t);
    newtime=localtime(&t);
    double diff_t;
    strftime(string,2,"%H",newtime);
    if( (strcmp(string,hr1)==0) || (strcmp(string,hr2)==0) || (strcmp(string,hr3)==0) || (strcmp(string,hr4)==0) || (strcmp(string,hr5)==0) || (strcmp(string,hr6)==0) || (strcmp(string,hr7)==0) || (strcmp(string,hr8)==0) || (strcmp(string,hr9)==0) || (strcmp(string,hr10)==0) || (strcmp(string,hr11)==0))
    {
        printf(ANSI_COLOR_GREEN"Morning "ANSI_COLOR_RESET);printf(ANSI_COLOR_YELLOW"%s"ANSI_COLOR_RESET,asctime(newtime));

    }
    if( (strcmp(string,hr12)==0) || (strcmp(string,hr13)==0) || (strcmp(string,hr14)==0) || (strcmp(string,hr15)==0) || (strcmp(string,hr16)==0))
    {
       printf(ANSI_COLOR_CYAN"Afternoon "ANSI_COLOR_RESET);printf(ANSI_COLOR_YELLOW"%s"ANSI_COLOR_RESET,asctime(newtime));
    }
    if( (strcmp(string,hr17)==0) || (strcmp(string,hr17)==0) || (strcmp(string,hr18)==0) || (strcmp(string,hr19)==0))
    {
        printf(ANSI_COLOR_MAGENTA"Evening "ANSI_COLOR_RESET);printf(ANSI_COLOR_YELLOW"%s"ANSI_COLOR_RESET,asctime(newtime));
    }
    if( (strcmp(string,hr20)==0) || (strcmp(string,hr21)==0) || (strcmp(string,hr22)==0) || (strcmp(string,hr23)==0))
    {
        printf(ANSI_COLOR_BLUE"Night "ANSI_COLOR_RESET);printf(ANSI_COLOR_YELLOW"%s"ANSI_COLOR_RESET,asctime(newtime));
    }
    printf(ANSI_COLOR_GREEN"< %s - LV %d: H ",playername,level);printf(ANSI_COLOR_RED"%.0f",health);printf(ANSI_COLOR_GREEN" M");printf(ANSI_COLOR_CYAN" %.0f",mana);printf(ANSI_COLOR_GREEN" G ");printf(ANSI_COLOR_YELLOW"%d",gold);printf(ANSI_COLOR_GREEN" > "ANSI_COLOR_RESET);
}

void Level()
{
    if((experience==100||experience>100)&&(levelmsg==0))
    {
        level=1;
    }
    if(experience==225||experience>225)
    {
        if(levelmsg!=1&&levelmsg==0)
        {
        level=2;
        printf(ANSI_COLOR_BLUE"You have leveled up!\nYou are now level %d!\n"ANSI_COLOR_RESET,level);
            printf(ANSI_COLOR_CYAN"Your stats have increased: \n");
            maxhealth+=2.00;
            health=maxhealth;
            maxmana+=2.00;
            mana=maxmana;
            printf("Health +2!\n");
            printf("Mana +2!\n");
            printf("Health is now: %.2f\n",health);
            printf("Mana is now: %.2f\n",mana);
        levelmsg=1;
        }
        else if(levelmsg==1)
        {
            return;
        }
    }
    if(experience==500||experience>500)
    {
        if(levelmsg!=2&&levelmsg==1)
        {
        level=3;
        printf(ANSI_COLOR_BLUE"You have leveled up!\nYou are now level %d!\n"ANSI_COLOR_RESET,level);
            printf(ANSI_COLOR_CYAN"Your stats have increased: \n");
            maxhealth+=3.00;
            health=maxhealth;
            maxmana+=3.00;
            mana=maxmana;
            printf("Health +3!\n");
            printf("Mana +3!\n");
            printf("Health is now: %.2f\n",health);
            printf("Mana is now: %.2f\n",mana);
        levelmsg=2;
        }
        else if(levelmsg==2)
        {
            return;
        }

    }
    if(experience==1000||experience>1000)
    {
        if(levelmsg!=3&&levelmsg==2)
        {
        level=4;
        printf(ANSI_COLOR_BLUE"You have leveled up!\nYou are now level %d!\n"ANSI_COLOR_RESET,level);
            printf(ANSI_COLOR_CYAN"Your stats have increased: \n");
            maxhealth+=6.00;
            health=maxhealth;
            maxmana+=6.00;
            mana=maxmana;
            printf("Health +6!\n");
            printf("Mana +6!\n");
            printf("Health is now: %.2f\n",health);
            printf("Mana is now: %.2f\n",mana);
        levelmsg=3;
        }
        else if(levelmsg==3)
        {
            return;
        }
    }
    if(experience==1500||experience>1500)
    {
        
        if(levelmsg!=4&&levelmsg==3)
        {
        level=5;
        printf(ANSI_COLOR_BLUE"You have leveled up!\nYou are now level %d!\n"ANSI_COLOR_RESET,level);
            printf(ANSI_COLOR_CYAN"Your stats have increased: \n");
            maxhealth+=7.00;
            health=maxhealth;
            maxmana+=7.00;
            mana=maxmana;
            printf("Health +7!\n");
            printf("Mana +7!\n");
            printf("Health is now: %.2f\n",health);
            printf("Mana is now: %.2f\n",mana);
        levelmsg=4;
        }
        else if(levelmsg==4)
        {
            return;
        }
    }
    if(experience==2500)
    {
        if(levelmsg!=5&&levelmsg==4)
        {
        level=6;
        printf(ANSI_COLOR_BLUE"You have leveled up!\nYou are now level %d!\n"ANSI_COLOR_RESET,level);
            printf(ANSI_COLOR_CYAN"Your stats have increased: \n");
            maxhealth+=8.00;
            health=maxhealth;
            maxmana+=8.00;
            mana=maxmana;
            printf("Health +8!\n");
            printf("Mana +8!\n");
            printf("Health is now: %.2f\n",health);
            printf("Mana is now: %.2f\n",mana);
        levelmsg=5;
        }
       else if(levelmsg==5)
        {
            return;
        }
    }
}


void Randbat()
{
    encounter=rand()%10+1;
    
    if(encounter>8)
    {
        printf(ANSI_COLOR_RED"You enounter an enemy!\n");
        enemytype=rand()%6+1;
        Enemy();
        printf(ANSI_COLOR_WHITE"Enemy health: %d\n",enemyhealth);
        printf("Enemy mana: %d\n",enemymana);
        printf("Enemy attack: %d\n",enemyattack);
        printf("Enemy defense: %d\n"ANSI_COLOR_RESET,enemydefense);
    }
}
    

void Enemy()
{
    if(enemytype==1)
    {
        if(level==1)
        {
            printf(ANSI_COLOR_RED"It's a bandit!\n"ANSI_COLOR_RESET);
            char bandit[]="Bandit";
            strcpy(enemyname,bandit);
            enemyhealth=(rand()%30+1)/2.5;
            enemymana=(rand()%6+1)/2;
            enemyattack=1;
            enemydefense=(rand()%6+1)/2;
            expval=(rand()%6+1)/2;
        }
        if(level!=1)
        {

        printf(ANSI_COLOR_RED"It's a bandit!\n"ANSI_COLOR_RESET);
        char bandit[]="Bandit";
        strcpy(enemyname,bandit);
        enemyhealth=rand()%30+1;
        enemymana=rand()%6+1;
        enemyattack=rand()%6+1;
        enemydefense=rand()%6+1;
        expval=rand()%6+1;
        }
    }
    else if(enemytype==2)
    {
        if(level==1)
        {
            
            printf(ANSI_COLOR_RED"It's a wolf!\n"ANSI_COLOR_RESET);
            char wolf[]="Wolf";
            strcpy(enemyname,wolf);
            enemyhealth=15/2;
            enemymana=3/2;
            enemyattack=2/1.5;
            enemydefense=2/2;
            expval=25/2;
            
            
            
        }
        if(level!=1)
        {
        printf(ANSI_COLOR_RED"It's a wolf!\n"ANSI_COLOR_RESET);
        char wolf[]="Wolf";
        strcpy(enemyname,wolf);
        enemyhealth=15;
        enemymana=3;
        enemyattack=2;
        enemydefense=2;
        expval=25;
        }
    }
    else if(enemytype==3)
    {
        if(level==1)
        {
            printf(ANSI_COLOR_RED"It's a darkspawn!\n"ANSI_COLOR_RESET);
            char darkspawn[]="Darkspawn";
            strcpy(enemyname,darkspawn);
            enemyhealth=30/2;
            enemymana=1/2;
            enemyattack=5/4;
            enemydefense=10/2;
            expval=20/2;
            
        }
        if(level!=1)
        {
        printf(ANSI_COLOR_RED"It's a darkspawn!\n"ANSI_COLOR_RESET);
        char darkspawn[]="Darkspawn";
        strcpy(enemyname,darkspawn);
        enemyhealth=30;
        enemymana=1;
        enemyattack=5;
        enemydefense=10;
        expval=20;
        }
    }
    else if(enemytype==4)
    {
        if(level==1)
        {
            
            printf(ANSI_COLOR_RED"It's an elemental!!\n"ANSI_COLOR_RESET);
            char elemental[]="Elemental";
            strcpy(enemyname,elemental);
            enemyhealth=40/2;
            enemymana=10/2;
            enemyattack=7/4;
            enemydefense=5/2;
            expval=50;
            
        }
        if(level!=1)
        {
        printf(ANSI_COLOR_RED"It's an elemental!!\n"ANSI_COLOR_RESET);
        char elemental[]="Elemental";
        strcpy(enemyname,elemental);
        enemyhealth=40;
        enemymana=10;
        enemyattack=7;
        enemydefense=5;
        expval=50;
        }
    }
    else if(enemytype==5)
    {
        if(level==1)
        {
            printf(ANSI_COLOR_RED"It's a rogue mage!\n"ANSI_COLOR_RESET);
            char rmage[]="Rogue Mage";
            strcpy(enemyname,rmage);
            enemyhealth=20/2;
            enemymana=30/2;
            enemyattack=3/2;
            enemydefense=7/2;
            expval=20;
            
        }
        if(level!=1)
        {
        printf(ANSI_COLOR_RED"It's a rogue mage!\n"ANSI_COLOR_RESET);
        char rmage[]="Rogue Mage";
        strcpy(enemyname,rmage);
        enemyhealth=20;
        enemymana=30;
        enemyattack=3;
        enemydefense=7;
        expval=20;
        }
    }
    else if(enemytype==6)
    {
        if(level==1)
        {
            printf(ANSI_COLOR_RED"It's a spirit!\n"ANSI_COLOR_RESET);
            char spirit[]="Spirit";
            strcpy(enemyname,spirit);
            enemyhealth=50/3;
            enemymana=30/3;
            enemyattack=9/8;
            enemydefense=5/4;
            expval=35;
            
        }
        if(level!=1)
        {
        printf(ANSI_COLOR_RED"It's a spirit!\n"ANSI_COLOR_RESET);
        char spirit[]="Spirit";
        strcpy(enemyname,spirit);
        enemyhealth=50;
        enemymana=30;
        enemyattack=9;
        enemydefense=5;
        expval=35;
        }
    }

}



void Battlesystem()
{
    
    Randbat();
    if(encounter>8)
    {
        inbattle=1;
        spellwin=0;
        while(enemyhealth!=0||health!=0||run!=1)
        {
        playerturn=1;
            spelldefault=0;
            
        printf(ANSI_COLOR_CYAN"\n\nType 'at' to attack, 'r' to run, 'sp' for spells, 'sk' for skills, or 'd' to defend\n"ANSI_COLOR_RESET);
        
            
            if(playerturn==1)
            {
                Hud(); scanf("%s",command2);
                getchar();
                
                
                if (strcmp(command2,cmdat)==0||strcmp(command2,cmdattack)==0)
                {
                    attackland=rand()%6+1;
                    printf(ANSI_COLOR_GREEN"\n\nYou launch a basic attack!\n"ANSI_COLOR_RESET);
                    
                        if(attackland%3==0)
                        {
                            printf(ANSI_COLOR_YELLOW"Your attack misses!\n");
                            printf("It's the %s's turn!\n\n\n"ANSI_COLOR_RESET,enemyname);
                            playerturn=0;
                            Enemyturn();
                        }
                   else
                    {
                        attack=(((strength*3)/4)*2);
                        printf(ANSI_COLOR_WHITE"Your attack lands!\n");
                        damage=(attack*3.75/enemydefense);
                        enemyhealth=(enemyhealth-damage);
                        printf(ANSI_COLOR_WHITE"The %s takes %d damage!\n",enemyname,damage);
                        if(enemyhealth==0||enemyhealth<0)
                        {
                            printf(ANSI_COLOR_GREEN"\n\nYou won the battle!\n"ANSI_COLOR_RESET);
                            inbattle=0;
                            experience+=expval;
                            printf("You gain %d experience!\n",expval);
                            printf("Your total experience is now %d\n",experience);
                            Level();
                            Itemdrop();
                            return;
                        }
                        
                        printf(ANSI_COLOR_RED"The %s's health is: %d\n"ANSI_COLOR_RESET,enemyname,enemyhealth);
                        printf(ANSI_COLOR_WHITE"It's the %s's turn!\n\n\n"ANSI_COLOR_RESET,enemyname);
                        playerturn=0;
                        
                        Enemyturn();
                    }
                }
    
                else if (strcmp(command2,cmdr)==0||strcmp(command2,cmdrun)==0)
                {
                    int runchance=rand()%6+1;
                        if(runchance%2==0)
                        {
                            printf(ANSI_COLOR_WHITE"\n\nYou get away!\n"ANSI_COLOR_RESET);
                            playerturn=2;
                            return;
                        }
                        if(runchance%2!=0)
                        {
                            printf(ANSI_COLOR_YELLOW"\n\nYour attempt to flee fails!\n"ANSI_COLOR_RESET);
                            playerturn=0;
                            printf(ANSI_COLOR_WHITE"It's the %s's turn!\n\n\n"ANSI_COLOR_RESET,enemyname);
                            Enemyturn();
                            
                        }
                }
                else if (strcmp(command2,cmdsp)==0||strcmp(command2,cmdspells)==0)
                {
                    Spells();
                    if(spellwin==1)
                    {
                        return;
                    }
                }

                
                
                else if (strcmp(command2,cmdsk)==0||strcmp(command2,cmdskills)==0)
                {
                    printf(ANSI_COLOR_WHITE"\n\nYour skills are: \n"ANSI_COLOR_RESET);
                    Skills();
                }
                else if (strcmp(command2,cmdd)==0||strcmp(command2,cmddefend)==0)
                {
                    printf(ANSI_COLOR_WHITE"\n\nYou take a defensive stance!\n");
                    defensive=1;
                    printf("It's the %s's turn!\n\n\n"ANSI_COLOR_RESET,enemyname);
                    Enemyturn();
                    
                }
            }
            if(health==0||health<0)
            {
                printf(ANSI_COLOR_RED"\n\nYou have fallen in battle...\n"ANSI_COLOR_RESET);
                inbattle=0;
                main();
                
            }
            else if(run==1)
            {
                inbattle=0;
                return;
            }
        }

    }
}

 

void Spells()
{
  if(inbattle==1)
  {
        
     if(spell_ls!=0)
     {
        printf("\nSpells\n");
        printf("---------\n");
        if(spellnum==1)
        {
            printf(ANSI_COLOR_GREEN"Spark - 1 MN\n"ANSI_COLOR_RESET);
            scanf("%s",spellcmd);
            printf("\n");
            if(strcmp(spellcmd,spark)==0)
            {
                mana-=1;
                    printf("You shoot sparks from your hands!\n");
                    damage=(mana*cunning*3/(enemymana*2))/6;
                    printf("The %s takes %d damage!\n",enemyname,damage);
                    enemyhealth=(enemyhealth-damage);
                    if(enemyhealth==0||enemyhealth<0)
                    {
                        printf(ANSI_COLOR_GREEN"\n\nYou won the battle!\n"ANSI_COLOR_RESET);
                        inbattle=0;
                        experience+=expval;
                        printf("You gain %d experience!\n",expval);
                        printf("Your total experience is now %d\n",experience);
                        Level();
                        Itemdrop();
                        spellwin=1;
                        return;
                    }
                        printf(ANSI_COLOR_RED"The %s's health is: %d\n"ANSI_COLOR_RESET,enemyname,enemyhealth);
                        printf(ANSI_COLOR_WHITE"It's the %s's turn!\n\n\n"ANSI_COLOR_RESET,enemyname);
                        playerturn=0;
                        Enemyturn();
                    
            }
                
            }
            else
            {
                printf("\n");
                printf("%s is not a valid command.\n\n",command);
                spelldefault=1;
                return;
            }
            
      }
      
      else
      {
          printf("You do not have any spells.\n\n");
          playerturn=1;
      }

  }
  if(inbattle!=1)
  {
      
      if(spell_ls!=0)
      {
          printf("\nSpells\n");
          printf("---------\n");
          if(spellnum==1)
          {
              printf(ANSI_COLOR_GREEN"Spark\n"ANSI_COLOR_RESET);
              scanf("%s",spellcmd);
              printf("\n");
              if(strcmp(spellcmd,spark)==0)
              {
                  printf("Sparks fly off your hands as you twist the elements to your will..\n\n");
              }
              else
              {
                  printf("\n");
                  printf("%s is not a valid command.\n\n",command);
              }
          }
      }
      else
      {
          printf("You do not have any spells.\n\n");
      }
      
  }
}
    

    void Skills()
{
    
    printf(ANSI_COLOR_YELLOW"Skills\n");
    printf("---------\n");
    printf(ANSI_COLOR_GREEN"1. Uber Heal\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_GREEN"2. Invoke\n"ANSI_COLOR_RESET);
    scanf("%d",&skillchoice);
        if(skillchoice==1)
        {
            if(health!=maxhealth)
                {
                 printf("Your health has been restored!\n\n");
                    health=maxhealth;
                }
            else
               {
                   printf("Your health is already full!\n\n");
               }
        }
        if(skillchoice==2)
        {
            if(mana!=maxmana)
            {
                printf("Your mana has been restored!\n\n");
                mana=maxmana;
            }
            else
            {
                printf("Your mana is already full!\n\n");
            }

        }
        else
        {
            printf("That is not a valid choice.\n\n");
        }
    playerturn=0;
    if(inbattle==1)
    {
    Enemyturn();
    }
}


void Enemyturn()
{
    if(spelldefault==1)
    {
        printf("That is not a valid choice.\n");
        playerturn=1;
    }
    if(spelldefault!=1&&(enemyhealth!=0||enemyhealth>0))
    {
    int enemyturnchoice=0;
    
    enemyturnchoice=rand()%50+1;
   
    if(enemyturnchoice==50)
        {
         printf(ANSI_COLOR_YELLOW"The %s runs!\n\n\n"ANSI_COLOR_RESET,enemyname);
            run=1;
            playerturn=1;
            
        }
        if(enemyturnchoice!=50)
        {
        printf(ANSI_COLOR_RED"The %s launches a basic attack!\n",enemyname);
        int eattackchance=rand()%10+1;
            if(eattackchance!=7)
            {
                defense=(strength*2)/3;
                printf(ANSI_COLOR_WHITE"The %s attacks!\n",enemyname);
                edamage=(((enemyattack*10/defense)/3)*2);
                if(defensive==1)
                {
                    edamage=((((enemyattack*10/defense)/3)*2)/1.5);
                    printf("You take %d damage!\n"ANSI_COLOR_RESET,edamage);
                    health-=edamage;
                    if(health==0||health<0)
                    {
                        printf(ANSI_COLOR_RED"\n\nYou have fallen in battle...\n"ANSI_COLOR_RESET);
                        inbattle=0;
                        main();
                        
                    }
                    printf(ANSI_COLOR_WHITE"It's your turn!\n\n\n"ANSI_COLOR_RESET);
                    defensive=0;
                    playerturn=1;
                }
                else
                {
                printf("You take %d damage!\n"ANSI_COLOR_RESET,edamage);
                health-=edamage;
                    if(health==0||health<0)
                    {
                        printf(ANSI_COLOR_RED"\n\nYou have fallen in battle...\n"ANSI_COLOR_RESET);
                        inbattle=0;
                        main();
                        
                    }
                printf(ANSI_COLOR_WHITE"It's your turn!\n\n\n"ANSI_COLOR_RESET);
                defensive=0;
                playerturn=1;
                }
            
                
            }
            else if(eattackchance==7)
            {
                printf(ANSI_COLOR_GREEN"The %s's attack misses!\n"ANSI_COLOR_RESET,enemyname);
                printf(ANSI_COLOR_WHITE"It's your turn!\n\n\n"ANSI_COLOR_RESET);
                 enemyattack+=1;
                playerturn=1;

                
            }
        }
    }
    else if(enemyhealth==0||enemyhealth<0)
    {
            printf(ANSI_COLOR_GREEN"\n\nYou won the battle!\n"ANSI_COLOR_RESET);
            inbattle=0;
            experience+=expval;
            printf("You gain %d experience!\n",expval);
            printf("Your total experience is now %d\n",experience);
            Level();
            Itemdrop();
            return;

    }
}

void Itemdrop()
{
    int drop;
    drop=rand()%6+1;
    if(drop==1)
    {
        for(i=1;i<16;i++)
        {
            if(inventory[i]==0)
            {
                inventory[i]=1;
                printf(ANSI_COLOR_RESET"The %s drops a potion!\n\n",enemyname);
                break;
            }
            
        }
       
    }
    if(drop==2)
    {
        for(i=1;i<16;i++)
        {
            if(inventory[i]==0)
            {
                inventory[i]=2;
                printf(ANSI_COLOR_RESET"The %s drops a mana potion!\n\n",enemyname);
                break;
            }
            
        }
    }
    if(drop==3||drop>3)
    {
        int golddrop;
        golddrop=rand()%50+1;
        gold+=golddrop;
        printf(ANSI_COLOR_RESET"The %s dropped %d gold!\n\n",enemyname,golddrop);
        golddrop=0;
        return;
    }
}

void Credits()
{
    printf(ANSI_COLOR_RED"\n\n\n-------------");printf(ANSI_COLOR_BLUE"Dragon Age is owned by Bioware.\n");
    printf(ANSI_COLOR_RED"\n-------");printf(ANSI_COLOR_GREEN"Dragon Age Genesis is a fanfiction created\n");
    printf(ANSI_COLOR_GREEN"by Brent Constantine for those who love the Dragon Age universe.\n\n");
    printf(ANSI_COLOR_RED"----------------------");printf(ANSI_COLOR_MAGENTA"Special Thanks:\n");
    printf(ANSI_COLOR_RED"--------------------------");printf(ANSI_COLOR_YELLOW"Bioware\n");
    printf(ANSI_COLOR_RED"----------------------------");printf(ANSI_COLOR_YELLOW"EA\n");
    printf(ANSI_COLOR_RED"------------------");printf(ANSI_COLOR_YELLOW"www.dragonage.wikia.com\n");
    printf(ANSI_COLOR_RED"---------------------");printf(ANSI_COLOR_YELLOW"www.glassgiant.com\n");
    printf(ANSI_COLOR_RED"------------------------");printf(ANSI_COLOR_YELLOW"Troy Colson\n");
    printf(ANSI_COLOR_RED"-------------");printf(ANSI_COLOR_YELLOW"and the Dragon Age fanbase at large!\n\n"ANSI_COLOR_RESET);
}



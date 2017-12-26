/*
 * File:   treasure.h
 * Author: Zusuk (ported from d20mud)
 *
 * Created:  03/10/2013
 */

#ifndef TREASURE_H
#define	TREASURE_H


/* defines */

/* Ornir CP System Defines, CP = creation points*/
/* we manually add +X to cp_max_bonus in the code */
#define TREASURE_MAX_BONUS   5
#define MIN_LEVEL_FOR_BONUS  10
#define CP_COST(bonus)       ((bonus - 1) * 150 + 100)
#define CP_BASE_VALUE(level) ((level - 1 + MIN_LEVEL_FOR_BONUS) * 80.6)

#define CP_TYPE_ARMOR        1
#define CP_TYPE_WEAPON       2
#define CP_TYPE_MISC         3
#define CP_TYPE_AMMO         4

/* percentage chance of random treasure drop */
/* DO NOT MAKE OVER 98 (because of happyhour settings) */
#define TREASURE_PERCENT 10

/* array sizes for treasure_const.c */
#define NUM_A_GEMSTONES       27
#define NUM_A_RING_DESCS      3
#define NUM_A_WRIST_DESCS     10
#define NUM_A_NECK_DESCS      14
#define NUM_A_HEAD_DESCS      17
#define NUM_A_HAND_DESCS      4
#define NUM_A_HANDS_DESCS     NUM_A_HAND_DESCS
#define NUM_A_CLOAK_DESCS     5
#define NUM_A_WAIST_DESCS     6
#define NUM_A_BOOT_DESCS      11
#define NUM_A_BOOTS_DESCS     NUM_A_BOOT_DESCS
#define NUM_A_BLADE_DESCS     32
#define NUM_A_PIERCING_DESCS  29
#define NUM_A_BLUNT_DESCS     30
#define NUM_A_COLORS          45
#define NUM_A_CRYSTAL_DESCS   18
#define NUM_A_POTION_DESCS    30
#define NUM_A_ARMOR_SPECIAL_DESCS    26
#define NUM_A_AMMO_DESCS      26
#define NUM_A_AMMO_HEAD_DESCS      11
#define NUM_A_ARMOR_CRESTS    39
#define NUM_A_HANDLE_TYPES    6
#define NUM_A_HEAD_TYPES      10

#define GRADE_MUNDANE 1
#define GRADE_MINOR   2
#define GRADE_MEDIUM  3
#define GRADE_MAJOR   4

#define TYPE_POTION 1
#define TYPE_SCROLL 2
#define TYPE_WAND   3
#define TYPE_STAFF  4

/* armor mold vnums (body, helm, sleeves, leggings) */
/*body*/
#define PLATE_BODY            3119
#define HALFPLATE_BODY        3143
#define SPLINT_BODY           3144
#define BREASTPLATE_BODY      3145 /*piecemail armor*/
#define CHAIN_BODY            3146
#define STUD_LEATHER_BODY     3147
#define LEATHER_BODY          3148
#define PADDED_BODY           3149
#define CLOTH_BODY            3150
#define BANDED_BODY           3241
#define SCALE_BODY            3242
#define HIDE_BODY             3243
#define LIGHT_CHAIN_BODY      3244

/*head*/
#define PLATE_HELM            3151
#define HALFPLATE_HELM        3152
#define SPLINT_HELM           3153
#define PIECEPLATE_HELM       3154
#define CHAIN_HELM            3155
#define STUD_LEATHER_HELM     3156
#define LEATHER_HELM          3157
#define PADDED_HELM           3158
#define CLOTH_HELM            3159

#define BANDED_HELM           3245
#define SCALE_HELM            3246
#define HIDE_HELM             3247
#define LIGHT_CHAIN_HELM      3248

/*arms*/
#define PLATE_ARMS            3160
#define HALFPLATE_ARMS        3161
#define SPLINT_ARMS           3162
#define CHAIN_ARMS            3163
#define STUD_LEATHER_ARMS     3164
#define LEATHER_ARMS          3165
#define PADDED_ARMS           3166
#define CLOTH_ARMS            3167

#define BANDED_ARMS           3249
#define PIECEPLATE_ARMS       3250
#define SCALE_ARMS            3251
#define HIDE_ARMS             3252
#define LIGHT_CHAIN_ARMS      3253

/*legs*/
#define PLATE_LEGS            3168
#define HALFPLATE_LEGS        3169
#define SPLINT_LEGS           3170
#define CHAIN_LEGS            3171
#define STUD_LEATHER_LEGS     3172
#define LEATHER_LEGS          3173
#define PADDED_LEGS           3174
#define CLOTH_LEGS            3175

#define BANDED_LEGS           3254
#define PIECEPLATE_LEGS       3255
#define SCALE_LEGS            3256
#define HIDE_LEGS             3257
#define LIGHT_CHAIN_LEGS      3258

/*shields*/
#define SHIELD_MEDIUM         3180
#define SHIELD_LARGE          3181
#define SHIELD_TOWER          3182
/* end armor molds */
#define NUM_ARMOR_MOLDS 37

/* weapon mold vnums */
/* simple */
/* light */
#define DAGGER                3212  //0
#define MACE                  3213
#define SICKLE                3214
/* one handed */
#define CLUB                  3215
#define MORNINGSTAR           3216
/* two handed */
#define SPEAR                 3217  //5
#define QUARTERSTAFF          3218
/* martial */
/* light */
#define HANDAXE               3219
#define KUKRI                 3220
#define SHORTSWORD            3221
/* one handed */
#define BATTLEAXE             3222  //10
#define FLAIL                 3223
#define LONGSWORD             3224
#define RAPIER                3225
#define SCIMITAR              3226
#define TRIDENT               3227  //15
#define WARHAMMER             3228
/* two handed */
#define FALCHION              3229
#define GLAIVE                3230
#define GREATAXE              3231
#define GREATCLUB             3232  //20
#define GREATSWORD            3233
#define HALBERD               3234
#define LANCE                 3235
#define SCYTHE                3236
/* exotic */
/* light */
#define KAMA                  3237  //25
/* one handed */
#define BASTARDSWORD          3238
#define DWARVENWARAXE         3239
/* two handed */
#define DIREFLAIL             3240
/* end weapon molds */
#define NUM_WEAPON_MOLDS 29

/* weapon blank object */
#define WEAPON_PROTO     3299
/* armor blank object */
#define ARMOR_PROTO      3298
/* ammo blank object */
#define AMMO_PROTO       3297

/* misc mold vnums */
#define RING_MOLD        3176  //0
#define NECKLACE_MOLD    3177
#define BOOTS_MOLD       3178
#define GLOVES_MOLD      3179
#define CLOAK_MOLD       3183
#define BELT_MOLD        3184  //5
#define WRIST_MOLD       3185
#define HELD_MOLD        3186
/* end misc molds */
#define NUM_MISC_MOLDS 8


/* item prototype for potions/scrolls/wands/staves */
#define ITEM_PROTOTYPE        3210
/* item prototype for crystals */
#define CRYSTAL_PROTOTYPE     3211


/* treasure_const.c - list of constant arrays */
extern const char *gemstones[NUM_A_GEMSTONES + 1];
extern const char *ring_descs[NUM_A_RING_DESCS + 1];
extern const char *wrist_descs[NUM_A_WRIST_DESCS + 1];
extern const char *neck_descs[NUM_A_NECK_DESCS + 1];
extern const char *head_descs[NUM_A_HEAD_DESCS + 1];
extern const char *hands_descs[NUM_A_HANDS_DESCS + 1];
extern const char *cloak_descs[NUM_A_CLOAK_DESCS + 1];
extern const char *waist_descs[NUM_A_WAIST_DESCS + 1];
extern const char *boot_descs[NUM_A_BOOT_DESCS + 1];
extern const char *blade_descs[NUM_A_BLADE_DESCS + 1];
extern const char *piercing_descs[NUM_A_PIERCING_DESCS + 1];
extern const char *blunt_descs[NUM_A_BLUNT_DESCS + 1];
extern const char *colors[NUM_A_COLORS + 1];
extern const char *crystal_descs[NUM_A_CRYSTAL_DESCS+ 1];
extern const char *potion_descs[NUM_A_POTION_DESCS + 1];
extern const char *armor_special_descs[NUM_A_ARMOR_SPECIAL_DESCS + 1];
extern const char *armor_crests[NUM_A_ARMOR_CRESTS + 1];
extern const char *handle_types[NUM_A_HANDLE_TYPES + 1];
extern const char *head_types[NUM_A_HEAD_TYPES + 1];
extern const char *ammo_descs[NUM_A_AMMO_DESCS + 1];
extern const char *ammo_head_descs[NUM_A_AMMO_HEAD_DESCS + 1];

/* treasure.c functions */

/* utility */
/* some spells are not appropriate for expendable items, this simple
 function returns TRUE if the spell is OK, FALSE if not */
bool valid_item_spell(int spellnum);
/* when grouped, determine random recipient from group */
struct char_data *find_treasure_recipient(struct char_data *killer);

// determines whether the character will get treasure or not
void determine_treasure(struct char_data *ch, struct char_data *mob);
// character should get treasure, chooses what awards are given out
// uses:  award_special/expendable (potion/scroll/wand/staff)/weapon/"item"/armor
void award_magic_item(int number, struct char_data *ch, int level, int grade);
/* function that creates a random crystal */
void award_random_crystal(struct char_data *ch, int level);
// gives away staff/potion/scroll/wand
void award_expendable_item(struct char_data *ch, int grade, int type);
// gives away random magic armor
void award_magic_armor(struct char_data *ch, int grade, int moblevel, int wear_slot);
// gives away random magic weapon
void award_magic_weapon(struct char_data *ch, int grade, int moblevel);
// gives away random armor pieces (outside of body-armor/shield)
void award_misc_magic_item(struct char_data *ch, int grade, int moblevel);
// gives away random ammo
void award_magic_ammo(struct char_data *ch, int grade, int moblevel);
// determines bonus modifiers to apply_value
int random_bonus_value(int apply_value, int level, int mod);
// take an object, and set its values to an appropriate weapon of 'type'
void set_weapon_object(struct obj_data *obj, int type);
// take an object, and set its values to an appropriate armor of 'type'
void set_armor_object(struct obj_data *obj, int type);
// take an object, and set its values to an appropriate ammo of 'type'
void set_ammo_object(struct obj_data *obj, int type);
// take base material, check for upgrade based on grade
int possible_material_upgrade(int base_mat, int grade);

/* Procedures for loading mobs with items, rather than simply handing them out
 * automaticalyl after death.  Used with random treasure load resets.
 *
 * The gear loaded will be based on the mob data passed in, and the level of the
 * items should not surpass the level of the mob.
 *
 * This is a work in progress. */
void load_treasure(struct char_data *mob);


// staff tool to load random items
ACMD(do_loadmagic);
ACMD(do_loadmagicspecific);
//ACMD(do_bazaar);

/* special procedures */
SPECIAL(bazaar);


#endif	/* TREASURE_H */


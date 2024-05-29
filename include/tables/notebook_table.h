/**
 * Bombers Notebook Table
 * 
 * DEFINE_PERSON should be used for people with entries in the notebook
 *    - Argument 0: Enum value for this person
 *    - Argument 1: Photo texture for this person
 *    - Argument 2: Message id for the description of this person
 *    - Argument 3: Enum value for the event meeting this person
 *    - Argument 4: Message id for the event meeting this person
 *    - Argument 5: WeekEventFlag for the event meeting this person
 *
 * DEFINE_EVENT should be used for events in the notebook
 *    - Argument 0: Enum value for the event
 *    - Argument 1: Icon to use (see BombersNotebookEventIcon)
 *    - Argument 2: WeekEventFlag that updates the icons color
 *    - Argument 3: Message id for the description of this event
 *    - Argument 4: Message id for the completion of this event
 *    - Argument 5: WeekEventFlag for the completion of this event
 *
 * Note: Event defines need to come after all Person defines
 */
/* 0x00 */ DEFINE_PERSON(BOMBERS_NOTEBOOK_PERSON_BOMBERS, gBombersNotebookPhotoBombersTex, 0x21DD, BOMBERS_NOTEBOOK_EVENT_MET_BOMBERS, 0x2147, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_MET_BOMBERS)
/* 0x01 */ DEFINE_PERSON(BOMBERS_NOTEBOOK_PERSON_ANJU, gBombersNotebookPhotoAnjuTex, 0x21CA, BOMBERS_NOTEBOOK_EVENT_MET_ANJU, 0x2134, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_MET_ANJU)
/* 0x02 */ DEFINE_PERSON(BOMBERS_NOTEBOOK_PERSON_KAFEI, gBombersNotebookPhotoKafeiTex, 0x21CB, BOMBERS_NOTEBOOK_EVENT_MET_KAFEI, 0x2135, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_MET_KAFEI)
/* 0x03 */ DEFINE_PERSON(BOMBERS_NOTEBOOK_PERSON_CURIOSITY_SHOP_MAN, gBombersNotebookPhotoCuriosityShopManTex, 0x21CC, BOMBERS_NOTEBOOK_EVENT_MET_CURIOSITY_SHOP_MAN, 0x2136, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_MET_CURIOSITY_SHOP_MAN)
/* 0x04 */ DEFINE_PERSON(BOMBERS_NOTEBOOK_PERSON_BOMB_SHOP_LADY, gBombersNotebookPhotoBombShopLadyTex, 0x21CD, BOMBERS_NOTEBOOK_EVENT_MET_BOMB_SHOP_LADY, 0x2137, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_MET_BOMB_SHOP_LADY)
/* 0x05 */ DEFINE_PERSON(BOMBERS_NOTEBOOK_PERSON_ROMANI, gBombersNotebookPhotoRomaniTex, 0x21CE, BOMBERS_NOTEBOOK_EVENT_MET_ROMANI, 0x2138, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_MET_ROMANI)
/* 0x06 */ DEFINE_PERSON(BOMBERS_NOTEBOOK_PERSON_CREMIA, gBombersNotebookPhotoCremiaTex, 0x21CF, BOMBERS_NOTEBOOK_EVENT_MET_CREMIA, 0x2139, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_MET_CREMIA)
/* 0x07 */ DEFINE_PERSON(BOMBERS_NOTEBOOK_PERSON_MAYOR_DOTOUR, gBombersNotebookPhotoMayorDotourTex, 0x21D0, BOMBERS_NOTEBOOK_EVENT_MET_MAYOR_DOTOUR, 0x213A, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_MET_MAYOR_DOTOUR)
/* 0x08 */ DEFINE_PERSON(BOMBERS_NOTEBOOK_PERSON_MADAME_AROMA, gBombersNotebookPhotoMadameAromaTex, 0x21D1, BOMBERS_NOTEBOOK_EVENT_MET_MADAME_AROMA, 0x213B, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_MET_MADAME_AROMA)
/* 0x09 */ DEFINE_PERSON(BOMBERS_NOTEBOOK_PERSON_TOTO, gBombersNotebookPhotoTotoTex, 0x21D2, BOMBERS_NOTEBOOK_EVENT_MET_TOTO, 0x213C, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_MET_TOTO)
/* 0x0A */ DEFINE_PERSON(BOMBERS_NOTEBOOK_PERSON_GORMAN, gBombersNotebookPhotoGormanTex, 0x21D3, BOMBERS_NOTEBOOK_EVENT_MET_GORMAN, 0x213D, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_MET_GORMAN)
/* 0x0B */ DEFINE_PERSON(BOMBERS_NOTEBOOK_PERSON_POSTMAN, gBombersNotebookPhotoPostmanTex, 0x21D4, BOMBERS_NOTEBOOK_EVENT_MET_POSTMAN, 0x213E, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_MET_POSTMAN)
/* 0x0C */ DEFINE_PERSON(BOMBERS_NOTEBOOK_PERSON_ROSA_SISTERS, gBombersNotebookPhotoRosaSistersTex, 0x21D5, BOMBERS_NOTEBOOK_EVENT_MET_ROSA_SISTERS, 0x213F, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_MET_ROSA_SISTERS)
/* 0x0D */ DEFINE_PERSON(BOMBERS_NOTEBOOK_PERSON_TOILET_HAND, gBombersNotebookPhotoToiletHandTex, 0x21D6, BOMBERS_NOTEBOOK_EVENT_MET_TOLIET_HAND, 0x2140, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_MET_TOILET_HAND)
/* 0x0E */ DEFINE_PERSON(BOMBERS_NOTEBOOK_PERSON_ANJUS_GRANDMOTHER, gBombersNotebookPhotoAnjusGrandmotherTex, 0x21D7, BOMBERS_NOTEBOOK_EVENT_MET_ANJUS_GRANDMOTHER, 0x2141, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_MET_ANJUS_GRANDMOTHER)
/* 0x0F */ DEFINE_PERSON(BOMBERS_NOTEBOOK_PERSON_KAMARO, gBombersNotebookPhotoKamaroTex, 0x21D8, BOMBERS_NOTEBOOK_EVENT_MET_KAMARO, 0x2142, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_MET_KAMARO)
/* 0x10 */ DEFINE_PERSON(BOMBERS_NOTEBOOK_PERSON_GROG, gBombersNotebookPhotoGrogTex, 0x21D9, BOMBERS_NOTEBOOK_EVENT_MET_GROG, 0x2143, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_MET_GROG)
/* 0x11 */ DEFINE_PERSON(BOMBERS_NOTEBOOK_PERSON_GORMAN_BROTHERS, gBombersNotebookPhotoGormanBrothersTex, 0x21DA, BOMBERS_NOTEBOOK_EVENT_MET_GORMAN_BROTHERS, 0x2144, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_MET_GORMAN_BROTHERS)
/* 0x12 */ DEFINE_PERSON(BOMBERS_NOTEBOOK_PERSON_SHIRO, gBombersNotebookPhotoShiroTex, 0x21DB, BOMBERS_NOTEBOOK_EVENT_MET_SHIRO, 0x2145, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_MET_SHIRO)
/* 0x13 */ DEFINE_PERSON(BOMBERS_NOTEBOOK_PERSON_GURU_GURU, gBombersNotebookPhotoGuruGuruTex, 0x21DC, BOMBERS_NOTEBOOK_EVENT_MET_GURU_GURU, 0x2146, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_MET_GURU_GURU)
/* 0x14 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_ROOM_KEY, BOMBERS_NOTEBOOK_EVENT_ICON_EXCLAMATION_POINT, WEEKEVENTREG_RECEIVED_ROOM_KEY, 0x2198, 0x2152, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_ROOM_KEY)
/* 0x15 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_PROMISED_MIDNIGHT_MEETING, BOMBERS_NOTEBOOK_EVENT_ICON_EXCLAMATION_POINT, WEEKEVENTREG_PROMISED_MIDNIGHT_MEETING, 0x2199, 0x2153, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_PROMISED_MIDNIGHT_MEETING)
/* 0x16 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_PROMISED_TO_MEET_KAFEI, BOMBERS_NOTEBOOK_EVENT_ICON_EXCLAMATION_POINT, WEEKEVENTREG_HAD_MIDNIGHT_MEETING, 0x219A, 0x2154, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_PROMISED_TO_MEET_KAFEI)
/* 0x17 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_LETTER_TO_KAFEI, BOMBERS_NOTEBOOK_EVENT_ICON_EXCLAMATION_POINT, WEEKEVENTREG_HAD_MIDNIGHT_MEETING, 0x219B, 0x0000, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_LETTER_TO_KAFEI)
/* 0x18 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_DEPOSITED_LETTER_TO_KAFEI, BOMBERS_NOTEBOOK_EVENT_ICON_EXCLAMATION_POINT, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_DEPOSITED_LETTER_TO_KAFEI, 0x219C, 0x2156, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_DEPOSITED_LETTER_TO_KAFEI)
/* 0x19 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_PENDANT_OF_MEMORIES, BOMBERS_NOTEBOOK_EVENT_ICON_EXCLAMATION_POINT, WEEKEVENTREG_RECEIVED_PENDANT_OF_MEMORIES, 0x219D, 0x2157, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_PENDANT_OF_MEMORIES)
/* 0x1A */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_DELIVERED_PENDANT_OF_MEMORIES, BOMBERS_NOTEBOOK_EVENT_ICON_EXCLAMATION_POINT, WEEKEVENTREG_DELIVERED_PENDANT_OF_MEMORIES, 0x219E, 0x2158, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_DELIVERED_PENDANT_OF_MEMORIES)
/* 0x1B */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_ESCAPED_SAKONS_HIDEOUT, BOMBERS_NOTEBOOK_EVENT_ICON_EXCLAMATION_POINT, WEEKEVENTREG_ESCAPED_SAKONS_HIDEOUT, 0x219F, 0x2159, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_ESCAPED_SAKONS_HIDEOUT)
/* 0x1C */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_PROMISED_TO_HELP_WITH_ALIENS, BOMBERS_NOTEBOOK_EVENT_ICON_EXCLAMATION_POINT, WEEKEVENTREG_PROMISED_TO_HELP_WITH_ALIENS, 0x21A0, 0x215A, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_PROMISED_TO_HELP_WITH_ALIENS)
/* 0x1D */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_DEFENDED_AGAINST_ALIENS, BOMBERS_NOTEBOOK_EVENT_ICON_EXCLAMATION_POINT, WEEKEVENTREG_DEFENDED_AGAINST_ALIENS, 0x21A1, 0x215B, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_DEFENDED_AGAINST_ALIENS)
/* 0x1E */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_ALIENS_BOTTLE, BOMBERS_NOTEBOOK_EVENT_ICON_RIBBON, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21A2, 0x0000, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_ALIENS_BOTTLE)
/* 0x1F */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_ESCORTED_CREMIA, BOMBERS_NOTEBOOK_EVENT_ICON_EXCLAMATION_POINT, WEEKEVENTREG_ESCORTED_CREMIA, 0x21A3, 0x215D, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_ESCORTED_CREMIA)
/* 0x20 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_ROMANIS_MASK, BOMBERS_NOTEBOOK_EVENT_ICON_MASK, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21A4, 0x0000, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_ROMANIS_MASK)
/* 0x21 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_KEATON_MASK, BOMBERS_NOTEBOOK_EVENT_ICON_MASK, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21A5, 0x215F, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_KEATON_MASK)
/* 0x22 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_PRIORITY_MAIL, BOMBERS_NOTEBOOK_EVENT_ICON_EXCLAMATION_POINT, WEEKEVENTREG_RECEIVED_PRIORITY_MAIL, 0x21A6, 0x2160, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_PRIORITY_MAIL)
/* 0x23 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_DELIVERED_PRIORITY_MAIL, BOMBERS_NOTEBOOK_EVENT_ICON_RIBBON, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21A7, 0x2161, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_DELIVERED_PRIORITY_MAIL)
/* 0x24 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_LEARNED_SECRET_CODE, BOMBERS_NOTEBOOK_EVENT_ICON_EXCLAMATION_POINT, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21A8, 0x0000, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_LEARNED_SECRET_CODE)
/* 0x25 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_BOMBERS_NOTEBOOK, BOMBERS_NOTEBOOK_EVENT_ICON_RIBBON, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21A9, 0x2163, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_BOMBERS_NOTEBOOK)
/* 0x26 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_MAYOR_HP, BOMBERS_NOTEBOOK_EVENT_ICON_RIBBON, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21AA, 0x2164, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_MAYOR_HP)
/* 0x27 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_ROSA_SISTERS_HP, BOMBERS_NOTEBOOK_EVENT_ICON_RIBBON, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21AB, 0x2165, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_ROSA_SISTERS_HP)
/* 0x28 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_TOILET_HAND_HP, BOMBERS_NOTEBOOK_EVENT_ICON_RIBBON, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21AC, 0x2166, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_TOILET_HAND_HP)
/* 0x29 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_GRANDMA_SHORT_STORY_HP, BOMBERS_NOTEBOOK_EVENT_ICON_RIBBON, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21AD, 0x2167, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_GRANDMA_SHORT_STORY_HP)
/* 0x2A */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_GRANDMA_LONG_STORY_HP, BOMBERS_NOTEBOOK_EVENT_ICON_RIBBON, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21AE, 0x2168, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_GRANDMA_LONG_STORY_HP)
/* 0x2B */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_POSTMAN_HP, BOMBERS_NOTEBOOK_EVENT_ICON_RIBBON, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21AF, 0x2169, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_POSTMAN_HP)
/* 0x2C */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_KAFEIS_MASK, BOMBERS_NOTEBOOK_EVENT_ICON_MASK, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21B0, 0x216A, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_KAFEIS_MASK)
/* 0x2D */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_ALL_NIGHT_MASK, BOMBERS_NOTEBOOK_EVENT_ICON_MASK, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21B1, 0x216B, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_ALL_NIGHT_MASK)
/* 0x2E */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_BUNNY_HOOD, BOMBERS_NOTEBOOK_EVENT_ICON_MASK, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21B2, 0x216C, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_BUNNY_HOOD)
/* 0x2F */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_GAROS_MASK, BOMBERS_NOTEBOOK_EVENT_ICON_MASK, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21B3, 0x216D, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_GAROS_MASK)
/* 0x30 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_CIRCUS_LEADERS_MASK, BOMBERS_NOTEBOOK_EVENT_ICON_MASK, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21B4, 0x216E, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_CIRCUS_LEADERS_MASK)
/* 0x31 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_POSTMANS_HAT, BOMBERS_NOTEBOOK_EVENT_ICON_MASK, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21B5, 0x216F, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_POSTMANS_HAT)
/* 0x32 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_COUPLES_MASK, BOMBERS_NOTEBOOK_EVENT_ICON_MASK, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21B6, 0x2170, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_COUPLES_MASK)
/* 0x33 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_BLAST_MASK, BOMBERS_NOTEBOOK_EVENT_ICON_MASK, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21B7, 0x2171, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_BLAST_MASK)
/* 0x34 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_KAMAROS_MASK, BOMBERS_NOTEBOOK_EVENT_ICON_MASK, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21B8, 0x2172, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_KAMAROS_MASK)
/* 0x35 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_STONE_MASK, BOMBERS_NOTEBOOK_EVENT_ICON_MASK, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21B9, 0x2173, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_STONE_MASK)
/* 0x36 */ DEFINE_EVENT(BOMBERS_NOTEBOOK_EVENT_RECEIVED_BREMEN_MASK, BOMBERS_NOTEBOOK_EVENT_ICON_MASK, BOMBERS_NOTEBOOK_EVENT_COLOR_WEEKEVENTREG_NONE, 0x21BA, 0x2174, WEEKEVENTREG_BOMBERS_NOTEBOOK_EVENT_RECEIVED_BREMEN_MASK)
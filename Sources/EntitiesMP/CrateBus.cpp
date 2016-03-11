/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 4 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"

#include "StdH.h"
#include "ModelsMP/CutSequences/CrateBus/CrateBus.h"
#include "ModelsMP/Enemies/Mental/Mental.h"

#include <EntitiesMP/CrateBus.h>
#include <EntitiesMP/CrateBus_tables.h>
#line 14 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"

INDEX _aiLeftAnimations[] = {
  MENTAL_ANIM_LEFTWAVE01,
  MENTAL_ANIM_LEFTWAVE02,
  MENTAL_ANIM_LEFTWAVE03,
  MENTAL_ANIM_LEFTWAVE04,
  MENTAL_ANIM_LEFTWAVE05,
  MENTAL_ANIM_LEFTWAVE06
};

INDEX _aiRightAnimations[] = {
  MENTAL_ANIM_RIGHTWAVE01,
  MENTAL_ANIM_RIGHTWAVE02,
  MENTAL_ANIM_RIGHTWAVE03,
  MENTAL_ANIM_RIGHTWAVE04,
  MENTAL_ANIM_RIGHTWAVE05,
  MENTAL_ANIM_RIGHTWAVE06,
  MENTAL_ANIM_RIGHTWAVE07,
  MENTAL_ANIM_RIGHTWAVE08
};

  CAutoPrecacheSound m_aps;
  CAutoPrecacheTexture m_apt;

#define CT_BIGHEADS 24

void CCrateBus::SetDefaultProperties(void) {
  m_bActive = TRUE ;
  m_fExplosionStretch = 1.0f;
  m_tmDeath = 0.0f;
  m_strName = "Crate bus";
  m_ctMentals = 0;
  m_bShowTrail = FALSE ;
  m_fStretch = 1.0f;
  m_fnmHeadTex01 = CTString("");
  m_fnmHeadTex02 = CTString("");
  m_fnmHeadTex03 = CTString("");
  m_fnmHeadTex04 = CTString("");
  m_fnmHeadTex05 = CTString("");
  m_fnmHeadTex06 = CTString("");
  m_fnmHeadTex07 = CTString("");
  m_fnmHeadTex08 = CTString("");
  m_fnmHeadTex09 = CTString("");
  m_fnmHeadTex10 = CTString("");
  m_fnmHeadTex11 = CTString("");
  m_fnmHeadTex12 = CTString("");
  m_fnmHeadTex13 = CTString("");
  m_fnmHeadTex14 = CTString("");
  m_fnmHeadTex15 = CTString("");
  m_fnmHeadTex16 = CTString("");
  m_fnmHeadTex17 = CTString("");
  m_fnmHeadTex18 = CTString("");
  m_fnmHeadTex19 = CTString("");
  m_fnmHeadTex20 = CTString("");
  m_fnmHeadTex21 = CTString("");
  m_fnmHeadTex22 = CTString("");
  m_fnmHeadTex23 = CTString("");
  m_fnmHeadTex24 = CTString("");
  CMovableModelEntity::SetDefaultProperties();
}
  
#line 94 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
void CCrateBus::Precache(void) 
#line 95 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{
#line 96 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
PrecacheClass  (CLASS_BASIC_EFFECT  , BET_BOMB );
#line 97 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
PrecacheTexture  (TEXTURE_HEAD );
#line 98 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}
  
#line 100 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
void CCrateBus::AddRiders() 
#line 101 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{
#line 102 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
GetModelObject  () -> RemoveAllAttachmentModels  ();
#line 103 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
for(INDEX i  = 0;i  < CT_BIGHEADS ;i  ++)
#line 104 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{
#line 105 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
AddAttachment  (CRATEBUS_ATTACHMENT_1  + i  , MODEL_MENTAL  , TEXTURE_MENTAL );
#line 106 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
CAttachmentModelObject  * pamoMental  = GetModelObject  () -> GetAttachmentModel  (CRATEBUS_ATTACHMENT_1  + i );
#line 107 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
if(pamoMental  == NULL ){continue ;}
#line 108 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
CModelObject & moMental  = pamoMental  -> amo_moModelObject ;
#line 109 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
AddAttachmentToModel  (this  , moMental  , MENTAL_ATTACHMENT_HEAD  , MODEL_HEAD  , TEXTURE_HEAD  , 0 , 0 , 0);
#line 110 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
CAttachmentModelObject  * pamoHead  = moMental  . GetAttachmentModel  (MENTAL_ATTACHMENT_HEAD );
#line 111 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
if(pamoHead  == NULL ){continue ;}
#line 112 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
CTFileName fnm  = (& m_fnmHeadTex01 ) [ i  ];
#line 113 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
if(fnm  != "")
#line 114 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{
#line 116 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
try 
#line 117 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{
#line 118 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
pamoHead  -> amo_moModelObject  . mo_toTexture  . SetData_t  (fnm );
#line 119 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}
#line 121 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
catch  (char  * strError )
#line 122 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{
#line 124 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
CPrintF  ("%s\n" , strError );
#line 125 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}
#line 126 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}
#line 127 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
INDEX iRndLeft  = IRnd  () % (sizeof  (_aiLeftAnimations ) / sizeof  (INDEX));
#line 128 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
INDEX iRndRight  = IRnd  () % (sizeof  (_aiRightAnimations ) / sizeof  (INDEX));
#line 129 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
if(i  & 1)
#line 130 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{
#line 131 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
moMental  . PlayAnim  (_aiRightAnimations  [ iRndRight  ] , AOF_LOOPING );
#line 132 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}
#line 133 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
else 
#line 134 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{
#line 135 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
moMental  . PlayAnim  (_aiLeftAnimations  [ iRndLeft  ] , AOF_LOOPING );
#line 136 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}
#line 137 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
FLOAT tmOffsetPhase  = - FRnd  () * 10.0f;
#line 138 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
moMental  . OffsetPhase  (tmOffsetPhase );
#line 139 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}
#line 140 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}
  
#line 143 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
void CCrateBus::RenderParticles(void) 
#line 144 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{
#line 145 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
CEntity  * penParent  = GetParent  ();
#line 146 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
if(m_bShowTrail  && penParent  != NULL )
#line 147 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{
#line 148 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
Particles_AfterBurner  (penParent  , 0.0f , 0.5f);
#line 150 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}
#line 151 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}
  
#line 153 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
void CCrateBus::SpawnExplosion(INDEX iCharacter,FLOAT fAddY,FLOAT fSize) 
#line 154 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{
#line 155 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
FLOAT3D vOffset  = FLOAT3D (0 , 0 , 0);
#line 157 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
if(iCharacter  >= 0)
#line 158 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{
#line 159 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
CAttachmentModelObject  * pamo  = GetModelObject  () -> GetAttachmentModel  (iCharacter );
#line 160 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
if(pamo  == NULL  && fAddY  >= 0){return ;}
#line 161 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
GetModelObject  () -> RemoveAttachmentModel  (iCharacter );
#line 162 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
m_ctMentals  --;
#line 164 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
INDEX iX  = iCharacter  % 2;
#line 165 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
INDEX iZ  = iCharacter  / 2;
#line 166 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
vOffset  = FLOAT3D (- 1.0f + iX  * 2.0f , 3.0f + (FRnd  ()) * 1.0f + fAddY  , - 14.5f + iZ  * 2.8f) * m_fStretch ;
#line 167 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}
#line 168 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
else 
#line 169 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{
#line 171 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
vOffset  = FLOAT3D ((FRnd  () - 0.5f) * 4.0f , 3.0f + (FRnd  ()) * 1.0f + fAddY  , (FRnd  () - 0.5f) * 36.0f) * m_fStretch ;
#line 172 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}
#line 174 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
CPlacement3D plExplosion  = GetPlacement  ();
#line 175 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
plExplosion  . pl_PositionVector  = plExplosion  . pl_PositionVector  + vOffset ;
#line 176 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
CEntityPointer penExplosion  = CreateEntity  (plExplosion  , CLASS_BASIC_EFFECT );
#line 177 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
ESpawnEffect  eSpawnEffect ;
#line 178 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
eSpawnEffect  . colMuliplier  = C_WHITE  | CT_OPAQUE ;
#line 179 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
eSpawnEffect  . betType  = BET_BOMB ;
#line 180 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
eSpawnEffect  . vStretch  = FLOAT3D (m_fExplosionStretch  , m_fExplosionStretch  , m_fExplosionStretch );
#line 181 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
penExplosion  -> Initialize  (eSpawnEffect );
#line 184 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
eSpawnEffect  . betType  = BET_EXPLOSION_DEBRIS ;
#line 185 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
CEntityPointer penExplosionDebris  = CreateEntity  (plExplosion  , CLASS_BASIC_EFFECT );
#line 186 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
penExplosionDebris  -> Initialize  (eSpawnEffect );
#line 189 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
eSpawnEffect  . betType  = BET_EXPLOSION_SMOKE ;
#line 190 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
CEntityPointer penExplosionSmoke  = CreateEntity  (plExplosion  , CLASS_BASIC_EFFECT );
#line 191 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
penExplosionSmoke  -> Initialize  (eSpawnEffect );
#line 192 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}
  
#line 194 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
CPlacement3D CCrateBus::GetLerpedPlacement(void)const 
#line 195 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{
#line 196 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
return CEntity  :: GetLerpedPlacement  ();
#line 197 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}
BOOL CCrateBus::
#line 200 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
Die(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CCrateBus_Die
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CCrateBus::Die expects 'EVoid' as input!");  const EVoid &e = (const EVoid &)__eeInput;
#line 203 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{FOREACHINLIST  (CEntity  , en_lnInParent  , en_lhChildren  , itenChild ){
#line 205 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
itenChild  -> SendEvent  (ERangeModelDestruction  ());
#line 206 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}}
#line 221 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
for(INDEX iChar  = 0;iChar  < CT_BIGHEADS ;iChar  += 1)
#line 222 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{
#line 224 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
INDEX iX  = iChar  % 2;
#line 225 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
INDEX iZ  = iChar  / 2;
#line 226 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
FLOAT fAddY  = 1.0f * m_fStretch ;
#line 227 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
FLOAT3D vOffset  = FLOAT3D (- 1.0f + iX  * 2.0f , 3.0f + (FRnd  ()) * 1.0f + fAddY  , - 14.5f + iZ  * 2.8f) * m_fStretch ;
#line 228 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
FLOAT3D vPos  = GetPlacement  () . pl_PositionVector  + vOffset ;
#line 229 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
CEntityPointer penDebris  = GetWorld  () -> CreateEntity_t  (CPlacement3D (vPos  , ANGLE3D (0 , 0 , 0)) , 
#line 230 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
CTFILENAME  ("Classes\\Debris.ecl"));
#line 232 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
ESpawnDebris  eSpawn ;
#line 233 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
eSpawn  . bImmaterialASAP  = FALSE ;
#line 234 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
eSpawn  . fDustStretch  = 4.0f;
#line 235 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
eSpawn  . bCustomShading  = FALSE ;
#line 236 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
eSpawn  . colDebris  = C_WHITE  | CT_OPAQUE ;
#line 237 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
eSpawn  . Eeibt  = EIBT_FLESH ;
#line 238 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
eSpawn  . dptParticles  = DPT_AFTERBURNER ;
#line 239 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
eSpawn  . betStain  = BET_BLOODSTAINGROW ;
#line 240 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
eSpawn  . pmd  = GetModelDataForComponent  (MODEL_HEAD );
#line 241 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
eSpawn  . ptd  = GetTextureDataForComponent  (TEXTURE_HEAD );
#line 242 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
eSpawn  . ptdRefl  = NULL ;
#line 243 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
eSpawn  . ptdSpec  = NULL ;
#line 244 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
eSpawn  . ptdBump  = NULL ;
#line 245 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
eSpawn  . iModelAnim  = 0;
#line 246 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
eSpawn  . fSize  = m_fStretch ;
#line 247 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
eSpawn  . vStretch  = FLOAT3D (1 , 1 , 1);
#line 248 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
eSpawn  . penFallFXPapa  = NULL ;
#line 250 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
penDebris  -> Initialize  (eSpawn );
#line 253 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
FLOAT3D vSpeed  = FLOAT3D (FRnd  () - 0.5f , 0.25f + FRnd  () * 0.75f , FRnd  () - 0.5f) * 60.0f;
#line 254 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
FLOAT3D vRot  = FLOAT3D (FRnd  () - 0.5f , FRnd  () - 0.5f , FRnd  () - 0.5f) * 200.0f;
#line 255 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
((CMovableEntity  &) * penDebris ) . LaunchAsFreeProjectile  (vSpeed  , NULL );
#line 256 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
((CMovableEntity  &) * penDebris ) . SetDesiredRotation  (vRot );
#line 258 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
GetModelObject  () -> RemoveAttachmentModel  (iChar );
#line 259 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}
#line 261 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{for(INDEX iChar  = 0;iChar  < CT_BIGHEADS ;iChar  += 3)
#line 262 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{
#line 263 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
SpawnExplosion  (iChar  , - 2.0f , 4.0f);
#line 264 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}}
#line 266 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
SwitchToEditorModel  ();
#line 267 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
SetTimerAfter(2.0f);
Jump(STATE_CURRENT, 0x01600001, FALSE, EBegin());return TRUE;}BOOL CCrateBus::H0x01600001_Die_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x01600001
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x01600002, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CCrateBus::H0x01600002_Die_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x01600002
;
#line 269 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
Destroy  ();
#line 270 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
Return(STATE_CURRENT,EVoid());
#line 270 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
return TRUE; ASSERT(FALSE); return TRUE;};BOOL CCrateBus::
#line 276 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CCrateBus_Main
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CCrateBus::Main expects 'EVoid' as input!");  const EVoid &e = (const EVoid &)__eeInput;
#line 278 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
if(m_bActive )
#line 279 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{
#line 280 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
InitAsModel  ();
#line 281 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}
#line 282 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
else 
#line 283 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{
#line 284 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
InitAsEditorModel  ();
#line 285 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}
#line 287 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
SetPhysicsFlags  (EPF_MODEL_IMMATERIAL );
#line 288 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 291 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
SetModel  (MODEL_CRATE_BUS );
#line 292 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
SetModelMainTexture  (TEXTURE_CRATE_BUS );
#line 294 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
m_bShowTrail  = FALSE ;
#line 295 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
AddRiders  ();
#line 296 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
GetModelObject  () -> StretchModel  (FLOAT3D (m_fStretch  , m_fStretch  , m_fStretch ));
#line 297 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
ModelChangeNotify  ();
#line 299 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
SetTimerAfter(0.1f);
Jump(STATE_CURRENT, 0x01600003, FALSE, EBegin());return TRUE;}BOOL CCrateBus::H0x01600003_Main_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x01600003
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x01600004, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CCrateBus::H0x01600004_Main_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x01600004
;
#line 301 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
CEntity  * penParent  = GetParent  ();
#line 302 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
if(penParent  != NULL )
#line 303 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{
#line 305 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
Particles_AfterBurner_Prepare  (penParent );
#line 306 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}
#line 308 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
SetTimerAt(THINKTIME_NEVER);
Jump(STATE_CURRENT, 0x01600005, FALSE, EBegin());return TRUE;}BOOL CCrateBus::H0x01600005_Main_03(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x01600005
switch(__eeInput.ee_slEvent)
#line 309 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
{case(EVENTCODE_EBegin):{const EBegin&e= (EBegin&)__eeInput;

#line 312 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
return TRUE;
#line 313 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}ASSERT(FALSE);break;case(EVENTCODE_EActivate):{const EActivate&e= (EActivate&)__eeInput;

#line 316 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
SwitchToModel  ();
#line 317 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
m_bActive  = TRUE ;
#line 318 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
return TRUE;
#line 319 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}ASSERT(FALSE);break;case(EVENTCODE_EDeactivate):{const EDeactivate&e= (EDeactivate&)__eeInput;

#line 321 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
SwitchToEditorModel  ();
#line 322 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
m_bActive  = FALSE ;
#line 323 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
return TRUE;
#line 324 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}ASSERT(FALSE);break;case(EVENTCODE_EEnvironmentStart):{const EEnvironmentStart&e= (EEnvironmentStart&)__eeInput;

#line 326 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
m_bShowTrail  = TRUE ;
#line 327 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
return TRUE;
#line 328 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}ASSERT(FALSE);break;case(EVENTCODE_EStop):{const EStop&e= (EStop&)__eeInput;

#line 331 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
Jump(STATE_CURRENT, STATE_CCrateBus_Die, TRUE, EVoid());return TRUE;
#line 332 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
return TRUE;
#line 333 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}ASSERT(FALSE);break;default:{
#line 335 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
return TRUE;
#line 336 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}ASSERT(FALSE);break;
#line 337 "D:/SE1_GPL/Sources/EntitiesMP/CrateBus.es"
}return TRUE;}BOOL CCrateBus::H0x01600006_Main_04(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x01600006
; ASSERT(FALSE); return TRUE;};
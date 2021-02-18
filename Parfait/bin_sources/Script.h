//**************************************************************************************************
// 定数
//**************************************************************************************************
#define	SLOWEST				400
#define	SLOWER				200
#define	SLOW				100
#define	NORMAL				50
#define	FAST				20
#define	FASTER				10
#define	FASTEST				0

#define FILTER_MIRROR		0x00010000																// 左右反転
#define FILTER_FLIP			0x00020000																// 上下反転

#define FADEFILTER_MIRROR	0x00010000																// 左右反転
#define FADEFILTER_FLIP		0x00020000																// 上下反転
#define FADEFILTER_NEGATIVE	0x00040000																// 白黒反転

#define SHAKE_RANDOM		0x00000001																// ランダム揺れ
#define SHAKE_TATE			0x00000002																// 縦揺れ
#define SHAKE_YOKO			0x00000004																// 横揺れ
#define SHAKE_VISUAL		0x00000008																// ビジュアル
#define SHAKE_WINDOW		0x00000010																// ウィンドウ

//**************************************************************************************************
// 列挙定数
//**************************************************************************************************
enum
{
	OBJECT_BUFFER1,
	OBJECT_BUFFER2,
	OBJECT_BUFFER3,
	OBJECT_STAFF1,
	OBJECT_STAFF2,
	OBJECT_STAFF3,
	OBJECT_STAFF4,
	OBJECT_STAFF5,
	OBJECT_ENDING1,
	OBJECT_ENDING2,
	OBJECT_ENDING3,
	OBJECT_ENDING4,
	OBJECT_ENDING5,
	OBJECT_ENDING6,
	OBJECT_ENDING7,
};

enum
{
	SYSTEMBANK_BOOT,
	SYSTEMBANK_TITLE,
	SYSTEMBANK_SELECTMAP,
	SYSTEMBANK_STAFFROLL,
	SYSTEMBANK_STAFFROLLEND,
};

enum
{
	UNIT_HITOSHI,				// 仁
	UNIT_YUI,					// 由飛
	UNIT_REA,					// 玲愛
	UNIT_ASUKA,					// 明日香
	UNIT_KASURI,				// かすり
	UNIT_EMA,					// 恵麻
	UNIT_RIKAKO,				// 里伽子
	UNIT_MIZUNA,				// 瑞奈
	UNIT_ITABASHI,				// 板橋
	UNIT_MALE,					// サブキャラ（男性）
	UNIT_FEMALE,				// サブキャラ（女性）
	UNIT_ETC,					// その他
	UNIT_SYSTEM,				// システム用
	UNIT_MAX
};

enum
{
	SCENE_YUI_01,				// 由飛13：一時間でできる大恋愛
	SCENE_YUI_02,				// 由飛20：バレンタインＨ（由飛編）
	SCENE_YUI_03,				// 由飛28：ものすごいえっち
	SCENE_REA_01,				// 玲愛13：ベランダ越しの愛
	SCENE_REA_02,				// 玲愛16：嫉妬ポイントＭＡＸ
	SCENE_REA_03,				// 玲愛20：バレンタインＨ（玲愛編）
	SCENE_ASUKA_01,				// 明日香14：これ、使ってくださいっ
	SCENE_ASUKA_02,				// 明日香15：テスト前の安全日
	SCENE_ASUKA_03,				// 明日香18：お泊まり
	SCENE_KASURI_01,			// かすり13：その夜のこと
	SCENE_KASURI_02,			// かすり14：つまずき
	SCENE_KASURI_03,			// かすり21：決戦バレンタイン！
	SCENE_EMA_01,				// 恵麻14：なぐさめて、あげるね
	SCENE_EMA_02,				// 恵麻16：親にはナイショで
	SCENE_EMA_03,				// 恵麻17：仁くんはもう大丈夫
	SCENE_RIKAKO_01,			// 里伽子13：逃がさないように、して
	SCENE_RIKAKO_02,			// 里伽子16：一月二日の再会
	SCENE_RIKAKO_03,			// 里伽子25：なら、家族になればいい

	SCENE_MAX
};

enum
{
	FILTER_NORMAL,
	FILTER_FADE,
	FILTER_FLASH,
	FILTER_SEPIA,
	FILTER_MONO,
	FILTER_RED,
	FILTER_GREEN,
	FILTER_BLUE,
	FILTER_RGB,
	FILTER_NEGATIVE,
	FILTER_BOKASHI,
	FILTER_STAFFROLL,
};

enum
{
	FADEFILTER_EYE,
	FADEFILTER_DOOR,
	FADEFILTER_CIRCLE,
	FADEFILTER_LIGHT,
	FADEFILTER_UZU,
	FADEFILTER_LEFTRIGHT,
	FADEFILTER_DOWNUP,
	FADEFILTER_RYUUSEN,
	FADEFILTER_KAITEN,
	FADEFILTER_SIDE,
	FADEFILTER_SMOKE,
	FADEFILTER_WAVE,
	FADEFILTER_STAFFROLL,
	FADEFILTER_STAFFROLL2,
	FADEFILTER_SWORD,
	FADEFILTER_BLOOD,
};

enum
{
	SYSTEMVOICE_TITLE,
	SYSTEMVOICE_GIGA,
	SYSTEMVOICE_TRIAL,
	SYSTEMVOICE_START,
	SYSTEMVOICE_CGMODE,
	SYSTEMVOICE_SOUNDMODE,
	SYSTEMVOICE_REPLAYMODE,
	SYSTEMVOICE_SAVE,
	SYSTEMVOICE_LOAD,
	SYSTEMVOICE_EVENTSHEET,
	SYSTEMVOICE_CONFIG,
	SYSTEMVOICE_CHECK,
	SYSTEMVOICE_RETURNTITLE,
	SYSTEMVOICE_EXIT,
	SYSTEMVOICE_EXIT2,
	SYSTEMVOICE_MAX,
};

enum
{
	WINDOW_NORMAL,				// 通常
	WINDOW_BATTLE,				// バトル
	WINDOW_SIMPLE,				// フレーム無し
};

enum
{
	BGM_OPENING,				// オープニング
	BGM_OPENINGP,				// オープニング（ピアノ）
	BGM_ENDING,					// エンディング
	BGM_ENDINGP,				// エンディング（ピアノ）
	BGM_ENDINGY,				// エンディング（由飛）
	BGM_KISSATEN,				// 喫茶店
	BGM_NICHIJOU1,				// 日常（通常）
	BGM_NICHIJOU2,				// 日常（ほんわか）
	BGM_NICHIJOU3,				// 日常（明るい）
	BGM_YASURAGI,				// 安らぎ
	BGM_SHITTORI,				// しっとり
	BGM_HUAN,					// 不安・鬱
	BGM_KANDOU1,				// 感動1
	BGM_KANASHIMI,				// 哀しみ
	BGM_COMICAL,				// コミカル
	BGM_YUI,					// 由飛のテーマ
	BGM_REA,					// 玲愛のテーマ
	BGM_ASUKA,					// 明日香のテーマ
	BGM_KASURI,					// かすりのテーマ
	BGM_EMA,					// 恵麻のテーマ
	BGM_RIKAKO,					// 里伽子のテーマ
	BGM_H1,						// Hシーン（通常）
	BGM_KANDOU2,				// 感動2
	BGM_H2,						// Hシーン（感動）

	BGM_HOTARUP,				// 蛍の光（放送&ピアノ）
	BGM_WEWISH,					// We wish you a merry christmas
	BGM_JINGLE,					// ジングルベル
	BGM_MOROBITO,				// もろびとこぞりて
	BGM_SORISUBERI,				// そり滑り
	BGM_NOCTURNE,				// ノクターン 第2番 変ホ長調
	BGM_ETUDE,					// エチュード 作品25 第1番 変イ長調　「エオリアン・ハープ」

	BGM_CURIO,					// キュリオの曲
	BGM_COLORFUL,				// カラフルキッスの曲
	BGM_VGNEO1,					// V.G.NEOの曲（決意）
	BGM_VGNEO2,					// V.G.NEOの曲（通常戦い）

	BGM_ENDINGA,				// エンディング（アカペラ）
	BGM_HOTARUH,				// 蛍の光（放送）
	BGM_JINGLE_END,				// ジングルベル（終了）
	BGM_MOROBITO_END,			// もろびとこぞりて（終了）

	BGM_MAX
};

enum
{
	CENTER,						// 中央
	LEFT,						// 左
	RIGHT,						// 右
	LEFTLEFT,					// 左より左
	RIGHTRIGHT,					// 右より右
	CENTERLEFT,					// 中央より左
	CENTERRIGHT,				// 中央より右
	STANDPOS_MAX,
};

enum
{
	MOVE_STOP,					// 停止
	MOVE_LEFT,					// 左
	MOVE_RIGHT,					// 右
};

enum
{
	WEEK_MONDAY,				// 月曜
	WEEK_TUESDAY,				// 火曜
	WEEK_WEDNESDAY,				// 水曜
	WEEK_THURSDAY,				// 木曜
	WEEK_FRIDAY,				// 金曜
	WEEK_SATURDAY,				// 土曜
	WEEK_SUNDAY,				// 日曜
};

enum
{
	FLG_XMAS,
	FLG_XMASFLOOR,
	FLG_XMASKITCHEN,
	FLG_XMASFOODCOURT,
	FLG_XMASTOWN,

	FLG_VISUAL1_1,
	FLG_VISUAL1_2,
	FLG_VISUAL2_1,
	FLG_VISUAL2_2,
	FLG_VISUAL3_1,
	FLG_VISUAL3_2,
	FLG_VISUAL4_1,
	FLG_VISUAL4_2,
	FLG_VISUAL5_1,
	FLG_VISUAL5_2,
	FLG_VISUAL6_1,
	FLG_VISUAL6_2,
	FLG_VISUAL7_1,
	FLG_VISUAL7_2,

	FLG_ROOT,
	FLG_ENDING,
	FLG_STAFFROLL,
	FLG_RET,
	FLG_YUIPIANO,
	FLG_MAX = 200,
};

enum
{
	SYSTEMFLG_CLEARYUI,
	SYSTEMFLG_CLEARREA,
	SYSTEMFLG_CLEARASUKA,
	SYSTEMFLG_CLEARKASURI,
	SYSTEMFLG_CLEAREMA,
	SYSTEMFLG_CLEARRIKAKO,
	SYSTEMFLG_PROLOGUE,
	SYSTEMFLG_REFRESHRATE,

	SYSTEMFLG_MAX = 200,
};

enum
{
	HINT_TRUENORMAL = 0,
	HINT_TRUE,
	HINT_HASSEI,
	HINT_MIHASSEI,
	HINT_KASURI12,
	HINT_CHANGE,
	HINT_KOUKANDO,
};

enum
{
	// 第1クォーター
	EVENT_01_01_01,
	EVENT_01_01_02,
	EVENT_01_01_03,		// 由飛01：いきなり配置転換
	EVENT_01_01_04,
	EVENT_01_02_01,
	EVENT_01_02_02,
	EVENT_01_02_03,
	EVENT_01_02_04,		// 玲愛01：怪しき隣
	EVENT_01_03_01,		// 明日香01：クローザー明日香
	EVENT_01_03_02,		// 恵麻01：杉澤恵麻　初来店
	EVENT_01_03_03,
	EVENT_01_03_04,
	EVENT_01_04_01,		// 明日香02：家庭教師１
	EVENT_01_04_02,		// かすり02：成果あり？
	EVENT_01_04_03,
	EVENT_01_04_04,
	EVENT_01_05_01,		// 由飛02：憎みきれないろくでなし
	EVENT_01_05_02,		// かすり01：深夜特訓
	EVENT_01_05_03,
	EVENT_01_05_04,
	EVENT_01_06_01,		// 明日香03：なんとなく許せない
	EVENT_01_06_02,		// かすり04：ジャッジメント（ｎｏｔ）
	EVENT_01_06_03,		// 玲愛02：隣は何をする人ぞ
	EVENT_01_06_04,
	EVENT_01_07_01,		// 里伽子01：開店祝い
	EVENT_01_07_02,
	EVENT_01_07_03,
	EVENT_01_07_04,		// 恵麻02：助けてま～姉ちゃん
	EVENT_01_08_01,		// 由飛03：癒し
	EVENT_01_08_02,
	EVENT_01_08_03,		// 玲愛03：土下座
	EVENT_01_08_04,

	// 第2クォーター
	EVENT_02_01_01,
	EVENT_02_01_02,
	EVENT_02_01_03,		// 玲愛04：二度目の宣戦布告
	EVENT_02_01_04,
	EVENT_02_02_01,		// 明日香04：サボリ
	EVENT_02_02_02,		// かすり03：かすりんの恋愛塾１
	EVENT_02_02_03,
	EVENT_02_02_04,		// 里伽子02：虫除け
	EVENT_02_03_01,		// 由飛04：もう少し、このままで…
	EVENT_02_03_02,		// 恵麻03：まぁでっかいケーキ
	EVENT_02_03_03,
	EVENT_02_03_04,		// 玲愛05：深夜のチェイス
	EVENT_02_04_01,		// 由飛05：由飛ワールド
	EVENT_02_04_02,		// 恵麻04：ケーキは売れる。料理は残る。
	EVENT_02_04_03,
	EVENT_02_04_04,
	EVENT_02_05_01,		// 明日香05：せんちょ
	EVENT_02_05_02,		// かすり05：怪しい電話１
	EVENT_02_05_03,		// 由飛06：給料日
	EVENT_02_05_04,		// 里伽子03：いっつも二番目
	EVENT_02_06_01,
	EVENT_02_06_02,		// 里伽子04：本当は暇な水曜日
	EVENT_02_06_03,		// 玲愛06：二人は仲良し？
	EVENT_02_06_04,
	EVENT_02_07_01,
	EVENT_02_07_02,
	EVENT_02_07_03,
	EVENT_02_07_04,		// 恵麻05：月例会
	EVENT_02_08_01,		// 明日香06：ランクアップ
	EVENT_02_08_02,		// かすり06：むずかし～
	EVENT_02_08_03,
	EVENT_02_08_04,

	// 第3クォーター
	EVENT_03_01_01,		// かすり07：かすりんの恋愛塾２
	EVENT_03_01_02,		// 恵麻07：昼下がりの妄想
	EVENT_03_01_03,
	EVENT_03_01_04,
	EVENT_03_02_01,
	EVENT_03_02_02,
	EVENT_03_02_03,
	EVENT_03_02_04,		// 玲愛07：花鳥姉妹の真実（前編）・由飛07：花鳥姉妹の真実（後編）
	EVENT_03_03_01,		// 明日香07：学園祭準備
	EVENT_03_03_02,		// 里伽子05：里伽子ＶＳ玲愛
	EVENT_03_03_03,		// 玲愛28：理由のない大喧嘩
	EVENT_03_03_04,		// 恵麻06：四回忌
	EVENT_03_04_01,		// 里伽子06：呼び捨て
	EVENT_03_04_02,		// かすり08：怪しい電話２
	EVENT_03_04_03,		// 玲愛29：理由のない仲直り
	EVENT_03_04_04,
	EVENT_03_05_01,		// 明日香08：いいんちょ明日香
	EVENT_03_05_02,
	EVENT_03_05_03,		// 由飛08：噂の歌姫
	EVENT_03_05_04,
	EVENT_03_06_01,		// かすり09：深夜特訓２
	EVENT_03_06_02,
	EVENT_03_06_03,
	EVENT_03_06_04,		// 里伽子07：里伽え○ん
	EVENT_03_07_01,
	EVENT_03_07_02,		// 恵麻08：…ショタ？
	EVENT_03_07_03,		// 玲愛08：玲愛ダウン
	EVENT_03_07_04,		// 明日香09：学園祭当日
	EVENT_03_08_01,		// 里伽子08：欧風喫茶店の面目躍如
	EVENT_03_08_02,
	EVENT_03_08_03,		// 由飛09：ピンチヒッター由飛
	EVENT_03_08_04,		// 玲愛09：玲愛復活

	// 第4クォーター
	EVENT_04_01_01,		// 恵麻09・里伽子09：波紋
	EVENT_04_01_02,		// かすり11：怪しい電話３
	EVENT_04_01_03,
	EVENT_04_01_04,
	EVENT_04_02_01,		// 由飛11：ひいき
	EVENT_04_02_02,
	EVENT_04_02_03,		// 玲愛10：なんて楽しい喧嘩
	EVENT_04_02_04,		// 里伽子10：まわり道
	EVENT_04_03_01,		// 明日香10：このままでいたいね
	EVENT_04_03_02,		// 恵麻10：怒涛の新メニュー
	EVENT_04_03_03,
	EVENT_04_03_04,
	EVENT_04_04_01,		// 明日香11：２５日は追試なの
	EVENT_04_04_02,		// 追加02：休憩
	EVENT_04_04_03,		// 由飛10：イブの仕掛け
	EVENT_04_04_04,		// 里伽子11：ちっともあきらめとらんじゃないか
	EVENT_04_05_01,
	EVENT_04_05_02,		// 追加01：感傷？
	EVENT_04_05_03,
	EVENT_04_05_04,		// 恵麻11：本当の四回忌
	EVENT_04_06_01,		// かすり12：姉襲来
	EVENT_04_06_02,
	EVENT_04_06_03,		// 玲愛11：仲直り、したいときには兄はなし
	EVENT_04_06_04,

	// 共通シナリオ
	EVENT_PROLOGUE,
	EVENT_01_01,
	EVENT_01_02,
	EVENT_02_01,
	EVENT_02_02,
	EVENT_03_01,
	EVENT_03_02,
	EVENT_04_01,
	EVENT_04_02,

	// 由飛シナリオ
	EVENT_YUI_12,
	EVENT_YUI_13,
	EVENT_YUI_14,
	EVENT_YUI_REA_15,
	EVENT_YUI_16,
	EVENT_YUI_17,
	EVENT_YUI_REA_18,
	EVENT_YUI_REA_19,
	EVENT_YUI_20,
	EVENT_YUI_21,
	EVENT_YUI_22,
	EVENT_YUI_23,
	EVENT_YUI_24,
	EVENT_YUI_25,
	EVENT_YUI_26,
	EVENT_YUI_27,
	EVENT_YUI_28,
	EVENT_YUI_29,

	// 玲愛シナリオ
	EVENT_REA_12,
	EVENT_REA_13,
	EVENT_REA_14,
	EVENT_REA_16,
	EVENT_REA_17,
	EVENT_REA_20,
	EVENT_REA_21,
	EVENT_REA_22,
	EVENT_REA_23,
	EVENT_REA_24,
	EVENT_REA_25,
	EVENT_REA_26,
	EVENT_REA_27,

	// 明日香シナリオ
	EVENT_ASUKA_12,
	EVENT_ASUKA_13,
	EVENT_ASUKA_14,
	EVENT_ASUKA_15,
	EVENT_ASUKA_16,
	EVENT_ASUKA_17,
	EVENT_ASUKA_18,
	EVENT_ASUKA_19,
	EVENT_ASUKA_20,
	EVENT_ASUKA_21,

	// かすりシナリオ
	EVENT_KASURI_10,
	EVENT_KASURI_13,
	EVENT_KASURI_14,
	EVENT_KASURI_15,
	EVENT_KASURI_16,
	EVENT_KASURI_17,
	EVENT_KASURI_18,
	EVENT_KASURI_19,
	EVENT_KASURI_20,
	EVENT_KASURI_21,
	EVENT_KASURI_22,
	EVENT_KASURI_23,

	// 恵麻シナリオ
	EVENT_EMA_RIKAKO_12,
	EVENT_EMA_13,
	EVENT_EMA_14,
	EVENT_EMA_15,
	EVENT_EMA_16,
	EVENT_EMA_17,
	EVENT_EMA_18,
	EVENT_EMA_19,
	EVENT_EMA_20,
	EVENT_EMA_21,
	EVENT_EMA_22,
	EVENT_EMA_23,
	EVENT_EMA_24,
	EVENT_EMA_25,

	// 里伽子シナリオ
	EVENT_RIKAKO_13,
	EVENT_RIKAKO_14,
	EVENT_RIKAKO_15,
	EVENT_RIKAKO_16,
	EVENT_RIKAKO_17,
	EVENT_RIKAKO_18,
	EVENT_RIKAKO_19,
	EVENT_RIKAKO_20,
	EVENT_RIKAKO_21,
	EVENT_RIKAKO_22,
	EVENT_RIKAKO_23,
	EVENT_RIKAKO_24,
	EVENT_RIKAKO_25,
	EVENT_RIKAKO_26,

	EVENT_EMA_RIKAKO_09,
	EVENT_KASURI_12,

	EVENT_YUI_TRUE,
	EVENT_YUI_NORMAL,
	EVENT_REA_TRUE,
	EVENT_REA_NORMAL,
	EVENT_ASUKA_TRUE,
	EVENT_KASURI_TRUE,
	EVENT_KASURI_NORMAL,
	EVENT_EMARIKAKO_TRUE,
	EVENT_EMA_NORMAL,
	EVENT_RIKAKO_NORMAL,
	EVENT_BADEND,

	EVENT_MAX
};

enum
{
	VISUAL_YUI_01A,				// 制服姿で歌う由飛（きょとん）
	VISUAL_YUI_01B,				// 制服姿で歌う由飛（歌う）
	VISUAL_YUI_01C,				// 制服姿で歌う由飛（笑顔）
	VISUAL_YUI_01D,				// 制服姿で歌う由飛（ピアノ・きょとん）
	VISUAL_YUI_01E,				// 制服姿で歌う由飛（ピアノ・歌う）
	VISUAL_YUI_01F,				// 制服姿で歌う由飛（ピアノ・笑顔）
	VISUAL_YUI_01G,				// 制服姿で歌う由飛（フードコート・きょとん）
	VISUAL_YUI_01H,				// 制服姿で歌う由飛（フードコート・歌う）
	VISUAL_YUI_01I,				// 制服姿で歌う由飛（フードコート・笑顔）
	VISUAL_YUI_02A,				// 気持ちよさそうにピアノを弾く由飛
	VISUAL_YUI_02B,				// 気持ちよさそうにピアノを弾く由飛（右手の薬指に銀の指輪）
	VISUAL_YUI_04A,				// 由飛にキスをする仁（フードコート・呆然）
	VISUAL_YUI_04B,				// 由飛にキスをする仁（フードコート・困った顔）
	VISUAL_YUI_04C,				// 由飛にキスをする仁（フードコート・目閉じ）
	VISUAL_YUI_04D,				// 由飛にキスをする仁（フードコート・うっとり）
	VISUAL_YUI_04E,				// 由飛にキスをする仁（フードコート・仁の頭・呆然）
	VISUAL_YUI_04F,				// 由飛にキスをする仁（フードコート・仁の頭・目閉じ）
	VISUAL_YUI_04G,				// 由飛にキスをする仁（フードコート・仁の頭・うっとり）
	VISUAL_YUI_04H,				// 由飛にキスをする仁（店内・呆然）
	VISUAL_YUI_04I,				// 由飛にキスをする仁（店内・困った顔）
	VISUAL_YUI_04J,				// 由飛にキスをする仁（店内・目閉じ）
	VISUAL_YUI_04K,				// 由飛にキスをする仁（店内・うっとり）
	VISUAL_YUI_04L,				// 由飛にキスをする仁（店内・仁の頭・呆然）
	VISUAL_YUI_04M,				// 由飛にキスをする仁（店内・仁の頭・目閉じ）
	VISUAL_YUI_04N,				// 由飛にキスをする仁（店内・仁の頭・うっとり）
	VISUAL_YUI_05A,				// 制服に手を突っ込み胸を触る（ブラジャーあり）
	VISUAL_YUI_05B,				// 制服に手を突っ込み胸を触る（ブラジャーずらし）
	VISUAL_YUI_05C,				// 制服に手を突っ込み胸を触る（ブラジャーなし）
	VISUAL_YUI_06A,				// カウンターに押し倒し股間愛撫（恥ずかしそう）
	VISUAL_YUI_06B,				// カウンターに押し倒し股間愛撫（快感であえぐ）
	VISUAL_YUI_06C,				// カウンターに押し倒し股間愛撫（パンツ脱ぎ・恥ずかしそう）
	VISUAL_YUI_06D,				// カウンターに押し倒し股間愛撫（パンツ脱ぎ・快感であえぐ）
	VISUAL_YUI_07A,				// 椅子に座ったままの騎乗位（痛みで叫ぶ）
	VISUAL_YUI_07B,				// 椅子に座ったままの騎乗位（痛みをこらえる）
	VISUAL_YUI_07C,				// 椅子に座ったままの騎乗位（強がりな笑顔）
	VISUAL_YUI_07D,				// 椅子に座ったままの騎乗位（射精）
	VISUAL_YUI_09A,				// キュリオ制服のファミーユスタッフ
	VISUAL_YUI_10A,				// 椅子に座った主人公の上に座って、横を向いてキス（少し動揺）
	VISUAL_YUI_10B,				// 椅子に座った主人公の上に座って、横を向いてキス（キス）
	VISUAL_YUI_10C,				// 椅子に座った主人公の上に座って、横を向いてキス（胸だけ露出・少し動揺）
	VISUAL_YUI_10D,				// 椅子に座った主人公の上に座って、横を向いてキス（胸だけ露出・キス）
	VISUAL_YUI_11A,				// 股間と胸愛撫（控えめに主張する）
	VISUAL_YUI_11B,				// 股間と胸愛撫（快感のあえぎ）
	VISUAL_YUI_11C,				// 股間と胸愛撫（笑顔）
	VISUAL_YUI_11D,				// 股間と胸愛撫（微笑み）
	VISUAL_YUI_12A,				// 片足を持ち上げての後背位
	VISUAL_YUI_12B,				// 片足を持ち上げての後背位（射精）
	VISUAL_YUI_13A,				// 仁を横に座らせてピアノを弾く由飛（笑顔）
	VISUAL_YUI_13B,				// 仁を横に座らせてピアノを弾く由飛（微笑）
	VISUAL_YUI_13C,				// 仁を横に座らせてピアノを弾く由飛（シリアス）
	VISUAL_YUI_14A,				// 演奏する玲愛。涙を流して聴く由飛
	VISUAL_YUI_15A,				// ３人で抱き合って眠っている
	VISUAL_YUI_16A,				// パイズリ
	VISUAL_YUI_16B,				// パイズリ（射精）
	VISUAL_YUI_17A,				// シックスナイン（感じながら舐めている）
	VISUAL_YUI_17B,				// シックスナイン（絶頂の叫び）
	VISUAL_YUI_17C,				// シックスナイン（愛液・感じながら舐めている）
	VISUAL_YUI_17D,				// シックスナイン（愛液・絶頂の叫び）
	VISUAL_YUI_17E,				// シックスナイン（ローション・感じながら舐めている）
	VISUAL_YUI_17F,				// シックスナイン（ローション・絶頂の叫び）
	VISUAL_YUI_17G,				// シックスナイン（射精・感じながら舐めている）
	VISUAL_YUI_17H,				// シックスナイン（射精・絶頂の叫び）
	VISUAL_YUI_18A,				// 由飛とエッチ（快感で叫ぶ）
	VISUAL_YUI_18B,				// 由飛とエッチ（幸せそうな微笑み）
	VISUAL_YUI_18C,				// 由飛とエッチ（射精・快感で叫ぶ）
	VISUAL_YUI_18D,				// 由飛とエッチ（射精・幸せそうな微笑み）
	VISUAL_YUI_19A,				// まんぐり返し風にアナルセックス
	VISUAL_YUI_19B,				// まんぐり返し風にアナルセックス（射精）
	VISUAL_YUI_20A,				// 正常位、抱きあって蟹挟み
	VISUAL_YUI_20B,				// 正常位、抱きあって蟹挟み（射精）
	VISUAL_YUI_21A,				// ピアノを弾きつつ歌う由飛

	VISUAL_REA_01A,				// ベランダの衝立越しに会話する２人（通常）
	VISUAL_REA_01B,				// ベランダの衝立越しに会話する２人（目閉じ微笑み）
	VISUAL_REA_01C,				// ベランダの衝立越しに会話する２人（どてら・通常）
	VISUAL_REA_01D,				// ベランダの衝立越しに会話する２人（どてら・目閉じ微笑み）
	VISUAL_REA_01E,				// ベランダの衝立越しに会話する２人（どてら・髪の毛下ろし・通常）
	VISUAL_REA_01F,				// ベランダの衝立越しに会話する２人（どてら・髪の毛下ろし・目閉じ微笑み）
	VISUAL_REA_02A,				// ベッドに腰掛けて看病される玲愛（夜・睨む）
	VISUAL_REA_02B,				// ベッドに腰掛けて看病される玲愛（夜・怒鳴る）
	VISUAL_REA_02C,				// ベッドに腰掛けて看病される玲愛（夜・目をそらす1）
	VISUAL_REA_02D,				// ベッドに腰掛けて看病される玲愛（夜・目をそらす2）
	VISUAL_REA_02E,				// ベッドに腰掛けて看病される玲愛（夜・苦しむ1）
	VISUAL_REA_02F,				// ベッドに腰掛けて看病される玲愛（夜・苦しむ2）
	VISUAL_REA_02G,				// ベッドに腰掛けて看病される玲愛（朝・目をそらす1）
	VISUAL_REA_02H,				// ベッドに腰掛けて看病される玲愛（朝・怒鳴る）
	VISUAL_REA_02I,				// ベッドに腰掛けて看病される玲愛（朝・睨む）
	VISUAL_REA_02J,				// ベッドに腰掛けて看病される玲愛（朝・目をそらす2）
	VISUAL_REA_02K,				// ベッドに腰掛けて看病される玲愛（朝・照れる）
	VISUAL_REA_03A,				// ベランダ越しのキス
	VISUAL_REA_04A,				// 激しくキス
	VISUAL_REA_04B,				// 激しくキス（瑞奈・驚き）
	VISUAL_REA_04C,				// 激しくキス（瑞奈・焦り）
	VISUAL_REA_05A,				// ベッドに押し倒し（おずおずと探るように話す）
	VISUAL_REA_05B,				// ベッドに押し倒し（目をつぶってキス）
	VISUAL_REA_06A,				// 胸愛撫（恥ずかしそう）
	VISUAL_REA_06B,				// 胸愛撫（キス）
	VISUAL_REA_06C,				// 胸愛撫（パンツずらす・恥ずかしそう）
	VISUAL_REA_06D,				// 胸愛撫（パンツずらす・キス）
	VISUAL_REA_06E,				// 胸愛撫（パンツ無し・恥ずかしそう）
	VISUAL_REA_06F,				// 胸愛撫（パンツ無し・キス）
	VISUAL_REA_07A,				// 正常位（苦しさをこらえて、ゆっくり感じている）
	VISUAL_REA_07B,				// 正常位（苦しさで叫ぶ）
	VISUAL_REA_07C,				// 正常位（射精・苦しさをこらえて、ゆっくり感じている）
	VISUAL_REA_07D,				// 正常位（射精・苦しさで叫ぶ）
	VISUAL_REA_08A,				// ファミレスで食事する３人
	VISUAL_REA_08B,				// ファミレスで食事する３人（コーヒー）
	VISUAL_REA_09A,				// 玲愛フェラチオ（上目使いで恥ずかしげ）
	VISUAL_REA_09B,				// 玲愛フェラチオ（目を閉じて舐める）
	VISUAL_REA_09C,				// 玲愛フェラチオ（口に含む・上目使いで恥ずかしげ）
	VISUAL_REA_09D,				// 玲愛フェラチオ（口に含む・目を閉じて舐める）
	VISUAL_REA_09E,				// 玲愛フェラチオ（射精・目開け）
	VISUAL_REA_09F,				// 玲愛フェラチオ（射精・目閉じ）
	VISUAL_REA_09G,				// 玲愛フェラチオ（射精・片目）
	VISUAL_REA_10A,				// 立位で玲愛とセックス（目を細めて苦しそう）
	VISUAL_REA_10B,				// 立位で玲愛とセックス（中出しされたのを感じて、あたふた）
	VISUAL_REA_11A,				// セックス直後に仁を足蹴にする玲愛（怒りの叫び）
	VISUAL_REA_11B,				// セックス直後に仁を足蹴にする玲愛（言葉に詰まる）
	VISUAL_REA_12A,				// ファミーユ制服のキュリオスタッフ
	VISUAL_REA_14A,				// 四つんばいの格好で、下半身をいじられる玲愛（喘ぐ）
	VISUAL_REA_14B,				// 四つんばいの格好で、下半身をいじられる玲愛（我慢）
	VISUAL_REA_14C,				// 四つんばいの格好で、下半身をいじられる玲愛（パンツずらす・喘ぐ）
	VISUAL_REA_14D,				// 四つんばいの格好で、下半身をいじられる玲愛（パンツずらす・我慢）
	VISUAL_REA_14E,				// 四つんばいの格好で、下半身をいじられる玲愛（潮吹き・喘ぐ）
	VISUAL_REA_14F,				// 四つんばいの格好で、下半身をいじられる玲愛（潮吹き・我慢）
	VISUAL_REA_15A,				// 背中越しに抱きしめて愛撫＆バックで挿入
	VISUAL_REA_16A,				// 玲愛とエッチ（別アングル）
	VISUAL_REA_18A,				// 手を繋いで帰り道（爆笑）
	VISUAL_REA_18B,				// 手を繋いで帰り道（微笑み）
	VISUAL_REA_19A,				// 手招きする玲愛

	VISUAL_ASUKA_01A,			// 二種類の制服乱れ半脱ぎの明日香（泣きべそ・扉開）
	VISUAL_ASUKA_01B,			// 二種類の制服乱れ半脱ぎの明日香（悲鳴・扉開）
	VISUAL_ASUKA_01C,			// 二種類の制服乱れ半脱ぎの明日香（泣きべそ・扉閉）
	VISUAL_ASUKA_01D,			// 二種類の制服乱れ半脱ぎの明日香（悲鳴・扉閉）
	VISUAL_ASUKA_02A,			// 店の制服のままで家庭教師その１（むう…（真面目に勉強））
	VISUAL_ASUKA_02B,			// 店の制服のままで家庭教師その１（笑顔で会話）
	VISUAL_ASUKA_03A,			// キャンプファイヤーでフォークダンス
	VISUAL_ASUKA_04A,			// 店の制服のままで家庭教師その２
	VISUAL_ASUKA_05A,			// テーブルに顔を乗せて見つめる（とろんとした表情で見つめる）
	VISUAL_ASUKA_05B,			// テーブルに顔を乗せて見つめる（ムスっとする）
	VISUAL_ASUKA_05C,			// テーブルに顔を乗せて見つめる（せつない表情で真剣に告白）
	VISUAL_ASUKA_07A,			// 明日香にキス（明日香小さくガッツポーズ）
	VISUAL_ASUKA_09A,			// 耳にキスされて感じまくる明日香（感じている）
	VISUAL_ASUKA_09B,			// 耳にキスされて感じまくる明日香（目を閉じ涙を流す）
	VISUAL_ASUKA_09C,			// 耳にキスされて感じまくる明日香（胸をもむ・感じている）
	VISUAL_ASUKA_09D,			// 耳にキスされて感じまくる明日香（胸をもむ・目を閉じ涙を流す）
	VISUAL_ASUKA_10A,			// ベッドの上で愛撫を受ける明日香（悪戯っぽい微笑み）
	VISUAL_ASUKA_10B,			// ベッドの上で愛撫を受ける明日香（キス）
	VISUAL_ASUKA_11A,			// 胸愛撫（恥ずかしそうに問いかけ）
	VISUAL_ASUKA_11B,			// 胸愛撫（快感）
	VISUAL_ASUKA_11C,			// 胸愛撫（快感にあえぐ）
	VISUAL_ASUKA_11D,			// 胸愛撫（唾液・恥ずかしそうに問いかけ）
	VISUAL_ASUKA_11E,			// 胸愛撫（唾液・快感）
	VISUAL_ASUKA_11F,			// 胸愛撫（唾液・快感にあえぐ）
	VISUAL_ASUKA_12A,			// 明日香正常位（不安そう）
	VISUAL_ASUKA_12B,			// 明日香正常位（微笑み）
	VISUAL_ASUKA_12C,			// 明日香正常位（痛みで泣き叫ぶ）
	VISUAL_ASUKA_12D,			// 明日香正常位（挿入・不安そう）
	VISUAL_ASUKA_12E,			// 明日香正常位（挿入・痛みで泣き叫ぶ）
	VISUAL_ASUKA_12F,			// 明日香正常位（挿入・泣き笑い）
	VISUAL_ASUKA_13A,			// 明日香と二度目Ｈその１（照れ笑い）
	VISUAL_ASUKA_13B,			// 明日香と二度目Ｈその１（ちょっと戸惑い）
	VISUAL_ASUKA_13C,			// 明日香と二度目Ｈその１（快感・愛液少）
	VISUAL_ASUKA_13D,			// 明日香と二度目Ｈその１（快感・愛液多）
	VISUAL_ASUKA_13E,			// 明日香と二度目Ｈその１（ちょっと戸惑い・愛液少）
	VISUAL_ASUKA_13F,			// 明日香と二度目Ｈその１（ちょっと戸惑い・愛液多）
	VISUAL_ASUKA_14A,			// 明日香と二度目Ｈその２（キス）
	VISUAL_ASUKA_14B,			// 明日香と二度目Ｈその２（快感の叫び）
	VISUAL_ASUKA_14C,			// 明日香と二度目Ｈその２（挿入・キス）
	VISUAL_ASUKA_14D,			// 明日香と二度目Ｈその２（挿入・快感の叫び）
	VISUAL_ASUKA_14E,			// 明日香と二度目Ｈその２（射精・キス）
	VISUAL_ASUKA_14F,			// 明日香と二度目Ｈその２（射精・快感の叫び）
	VISUAL_ASUKA_15A,			// 明日香と三度目Ｈその１（舐める）
	VISUAL_ASUKA_15B,			// 明日香と三度目Ｈその１（感じる）
	VISUAL_ASUKA_15C,			// 明日香と三度目Ｈその１（パンツずらし・舐める）
	VISUAL_ASUKA_15D,			// 明日香と三度目Ｈその１（パンツずらし・感じる）
	VISUAL_ASUKA_15E,			// 明日香と三度目Ｈその１（射精）
	VISUAL_ASUKA_16A,			// 泡まみれでパイズリ
	VISUAL_ASUKA_16B,			// 泡まみれでパイズリ（舐める）
	VISUAL_ASUKA_16C,			// 泡まみれでパイズリ（射精）
	VISUAL_ASUKA_17A,			// 風呂場で立ちバック
	VISUAL_ASUKA_17B,			// 風呂場で立ちバック（射精）
	VISUAL_ASUKA_18A,			// 桜並木、手を繋いで歩く二人

	VISUAL_KASURI_01A,			// 布団の上でかすりに組み敷かれる仁（にっこり）
	VISUAL_KASURI_01B,			// 布団の上でかすりに組み敷かれる仁（通常）
	VISUAL_KASURI_02A,			// クリームまみれのかすり（うへぇ）
	VISUAL_KASURI_02B,			// クリームまみれのかすり（ウィンク）
	VISUAL_KASURI_02C,			// クリームまみれのかすり（笑い）
	VISUAL_KASURI_02D,			// クリームまみれのかすり（うへぇ・暗）
	VISUAL_KASURI_05A,			// かすり、仁に迫る
	VISUAL_KASURI_06A,			// 調理台に横たわるクリームまみれのかすり（顔を真っ赤にしていたずらぽい照れ笑い）
	VISUAL_KASURI_06B,			// 調理台に横たわるクリームまみれのかすり（快感にあえぐ）
	VISUAL_KASURI_06C,			// 調理台に横たわるクリームまみれのかすり（ブラジャーなし・顔を真っ赤にしていたずらぽい照れ笑い）
	VISUAL_KASURI_06D,			// 調理台に横たわるクリームまみれのかすり（ブラジャーなし・快感にあえぐ）
	VISUAL_KASURI_06E,			// 調理台に横たわるクリームまみれのかすり（胸にクリーム・顔を真っ赤にしていたずらぽい照れ笑い）
	VISUAL_KASURI_06F,			// 調理台に横たわるクリームまみれのかすり（胸にクリーム・快感にあえぐ）
	VISUAL_KASURI_06G,			// 調理台に横たわるクリームまみれのかすり（パンツなし・顔を真っ赤にしていたずらぽい照れ笑い）
	VISUAL_KASURI_06H,			// 調理台に横たわるクリームまみれのかすり（パンツなし・快感にあえぐ）
	VISUAL_KASURI_06I,			// 調理台に横たわるクリームまみれのかすり（股間にクリーム・顔を真っ赤にしていたずらぽい照れ笑い）
	VISUAL_KASURI_06J,			// 調理台に横たわるクリームまみれのかすり（股間にクリーム・快感にあえぐ）
	VISUAL_KASURI_07A,			// 調理台に横たわるかすりに挿入
	VISUAL_KASURI_07B,			// 調理台に横たわるかすりに挿入（射精）
	VISUAL_KASURI_08A,			// かすり、調理台に座る仁に奉仕（ペニス小）
	VISUAL_KASURI_08B,			// かすり、調理台に座る仁に奉仕（ペニス小・髪の毛でくすぐる）
	VISUAL_KASURI_08C,			// かすり、調理台に座る仁に奉仕（ペニス大・いたずらっぽい微笑）
	VISUAL_KASURI_08D,			// かすり、調理台に座る仁に奉仕（ペニス大・舐める）
	VISUAL_KASURI_08E,			// かすり、調理台に座る仁に奉仕（ペニス大・少し不安げ）
	VISUAL_KASURI_08F,			// かすり、調理台に座る仁に奉仕（射精・舐める）
	VISUAL_KASURI_08G,			// かすり、調理台に座る仁に奉仕（射精・いたずらっぽい微笑）
	VISUAL_KASURI_09A,			// 布団の中、向き合ったまま手コキ（悪戯っぽい微笑み）
	VISUAL_KASURI_09B,			// 布団の中、向き合ったまま手コキ（キス）
	VISUAL_KASURI_09C,			// 布団の中、向き合ったまま手コキ（ペニスを触る・悪戯っぽい微笑み）
	VISUAL_KASURI_09D,			// 布団の中、向き合ったまま手コキ（ペニスを触る・キス）
	VISUAL_KASURI_09E,			// 布団の中、向き合ったまま手コキ（射精・驚き）
	VISUAL_KASURI_09F,			// 布団の中、向き合ったまま手コキ（射精・悪戯っぽい微笑み）
	VISUAL_KASURI_10A,			// 布団の上、クンニ（恥ずかしそうな微笑み）
	VISUAL_KASURI_10B,			// 布団の上、クンニ（快感にあえぐ・愛液）
	VISUAL_KASURI_10C,			// 布団の上、クンニ（快感にあえぐ）
	VISUAL_KASURI_10D,			// 布団の上、クンニ（恥ずかしそうな微笑み・愛液）
	VISUAL_KASURI_11A,			// かすりさんとバック（ちょっと戸惑い）
	VISUAL_KASURI_11B,			// かすりさんとバック（挿入・快感の叫び）
	VISUAL_KASURI_11C,			// かすりさんとバック（挿入）
	VISUAL_KASURI_11D,			// かすりさんとバック（射精）
	VISUAL_KASURI_12A,			// 床の上でエッチ・キス
	VISUAL_KASURI_13A,			// お菓子コンテスト
	VISUAL_KASURI_14A,			// マイク越しに語り合う二人
	VISUAL_KASURI_15A,			// かすりさん、床でエッチ
	VISUAL_KASURI_15B,			// かすりさん、床でエッチ（胸から腹にかけて垂らした生クリーム）
	VISUAL_KASURI_16A,			// クリームまみれでシックスナイン
	VISUAL_KASURI_16B,			// クリームまみれでシックスナイン（射精）
	VISUAL_KASURI_17A,			// かすりさん正常位
	VISUAL_KASURI_17B,			// かすりさん正常位（射精）
	VISUAL_KASURI_18A,			// 交差点で手を振りながら別れる二人

	VISUAL_EMA_01A,				// シャワーを浴びる恵麻
	VISUAL_EMA_02A,				// 不審者恵麻（焦り・サングラス）
	VISUAL_EMA_02B,				// 不審者恵麻（しゅんとしょげた表情・サングラス）
	VISUAL_EMA_02C,				// 不審者恵麻（焦り）
	VISUAL_EMA_02D,				// 不審者恵麻（しゅんとしょげた表情）
	VISUAL_EMA_03A,				// 仁の目の前で堂々と着替える恵麻
	VISUAL_EMA_04A,				// 抱き合うように眠る２人
	VISUAL_EMA_04B,				// 抱き合うように眠る２人
	VISUAL_EMA_06A,				// １０年前の恵麻と仁
	VISUAL_EMA_07A,				// 背中から抱きしめる恵麻
	VISUAL_EMA_08A,				// 恵麻とのキス
	VISUAL_EMA_09A,				// 主人公にまたがって愛撫する恵麻（微笑み）
	VISUAL_EMA_09B,				// 主人公にまたがって愛撫する恵麻（快感のあえぎ）
	VISUAL_EMA_09C,				// 主人公にまたがって愛撫する恵麻（ブラ無し・微笑み）
	VISUAL_EMA_09D,				// 主人公にまたがって愛撫する恵麻（ブラ無し・快感のあえぎ）
	VISUAL_EMA_10A,				// 騎乗位でセックス（痛みをこらえながら薄く目を開けて笑顔）
	VISUAL_EMA_10B,				// 騎乗位でセックス（キスの口）
	VISUAL_EMA_10C,				// 騎乗位でセックス（涙を浮かべて目をきつく閉じ、凄く痛そう）
	VISUAL_EMA_10D,				// 騎乗位でセックス（膣内射精・痛みをこらえながら薄く目を開けて笑顔）
	VISUAL_EMA_10E,				// 騎乗位でセックス（膣内射精・キスの口）
	VISUAL_EMA_10F,				// 騎乗位でセックス（膣内射精・涙を浮かべて目をきつく閉じ、凄く痛そう）
	VISUAL_EMA_11A,				// こたつの中の股間弄り
	VISUAL_EMA_11B,				// こたつの中の股間弄り（ほほ染め）
	VISUAL_EMA_12A,				// チキンキッス（にやり）
	VISUAL_EMA_12B,				// チキンキッス（キスされてびっくり）
	VISUAL_EMA_12C,				// チキンキッス（目をつぶり、口半開きで舌を少し出した感じ）
	VISUAL_EMA_12D,				// チキンキッス（アップ・にやり）
	VISUAL_EMA_12E,				// チキンキッス（アップ・キスされてびっくり）
	VISUAL_EMA_12F,				// チキンキッス（アップ・目をつぶり、口半開きで舌を少し出した感じ）
	VISUAL_EMA_13A,				// セーラー服恵麻（上目使いでおねだり）
	VISUAL_EMA_13B,				// セーラー服恵麻（笑顔）
	VISUAL_EMA_13C,				// セーラー服恵麻（目を細め、嬉しそうに感じている）
	VISUAL_EMA_14A,				// ベッドの上に座って、秘所を指で開いて見せている恵麻（恥ずかしそうに微笑む）
	VISUAL_EMA_14B,				// ベッドの上に座って、秘所を指で開いて見せている恵麻（声を殺して快感に耐える）
	VISUAL_EMA_14C,				// ベッドの上に座って、秘所を指で開いて見せている恵麻（いきなりクンニされて、慌てる）
	VISUAL_EMA_14D,				// ベッドの上に座って、秘所を指で開いて見せている恵麻（唾液・恥ずかしそうに微笑む）
	VISUAL_EMA_14E,				// ベッドの上に座って、秘所を指で開いて見せている恵麻（唾液・声を殺して快感に耐える）
	VISUAL_EMA_14F,				// ベッドの上に座って、秘所を指で開いて見せている恵麻（唾液・いきなりクンニされて、慌てる）
	VISUAL_EMA_14G,				// ベッドの上に座って、秘所を指で開いて見せている恵麻（潮吹き・恥ずかしそうに微笑む）
	VISUAL_EMA_14H,				// ベッドの上に座って、秘所を指で開いて見せている恵麻（潮吹き・声を殺して快感に耐える）
	VISUAL_EMA_14I,				// ベッドの上に座って、秘所を指で開いて見せている恵麻（潮吹き・いきなりクンニされて、慌てる）
	VISUAL_EMA_15A,				// 正常位でセックス（快感のあえぎ）
	VISUAL_EMA_15B,				// 正常位でセックス（微笑み）
	VISUAL_EMA_15C,				// 正常位でセックス（射精・快感のあえぎ）
	VISUAL_EMA_15D,				// 正常位でセックス（射精・微笑み）
	VISUAL_EMA_16A,				// 着替え中で制服半脱ぎの恵麻
	VISUAL_EMA_17A,				// 恵麻フェラチオ（上目使い）
	VISUAL_EMA_17B,				// 恵麻フェラチオ（目を閉じる）
	VISUAL_EMA_17C,				// 恵麻フェラチオ（上目使い・左手を股間に這わせる）
	VISUAL_EMA_17D,				// 恵麻フェラチオ（目を閉じる・左手を股間に這わせる）
	VISUAL_EMA_17E,				// 恵麻フェラチオ（射精）
	VISUAL_EMA_18A,				// 恵麻と立ちバックでＨ（恥ずかしそう）
	VISUAL_EMA_18B,				// 恵麻と立ちバックでＨ（快感と苦しさで叫ぶ）
	VISUAL_EMA_18C,				// 恵麻と立ちバックでＨ（苦しそう）
	VISUAL_EMA_18D,				// 恵麻と立ちバックでＨ（パンツずらし・恥ずかしそう）
	VISUAL_EMA_18E,				// 恵麻と立ちバックでＨ（パンツずらし・快感と苦しさで叫ぶ）
	VISUAL_EMA_18F,				// 恵麻と立ちバックでＨ（パンツずらし・苦しそう）
	VISUAL_EMA_18G,				// 恵麻と立ちバックでＨ（挿入・恥ずかしそう）
	VISUAL_EMA_18H,				// 恵麻と立ちバックでＨ（挿入・快感と苦しさで叫ぶ）
	VISUAL_EMA_18I,				// 恵麻と立ちバックでＨ（挿入・苦しそう）
	VISUAL_EMA_18J,				// 恵麻と立ちバックでＨ（射精・恥ずかしそう）
	VISUAL_EMA_18K,				// 恵麻と立ちバックでＨ（射精・快感と苦しさで叫ぶ）
	VISUAL_EMA_18L,				// 恵麻と立ちバックでＨ（射精・苦しそう）
	VISUAL_EMA_19A,				// エンディング

	VISUAL_RIKAKO_01A,			// 眼鏡な里伽子
	VISUAL_RIKAKO_02A,			// 並んで座る（大学・無表情、目線正面）
	VISUAL_RIKAKO_02B,			// 並んで座る（大学・無表情、目線手前）
	VISUAL_RIKAKO_02C,			// 並んで座る（大学・そっぽ向く）
	VISUAL_RIKAKO_02D,			// 並んで座る（大学・不機嫌、目線正面）
	VISUAL_RIKAKO_02E,			// 並んで座る（バー・無表情、目線正面）
	VISUAL_RIKAKO_02F,			// 並んで座る（バー・無表情、目線手前）
	VISUAL_RIKAKO_02G,			// 並んで座る（バー・そっぽ向く）
	VISUAL_RIKAKO_02H,			// 並んで座る（バー・不機嫌、目線正面）
	VISUAL_RIKAKO_03A,			// 里伽子にブレスレットをはめる仁（里伽子07用）
	VISUAL_RIKAKO_03B,			// 里伽子にブレスレットをはめる仁（里伽子13用）
	VISUAL_RIKAKO_04A,			// 半年前のファーストキス
	VISUAL_RIKAKO_05A,			// キス
	VISUAL_RIKAKO_06A,			// 縛った腕を仁の首に回してキス
	VISUAL_RIKAKO_07A,			// 胸愛撫
	VISUAL_RIKAKO_08A,			// 股間愛撫（仁を見つめ、語りかける）
	VISUAL_RIKAKO_08B,			// 股間愛撫（目を閉じ、感じようとしている表情）
	VISUAL_RIKAKO_08C,			// 股間愛撫（下着ずらし・仁を見つめ、語りかける）
	VISUAL_RIKAKO_08D,			// 股間愛撫（下着ずらし・目を閉じ、感じようとしている表情）
	VISUAL_RIKAKO_09A,			// 正常位
	VISUAL_RIKAKO_10A,			// ベッドにうつぶせで愛撫
	VISUAL_RIKAKO_10B,			// ベッドにうつぶせで愛撫（パンツずり下ろし）
	VISUAL_RIKAKO_11A,			// 里伽子フェラ（トリミング・上目使いで舌を出し舐める）
	VISUAL_RIKAKO_11B,			// 里伽子フェラ（トリミング・目をつぶり咥える）
	VISUAL_RIKAKO_11C,			// 里伽子フェラ（上目使いで舌を出し舐める）
	VISUAL_RIKAKO_11D,			// 里伽子フェラ（目をつぶり咥える）
	VISUAL_RIKAKO_11E,			// 里伽子フェラ（射精・上目使いで舌を出し舐める）
	VISUAL_RIKAKO_11F,			// 里伽子フェラ（射精・目をつぶり咥える）
	VISUAL_RIKAKO_12A,			// 背中から抱きしめて食事（戸惑いながらも、微妙ににやけた感じ）
	VISUAL_RIKAKO_12B,			// 背中から抱きしめて食事（ちょっとぉ、という文句の表情）
	VISUAL_RIKAKO_12C,			// 背中から抱きしめて食事（わりと自然に食事）
	VISUAL_RIKAKO_13A,			// 雪の中で向き合う二人
	VISUAL_RIKAKO_13B,			// 雪の中で向き合う二人（キャラ消し）
	VISUAL_RIKAKO_14A,			// 制服を着せる
	VISUAL_RIKAKO_15A,			// ３度目Ｈその１　足にキス
	VISUAL_RIKAKO_15B,			// ３度目Ｈその１　足にキス（パンツを横にずらす）
	VISUAL_RIKAKO_17A,			// ３度目Ｈその２
	VISUAL_RIKAKO_17B,			// ３度目Ｈその２（射精）
	VISUAL_RIKAKO_18A,			// ３度目Ｈその３
	VISUAL_RIKAKO_18B,			// ３度目Ｈその３（射精）
	VISUAL_RIKAKO_20A,			// 赤ん坊を抱いた、ファインダー越しの里伽子
	VISUAL_RIKAKO_20B,			// 赤ん坊を抱いた、ファインダー越しの里伽子（里伽子泣き）
	VISUAL_RIKAKO_20C,			// 赤ん坊を抱いた、ファインダー越しの里伽子（里伽子、赤ん坊泣き）
	VISUAL_RIKAKO_20D,			// 赤ん坊を抱いた、ファインダー越しの里伽子（回想用）

	VISUAL_BLACK,				// 黒画面
	VISUAL_WHITE,				// 白画面
	VISUAL_NETA1,				// エイプリルフールネタ用
	VISUAL_NETA2,				// エイプリルフールネタ用
	VISUAL_NETA3,				// エイプリルフールネタ用

	VISUAL_AIAI,				// 相合い傘
	VISUAL_OMRICE1,				// オムライス（玲愛）
	VISUAL_OMRICE2,				// オムライス（里伽子）
	VISUAL_PIANO1,				// ピアノ
	VISUAL_PIANO2,				// ピアノ
	VISUAL_TENJO,				// フードコートの天井
	VISUAL_THUNDER,				// 雷
	VISUAL_WAIT,				// しばらくお待ち下さい
	VISUAL_FIRE,				// 火事イメージ
	VISUAL_VGNEO1,				// V.G.NEOバトル用
	VISUAL_VGNEO2,				// V.G.NEOバトル用
	VISUAL_VGNEO3,				// V.G.NEOバトル用
	VISUAL_VGNEO4,				// V.G.NEOバトル用
	VISUAL_VGNEO5,				// V.G.NEOバトル用
	VISUAL_NOTICE,				// 発売日告知画面
	VISUAL_GIGA,				// 戯画ロゴ
	VISUAL_SELECTMAP,			// マップ選択画面
	VISUAL_DAYEFFECT,			// 日付演出画面
	VISUAL_EXTRAMODE,			// おまけモード画面

	BG_MALL_01A,				// 01ブリックモール外観_昼
	BG_MALL_03A,				// 01ブリックモール外観_夜
	BG_ENTRANCE_01A,			// 02ブリックモールエントランス_昼
	BG_ENTRANCE_01B,			// 02ブリックモールエントランス_クリスマス営業
	BG_ENTRANCE_03A,			// 02ブリックモールエントランス_夜営業中
	BG_ENTRANCE_03B,			// 02ブリックモールエントランス_クリスマス夜営業
	BG_ENTRANCE_04A,			// 02ブリックモールエントランス_夜消灯
	BG_FOODCOURT_01A,			// 03フードコート_営業中
	BG_FOODCOURT_01B,			// 03フードコート_クリスマス営業
	BG_FOODCOURT_03A,			// 03フードコート_夜営業中
	BG_FOODCOURT_03B,			// 03フードコート_閉店後
	BG_FOODCOURT_03C,			// 03フードコート_クリスマス夜営業
	BG_FOODCOURT_04A,			// 03フードコート_夜消灯
	BG_FOODCOURT_04B,			// 03フードコート_クリスマス閉店後
	BG_FOODCOURTN_01A,			// 04フードコート内装途中_昼
	BG_FOODCOURTN_02A,			// 04フードコート内装途中_夕方
	BG_FAMILLE_01A,				// 05ファミーユ外観_営業中
	BG_FAMILLE_03A,				// 05ファミーユ外観_閉店後
	BG_FAMILLE_04A,				// 05ファミーユ外観_夜消灯
	BG_FAMILLEE_01A,			// 06ファミーユ入り口_営業中
	BG_FAMILLEE_03A,			// 06ファミーユ入り口_閉店後
	BG_FAMILLEE_04A,			// 06ファミーユ入り口_夜消灯
	BG_FAMILLEF_00A,			// 07ファミーユフロア_朝開店前
	BG_FAMILLEF_01A,			// 07ファミーユフロア_営業中
	BG_FAMILLEF_03A,			// 07ファミーユフロア_閉店後
	BG_FAMILLEF_04A,			// 07ファミーユフロア_夜消灯
	BG_FAMILLEC_01A,			// 08ファミーユ厨房_営業中
	BG_FAMILLEC_03A,			// 08ファミーユ厨房_閉店後
	BG_FAMILLES_01A,			// 09ファミーユスタッフルーム_通常
	BG_FAMILLES_03A,			// 09ファミーユスタッフルーム_消灯
	BG_CURIO_01A,				// 10ＣＵＲＩＯ３号店外観_営業中
	BG_CURIO_03A,				// 10ＣＵＲＩＯ３号店外観_閉店後
	BG_CURIO_04A,				// 10ＣＵＲＩＯ３号店外観_夜消灯
	BG_CURIOF_01A,				// 11ＣＵＲＩＯ３号店フロア_営業中
	BG_CURIOF_03A,				// 11ＣＵＲＩＯ３号店フロア_閉店後
	BG_CURIOF_04A,				// 11ＣＵＲＩＯ３号店フロア_夜消灯
	BG_YOUHINTEN_01A,			// 12洋品店内_営業中
	BG_ANTIQUE_01A,				// 13アンティーク家具店店頭_営業中
	BG_ANTIQUE_03A,				// 13アンティーク家具店店頭_閉店後
	BG_HITOSHI_00A,				// 14仁のマンションリビング_朝・消灯・カーテン閉じ
	BG_HITOSHI_00B,				// 14仁のマンションリビング_朝・消灯・カーテン閉じ・添い寝
	BG_HITOSHI_01A,				// 14仁のマンションリビング_昼
	BG_HITOSHI_02A,				// 14仁のマンションリビング_夕方
	BG_HITOSHI_03A,				// 14仁のマンションリビング_夜
	BG_HITOSHI_03B,				// 14仁のマンションリビング_夜・カーテン開き
	BG_HITOSHI_03C,				// 14仁のマンションリビング_夜・カーテン半開き
	BG_HITOSHI_04A,				// 14仁のマンションリビング_夜・消灯
	BG_HITOSHI_04B,				// 14仁のマンションリビング_夜・消灯・カーテン開き
	BG_HITOSHI_04C,				// 14仁のマンションリビング_夜・消灯・カーテン半開き
	BG_HITOSHI_04D,				// 14仁のマンションリビング_夜・消灯・添い寝
	BG_HITOSHIV_03A,			// 15仁のマンションベランダ_夜星空
	BG_HITOSHIV_03B,			// 15仁のマンションベランダ_夜曇り空
	BG_HITOSHIG_01A,			// 16仁のマンション玄関_扉閉じ
	BG_HITOSHIG_01B,			// 16仁のマンション玄関_扉開き（外昼）
	BG_HITOSHIG_02A,			// 16仁のマンション玄関_扉開き（外夕方）
	BG_HITOSHIG_03A,			// 16仁のマンション玄関_扉開き（外夜）
	BG_HITOSHIH_01A,			// 17仁のマンション風呂場
	BG_HITOSHIH_01B,			// 17仁のマンション風呂場（シャワーなし）
	BG_HITOSHIR_01A,			// 18マンション廊下_昼
	BG_HITOSHIR_02A,			// 18マンション廊下_夕方
	BG_HITOSHIR_03A,			// 18マンション廊下_夜
	BG_HITOSHIE_01A,			// 19マンションエレベーターホール_昼・扉閉じ
	BG_HITOSHIE_01B,			// 19マンションエレベーターホール_昼・扉開き
	BG_EMA_00A,					// 20恵麻マンションリビング_朝
	BG_EMA_01A,					// 20恵麻マンションリビング_昼
	BG_EMA_01B,					// 20恵麻マンションリビング_昼・浴室開き
	BG_EMA_01C,					// 20恵麻マンションリビング_昼・位牌一個無し
	BG_EMA_02A,					// 20恵麻マンションリビング_夕方・酒瓶
	BG_EMA_02B,					// 20恵麻マンションリビング_夕方・位牌一個無し
	BG_EMA_03A,					// 20恵麻マンションリビング_夜
	BG_EMA_03B,					// 20恵麻マンションリビング_夜・ご馳走
	BG_EMA_03C,					// 20恵麻マンションリビング_夜・ツリー
	BG_EMAK_01A,				// 21恵麻のマンションキッチン_昼夜兼用
	BG_EMAG_01A,				// 22恵麻のマンション玄関_扉閉じ
	BG_EMAG_02A,				// 22恵麻のマンション玄関_扉開き（外夕方）
	BG_EMAS_01A,				// 23恵麻のマンション玄関外_昼
	BG_EMAS_03A,				// 23恵麻のマンション玄関外_夜
	BG_EMAD_03A,				// 24恵麻のマンション脱衣所
	BG_REA_01A,					// 25玲愛の部屋_昼
	BG_YUI_00A,					// 26由飛のマンションリビング_朝
	BG_YUI_03A,					// 26由飛のマンションリビング_夜
	BG_YUI_03B,					// 26由飛のマンションリビング_夜・テーブル
	BG_YUI_03C,					// 26由飛のマンションリビング_夜・寝室半開き
	BG_YUI_03D,					// 26由飛のマンションリビング_夜・寝室半開き・テーブル
	BG_KASURI_01A,				// 27涼波家和室_昼
	BG_KASURI_01B,				// 27涼波家和室_ふすま開き
	BG_KASURIK_03A,				// 28涼波家客間_夜
	BG_KASURIK_04A,				// 28涼波家客間_夜消灯
	BG_KASURIK_04B,				// 28涼波家客間_夜消灯・布団乱れ
	BG_KASURIK_04C,				// 28涼波家客間_夜消灯・布団乱れ・ふすま開き
	BG_EKIMAE_01A,				// 29駅前_昼
	BG_EKIMAE_01B,				// 29駅前_昼・クリスマス
	BG_EKIMAE_02A,				// 29駅前_夕方
	BG_EKIMAE_03A,				// 29駅前_夜
	BG_EKIMAE_03B,				// 29駅前_夜・積雪
	BG_EKIMAE_03C,				// 29駅前_夜・クリスマス
	BG_EKIMAE_04A,				// 29駅前_深夜
	BG_EKIMAE_04B,				// 29駅前_深夜・積雪
	BG_DAIGAKU_01A,				// 30大学構内_昼
	BG_DAIGAKUK_01A,			// 31大学教室
	BG_DAIGAKUS_01A,			// 32大学正門桜並木_昼
	BG_DAIGAKUS_01B,			// 32大学正門桜並木_昼・サークルの勧誘
	BG_DAIGAKUS_03A,			// 32大学正門桜並木_夜
	BG_DAIGAKUG_01A,			// 33大学学食_昼
	BG_DAIGAKUY_01A,			// 34由飛の大学キャンパス
	BG_ROJI_01A,				// 35路地_昼
	BG_ROJI_03A,				// 35路地_夜
	BG_ROJI_03B,				// 35路地_夜・降雪
	BG_ROJI_03C,				// 35路地_夜・積雪
	BG_ROJI2_03A,				// 36路地２_夜
	BG_QFAMILLE_01A,			// 37旧ファミーユ外観_昼
	BG_QFAMILLEF_01A,			// 37旧ファミーユフロア_昼
	BG_AKICHI_01A,				// 39空き地_昼
	BG_AKICHI_02A,				// 39空き地_夕方
	BG_FAMIRES_01A,				// 40ファミレス店内_昼
	BG_FAMIRES_02A,				// 40ファミレス店内_夕方
	BG_FAMIRES_03A,				// 40ファミレス店内_夜
	BG_FAMIRESS_01A,			// 41ファミレス席_昼
	BG_FAMIRESS_02A,			// 41ファミレス席_夕方
	BG_FAMIRESS_03A,			// 41ファミレス席_夜
	BG_RESTAURANT_03A,			// 42レストラン_夜
	BG_RESTAURANTS_03A,			// 43レストラン席_夜
	BG_TAKAMURAG_01A,			// 44高村家外観_昼
	BG_TAKAMURA_03A,			// 45高村家座敷_テーブル無し
	BG_TAKAMURA_03B,			// 45高村家座敷_料理
	BG_TAKAMURA_03C,			// 45高村家座敷_こたつ
	BG_TAKAMURA_03D,			// 45高村家座敷_こたつ・ふすま開き
	BG_TAKAMURA_03E,			// 45高村家座敷_こたつ＋料理
	BG_TAKAMURA_03F,			// 45高村家座敷_こたつ＋料理・ふすま開き
	BG_BAR_01A,					// 46バー『pure platinum』_営業中
	BG_BART_03A,				// 47バーの表通り_夜
	BG_PENSION_03A,				// 48ペンションの部屋_夜
	BG_PENSION_03B,				// 48ペンションの部屋_夜・位牌
	BG_GAKUENR_01A,				// 49学園廊下_昼
	BG_GAKUENR_02A,				// 49学園廊下_夕方
	BG_GAKUENK_01A,				// 50学園教室_夕方
	BG_GAKUENK_01B,				// 50学園教室_昼・学園祭当日
	BG_GAKUENK_02A,				// 50学園教室_夕方・学園祭準備中
	BG_EIGAKAN_01A,				// 51映画館_上演前
	BG_EIGAKAN_01B,				// 51映画館_上演中
	BG_CONCERT_01A,				// 52コンサートホール客席_開演前
	BG_CONCERT_01B,				// 52コンサートホール客席_コンサート中
	BG_CONCERT_01C,				// 52コンサートホール客席_開演前
	BG_CONCERT_01D,				// 52コンサートホール客席_コンサート中
	BG_HONTEN_01A,				// 53ファミーユ本店前_昼
	BG_HONTENF_01A,				// 54ファミーユ本店フロア
	BG_TOWN_00A,				// 55街中_朝曇り空
	BG_CONTEST_01A,				// 56コンテスト会場
	BG_CURIOM_01A,				// 94キュリオ本店前_昼
	BG_TRAIN_01A,				// 95電車内
	BG_HOSPITAL_01A,			// 96病院
	BG_CURIOH_01A,				// 97キュリオ本店フロア_昼
	BG_CURIOL_01A,				// 98キュリオ本店ロフト_昼
	BG_SORA_01A,				// 99空_昼
	BG_SORA_01B,				// 99空_昼（曇り）
	BG_SORA_02A,				// 99空_夕
	BG_SORA_03A,				// 99空_夜

	VISUAL_MAX
};

enum
{
	STAND_HITOSHI,				// 仁
	STAND_YUI,					// 由飛
	STAND_REA,					// 玲愛
	STAND_ASUKA,				// 明日香
	STAND_KASURI,				// かすり
	STAND_EMA,					// 恵麻
	STAND_RIKAKO,				// 里伽子
	STAND_MIZUNA,				// 瑞奈
	STAND_ITABASHI,				// 板橋
	STAND_YOSHIMI,				// 芳美
	STAND_HIKARI,				// ひかり
	STAND_MASASHI,				// 征氏
	STAND_MITSUE,				// みつえ
	STAND_MISUZU,				// 美鈴
	STAND_GENICHIROU,			// 源一郎
	STAND_TSUMUGI,				// 紬
	STAND_MIDORI,				// 翠
	STAND_BARA,					// バラさん
};

enum
{
	//========================================================
	// 由飛
	// ファミーユ制服・ポーズ１
	YUI_0101AS,					// 焦り
	YUI_0101AW,					// 愛想笑い
	YUI_0101BS,					// 微笑
	YUI_0101EG,					// 笑顔
	YUI_0101GR,					// グロッキー
	YUI_0101GR2,				// グロッキー
	YUI_0101HA,					// 不安
	YUI_0101IK,					// 怒り
	YUI_0101IK2,				// 怒り
	YUI_0101KG,					// 感激
	YUI_0101KS,					// キス
	YUI_0101MJ,					// 真面目
	YUI_0101MU,					// もう
	YUI_0101NO,					// 通常
	YUI_0101OD,					// 驚き
	YUI_0101OT,					// 落ち込み
	YUI_0101SM,					// すまし顔
	YUI_0101UN,					// う～ん
	YUI_0101UT,					// 歌う
	YUI_0101UT2,				// 歌う
	YUI_0101UT3,				// 歌う

	// ファミーユ制服・ポーズ２
	YUI_0102BS,					// 微笑
	YUI_0102EG,					// 笑顔
	YUI_0102IN,					// 息をのむ
	YUI_0102KG,					// けげんそう
	YUI_0102KN,					// 悲しみ
	YUI_0102KN_,				// 悲しみ（涙無し）
	YUI_0102KS,					// 苦笑
	YUI_0102NO,					// 通常
	YUI_0102NS,					// 泣き叫び
	YUI_0102OD,					// 驚き
	YUI_0102OD2,				// 驚き
	YUI_0102SN,					// 拗ねる1
	YUI_0102SN2,				// 拗ねる2
	YUI_0102SW,					// そわそわ

	// キュリオ制服・ポーズ１
	YUI_0201AS,					// 焦り
	YUI_0201AW,					// 愛想笑い
	YUI_0201BS,					// 微笑
	YUI_0201EG,					// 笑顔
	YUI_0201GR,					// グロッキー
	YUI_0201GR2,				// グロッキー
	YUI_0201HA,					// 不安
	YUI_0201IK,					// 怒り
	YUI_0201IK2,				// 怒り
	YUI_0201KG,					// 感激
	YUI_0201KS,					// キス
	YUI_0201MJ,					// 真面目
	YUI_0201MU,					// もう
	YUI_0201NO,					// 通常
	YUI_0201OD,					// 驚き
	YUI_0201OT,					// 落ち込み
	YUI_0201SM,					// すまし顔
	YUI_0201UN,					// う～ん
	YUI_0201UT,					// 歌う
	YUI_0201UT2,				// 歌う
	YUI_0201UT3,				// 歌う

	// キュリオ制服・ポーズ２
	YUI_0202BS,					// 微笑
	YUI_0202EG,					// 笑顔
	YUI_0202IN,					// 息をのむ
	YUI_0202KG,					// けげんそう
	YUI_0202KN,					// 悲しみ
	YUI_0202KN_,				// 悲しみ（涙無し）
	YUI_0202KS,					// 苦笑
	YUI_0202NO,					// 通常
	YUI_0202NS,					// 泣き叫び
	YUI_0202OD,					// 驚き
	YUI_0202OD2,				// 驚き
	YUI_0202SN,					// 拗ねる1
	YUI_0202SN2,				// 拗ねる2
	YUI_0202SW,					// そわそわ

	// 私服・ポーズ１
	YUI_0301AS,					// 焦り
	YUI_0301AW,					// 愛想笑い
	YUI_0301BS,					// 微笑
	YUI_0301EG,					// 笑顔
	YUI_0301GR,					// グロッキー
	YUI_0301GR2,				// グロッキー
	YUI_0301HA,					// 不安
	YUI_0301IK,					// 怒り
	YUI_0301IK2,				// 怒り
	YUI_0301KG,					// 感激
	YUI_0301KS,					// キス
	YUI_0301MJ,					// 真面目
	YUI_0301MU,					// もう
	YUI_0301NO,					// 通常
	YUI_0301OD,					// 驚き
	YUI_0301OT,					// 落ち込み
	YUI_0301SM,					// すまし顔
	YUI_0301UN,					// う～ん
	YUI_0301UT,					// 歌う
	YUI_0301UT2,				// 歌う
	YUI_0301UT3,				// 歌う

	// 私服・ポーズ２
	YUI_0302BS,					// 微笑
	YUI_0302EG,					// 笑顔
	YUI_0302IN,					// 息をのむ
	YUI_0302KG,					// けげんそう
	YUI_0302KN,					// 悲しみ
	YUI_0302KN_,				// 悲しみ（涙無し）
	YUI_0302KS,					// 苦笑
	YUI_0302NO,					// 通常
	YUI_0302NS,					// 泣き叫び
	YUI_0302OD,					// 驚き
	YUI_0302OD2,				// 驚き
	YUI_0302SN,					// 拗ねる1
	YUI_0302SN2,				// 拗ねる2
	YUI_0302SW,					// そわそわ

	// 私服・裸１
	YUI_0401AS,					// 焦り
	YUI_0401AW,					// 愛想笑い
	YUI_0401BS,					// 微笑
	YUI_0401EG,					// 笑顔
	YUI_0401GR,					// グロッキー
	YUI_0401GR2,				// グロッキー
	YUI_0401HA,					// 不安
	YUI_0401IK,					// 怒り
	YUI_0401IK2,				// 怒り
	YUI_0401KG,					// 感激
	YUI_0401KS,					// キス
	YUI_0401MJ,					// 真面目
	YUI_0401MU,					// もう
	YUI_0401NO,					// 通常
	YUI_0401OD,					// 驚き
	YUI_0401OT,					// 落ち込み
	YUI_0401SM,					// すまし顔
	YUI_0401UN,					// う～ん
	YUI_0401UT,					// 歌う
	YUI_0401UT2,				// 歌う
	YUI_0401UT3,				// 歌う

	//========================================================
	// 由飛（バストアップ）
	// ファミーユ制服・ポーズ１
	YUI_A101AS,					// 焦り
	YUI_A101AW,					// 愛想笑い
	YUI_A101BS,					// 微笑
	YUI_A101EG,					// 笑顔
	YUI_A101GR,					// グロッキー
	YUI_A101GR2,				// グロッキー
	YUI_A101HA,					// 不安
	YUI_A101IK,					// 怒り
	YUI_A101IK2,				// 怒り
	YUI_A101KG,					// 感激
	YUI_A101KS,					// キス
	YUI_A101MJ,					// 真面目
	YUI_A101MU,					// もう
	YUI_A101NO,					// 通常
	YUI_A101OD,					// 驚き
	YUI_A101OT,					// 落ち込み
	YUI_A101SM,					// すまし顔
	YUI_A101UN,					// う～ん
	YUI_A101UT,					// 歌う
	YUI_A101UT2,				// 歌う
	YUI_A101UT3,				// 歌う

	// ファミーユ制服・ポーズ２
	YUI_A102BS,					// 微笑
	YUI_A102EG,					// 笑顔
	YUI_A102IN,					// 息をのむ
	YUI_A102KG,					// けげんそう
	YUI_A102KN,					// 悲しみ
	YUI_A102KN_,				// 悲しみ（涙無し）
	YUI_A102KS,					// 苦笑
	YUI_A102NO,					// 通常
	YUI_A102NS,					// 泣き叫び
	YUI_A102OD,					// 驚き
	YUI_A102OD2,				// 驚き
	YUI_A102SN,					// 拗ねる1
	YUI_A102SN2,				// 拗ねる2
	YUI_A102SW,					// そわそわ

	// キュリオ制服・ポーズ１
	YUI_A201AS,					// 焦り
	YUI_A201AW,					// 愛想笑い
	YUI_A201BS,					// 微笑
	YUI_A201EG,					// 笑顔
	YUI_A201GR,					// グロッキー
	YUI_A201GR2,				// グロッキー
	YUI_A201HA,					// 不安
	YUI_A201IK,					// 怒り
	YUI_A201IK2,				// 怒り
	YUI_A201KG,					// 感激
	YUI_A201KS,					// キス
	YUI_A201MJ,					// 真面目
	YUI_A201MU,					// もう
	YUI_A201NO,					// 通常
	YUI_A201OD,					// 驚き
	YUI_A201OT,					// 落ち込み
	YUI_A201SM,					// すまし顔
	YUI_A201UN,					// う～ん
	YUI_A201UT,					// 歌う
	YUI_A201UT2,				// 歌う
	YUI_A201UT3,				// 歌う

	// キュリオ制服・ポーズ２
	YUI_A202BS,					// 微笑
	YUI_A202EG,					// 笑顔
	YUI_A202IN,					// 息をのむ
	YUI_A202KG,					// けげんそう
	YUI_A202KN,					// 悲しみ
	YUI_A202KN_,				// 悲しみ（涙無し）
	YUI_A202KS,					// 苦笑
	YUI_A202NO,					// 通常
	YUI_A202NS,					// 泣き叫び
	YUI_A202OD,					// 驚き
	YUI_A202OD2,				// 驚き
	YUI_A202SN,					// 拗ねる1
	YUI_A202SN2,				// 拗ねる2
	YUI_A202SW,					// そわそわ

	// 私服・ポーズ１
	YUI_A301AS,					// 焦り
	YUI_A301AW,					// 愛想笑い
	YUI_A301BS,					// 微笑
	YUI_A301EG,					// 笑顔
	YUI_A301GR,					// グロッキー
	YUI_A301GR2,				// グロッキー
	YUI_A301HA,					// 不安
	YUI_A301IK,					// 怒り
	YUI_A301IK2,				// 怒り
	YUI_A301KG,					// 感激
	YUI_A301KS,					// キス
	YUI_A301MJ,					// 真面目
	YUI_A301MU,					// もう
	YUI_A301NO,					// 通常
	YUI_A301OD,					// 驚き
	YUI_A301OT,					// 落ち込み
	YUI_A301SM,					// すまし顔
	YUI_A301UN,					// う～ん
	YUI_A301UT,					// 歌う
	YUI_A301UT2,				// 歌う
	YUI_A301UT3,				// 歌う

	// 私服・ポーズ２
	YUI_A302BS,					// 微笑
	YUI_A302EG,					// 笑顔
	YUI_A302IN,					// 息をのむ
	YUI_A302KG,					// けげんそう
	YUI_A302KN,					// 悲しみ
	YUI_A302KN_,				// 悲しみ（涙無し）
	YUI_A302KS,					// 苦笑
	YUI_A302NO,					// 通常
	YUI_A302NS,					// 泣き叫び
	YUI_A302OD,					// 驚き
	YUI_A302OD2,				// 驚き
	YUI_A302SN,					// 拗ねる1
	YUI_A302SN2,				// 拗ねる2
	YUI_A302SW,					// そわそわ

	// 裸・ポーズ１
	YUI_A401AS,					// 焦り
	YUI_A401AW,					// 愛想笑い
	YUI_A401BS,					// 微笑
	YUI_A401EG,					// 笑顔
	YUI_A401GR,					// グロッキー
	YUI_A401GR2,				// グロッキー
	YUI_A401HA,					// 不安
	YUI_A401IK,					// 怒り
	YUI_A401IK2,				// 怒り
	YUI_A401KG,					// 感激
	YUI_A401KS,					// キス
	YUI_A401MJ,					// 真面目
	YUI_A401MU,					// もう
	YUI_A401NO,					// 通常
	YUI_A401OD,					// 驚き
	YUI_A401OT,					// 落ち込み
	YUI_A401SM,					// すまし顔
	YUI_A401UN,					// う～ん
	YUI_A401UT,					// 歌う
	YUI_A401UT2,				// 歌う
	YUI_A401UT3,				// 歌う

	//========================================================
	// 玲愛
	// キュリオ制服・ポーズ１
	REA_0101AK,					// 呆れ
	REA_0101IK,					// 怒り
	REA_0101IK_,				// 怒り（ほほ染め）
	REA_0101IN,					// 息をのむ
	REA_0101KM,					// 困り
	REA_0101KM_,				// 困り（ほほ染め）
	REA_0101KN,					// 悲しみ
	REA_0101NO,					// 通常
	REA_0101OD,					// 驚き
	REA_0101OD_,				// 驚き（ほほ染め）
	REA_0101SN,					// 拗ねる
	REA_0101SN_,				// 拗ねる（ほほ染め）

	// キュリオ制服・ポーズ２
	REA_0102AS,					// 焦り（ほほ染め）
	REA_0102BS,					// 微笑
	REA_0102EG,					// 笑顔1
	REA_0102EG2,				// 笑顔2
	REA_0102EG3,				// 笑顔3
	REA_0102HT,					// ？
	REA_0102IK,					// 怒り1
	REA_0102IK_,				// 怒り1（ほほ染め）
	REA_0102IK2,				// 怒り2
	REA_0102IK2_,				// 怒り2（ほほ染め）
	REA_0102IK3,				// 怒り3
	REA_0102IK3_,				// 怒り3（ほほ染め）
	REA_0102KM,					// 困り
	REA_0102KM_,				// 困り（ほほ染め）
	REA_0102KN,					// 悲しみ
	REA_0102MJ,					// 真面目
	REA_0102MS,					// むせる（ほほ染め）
	REA_0102NK,					// 泣き（ほほ染め）
	REA_0102NO,					// 通常
	REA_0102NS,					// 泣き叫び
	REA_0102NY,					// にやり
	REA_0102TN,					// つ～ん
	REA_0102TN_,				// つ～ん（ほほ染め）
	REA_0102TR,					// 照れ（ほほ染め）

	// ファミーユ制服・ポーズ１
	REA_0201AK,					// 呆れ
	REA_0201IK,					// 怒り
	REA_0201IK_,				// 怒り（ほほ染め）
	REA_0201IN,					// 息をのむ
	REA_0201KM,					// 困り
	REA_0201KM_,				// 困り（ほほ染め）
	REA_0201KN,					// 悲しみ
	REA_0201NO,					// 通常
	REA_0201OD,					// 驚き
	REA_0201OD_,				// 驚き（ほほ染め）
	REA_0201SN,					// 拗ねる
	REA_0201SN_,				// 拗ねる（ほほ染め）

	// ファミーユ制服・ポーズ２
	REA_0202AS,					// 焦り（ほほ染め）
	REA_0202BS,					// 微笑
	REA_0202EG,					// 笑顔1
	REA_0202EG2,				// 笑顔2
	REA_0202EG3,				// 笑顔3
	REA_0202HT,					// ？
	REA_0202IK,					// 怒り1
	REA_0202IK_,				// 怒り1（ほほ染め）
	REA_0202IK2,				// 怒り2
	REA_0202IK2_,				// 怒り2（ほほ染め）
	REA_0202IK3,				// 怒り3
	REA_0202IK3_,				// 怒り3（ほほ染め）
	REA_0202KM,					// 困り
	REA_0202KM_,				// 困り（ほほ染め）
	REA_0202KN,					// 悲しみ
	REA_0202MJ,					// 真面目
	REA_0202MS,					// むせる（ほほ染め）
	REA_0202NK,					// 泣き（ほほ染め）
	REA_0202NO,					// 通常
	REA_0202NS,					// 泣き叫び
	REA_0202NY,					// にやり
	REA_0202TN,					// つ～ん
	REA_0202TN_,				// つ～ん（ほほ染め）
	REA_0202TR,					// 照れ（ほほ染め）

	// 私服・ポーズ１
	REA_0301AK,					// 呆れ
	REA_0301IK,					// 怒り
	REA_0301IK_,				// 怒り（ほほ染め）
	REA_0301IN,					// 息をのむ
	REA_0301KM,					// 困り
	REA_0301KM_,				// 困り（ほほ染め）
	REA_0301KN,					// 悲しみ
	REA_0301NO,					// 通常
	REA_0301OD,					// 驚き
	REA_0301OD_,				// 驚き（ほほ染め）
	REA_0301SN,					// 拗ねる
	REA_0301SN_,				// 拗ねる（ほほ染め）

	// 私服・ポーズ２
	REA_0302AS,					// 焦り（ほほ染め）
	REA_0302BS,					// 微笑
	REA_0302EG,					// 笑顔1
	REA_0302EG2,				// 笑顔2
	REA_0302EG3,				// 笑顔3
	REA_0302HT,					// ？
	REA_0302IK,					// 怒り1
	REA_0302IK_,				// 怒り1（ほほ染め）
	REA_0302IK2,				// 怒り2
	REA_0302IK2_,				// 怒り2（ほほ染め）
	REA_0302IK3,				// 怒り3
	REA_0302IK3_,				// 怒り3（ほほ染め）
	REA_0302KM,					// 困り
	REA_0302KM_,				// 困り（ほほ染め）
	REA_0302KN,					// 悲しみ
	REA_0302MJ,					// 真面目
	REA_0302MS,					// むせる（ほほ染め）
	REA_0302NK,					// 泣き（ほほ染め）
	REA_0302NO,					// 通常
	REA_0302NS,					// 泣き叫び
	REA_0302NY,					// にやり
	REA_0302TN,					// つ～ん
	REA_0302TN_,				// つ～ん（ほほ染め）
	REA_0302TR,					// 照れ（ほほ染め）

	// 私服（上着）・ポーズ１
	REA_0401AK,					// 呆れ
	REA_0401IK,					// 怒り
	REA_0401IK_,				// 怒り（ほほ染め）
	REA_0401IN,					// 息をのむ
	REA_0401KM,					// 困り
	REA_0401KM_,				// 困り（ほほ染め）
	REA_0401KN,					// 悲しみ
	REA_0401NO,					// 通常
	REA_0401OD,					// 驚き
	REA_0401OD_,				// 驚き（ほほ染め）
	REA_0401SN,					// 拗ねる
	REA_0401SN_,				// 拗ねる（ほほ染め）

	// 私服（上着）・ポーズ２
	REA_0402AS,					// 焦り（ほほ染め）
	REA_0402BS,					// 微笑
	REA_0402EG,					// 笑顔1
	REA_0402EG2,				// 笑顔2
	REA_0402EG3,				// 笑顔3
	REA_0402HT,					// ？
	REA_0402IK,					// 怒り1
	REA_0402IK_,				// 怒り1（ほほ染め）
	REA_0402IK2,				// 怒り2
	REA_0402IK2_,				// 怒り2（ほほ染め）
	REA_0402IK3,				// 怒り3
	REA_0402IK3_,				// 怒り3（ほほ染め）
	REA_0402KM,					// 困り
	REA_0402KM_,				// 困り（ほほ染め）
	REA_0402KN,					// 悲しみ
	REA_0402MJ,					// 真面目
	REA_0402MS,					// むせる（ほほ染め）
	REA_0402NK,					// 泣き（ほほ染め）
	REA_0402NO,					// 通常
	REA_0402NS,					// 泣き叫び
	REA_0402NY,					// にやり
	REA_0402TN,					// つ～ん
	REA_0402TN_,				// つ～ん（ほほ染め）
	REA_0402TR,					// 照れ（ほほ染め）

	//========================================================
	// 玲愛（バストアップ）
	// キュリオ制服・ポーズ１
	REA_A101AK,					// 呆れ
	REA_A101IK,					// 怒り
	REA_A101IK_,				// 怒り（ほほ染め）
	REA_A101IN,					// 息をのむ
	REA_A101KM,					// 困り
	REA_A101KM_,				// 困り（ほほ染め）
	REA_A101KN,					// 悲しみ
	REA_A101NO,					// 通常
	REA_A101OD,					// 驚き
	REA_A101OD_,				// 驚き（ほほ染め）
	REA_A101SN,					// 拗ねる
	REA_A101SN_,				// 拗ねる（ほほ染め）

	// キュリオ制服・ポーズ２
	REA_A102AS,					// 焦り（ほほ染め）
	REA_A102BS,					// 微笑
	REA_A102EG,					// 笑顔1
	REA_A102EG2,				// 笑顔2
	REA_A102EG3,				// 笑顔3
	REA_A102HT,					// ？
	REA_A102IK,					// 怒り1
	REA_A102IK_,				// 怒り1（ほほ染め）
	REA_A102IK2,				// 怒り2
	REA_A102IK2_,				// 怒り2（ほほ染め）
	REA_A102IK3,				// 怒り3
	REA_A102IK3_,				// 怒り3（ほほ染め）
	REA_A102KM,					// 困り
	REA_A102KM_,				// 困り（ほほ染め）
	REA_A102KN,					// 悲しみ
	REA_A102MJ,					// 真面目
	REA_A102MS,					// むせる（ほほ染め）
	REA_A102NK,					// 泣き（ほほ染め）
	REA_A102NO,					// 通常
	REA_A102NS,					// 泣き叫び
	REA_A102NY,					// にやり
	REA_A102TN,					// つ～ん
	REA_A102TN_,				// つ～ん（ほほ染め）
	REA_A102TR,					// 照れ（ほほ染め）

	// ファミーユ制服・ポーズ１
	REA_A201AK,					// 呆れ
	REA_A201IK,					// 怒り
	REA_A201IK_,				// 怒り（ほほ染め）
	REA_A201IN,					// 息をのむ
	REA_A201KM,					// 困り
	REA_A201KM_,				// 困り（ほほ染め）
	REA_A201KN,					// 悲しみ
	REA_A201NO,					// 通常
	REA_A201OD,					// 驚き
	REA_A201OD_,				// 驚き（ほほ染め）
	REA_A201SN,					// 拗ねる
	REA_A201SN_,				// 拗ねる（ほほ染め）

	// ファミーユ制服・ポーズ２
	REA_A202AS,					// 焦り（ほほ染め）
	REA_A202BS,					// 微笑
	REA_A202EG,					// 笑顔1
	REA_A202EG2,				// 笑顔2
	REA_A202EG3,				// 笑顔3
	REA_A202HT,					// ？
	REA_A202IK,					// 怒り1
	REA_A202IK_,				// 怒り1（ほほ染め）
	REA_A202IK2,				// 怒り2
	REA_A202IK2_,				// 怒り2（ほほ染め）
	REA_A202IK3,				// 怒り3
	REA_A202IK3_,				// 怒り3（ほほ染め）
	REA_A202KM,					// 困り
	REA_A202KM_,				// 困り（ほほ染め）
	REA_A202KN,					// 悲しみ
	REA_A202MJ,					// 真面目
	REA_A202MS,					// むせる（ほほ染め）
	REA_A202NK,					// 泣き（ほほ染め）
	REA_A202NO,					// 通常
	REA_A202NS,					// 泣き叫び
	REA_A202NY,					// にやり
	REA_A202TN,					// つ～ん
	REA_A202TN_,				// つ～ん（ほほ染め）
	REA_A202TR,					// 照れ（ほほ染め）

	// 私服・ポーズ１
	REA_A301AK,					// 呆れ
	REA_A301IK,					// 怒り
	REA_A301IK_,				// 怒り（ほほ染め）
	REA_A301IN,					// 息をのむ
	REA_A301KM,					// 困り
	REA_A301KM_,				// 困り（ほほ染め）
	REA_A301KN,					// 悲しみ
	REA_A301NO,					// 通常
	REA_A301OD,					// 驚き
	REA_A301OD_,				// 驚き（ほほ染め）
	REA_A301SN,					// 拗ねる
	REA_A301SN_,				// 拗ねる（ほほ染め）

	// 私服・ポーズ２
	REA_A302AS,					// 焦り（ほほ染め）
	REA_A302BS,					// 微笑
	REA_A302EG,					// 笑顔1
	REA_A302EG2,				// 笑顔2
	REA_A302EG3,				// 笑顔3
	REA_A302HT,					// ？
	REA_A302IK,					// 怒り1
	REA_A302IK_,				// 怒り1（ほほ染め）
	REA_A302IK2,				// 怒り2
	REA_A302IK2_,				// 怒り2（ほほ染め）
	REA_A302IK3,				// 怒り3
	REA_A302IK3_,				// 怒り3（ほほ染め）
	REA_A302KM,					// 困り
	REA_A302KM_,				// 困り（ほほ染め）
	REA_A302KN,					// 悲しみ
	REA_A302MJ,					// 真面目
	REA_A302MS,					// むせる（ほほ染め）
	REA_A302NK,					// 泣き（ほほ染め）
	REA_A302NO,					// 通常
	REA_A302NS,					// 泣き叫び
	REA_A302NY,					// にやり
	REA_A302TN,					// つ～ん
	REA_A302TN_,				// つ～ん（ほほ染め）
	REA_A302TR,					// 照れ（ほほ染め）

	// 私服（上着）・ポーズ１
	REA_A401AK,					// 呆れ
	REA_A401IK,					// 怒り
	REA_A401IK_,				// 怒り（ほほ染め）
	REA_A401IN,					// 息をのむ
	REA_A401KM,					// 困り
	REA_A401KM_,				// 困り（ほほ染め）
	REA_A401KN,					// 悲しみ
	REA_A401NO,					// 通常
	REA_A401OD,					// 驚き
	REA_A401OD_,				// 驚き（ほほ染め）
	REA_A401SN,					// 拗ねる
	REA_A401SN_,				// 拗ねる（ほほ染め）

	// 私服（上着）・ポーズ２
	REA_A402AS,					// 焦り（ほほ染め）
	REA_A402BS,					// 微笑
	REA_A402EG,					// 笑顔1
	REA_A402EG2,				// 笑顔2
	REA_A402EG3,				// 笑顔3
	REA_A402HT,					// ？
	REA_A402IK,					// 怒り1
	REA_A402IK_,				// 怒り1（ほほ染め）
	REA_A402IK2,				// 怒り2
	REA_A402IK2_,				// 怒り2（ほほ染め）
	REA_A402IK3,				// 怒り3
	REA_A402IK3_,				// 怒り3（ほほ染め）
	REA_A402KM,					// 困り
	REA_A402KM_,				// 困り（ほほ染め）
	REA_A402KN,					// 悲しみ
	REA_A402MJ,					// 真面目
	REA_A402MS,					// むせる（ほほ染め）
	REA_A402NK,					// 泣き（ほほ染め）
	REA_A402NO,					// 通常
	REA_A402NS,					// 泣き叫び
	REA_A402NY,					// にやり
	REA_A402TN,					// つ～ん
	REA_A402TN_,				// つ～ん（ほほ染め）
	REA_A402TR,					// 照れ（ほほ染め）

	//========================================================
	// 明日香
	// ファミーユ制服・ポーズ１
	ASUKA_0101AS,				// 焦り
	ASUKA_0101BS,				// 微笑
	ASUKA_0101EG,				// 笑顔
	ASUKA_0101EG2,				// 笑顔
	ASUKA_0101EG3,				// 笑顔
	ASUKA_0101IK,				// 怒り
	ASUKA_0101IT,				// イタイ
	ASUKA_0101KN,				// 悲しみ
	ASUKA_0101KN_,				// 悲しみ（涙無し）
	ASUKA_0101MJ,				// 真面目
	ASUKA_0101NK,				// 泣き
	ASUKA_0101NO,				// 通常
	ASUKA_0101NS,				// 泣き叫び
	ASUKA_0101NS2,				// 泣き叫び
	ASUKA_0101ON,				// おねだり
	ASUKA_0101ON2,				// おねだり
	ASUKA_0101OT,				// 落ち込み
	ASUKA_0101TR,				// 照れ
	ASUKA_0101TR2,				// 照れ

	// ファミーユ制服・ポーズ２
	ASUKA_0102AK,				// 呆れ
	ASUKA_0102EG,				// 笑顔
	ASUKA_0102IK,				// 怒り
	ASUKA_0102IK2,				// 怒り
	ASUKA_0102KM,				// 困り
	ASUKA_0102KS,				// 苦笑
	ASUKA_0102NK,				// 泣き
	ASUKA_0102NM,				// 眠い
	ASUKA_0102NO,				// 通常
	ASUKA_0102NR,				// 睨む
	ASUKA_0102NR2,				// 睨む
	ASUKA_0102OD,				// 驚き
	ASUKA_0102OT,				// 落ち込み
	ASUKA_0102TN,				// つ～ん
	ASUKA_0102TR,				// 照れ
	ASUKA_0102TR2,				// 照れ
	ASUKA_0102UN,				// う～ん
	ASUKA_0102UN2,				// う～ん
	ASUKA_0102YW,				// 誘惑

	// 学園服・ポーズ１
	ASUKA_0201AS,				// 焦り
	ASUKA_0201BS,				// 微笑
	ASUKA_0201EG,				// 笑顔
	ASUKA_0201EG2,				// 笑顔
	ASUKA_0201EG3,				// 笑顔
	ASUKA_0201IK,				// 怒り
	ASUKA_0201IT,				// イタイ
	ASUKA_0201KN,				// 悲しみ
	ASUKA_0201KN_,				// 悲しみ（涙無し）
	ASUKA_0201MJ,				// 真面目
	ASUKA_0201NK,				// 泣き
	ASUKA_0201NO,				// 通常
	ASUKA_0201NS,				// 泣き叫び
	ASUKA_0201NS2,				// 泣き叫び
	ASUKA_0201ON,				// おねだり
	ASUKA_0201ON2,				// おねだり
	ASUKA_0201OT,				// 落ち込み
	ASUKA_0201TR,				// 照れ
	ASUKA_0201TR2,				// 照れ

	// 学園服・ポーズ２
	ASUKA_0202AK,				// 呆れ
	ASUKA_0202EG,				// 笑顔
	ASUKA_0202IK,				// 怒り
	ASUKA_0202IK2,				// 怒り
	ASUKA_0202KM,				// 困り
	ASUKA_0202KS,				// 苦笑
	ASUKA_0202NK,				// 泣き
	ASUKA_0202NM,				// 眠い
	ASUKA_0202NO,				// 通常
	ASUKA_0202NR,				// 睨む
	ASUKA_0202NR2,				// 睨む
	ASUKA_0202OD,				// 驚き
	ASUKA_0202OT,				// 落ち込み
	ASUKA_0202TN,				// つ～ん
	ASUKA_0202TR,				// 照れ
	ASUKA_0202TR2,				// 照れ
	ASUKA_0202UN,				// う～ん
	ASUKA_0202UN2,				// う～ん
	ASUKA_0202YW,				// 誘惑

	// 学園服（コート）・ポーズ１
	ASUKA_0301AS,				// 焦り
	ASUKA_0301BS,				// 微笑
	ASUKA_0301EG,				// 笑顔
	ASUKA_0301EG2,				// 笑顔
	ASUKA_0301EG3,				// 笑顔
	ASUKA_0301IK,				// 怒り
	ASUKA_0301IT,				// イタイ
	ASUKA_0301KN,				// 悲しみ
	ASUKA_0301KN_,				// 悲しみ（涙無し）
	ASUKA_0301MJ,				// 真面目
	ASUKA_0301NK,				// 泣き
	ASUKA_0301NO,				// 通常
	ASUKA_0301NS,				// 泣き叫び
	ASUKA_0301NS2,				// 泣き叫び
	ASUKA_0301ON,				// おねだり
	ASUKA_0301ON2,				// おねだり
	ASUKA_0301OT,				// 落ち込み
	ASUKA_0301TR,				// 照れ
	ASUKA_0301TR2,				// 照れ

	// 学園服（コート）・ポーズ２
	ASUKA_0302AK,				// 呆れ
	ASUKA_0302EG,				// 笑顔
	ASUKA_0302IK,				// 怒り
	ASUKA_0302IK2,				// 怒り
	ASUKA_0302KM,				// 困り
	ASUKA_0302KS,				// 苦笑
	ASUKA_0302NK,				// 泣き
	ASUKA_0302NM,				// 眠い
	ASUKA_0302NO,				// 通常
	ASUKA_0302NR,				// 睨む
	ASUKA_0302NR2,				// 睨む
	ASUKA_0302OD,				// 驚き
	ASUKA_0302OT,				// 落ち込み
	ASUKA_0302TN,				// つ～ん
	ASUKA_0302TR,				// 照れ
	ASUKA_0302TR2,				// 照れ
	ASUKA_0302UN,				// う～ん
	ASUKA_0302UN2,				// う～ん
	ASUKA_0302YW,				// 誘惑

	// 私服・ポーズ１
	ASUKA_0401AS,				// 焦り
	ASUKA_0401BS,				// 微笑
	ASUKA_0401EG,				// 笑顔
	ASUKA_0401EG2,				// 笑顔
	ASUKA_0401EG3,				// 笑顔
	ASUKA_0401IK,				// 怒り
	ASUKA_0401IT,				// イタイ
	ASUKA_0401KN,				// 悲しみ
	ASUKA_0401KN_,				// 悲しみ（涙無し）
	ASUKA_0401MJ,				// 真面目
	ASUKA_0401NK,				// 泣き
	ASUKA_0401NO,				// 通常
	ASUKA_0401NS,				// 泣き叫び
	ASUKA_0401NS2,				// 泣き叫び
	ASUKA_0401ON,				// おねだり
	ASUKA_0401ON2,				// おねだり
	ASUKA_0401OT,				// 落ち込み
	ASUKA_0401TR,				// 照れ
	ASUKA_0401TR2,				// 照れ

	// 私服・ポーズ２
	ASUKA_0402AK,				// 呆れ
	ASUKA_0402EG,				// 笑顔
	ASUKA_0402IK,				// 怒り
	ASUKA_0402IK2,				// 怒り
	ASUKA_0402KM,				// 困り
	ASUKA_0402KS,				// 苦笑
	ASUKA_0402NK,				// 泣き
	ASUKA_0402NM,				// 眠い
	ASUKA_0402NO,				// 通常
	ASUKA_0402NR,				// 睨む
	ASUKA_0402NR2,				// 睨む
	ASUKA_0402OD,				// 驚き
	ASUKA_0402OT,				// 落ち込み
	ASUKA_0402TN,				// つ～ん
	ASUKA_0402TR,				// 照れ
	ASUKA_0402TR2,				// 照れ
	ASUKA_0402UN,				// う～ん
	ASUKA_0402UN2,				// う～ん
	ASUKA_0402YW,				// 誘惑

	//========================================================
	// 明日香（バストアップ）
	// ファミーユ制服・ポーズ１
	ASUKA_A101AS,				// 焦り
	ASUKA_A101BS,				// 微笑
	ASUKA_A101EG,				// 笑顔
	ASUKA_A101EG2,				// 笑顔
	ASUKA_A101EG3,				// 笑顔
	ASUKA_A101IK,				// 怒り
	ASUKA_A101IT,				// イタイ
	ASUKA_A101KN,				// 悲しみ
	ASUKA_A101KN_,				// 悲しみ（涙無し）
	ASUKA_A101MJ,				// 真面目
	ASUKA_A101NK,				// 泣き
	ASUKA_A101NO,				// 通常
	ASUKA_A101NS,				// 泣き叫び
	ASUKA_A101NS2,				// 泣き叫び
	ASUKA_A101ON,				// おねだり
	ASUKA_A101ON2,				// おねだり
	ASUKA_A101OT,				// 落ち込み
	ASUKA_A101TR,				// 照れ
	ASUKA_A101TR2,				// 照れ

	// ファミーユ制服・ポーズ２
	ASUKA_A102AK,				// 呆れ
	ASUKA_A102EG,				// 笑顔
	ASUKA_A102IK,				// 怒り
	ASUKA_A102IK2,				// 怒り
	ASUKA_A102KM,				// 困り
	ASUKA_A102KS,				// 苦笑
	ASUKA_A102NK,				// 泣き
	ASUKA_A102NM,				// 眠い
	ASUKA_A102NO,				// 通常
	ASUKA_A102NR,				// 睨む
	ASUKA_A102NR2,				// 睨む
	ASUKA_A102OD,				// 驚き
	ASUKA_A102OT,				// 落ち込み
	ASUKA_A102TN,				// つ～ん
	ASUKA_A102TR,				// 照れ
	ASUKA_A102TR2,				// 照れ
	ASUKA_A102UN,				// う～ん
	ASUKA_A102UN2,				// う～ん
	ASUKA_A102YW,				// 誘惑

	// 学園服・ポーズ１
	ASUKA_A201AS,				// 焦り
	ASUKA_A201BS,				// 微笑
	ASUKA_A201EG,				// 笑顔
	ASUKA_A201EG2,				// 笑顔
	ASUKA_A201EG3,				// 笑顔
	ASUKA_A201IK,				// 怒り
	ASUKA_A201IT,				// イタイ
	ASUKA_A201KN,				// 悲しみ
	ASUKA_A201KN_,				// 悲しみ（涙無し）
	ASUKA_A201MJ,				// 真面目
	ASUKA_A201NK,				// 泣き
	ASUKA_A201NO,				// 通常
	ASUKA_A201NS,				// 泣き叫び
	ASUKA_A201NS2,				// 泣き叫び
	ASUKA_A201ON,				// おねだり
	ASUKA_A201ON2,				// おねだり
	ASUKA_A201OT,				// 落ち込み
	ASUKA_A201TR,				// 照れ
	ASUKA_A201TR2,				// 照れ

	// 学園服・ポーズ２
	ASUKA_A202AK,				// 呆れ
	ASUKA_A202EG,				// 笑顔
	ASUKA_A202IK,				// 怒り
	ASUKA_A202IK2,				// 怒り
	ASUKA_A202KM,				// 困り
	ASUKA_A202KS,				// 苦笑
	ASUKA_A202NK,				// 泣き
	ASUKA_A202NM,				// 眠い
	ASUKA_A202NO,				// 通常
	ASUKA_A202NR,				// 睨む
	ASUKA_A202NR2,				// 睨む
	ASUKA_A202OD,				// 驚き
	ASUKA_A202OT,				// 落ち込み
	ASUKA_A202TN,				// つ～ん
	ASUKA_A202TR,				// 照れ
	ASUKA_A202TR2,				// 照れ
	ASUKA_A202UN,				// う～ん
	ASUKA_A202UN2,				// う～ん
	ASUKA_A202YW,				// 誘惑

	// 学園服（コート）・ポーズ１
	ASUKA_A301AS,				// 焦り
	ASUKA_A301BS,				// 微笑
	ASUKA_A301EG,				// 笑顔
	ASUKA_A301EG2,				// 笑顔
	ASUKA_A301EG3,				// 笑顔
	ASUKA_A301IK,				// 怒り
	ASUKA_A301IT,				// イタイ
	ASUKA_A301KN,				// 悲しみ
	ASUKA_A301KN_,				// 悲しみ（涙無し）
	ASUKA_A301MJ,				// 真面目
	ASUKA_A301NK,				// 泣き
	ASUKA_A301NO,				// 通常
	ASUKA_A301NS,				// 泣き叫び
	ASUKA_A301NS2,				// 泣き叫び
	ASUKA_A301ON,				// おねだり
	ASUKA_A301ON2,				// おねだり
	ASUKA_A301OT,				// 落ち込み
	ASUKA_A301TR,				// 照れ
	ASUKA_A301TR2,				// 照れ

	// 学園服（コート）・ポーズ２
	ASUKA_A302AK,				// 呆れ
	ASUKA_A302EG,				// 笑顔
	ASUKA_A302IK,				// 怒り
	ASUKA_A302IK2,				// 怒り
	ASUKA_A302KM,				// 困り
	ASUKA_A302KS,				// 苦笑
	ASUKA_A302NK,				// 泣き
	ASUKA_A302NM,				// 眠い
	ASUKA_A302NO,				// 通常
	ASUKA_A302NR,				// 睨む
	ASUKA_A302NR2,				// 睨む
	ASUKA_A302OD,				// 驚き
	ASUKA_A302OT,				// 落ち込み
	ASUKA_A302TN,				// つ～ん
	ASUKA_A302TR,				// 照れ
	ASUKA_A302TR2,				// 照れ
	ASUKA_A302UN,				// う～ん
	ASUKA_A302UN2,				// う～ん
	ASUKA_A302YW,				// 誘惑

	// 私服・ポーズ１
	ASUKA_A401AS,				// 焦り
	ASUKA_A401BS,				// 微笑
	ASUKA_A401EG,				// 笑顔
	ASUKA_A401EG2,				// 笑顔
	ASUKA_A401EG3,				// 笑顔
	ASUKA_A401IK,				// 怒り
	ASUKA_A401IT,				// イタイ
	ASUKA_A401KN,				// 悲しみ
	ASUKA_A401KN_,				// 悲しみ（涙無し）
	ASUKA_A401MJ,				// 真面目
	ASUKA_A401NK,				// 泣き
	ASUKA_A401NO,				// 通常
	ASUKA_A401NS,				// 泣き叫び
	ASUKA_A401NS2,				// 泣き叫び
	ASUKA_A401ON,				// おねだり
	ASUKA_A401ON2,				// おねだり
	ASUKA_A401OT,				// 落ち込み
	ASUKA_A401TR,				// 照れ
	ASUKA_A401TR2,				// 照れ

	// 私服・ポーズ２
	ASUKA_A402AK,				// 呆れ
	ASUKA_A402EG,				// 笑顔
	ASUKA_A402IK,				// 怒り
	ASUKA_A402IK2,				// 怒り
	ASUKA_A402KM,				// 困り
	ASUKA_A402KS,				// 苦笑
	ASUKA_A402NK,				// 泣き
	ASUKA_A402NM,				// 眠い
	ASUKA_A402NO,				// 通常
	ASUKA_A402NR,				// 睨む
	ASUKA_A402NR2,				// 睨む
	ASUKA_A402OD,				// 驚き
	ASUKA_A402OT,				// 落ち込み
	ASUKA_A402TN,				// つ～ん
	ASUKA_A402TR,				// 照れ
	ASUKA_A402TR2,				// 照れ
	ASUKA_A402UN,				// う～ん
	ASUKA_A402UN2,				// う～ん
	ASUKA_A402YW,				// 誘惑

	//========================================================
	// かすり
	// ファミーユ制服・ポーズ１
	KASURI_0101AK,				// 呆れ
	KASURI_0101IK,				// 怒り
	KASURI_0101KN,				// 悲しみ
	KASURI_0101KN2,				// 悲しみ
	KASURI_0101KN3,				// 悲しみ
	KASURI_0101KS,				// 苦笑
	KASURI_0101KT,				// きょとん
	KASURI_0101MJ,				// 真面目
	KASURI_0101MJ2,				// 真面目
	KASURI_0101NO,				// 通常
	KASURI_0101OP,				// ♪
	KASURI_0101OT,				// 落ち込み
	KASURI_0101SK,				// 叫び
	KASURI_0101UT,				// うたぐり
	KASURI_0101WK,				// わくわく

	// ファミーユ制服・ポーズ２
	KASURI_0102AS,				// 焦り
	KASURI_0102AS2,				// 焦り（おほほ）
	KASURI_0102BS,				// 微笑
	KASURI_0102EG,				// 笑顔（あはは）
	KASURI_0102EG2,				// 笑顔（わはは）
	KASURI_0102NO,				// 通常
	KASURI_0102NY,				// にやり
	KASURI_0102OD,				// 驚き
	KASURI_0102TK,				// 得意げ
	KASURI_0102TR,				// 照れ
	KASURI_0102TS,				// 照れ叫び
	KASURI_0102TY,				// ちぇ
	KASURI_0102UN,				// う～ん

	// パティシエ服・ポーズ１
	KASURI_0201AK,				// 呆れ
	KASURI_0201IK,				// 怒り
	KASURI_0201KN,				// 悲しみ
	KASURI_0201KN2,				// 悲しみ
	KASURI_0201KN3,				// 悲しみ
	KASURI_0201KS,				// 苦笑
	KASURI_0201KT,				// きょとん
	KASURI_0201MJ,				// 真面目
	KASURI_0201MJ2,				// 真面目
	KASURI_0201NO,				// 通常
	KASURI_0201OP,				// ♪
	KASURI_0201OT,				// 落ち込み
	KASURI_0201SK,				// 叫び
	KASURI_0201UT,				// うたぐり
	KASURI_0201WK,				// わくわく

	// パティシエ服・ポーズ２
	KASURI_0202AS,				// 焦り
	KASURI_0202AS2,				// 焦り（おほほ）
	KASURI_0202BS,				// 微笑
	KASURI_0202EG,				// 笑顔（あはは）
	KASURI_0202EG2,				// 笑顔（わはは）
	KASURI_0202NO,				// 通常
	KASURI_0202NY,				// にやり
	KASURI_0202OD,				// 驚き
	KASURI_0202TK,				// 得意げ
	KASURI_0202TR,				// 照れ
	KASURI_0202TS,				// 照れ叫び
	KASURI_0202TY,				// ちぇ
	KASURI_0202UN,				// う～ん

	// キュリオパティシエ服・ポーズ１
	KASURI_0301AK,				// 呆れ
	KASURI_0301IK,				// 怒り
	KASURI_0301KN,				// 悲しみ
	KASURI_0301KN2,				// 悲しみ
	KASURI_0301KN3,				// 悲しみ
	KASURI_0301KS,				// 苦笑
	KASURI_0301KT,				// きょとん
	KASURI_0301MJ,				// 真面目
	KASURI_0301MJ2,				// 真面目
	KASURI_0301NO,				// 通常
	KASURI_0301OP,				// ♪
	KASURI_0301OT,				// 落ち込み
	KASURI_0301SK,				// 叫び
	KASURI_0301UT,				// うたぐり
	KASURI_0301WK,				// わくわく

	// キュリオパティシエ服・ポーズ２
	KASURI_0302AS,				// 焦り
	KASURI_0302AS2,				// 焦り（おほほ）
	KASURI_0302BS,				// 微笑
	KASURI_0302EG,				// 笑顔（あはは）
	KASURI_0302EG2,				// 笑顔（わはは）
	KASURI_0302NO,				// 通常
	KASURI_0302NY,				// にやり
	KASURI_0302OD,				// 驚き
	KASURI_0302TK,				// 得意げ
	KASURI_0302TR,				// 照れ
	KASURI_0302TS,				// 照れ叫び
	KASURI_0302TY,				// ちぇ
	KASURI_0302UN,				// う～ん

	// 私服・ポーズ１
	KASURI_0401AK,				// 呆れ
	KASURI_0401IK,				// 怒り
	KASURI_0401KN,				// 悲しみ
	KASURI_0401KN2,				// 悲しみ
	KASURI_0401KN3,				// 悲しみ
	KASURI_0401KS,				// 苦笑
	KASURI_0401KT,				// きょとん
	KASURI_0401MJ,				// 真面目
	KASURI_0401MJ2,				// 真面目
	KASURI_0401NO,				// 通常
	KASURI_0401OP,				// ♪
	KASURI_0401OT,				// 落ち込み
	KASURI_0401SK,				// 叫び
	KASURI_0401UT,				// うたぐり
	KASURI_0401WK,				// わくわく

	// 私服・ポーズ２
	KASURI_0402AS,				// 焦り
	KASURI_0402AS2,				// 焦り（おほほ）
	KASURI_0402BS,				// 微笑
	KASURI_0402EG,				// 笑顔（あはは）
	KASURI_0402EG2,				// 笑顔（わはは）
	KASURI_0402NO,				// 通常
	KASURI_0402NY,				// にやり
	KASURI_0402OD,				// 驚き
	KASURI_0402TK,				// 得意げ
	KASURI_0402TR,				// 照れ
	KASURI_0402TS,				// 照れ叫び
	KASURI_0402TY,				// ちぇ
	KASURI_0402UN,				// う～ん

	//========================================================
	// かすり（バストアップ）
	// ファミーユ制服・ポーズ１
	KASURI_A101AK,				// 呆れ
	KASURI_A101IK,				// 怒り
	KASURI_A101KN,				// 悲しみ
	KASURI_A101KN2,				// 悲しみ
	KASURI_A101KN3,				// 悲しみ
	KASURI_A101KS,				// 苦笑
	KASURI_A101KT,				// きょとん
	KASURI_A101MJ,				// 真面目
	KASURI_A101MJ2,				// 真面目
	KASURI_A101NO,				// 通常
	KASURI_A101OP,				// ♪
	KASURI_A101OT,				// 落ち込み
	KASURI_A101SK,				// 叫び
	KASURI_A101UT,				// うたぐり
	KASURI_A101WK,				// わくわく

	// ファミーユ制服・ポーズ２
	KASURI_A102AS,				// 焦り
	KASURI_A102AS2,				// 焦り（おほほ）
	KASURI_A102BS,				// 微笑
	KASURI_A102EG,				// 笑顔（あはは）
	KASURI_A102EG2,				// 笑顔（わはは）
	KASURI_A102NO,				// 通常
	KASURI_A102NY,				// にやり
	KASURI_A102OD,				// 驚き
	KASURI_A102TK,				// 得意げ
	KASURI_A102TR,				// 照れ
	KASURI_A102TS,				// 照れ叫び
	KASURI_A102TY,				// ちぇ
	KASURI_A102UN,				// う～ん

	// パティシエ服・ポーズ１
	KASURI_A201AK,				// 呆れ
	KASURI_A201IK,				// 怒り
	KASURI_A201KN,				// 悲しみ
	KASURI_A201KN2,				// 悲しみ
	KASURI_A201KN3,				// 悲しみ
	KASURI_A201KS,				// 苦笑
	KASURI_A201KT,				// きょとん
	KASURI_A201MJ,				// 真面目
	KASURI_A201MJ2,				// 真面目
	KASURI_A201NO,				// 通常
	KASURI_A201OP,				// ♪
	KASURI_A201OT,				// 落ち込み
	KASURI_A201SK,				// 叫び
	KASURI_A201UT,				// うたぐり
	KASURI_A201WK,				// わくわく

	// パティシエ服・ポーズ２
	KASURI_A202AS,				// 焦り
	KASURI_A202AS2,				// 焦り（おほほ）
	KASURI_A202BS,				// 微笑
	KASURI_A202EG,				// 笑顔（あはは）
	KASURI_A202EG2,				// 笑顔（わはは）
	KASURI_A202NO,				// 通常
	KASURI_A202NY,				// にやり
	KASURI_A202OD,				// 驚き
	KASURI_A202TK,				// 得意げ
	KASURI_A202TR,				// 照れ
	KASURI_A202TS,				// 照れ叫び
	KASURI_A202TY,				// ちぇ
	KASURI_A202UN,				// う～ん

	// キュリオパティシエ服・ポーズ１
	KASURI_A301AK,				// 呆れ
	KASURI_A301IK,				// 怒り
	KASURI_A301KN,				// 悲しみ
	KASURI_A301KN2,				// 悲しみ
	KASURI_A301KN3,				// 悲しみ
	KASURI_A301KS,				// 苦笑
	KASURI_A301KT,				// きょとん
	KASURI_A301MJ,				// 真面目
	KASURI_A301MJ2,				// 真面目
	KASURI_A301NO,				// 通常
	KASURI_A301OP,				// ♪
	KASURI_A301OT,				// 落ち込み
	KASURI_A301SK,				// 叫び
	KASURI_A301UT,				// うたぐり
	KASURI_A301WK,				// わくわく

	// キュリオパティシエ服・ポーズ２
	KASURI_A302AS,				// 焦り
	KASURI_A302AS2,				// 焦り（おほほ）
	KASURI_A302BS,				// 微笑
	KASURI_A302EG,				// 笑顔（あはは）
	KASURI_A302EG2,				// 笑顔（わはは）
	KASURI_A302NO,				// 通常
	KASURI_A302NY,				// にやり
	KASURI_A302OD,				// 驚き
	KASURI_A302TK,				// 得意げ
	KASURI_A302TR,				// 照れ
	KASURI_A302TS,				// 照れ叫び
	KASURI_A302TY,				// ちぇ
	KASURI_A302UN,				// う～ん

	// 私服・ポーズ１
	KASURI_A401AK,				// 呆れ
	KASURI_A401IK,				// 怒り
	KASURI_A401KN,				// 悲しみ
	KASURI_A401KN2,				// 悲しみ
	KASURI_A401KN3,				// 悲しみ
	KASURI_A401KS,				// 苦笑
	KASURI_A401KT,				// きょとん
	KASURI_A401MJ,				// 真面目
	KASURI_A401MJ2,				// 真面目
	KASURI_A401NO,				// 通常
	KASURI_A401OP,				// ♪
	KASURI_A401OT,				// 落ち込み
	KASURI_A401SK,				// 叫び
	KASURI_A401UT,				// うたぐり
	KASURI_A401WK,				// わくわく

	// 私服・ポーズ２
	KASURI_A402AS,				// 焦り
	KASURI_A402AS2,				// 焦り（おほほ）
	KASURI_A402BS,				// 微笑
	KASURI_A402EG,				// 笑顔（あはは）
	KASURI_A402EG2,				// 笑顔（わはは）
	KASURI_A402NO,				// 通常
	KASURI_A402NY,				// にやり
	KASURI_A402OD,				// 驚き
	KASURI_A402TK,				// 得意げ
	KASURI_A402TR,				// 照れ
	KASURI_A402TS,				// 照れ叫び
	KASURI_A402TY,				// ちぇ
	KASURI_A402UN,				// う～ん

	//========================================================
	// 恵麻
	// パティシエ服・ポーズ１
	EMA_0101AS,					// 焦り
	EMA_0101BS,					// 微笑
	EMA_0101BS2,				// 微笑（悪）
	EMA_0101EG,					// 笑顔
	EMA_0101EG2,				// 笑顔（悪）
	EMA_0101HE,					// へ～（軽蔑）
	EMA_0101HO,					// ほっ
	EMA_0101IK,					// 怒り（ぷんぷん）
	EMA_0101IK2,				// 怒り（一喝）
	EMA_0101IK3,				// 怒り
	EMA_0101IK4,				// 怒り（もうっ）
	EMA_0101IK5,				// 怒り
	EMA_0101KB,					// 軽蔑
	EMA_0101KM,					// 困り
	EMA_0101KS,					// 苦笑
	EMA_0101KT,					// きょとん
	EMA_0101MJ,					// 真面目
	EMA_0101MU,					// ムッ
	EMA_0101NK,					// 泣き
	EMA_0101NO,					// 通常
	EMA_0101NR,					// 睨む
	EMA_0101OD,					// 驚き
	EMA_0101SK,					// 叫び
	EMA_0101SM,					// しんみり
	EMA_0101SN,					// 拗ねる
	EMA_0101TO,					// 照れ驚き

	// パティシエ服・ポーズ２
	EMA_0102AG,					// 喘ぎ
	EMA_0102AG2,				// 喘ぎ
	EMA_0102AK,					// 呆れ
	EMA_0102AR,					// 諦め
	EMA_0102BS,					// 微笑
	EMA_0102KG,					// 感激
	EMA_0102KR,					// 苦しみ
	EMA_0102KS,					// 苦笑
	EMA_0102MS,					// 妄想
	EMA_0102MS2,				// 妄想
	EMA_0102MS3,				// 妄想
	EMA_0102NM,					// 眠い
	EMA_0102NM_,				// 眠い（ぐろっきー）
	EMA_0102NM2,				// 眠い
	EMA_0102NM2_,				// 眠い（ぐろっきー）
	EMA_0102NO,					// 通常
	EMA_0102NT,					// 寝た
	EMA_0102SP,					// 心配
	EMA_0102TR,					// 照れ
	EMA_0102UF,					// うふふふふふ

	// 私服・ポーズ１
	EMA_0201AS,					// 焦り
	EMA_0201BS,					// 微笑
	EMA_0201BS2,				// 微笑（悪）
	EMA_0201EG,					// 笑顔
	EMA_0201EG2,				// 笑顔（悪）
	EMA_0201HE,					// へ～（軽蔑）
	EMA_0201HO,					// ほっ
	EMA_0201IK,					// 怒り（ぷんぷん）
	EMA_0201IK2,				// 怒り（一喝）
	EMA_0201IK3,				// 怒り
	EMA_0201IK4,				// 怒り（もうっ）
	EMA_0201IK5,				// 怒り
	EMA_0201KB,					// 軽蔑
	EMA_0201KM,					// 困り
	EMA_0201KS,					// 苦笑
	EMA_0201KT,					// きょとん
	EMA_0201MJ,					// 真面目
	EMA_0201MU,					// ムッ
	EMA_0201NK,					// 泣き
	EMA_0201NO,					// 通常
	EMA_0201NR,					// 睨む
	EMA_0201OD,					// 驚き
	EMA_0201SK,					// 叫び
	EMA_0201SM,					// しんみり
	EMA_0201SN,					// 拗ねる
	EMA_0201TO,					// 照れ驚き

	// 私服・ポーズ２
	EMA_0202AG,					// 喘ぎ
	EMA_0202AG2,				// 喘ぎ
	EMA_0202AK,					// 呆れ
	EMA_0202AR,					// 諦め
	EMA_0202BS,					// 微笑
	EMA_0202KG,					// 感激
	EMA_0202KR,					// 苦しみ
	EMA_0202KS,					// 苦笑
	EMA_0202MS,					// 妄想
	EMA_0202MS2,				// 妄想
	EMA_0202MS3,				// 妄想
	EMA_0202NM,					// 眠い
	EMA_0202NM_,				// 眠い（ぐろっきー）
	EMA_0202NM2,				// 眠い
	EMA_0202NM2_,				// 眠い（ぐろっきー）
	EMA_0202NO,					// 通常
	EMA_0202NT,					// 寝た
	EMA_0202SP,					// 心配
	EMA_0202TR,					// 照れ
	EMA_0202UF,					// うふふふふふ

	// 私服（スカート）・ポーズ１
	EMA_0301AS,					// 焦り
	EMA_0301BS,					// 微笑
	EMA_0301BS2,				// 微笑（悪）
	EMA_0301EG,					// 笑顔
	EMA_0301EG2,				// 笑顔（悪）
	EMA_0301HE,					// へ～（軽蔑）
	EMA_0301HO,					// ほっ
	EMA_0301IK,					// 怒り（ぷんぷん）
	EMA_0301IK2,				// 怒り（一喝）
	EMA_0301IK3,				// 怒り
	EMA_0301IK4,				// 怒り（もうっ）
	EMA_0301IK5,				// 怒り
	EMA_0301KB,					// 軽蔑
	EMA_0301KM,					// 困り
	EMA_0301KS,					// 苦笑
	EMA_0301KT,					// きょとん
	EMA_0301MJ,					// 真面目
	EMA_0301MU,					// ムッ
	EMA_0301NK,					// 泣き
	EMA_0301NO,					// 通常
	EMA_0301NR,					// 睨む
	EMA_0301OD,					// 驚き
	EMA_0301SK,					// 叫び
	EMA_0301SM,					// しんみり
	EMA_0301SN,					// 拗ねる
	EMA_0301TO,					// 照れ驚き

	// 私服（スカート）・ポーズ２
	EMA_0302AG,					// 喘ぎ
	EMA_0302AG2,				// 喘ぎ
	EMA_0302AK,					// 呆れ
	EMA_0302AR,					// 諦め
	EMA_0302BS,					// 微笑
	EMA_0302KG,					// 感激
	EMA_0302KR,					// 苦しみ
	EMA_0302KS,					// 苦笑
	EMA_0302MS,					// 妄想
	EMA_0302MS2,				// 妄想
	EMA_0302MS3,				// 妄想
	EMA_0302NM,					// 眠い
	EMA_0302NM_,				// 眠い（ぐろっきー）
	EMA_0302NM2,				// 眠い
	EMA_0302NM2_,				// 眠い（ぐろっきー）
	EMA_0302NO,					// 通常
	EMA_0302NT,					// 寝た
	EMA_0302SP,					// 心配
	EMA_0302TR,					// 照れ
	EMA_0302UF,					// うふふふふふ

	// よそ行き服・ポーズ１
	EMA_0401AS,					// 焦り
	EMA_0401BS,					// 微笑
	EMA_0401BS2,				// 微笑（悪）
	EMA_0401EG,					// 笑顔
	EMA_0401EG2,				// 笑顔（悪）
	EMA_0401HE,					// へ～（軽蔑）
	EMA_0401HO,					// ほっ
	EMA_0401IK,					// 怒り（ぷんぷん）
	EMA_0401IK2,				// 怒り（一喝）
	EMA_0401IK3,				// 怒り
	EMA_0401IK4,				// 怒り（もうっ）
	EMA_0401IK5,				// 怒り
	EMA_0401KB,					// 軽蔑
	EMA_0401KM,					// 困り
	EMA_0401KS,					// 苦笑
	EMA_0401KT,					// きょとん
	EMA_0401MJ,					// 真面目
	EMA_0401MU,					// ムッ
	EMA_0401NK,					// 泣き
	EMA_0401NO,					// 通常
	EMA_0401NR,					// 睨む
	EMA_0401OD,					// 驚き
	EMA_0401SK,					// 叫び
	EMA_0401SM,					// しんみり
	EMA_0401SN,					// 拗ねる
	EMA_0401TO,					// 照れ驚き

	// 喪服・ポーズ１
	EMA_0501AS,					// 焦り
	EMA_0501BS,					// 微笑
	EMA_0501BS2,				// 微笑（悪）
	EMA_0501EG,					// 笑顔
	EMA_0501EG2,				// 笑顔（悪）
	EMA_0501HE,					// へ～（軽蔑）
	EMA_0501HO,					// ほっ
	EMA_0501IK,					// 怒り（ぷんぷん）
	EMA_0501IK2,				// 怒り（一喝）
	EMA_0501IK3,				// 怒り
	EMA_0501IK4,				// 怒り（もうっ）
	EMA_0501IK5,				// 怒り
	EMA_0501KB,					// 軽蔑
	EMA_0501KM,					// 困り
	EMA_0501KS,					// 苦笑
	EMA_0501KT,					// きょとん
	EMA_0501MJ,					// 真面目
	EMA_0501MU,					// ムッ
	EMA_0501NK,					// 泣き
	EMA_0501NO,					// 通常
	EMA_0501NR,					// 睨む
	EMA_0501OD,					// 驚き
	EMA_0501SK,					// 叫び
	EMA_0501SM,					// しんみり
	EMA_0501SN,					// 拗ねる
	EMA_0501TO,					// 照れ驚き

	//========================================================
	// 恵麻（バストアップ）
	// パティシエ服・ポーズ１
	EMA_A101AS,					// 焦り
	EMA_A101BS,					// 微笑
	EMA_A101BS2,				// 微笑（悪）
	EMA_A101EG,					// 笑顔
	EMA_A101EG2,				// 笑顔（悪）
	EMA_A101HE,					// へ～（軽蔑）
	EMA_A101HO,					// ほっ
	EMA_A101IK,					// 怒り（ぷんぷん）
	EMA_A101IK2,				// 怒り（一喝）
	EMA_A101IK3,				// 怒り
	EMA_A101IK4,				// 怒り（もうっ）
	EMA_A101IK5,				// 怒り
	EMA_A101KB,					// 軽蔑
	EMA_A101KM,					// 困り
	EMA_A101KS,					// 苦笑
	EMA_A101KT,					// きょとん
	EMA_A101MJ,					// 真面目
	EMA_A101MU,					// ムッ
	EMA_A101NK,					// 泣き
	EMA_A101NO,					// 通常
	EMA_A101NR,					// 睨む
	EMA_A101OD,					// 驚き
	EMA_A101SK,					// 叫び
	EMA_A101SM,					// しんみり
	EMA_A101SN,					// 拗ねる
	EMA_A101TO,					// 照れ驚き

	// パティシエ服・ポーズ２
	EMA_A102AG,					// 喘ぎ
	EMA_A102AG2,				// 喘ぎ
	EMA_A102AK,					// 呆れ
	EMA_A102AR,					// 諦め
	EMA_A102BS,					// 微笑
	EMA_A102KG,					// 感激
	EMA_A102KR,					// 苦しみ
	EMA_A102KS,					// 苦笑
	EMA_A102MS,					// 妄想
	EMA_A102MS2,				// 妄想
	EMA_A102MS3,				// 妄想
	EMA_A102NM,					// 眠い
	EMA_A102NM_,				// 眠い（ぐろっきー）
	EMA_A102NM2,				// 眠い
	EMA_A102NM2_,				// 眠い（ぐろっきー）
	EMA_A102NO,					// 通常
	EMA_A102NT,					// 寝た
	EMA_A102SP,					// 心配
	EMA_A102TR,					// 照れ
	EMA_A102UF,					// うふふふふふ

	// 私服・ポーズ１
	EMA_A201AS,					// 焦り
	EMA_A201BS,					// 微笑
	EMA_A201BS2,				// 微笑（悪）
	EMA_A201EG,					// 笑顔
	EMA_A201EG2,				// 笑顔（悪）
	EMA_A201HE,					// へ～（軽蔑）
	EMA_A201HO,					// ほっ
	EMA_A201IK,					// 怒り（ぷんぷん）
	EMA_A201IK2,				// 怒り（一喝）
	EMA_A201IK3,				// 怒り
	EMA_A201IK4,				// 怒り（もうっ）
	EMA_A201IK5,				// 怒り
	EMA_A201KB,					// 軽蔑
	EMA_A201KM,					// 困り
	EMA_A201KS,					// 苦笑
	EMA_A201KT,					// きょとん
	EMA_A201MJ,					// 真面目
	EMA_A201MU,					// ムッ
	EMA_A201NK,					// 泣き
	EMA_A201NO,					// 通常
	EMA_A201NR,					// 睨む
	EMA_A201OD,					// 驚き
	EMA_A201SK,					// 叫び
	EMA_A201SM,					// しんみり
	EMA_A201SN,					// 拗ねる
	EMA_A201TO,					// 照れ驚き

	// 私服・ポーズ２
	EMA_A202AG,					// 喘ぎ
	EMA_A202AG2,				// 喘ぎ
	EMA_A202AK,					// 呆れ
	EMA_A202AR,					// 諦め
	EMA_A202BS,					// 微笑
	EMA_A202KG,					// 感激
	EMA_A202KR,					// 苦しみ
	EMA_A202KS,					// 苦笑
	EMA_A202MS,					// 妄想
	EMA_A202MS2,				// 妄想
	EMA_A202MS3,				// 妄想
	EMA_A202NM,					// 眠い
	EMA_A202NM_,				// 眠い（ぐろっきー）
	EMA_A202NM2,				// 眠い
	EMA_A202NM2_,				// 眠い（ぐろっきー）
	EMA_A202NO,					// 通常
	EMA_A202NT,					// 寝た
	EMA_A202SP,					// 心配
	EMA_A202TR,					// 照れ
	EMA_A202UF,					// うふふふふふ

	// 私服（スカート）・ポーズ１
	EMA_A301AS,					// 焦り
	EMA_A301BS,					// 微笑
	EMA_A301BS2,				// 微笑（悪）
	EMA_A301EG,					// 笑顔
	EMA_A301EG2,				// 笑顔（悪）
	EMA_A301HE,					// へ～（軽蔑）
	EMA_A301HO,					// ほっ
	EMA_A301IK,					// 怒り（ぷんぷん）
	EMA_A301IK2,				// 怒り（一喝）
	EMA_A301IK3,				// 怒り
	EMA_A301IK4,				// 怒り（もうっ）
	EMA_A301IK5,				// 怒り
	EMA_A301KB,					// 軽蔑
	EMA_A301KM,					// 困り
	EMA_A301KS,					// 苦笑
	EMA_A301KT,					// きょとん
	EMA_A301MJ,					// 真面目
	EMA_A301MU,					// ムッ
	EMA_A301NK,					// 泣き
	EMA_A301NO,					// 通常
	EMA_A301NR,					// 睨む
	EMA_A301OD,					// 驚き
	EMA_A301SK,					// 叫び
	EMA_A301SM,					// しんみり
	EMA_A301SN,					// 拗ねる
	EMA_A301TO,					// 照れ驚き

	// 私服（スカート）・ポーズ２
	EMA_A302AG,					// 喘ぎ
	EMA_A302AG2,				// 喘ぎ
	EMA_A302AK,					// 呆れ
	EMA_A302AR,					// 諦め
	EMA_A302BS,					// 微笑
	EMA_A302KG,					// 感激
	EMA_A302KR,					// 苦しみ
	EMA_A302KS,					// 苦笑
	EMA_A302MS,					// 妄想
	EMA_A302MS2,				// 妄想
	EMA_A302MS3,				// 妄想
	EMA_A302NM,					// 眠い
	EMA_A302NM_,				// 眠い（ぐろっきー）
	EMA_A302NM2,				// 眠い
	EMA_A302NM2_,				// 眠い（ぐろっきー）
	EMA_A302NO,					// 通常
	EMA_A302NT,					// 寝た
	EMA_A302SP,					// 心配
	EMA_A302TR,					// 照れ
	EMA_A302UF,					// うふふふふふ

	// よそ行き服・ポーズ１
	EMA_A401AS,					// 焦り
	EMA_A401BS,					// 微笑
	EMA_A401BS2,				// 微笑（悪）
	EMA_A401EG,					// 笑顔
	EMA_A401EG2,				// 笑顔（悪）
	EMA_A401HE,					// へ～（軽蔑）
	EMA_A401HO,					// ほっ
	EMA_A401IK,					// 怒り（ぷんぷん）
	EMA_A401IK2,				// 怒り（一喝）
	EMA_A401IK3,				// 怒り
	EMA_A401IK4,				// 怒り（もうっ）
	EMA_A401IK5,				// 怒り
	EMA_A401KB,					// 軽蔑
	EMA_A401KM,					// 困り
	EMA_A401KS,					// 苦笑
	EMA_A401KT,					// きょとん
	EMA_A401MJ,					// 真面目
	EMA_A401MU,					// ムッ
	EMA_A401NK,					// 泣き
	EMA_A401NO,					// 通常
	EMA_A401NR,					// 睨む
	EMA_A401OD,					// 驚き
	EMA_A401SK,					// 叫び
	EMA_A401SM,					// しんみり
	EMA_A401SN,					// 拗ねる
	EMA_A401TO,					// 照れ驚き

	// 喪服・ポーズ１
	EMA_A501AS,					// 焦り
	EMA_A501BS,					// 微笑
	EMA_A501BS2,				// 微笑（悪）
	EMA_A501EG,					// 笑顔
	EMA_A501EG2,				// 笑顔（悪）
	EMA_A501HE,					// へ～（軽蔑）
	EMA_A501HO,					// ほっ
	EMA_A501IK,					// 怒り（ぷんぷん）
	EMA_A501IK2,				// 怒り（一喝）
	EMA_A501IK3,				// 怒り
	EMA_A501IK4,				// 怒り（もうっ）
	EMA_A501IK5,				// 怒り
	EMA_A501KB,					// 軽蔑
	EMA_A501KM,					// 困り
	EMA_A501KS,					// 苦笑
	EMA_A501KT,					// きょとん
	EMA_A501MJ,					// 真面目
	EMA_A501MU,					// ムッ
	EMA_A501NK,					// 泣き
	EMA_A501NO,					// 通常
	EMA_A501NR,					// 睨む
	EMA_A501OD,					// 驚き
	EMA_A501SK,					// 叫び
	EMA_A501SM,					// しんみり
	EMA_A501SN,					// 拗ねる
	EMA_A501TO,					// 照れ驚き

	//========================================================
	// 里伽子
	// 私服・ポーズ１
	RIKAKO_0101AN,				// あ～ん
	RIKAKO_0101BS,				// 微笑
	RIKAKO_0101IK,				// 怒り
	RIKAKO_0101KM,				// 困り1
	RIKAKO_0101KM2,				// 困り2
	RIKAKO_0101MG,				// メガネ1
	RIKAKO_0101MG2,				// メガネ2
	RIKAKO_0101MM,				// むぐむぐ
	RIKAKO_0101NO,				// 通常
	RIKAKO_0101NY,				// にやり
	RIKAKO_0101OD,				// 驚き（無感情）
	RIKAKO_0101SC,				// ショック

	// 私服・ポーズ２
	RIKAKO_0102AK,				// 呆れ
	RIKAKO_0102AS,				// 焦り
	RIKAKO_0102EG,				// 笑顔
	RIKAKO_0102HB,				// 半べそ
	RIKAKO_0102IK,				// 怒り
	RIKAKO_0102KN,				// 悲しみ
	RIKAKO_0102KS,				// 苦笑
	RIKAKO_0102KT,				// きょとん
	RIKAKO_0102MG,				// メガネ1
	RIKAKO_0102MG2,				// メガネ2
	RIKAKO_0102MJ,				// 真面目
	RIKAKO_0102MU,				// ムッ
	RIKAKO_0102MU2,				// ムッ
	RIKAKO_0102NK,				// 泣き1
	RIKAKO_0102NK2,				// 泣き2
	RIKAKO_0102NK3,				// 泣き3
	RIKAKO_0102NO,				// 通常
	RIKAKO_0102NS,				// 泣き叫び
	RIKAKO_0102NW,				// 泣き笑い
	RIKAKO_0102OD,				// 驚き
	RIKAKO_0102SA,				// 思案
	RIKAKO_0102SK,				// 叫び
	RIKAKO_0102TR,				// 照れ

	// 私服（ブレスレット）・ポーズ１
	RIKAKO_0201AN,				// あ～ん
	RIKAKO_0201BS,				// 微笑
	RIKAKO_0201IK,				// 怒り
	RIKAKO_0201KM,				// 困り1
	RIKAKO_0201KM2,				// 困り2
	RIKAKO_0201MG,				// メガネ1
	RIKAKO_0201MG2,				// メガネ2
	RIKAKO_0201MM,				// むぐむぐ
	RIKAKO_0201NO,				// 通常
	RIKAKO_0201NY,				// にやり
	RIKAKO_0201OD,				// 驚き（無感情）
	RIKAKO_0201SC,				// ショック

	// 私服（ブレスレット）・ポーズ２
	RIKAKO_0202AK,				// 呆れ
	RIKAKO_0202AS,				// 焦り
	RIKAKO_0202EG,				// 笑顔
	RIKAKO_0202HB,				// 半べそ
	RIKAKO_0202IK,				// 怒り
	RIKAKO_0202KN,				// 悲しみ
	RIKAKO_0202KS,				// 苦笑
	RIKAKO_0202KT,				// きょとん
	RIKAKO_0202MG,				// メガネ1
	RIKAKO_0202MG2,				// メガネ2
	RIKAKO_0202MJ,				// 真面目
	RIKAKO_0202MU,				// ムッ
	RIKAKO_0202MU2,				// ムッ
	RIKAKO_0202NK,				// 泣き1
	RIKAKO_0202NK2,				// 泣き2
	RIKAKO_0202NK3,				// 泣き3
	RIKAKO_0202NO,				// 通常
	RIKAKO_0202NS,				// 泣き叫び
	RIKAKO_0202NW,				// 泣き笑い
	RIKAKO_0202OD,				// 驚き
	RIKAKO_0202SA,				// 思案
	RIKAKO_0202SK,				// 叫び
	RIKAKO_0202TR,				// 照れ

	// 私服（回想用ブレスレット）・ポーズ１
	RIKAKO_0301AN,				// あ～ん
	RIKAKO_0301BS,				// 微笑
	RIKAKO_0301IK,				// 怒り
	RIKAKO_0301KM,				// 困り1
	RIKAKO_0301KM2,				// 困り2
	RIKAKO_0301MG,				// メガネ1
	RIKAKO_0301MG2,				// メガネ2
	RIKAKO_0301MM,				// むぐむぐ
	RIKAKO_0301NO,				// 通常
	RIKAKO_0301NY,				// にやり
	RIKAKO_0301OD,				// 驚き（無感情）
	RIKAKO_0301SC,				// ショック

	// 私服（回想用ブレスレット）・ポーズ２
	RIKAKO_0302AK,				// 呆れ
	RIKAKO_0302AS,				// 焦り
	RIKAKO_0302EG,				// 笑顔
	RIKAKO_0302HB,				// 半べそ
	RIKAKO_0302IK,				// 怒り
	RIKAKO_0302KN,				// 悲しみ
	RIKAKO_0302KS,				// 苦笑
	RIKAKO_0302KT,				// きょとん
	RIKAKO_0302MG,				// メガネ1
	RIKAKO_0302MG2,				// メガネ2
	RIKAKO_0302MJ,				// 真面目
	RIKAKO_0302MU,				// ムッ
	RIKAKO_0302MU2,				// ムッ
	RIKAKO_0302NK,				// 泣き1
	RIKAKO_0302NK2,				// 泣き2
	RIKAKO_0302NK3,				// 泣き3
	RIKAKO_0302NO,				// 通常
	RIKAKO_0302NS,				// 泣き叫び
	RIKAKO_0302NW,				// 泣き笑い
	RIKAKO_0302OD,				// 驚き
	RIKAKO_0302SA,				// 思案
	RIKAKO_0302SK,				// 叫び
	RIKAKO_0302TR,				// 照れ

	// 私服（ブレスレット＋包帯）・ポーズ１
	RIKAKO_0401AN,				// あ～ん
	RIKAKO_0401BS,				// 微笑
	RIKAKO_0401IK,				// 怒り
	RIKAKO_0401KM,				// 困り1
	RIKAKO_0401KM2,				// 困り2
	RIKAKO_0401MG,				// メガネ1
	RIKAKO_0401MG2,				// メガネ2
	RIKAKO_0401MM,				// むぐむぐ
	RIKAKO_0401NO,				// 通常
	RIKAKO_0401NY,				// にやり
	RIKAKO_0401OD,				// 驚き（無感情）
	RIKAKO_0401SC,				// ショック

	// 私服（ブレスレット＋包帯）・ポーズ２
	RIKAKO_0402AK,				// 呆れ
	RIKAKO_0402AS,				// 焦り
	RIKAKO_0402EG,				// 笑顔
	RIKAKO_0402HB,				// 半べそ
	RIKAKO_0402IK,				// 怒り
	RIKAKO_0402KN,				// 悲しみ
	RIKAKO_0402KS,				// 苦笑
	RIKAKO_0402KT,				// きょとん
	RIKAKO_0402MG,				// メガネ1
	RIKAKO_0402MG2,				// メガネ2
	RIKAKO_0402MJ,				// 真面目
	RIKAKO_0402MU,				// ムッ
	RIKAKO_0402MU2,				// ムッ
	RIKAKO_0402NK,				// 泣き1
	RIKAKO_0402NK2,				// 泣き2
	RIKAKO_0402NK3,				// 泣き3
	RIKAKO_0402NO,				// 通常
	RIKAKO_0402NS,				// 泣き叫び
	RIKAKO_0402NW,				// 泣き笑い
	RIKAKO_0402OD,				// 驚き
	RIKAKO_0402SA,				// 思案
	RIKAKO_0402SK,				// 叫び
	RIKAKO_0402TR,				// 照れ

	// コート・ポーズ１
	RIKAKO_0501AN,				// あ～ん
	RIKAKO_0501BS,				// 微笑
	RIKAKO_0501IK,				// 怒り
	RIKAKO_0501KM,				// 困り1
	RIKAKO_0501KM2,				// 困り2
	RIKAKO_0501MG,				// メガネ1
	RIKAKO_0501MG2,				// メガネ2
	RIKAKO_0501MM,				// むぐむぐ
	RIKAKO_0501NO,				// 通常
	RIKAKO_0501NY,				// にやり
	RIKAKO_0501OD,				// 驚き（無感情）
	RIKAKO_0501SC,				// ショック

	// コート・ポーズ２
	RIKAKO_0502AK,				// 呆れ
	RIKAKO_0502AS,				// 焦り
	RIKAKO_0502EG,				// 笑顔
	RIKAKO_0502HB,				// 半べそ
	RIKAKO_0502IK,				// 怒り
	RIKAKO_0502KN,				// 悲しみ
	RIKAKO_0502KS,				// 苦笑
	RIKAKO_0502KT,				// きょとん
	RIKAKO_0502MG,				// メガネ1
	RIKAKO_0502MG2,				// メガネ2
	RIKAKO_0502MJ,				// 真面目
	RIKAKO_0502MU,				// ムッ
	RIKAKO_0502MU2,				// ムッ
	RIKAKO_0502NK,				// 泣き1
	RIKAKO_0502NK2,				// 泣き2
	RIKAKO_0502NK3,				// 泣き3
	RIKAKO_0502NO,				// 通常
	RIKAKO_0502NS,				// 泣き叫び
	RIKAKO_0502NW,				// 泣き笑い
	RIKAKO_0502OD,				// 驚き
	RIKAKO_0502SA,				// 思案
	RIKAKO_0502SK,				// 叫び
	RIKAKO_0502TR,				// 照れ

	// コート（包帯）・ポーズ１
	RIKAKO_0601AN,				// あ～ん
	RIKAKO_0601BS,				// 微笑
	RIKAKO_0601IK,				// 怒り
	RIKAKO_0601KM,				// 困り1
	RIKAKO_0601KM2,				// 困り2
	RIKAKO_0601MG,				// メガネ1
	RIKAKO_0601MG2,				// メガネ2
	RIKAKO_0601MM,				// むぐむぐ
	RIKAKO_0601NO,				// 通常
	RIKAKO_0601NY,				// にやり
	RIKAKO_0601OD,				// 驚き（無感情）
	RIKAKO_0601SC,				// ショック

	// コート（包帯）・ポーズ２
	RIKAKO_0602AK,				// 呆れ
	RIKAKO_0602AS,				// 焦り
	RIKAKO_0602EG,				// 笑顔
	RIKAKO_0602HB,				// 半べそ
	RIKAKO_0602IK,				// 怒り
	RIKAKO_0602KN,				// 悲しみ
	RIKAKO_0602KS,				// 苦笑
	RIKAKO_0602KT,				// きょとん
	RIKAKO_0602MG,				// メガネ1
	RIKAKO_0602MG2,				// メガネ2
	RIKAKO_0602MJ,				// 真面目
	RIKAKO_0602MU,				// ムッ
	RIKAKO_0602MU2,				// ムッ
	RIKAKO_0602NK,				// 泣き1
	RIKAKO_0602NK2,				// 泣き2
	RIKAKO_0602NK3,				// 泣き3
	RIKAKO_0602NO,				// 通常
	RIKAKO_0602NS,				// 泣き叫び
	RIKAKO_0602NW,				// 泣き笑い
	RIKAKO_0602OD,				// 驚き
	RIKAKO_0602SA,				// 思案
	RIKAKO_0602SK,				// 叫び
	RIKAKO_0602TR,				// 照れ

	// ファミーユ制服・ポーズ２
	RIKAKO_0902AK,				// 呆れ
	RIKAKO_0902AS,				// 焦り
	RIKAKO_0902EG,				// 笑顔
	RIKAKO_0902HB,				// 半べそ
	RIKAKO_0902IK,				// 怒り
	RIKAKO_0902KN,				// 悲しみ
	RIKAKO_0902KS,				// 苦笑
	RIKAKO_0902KT,				// きょとん
	RIKAKO_0902MG,				// メガネ1
	RIKAKO_0902MG2,				// メガネ2
	RIKAKO_0902MJ,				// 真面目
	RIKAKO_0902MU,				// ムッ
	RIKAKO_0902MU2,				// ムッ
	RIKAKO_0902NK,				// 泣き1
	RIKAKO_0902NK2,				// 泣き2
	RIKAKO_0902NK3,				// 泣き3
	RIKAKO_0902NO,				// 通常
	RIKAKO_0902NS,				// 泣き叫び
	RIKAKO_0902NW,				// 泣き笑い
	RIKAKO_0902OD,				// 驚き
	RIKAKO_0902SA,				// 思案
	RIKAKO_0902SK,				// 叫び
	RIKAKO_0902TR,				// 照れ

	// ファミーユ制服（ブレスレット）・ポーズ２
	RIKAKO_1002AK,				// 呆れ
	RIKAKO_1002AS,				// 焦り
	RIKAKO_1002EG,				// 笑顔
	RIKAKO_1002HB,				// 半べそ
	RIKAKO_1002IK,				// 怒り
	RIKAKO_1002KN,				// 悲しみ
	RIKAKO_1002KS,				// 苦笑
	RIKAKO_1002KT,				// きょとん
	RIKAKO_1002MG,				// メガネ1
	RIKAKO_1002MG2,				// メガネ2
	RIKAKO_1002MJ,				// 真面目
	RIKAKO_1002MU,				// ムッ
	RIKAKO_1002MU2,				// ムッ
	RIKAKO_1002NK,				// 泣き1
	RIKAKO_1002NK2,				// 泣き2
	RIKAKO_1002NK3,				// 泣き3
	RIKAKO_1002NO,				// 通常
	RIKAKO_1002NS,				// 泣き叫び
	RIKAKO_1002NW,				// 泣き笑い
	RIKAKO_1002OD,				// 驚き
	RIKAKO_1002SA,				// 思案
	RIKAKO_1002SK,				// 叫び
	RIKAKO_1002TR,				// 照れ

	// ファミーユ制服（回想用ブレスレット）・ポーズ２
	RIKAKO_1102AK,				// 呆れ
	RIKAKO_1102AS,				// 焦り
	RIKAKO_1102EG,				// 笑顔
	RIKAKO_1102HB,				// 半べそ
	RIKAKO_1102IK,				// 怒り
	RIKAKO_1102KN,				// 悲しみ
	RIKAKO_1102KS,				// 苦笑
	RIKAKO_1102KT,				// きょとん
	RIKAKO_1102MG,				// メガネ1
	RIKAKO_1102MG2,				// メガネ2
	RIKAKO_1102MJ,				// 真面目
	RIKAKO_1102MU,				// ムッ
	RIKAKO_1102MU2,				// ムッ
	RIKAKO_1102NK,				// 泣き1
	RIKAKO_1102NK2,				// 泣き2
	RIKAKO_1102NK3,				// 泣き3
	RIKAKO_1102NO,				// 通常
	RIKAKO_1102NS,				// 泣き叫び
	RIKAKO_1102NW,				// 泣き笑い
	RIKAKO_1102OD,				// 驚き
	RIKAKO_1102SA,				// 思案
	RIKAKO_1102SK,				// 叫び
	RIKAKO_1102TR,				// 照れ

	//========================================================
	// 里伽子（バストアップ）
	// 私服・ポーズ１
	RIKAKO_A101AN,				// あ～ん
	RIKAKO_A101BS,				// 微笑
	RIKAKO_A101IK,				// 怒り
	RIKAKO_A101KM,				// 困り1
	RIKAKO_A101KM2,				// 困り2
	RIKAKO_A101MG,				// メガネ1
	RIKAKO_A101MG2,				// メガネ2
	RIKAKO_A101MM,				// むぐむぐ
	RIKAKO_A101NO,				// 通常
	RIKAKO_A101NY,				// にやり
	RIKAKO_A101OD,				// 驚き（無感情）
	RIKAKO_A101SC,				// ショック

	// 私服・ポーズ２
	RIKAKO_A102AK,				// 呆れ
	RIKAKO_A102AS,				// 焦り
	RIKAKO_A102EG,				// 笑顔
	RIKAKO_A102HB,				// 半べそ
	RIKAKO_A102IK,				// 怒り
	RIKAKO_A102KN,				// 悲しみ
	RIKAKO_A102KS,				// 苦笑
	RIKAKO_A102KT,				// きょとん
	RIKAKO_A102MG,				// メガネ1
	RIKAKO_A102MG2,				// メガネ2
	RIKAKO_A102MJ,				// 真面目
	RIKAKO_A102MU,				// ムッ
	RIKAKO_A102MU2,				// ムッ
	RIKAKO_A102NK,				// 泣き1
	RIKAKO_A102NK2,				// 泣き2
	RIKAKO_A102NK3,				// 泣き3
	RIKAKO_A102NO,				// 通常
	RIKAKO_A102NS,				// 泣き叫び
	RIKAKO_A102NW,				// 泣き笑い
	RIKAKO_A102OD,				// 驚き
	RIKAKO_A102SA,				// 思案
	RIKAKO_A102SK,				// 叫び
	RIKAKO_A102TR,				// 照れ

	// 私服（ブレスレット）・ポーズ１
	RIKAKO_A201AN,				// あ～ん
	RIKAKO_A201BS,				// 微笑
	RIKAKO_A201IK,				// 怒り
	RIKAKO_A201KM,				// 困り1
	RIKAKO_A201KM2,				// 困り2
	RIKAKO_A201MG,				// メガネ1
	RIKAKO_A201MG2,				// メガネ2
	RIKAKO_A201MM,				// むぐむぐ
	RIKAKO_A201NO,				// 通常
	RIKAKO_A201NY,				// にやり
	RIKAKO_A201OD,				// 驚き（無感情）
	RIKAKO_A201SC,				// ショック

	// 私服（ブレスレット）・ポーズ２
	RIKAKO_A202AK,				// 呆れ
	RIKAKO_A202AS,				// 焦り
	RIKAKO_A202EG,				// 笑顔
	RIKAKO_A202HB,				// 半べそ
	RIKAKO_A202IK,				// 怒り
	RIKAKO_A202KN,				// 悲しみ
	RIKAKO_A202KS,				// 苦笑
	RIKAKO_A202KT,				// きょとん
	RIKAKO_A202MG,				// メガネ1
	RIKAKO_A202MG2,				// メガネ2
	RIKAKO_A202MJ,				// 真面目
	RIKAKO_A202MU,				// ムッ
	RIKAKO_A202MU2,				// ムッ
	RIKAKO_A202NK,				// 泣き1
	RIKAKO_A202NK2,				// 泣き2
	RIKAKO_A202NK3,				// 泣き3
	RIKAKO_A202NO,				// 通常
	RIKAKO_A202NS,				// 泣き叫び
	RIKAKO_A202NW,				// 泣き笑い
	RIKAKO_A202OD,				// 驚き
	RIKAKO_A202SA,				// 思案
	RIKAKO_A202SK,				// 叫び
	RIKAKO_A202TR,				// 照れ

	// 私服（回想用ブレスレット）・ポーズ１
	RIKAKO_A301AN,				// あ～ん
	RIKAKO_A301BS,				// 微笑
	RIKAKO_A301IK,				// 怒り
	RIKAKO_A301KM,				// 困り1
	RIKAKO_A301KM2,				// 困り2
	RIKAKO_A301MG,				// メガネ1
	RIKAKO_A301MG2,				// メガネ2
	RIKAKO_A301MM,				// むぐむぐ
	RIKAKO_A301NO,				// 通常
	RIKAKO_A301NY,				// にやり
	RIKAKO_A301OD,				// 驚き（無感情）
	RIKAKO_A301SC,				// ショック

	// 私服（回想用ブレスレット）・ポーズ２
	RIKAKO_A302AK,				// 呆れ
	RIKAKO_A302AS,				// 焦り
	RIKAKO_A302EG,				// 笑顔
	RIKAKO_A302HB,				// 半べそ
	RIKAKO_A302IK,				// 怒り
	RIKAKO_A302KN,				// 悲しみ
	RIKAKO_A302KS,				// 苦笑
	RIKAKO_A302KT,				// きょとん
	RIKAKO_A302MG,				// メガネ1
	RIKAKO_A302MG2,				// メガネ2
	RIKAKO_A302MJ,				// 真面目
	RIKAKO_A302MU,				// ムッ
	RIKAKO_A302MU2,				// ムッ
	RIKAKO_A302NK,				// 泣き1
	RIKAKO_A302NK2,				// 泣き2
	RIKAKO_A302NK3,				// 泣き3
	RIKAKO_A302NO,				// 通常
	RIKAKO_A302NS,				// 泣き叫び
	RIKAKO_A302NW,				// 泣き笑い
	RIKAKO_A302OD,				// 驚き
	RIKAKO_A302SA,				// 思案
	RIKAKO_A302SK,				// 叫び
	RIKAKO_A302TR,				// 照れ

	// 私服（ブレスレット＋包帯）・ポーズ１
	RIKAKO_A401AN,				// あ～ん
	RIKAKO_A401BS,				// 微笑
	RIKAKO_A401IK,				// 怒り
	RIKAKO_A401KM,				// 困り1
	RIKAKO_A401KM2,				// 困り2
	RIKAKO_A401MG,				// メガネ1
	RIKAKO_A401MG2,				// メガネ2
	RIKAKO_A401MM,				// むぐむぐ
	RIKAKO_A401NO,				// 通常
	RIKAKO_A401NY,				// にやり
	RIKAKO_A401OD,				// 驚き（無感情）
	RIKAKO_A401SC,				// ショック

	// 私服（ブレスレット＋包帯）・ポーズ２
	RIKAKO_A402AK,				// 呆れ
	RIKAKO_A402AS,				// 焦り
	RIKAKO_A402EG,				// 笑顔
	RIKAKO_A402HB,				// 半べそ
	RIKAKO_A402IK,				// 怒り
	RIKAKO_A402KN,				// 悲しみ
	RIKAKO_A402KS,				// 苦笑
	RIKAKO_A402KT,				// きょとん
	RIKAKO_A402MG,				// メガネ1
	RIKAKO_A402MG2,				// メガネ2
	RIKAKO_A402MJ,				// 真面目
	RIKAKO_A402MU,				// ムッ
	RIKAKO_A402MU2,				// ムッ
	RIKAKO_A402NK,				// 泣き1
	RIKAKO_A402NK2,				// 泣き2
	RIKAKO_A402NK3,				// 泣き3
	RIKAKO_A402NO,				// 通常
	RIKAKO_A402NS,				// 泣き叫び
	RIKAKO_A402NW,				// 泣き笑い
	RIKAKO_A402OD,				// 驚き
	RIKAKO_A402SA,				// 思案
	RIKAKO_A402SK,				// 叫び
	RIKAKO_A402TR,				// 照れ

	// コート・ポーズ１
	RIKAKO_A501AN,				// あ～ん
	RIKAKO_A501BS,				// 微笑
	RIKAKO_A501IK,				// 怒り
	RIKAKO_A501KM,				// 困り1
	RIKAKO_A501KM2,				// 困り2
	RIKAKO_A501MG,				// メガネ1
	RIKAKO_A501MG2,				// メガネ2
	RIKAKO_A501MM,				// むぐむぐ
	RIKAKO_A501NO,				// 通常
	RIKAKO_A501NY,				// にやり
	RIKAKO_A501OD,				// 驚き（無感情）
	RIKAKO_A501SC,				// ショック

	// コート・ポーズ２
	RIKAKO_A502AK,				// 呆れ
	RIKAKO_A502AS,				// 焦り
	RIKAKO_A502EG,				// 笑顔
	RIKAKO_A502HB,				// 半べそ
	RIKAKO_A502IK,				// 怒り
	RIKAKO_A502KN,				// 悲しみ
	RIKAKO_A502KS,				// 苦笑
	RIKAKO_A502KT,				// きょとん
	RIKAKO_A502MG,				// メガネ1
	RIKAKO_A502MG2,				// メガネ2
	RIKAKO_A502MJ,				// 真面目
	RIKAKO_A502MU,				// ムッ
	RIKAKO_A502MU2,				// ムッ
	RIKAKO_A502NK,				// 泣き1
	RIKAKO_A502NK2,				// 泣き2
	RIKAKO_A502NK3,				// 泣き3
	RIKAKO_A502NO,				// 通常
	RIKAKO_A502NS,				// 泣き叫び
	RIKAKO_A502NW,				// 泣き笑い
	RIKAKO_A502OD,				// 驚き
	RIKAKO_A502SA,				// 思案
	RIKAKO_A502SK,				// 叫び
	RIKAKO_A502TR,				// 照れ

	// コート（包帯）・ポーズ１
	RIKAKO_A601AN,				// あ～ん
	RIKAKO_A601BS,				// 微笑
	RIKAKO_A601IK,				// 怒り
	RIKAKO_A601KM,				// 困り1
	RIKAKO_A601KM2,				// 困り2
	RIKAKO_A601MG,				// メガネ1
	RIKAKO_A601MG2,				// メガネ2
	RIKAKO_A601MM,				// むぐむぐ
	RIKAKO_A601NO,				// 通常
	RIKAKO_A601NY,				// にやり
	RIKAKO_A601OD,				// 驚き（無感情）
	RIKAKO_A601SC,				// ショック

	// コート（包帯）・ポーズ２
	RIKAKO_A602AK,				// 呆れ
	RIKAKO_A602AS,				// 焦り
	RIKAKO_A602EG,				// 笑顔
	RIKAKO_A602HB,				// 半べそ
	RIKAKO_A602IK,				// 怒り
	RIKAKO_A602KN,				// 悲しみ
	RIKAKO_A602KS,				// 苦笑
	RIKAKO_A602KT,				// きょとん
	RIKAKO_A602MG,				// メガネ1
	RIKAKO_A602MG2,				// メガネ2
	RIKAKO_A602MJ,				// 真面目
	RIKAKO_A602MU,				// ムッ
	RIKAKO_A602MU2,				// ムッ
	RIKAKO_A602NK,				// 泣き1
	RIKAKO_A602NK2,				// 泣き2
	RIKAKO_A602NK3,				// 泣き3
	RIKAKO_A602NO,				// 通常
	RIKAKO_A602NS,				// 泣き叫び
	RIKAKO_A602NW,				// 泣き笑い
	RIKAKO_A602OD,				// 驚き
	RIKAKO_A602SA,				// 思案
	RIKAKO_A602SK,				// 叫び
	RIKAKO_A602TR,				// 照れ

	// ファミーユ制服・ポーズ２
	RIKAKO_A902AK,				// 呆れ
	RIKAKO_A902AS,				// 焦り
	RIKAKO_A902EG,				// 笑顔
	RIKAKO_A902HB,				// 半べそ
	RIKAKO_A902IK,				// 怒り
	RIKAKO_A902KN,				// 悲しみ
	RIKAKO_A902KS,				// 苦笑
	RIKAKO_A902KT,				// きょとん
	RIKAKO_A902MG,				// メガネ1
	RIKAKO_A902MG2,				// メガネ2
	RIKAKO_A902MJ,				// 真面目
	RIKAKO_A902MU,				// ムッ
	RIKAKO_A902MU2,				// ムッ
	RIKAKO_A902NK,				// 泣き1
	RIKAKO_A902NK2,				// 泣き2
	RIKAKO_A902NK3,				// 泣き3
	RIKAKO_A902NO,				// 通常
	RIKAKO_A902NS,				// 泣き叫び
	RIKAKO_A902NW,				// 泣き笑い
	RIKAKO_A902OD,				// 驚き
	RIKAKO_A902SA,				// 思案
	RIKAKO_A902SK,				// 叫び
	RIKAKO_A902TR,				// 照れ

	// ファミーユ制服（ブレスレット）・ポーズ２
	RIKAKO_B002AK,				// 呆れ
	RIKAKO_B002AS,				// 焦り
	RIKAKO_B002EG,				// 笑顔
	RIKAKO_B002HB,				// 半べそ
	RIKAKO_B002IK,				// 怒り
	RIKAKO_B002KN,				// 悲しみ
	RIKAKO_B002KS,				// 苦笑
	RIKAKO_B002KT,				// きょとん
	RIKAKO_B002MG,				// メガネ1
	RIKAKO_B002MG2,				// メガネ2
	RIKAKO_B002MJ,				// 真面目
	RIKAKO_B002MU,				// ムッ
	RIKAKO_B002MU2,				// ムッ
	RIKAKO_B002NK,				// 泣き1
	RIKAKO_B002NK2,				// 泣き2
	RIKAKO_B002NK3,				// 泣き3
	RIKAKO_B002NO,				// 通常
	RIKAKO_B002NS,				// 泣き叫び
	RIKAKO_B002NW,				// 泣き笑い
	RIKAKO_B002OD,				// 驚き
	RIKAKO_B002SA,				// 思案
	RIKAKO_B002SK,				// 叫び
	RIKAKO_B002TR,				// 照れ

	// ファミーユ制服（回想用ブレスレット）・ポーズ２
	RIKAKO_B102AK,				// 呆れ
	RIKAKO_B102AS,				// 焦り
	RIKAKO_B102EG,				// 笑顔
	RIKAKO_B102HB,				// 半べそ
	RIKAKO_B102IK,				// 怒り
	RIKAKO_B102KN,				// 悲しみ
	RIKAKO_B102KS,				// 苦笑
	RIKAKO_B102KT,				// きょとん
	RIKAKO_B102MG,				// メガネ1
	RIKAKO_B102MG2,				// メガネ2
	RIKAKO_B102MJ,				// 真面目
	RIKAKO_B102MU,				// ムッ
	RIKAKO_B102MU2,				// ムッ
	RIKAKO_B102NK,				// 泣き1
	RIKAKO_B102NK2,				// 泣き2
	RIKAKO_B102NK3,				// 泣き3
	RIKAKO_B102NO,				// 通常
	RIKAKO_B102NS,				// 泣き叫び
	RIKAKO_B102NW,				// 泣き笑い
	RIKAKO_B102OD,				// 驚き
	RIKAKO_B102SA,				// 思案
	RIKAKO_B102SK,				// 叫び
	RIKAKO_B102TR,				// 照れ

	//========================================================
	// 瑞奈
	// 制服・ポーズ１
	MIZUNA_0101AK,				// 呆れ
	MIZUNA_0101AS,				// 焦り
	MIZUNA_0101EG,				// 笑顔
	MIZUNA_0101EG2,				// 笑顔
	MIZUNA_0101EG3,				// 笑顔
	MIZUNA_0101KS,				// 苦笑
	MIZUNA_0101MJ,				// 真面目
	MIZUNA_0101NO,				// 通常
	MIZUNA_0101NY,				// にやり
	MIZUNA_0101SN,				// 拗ねる

	// 私服・ポーズ１
	MIZUNA_0201AK,				// 呆れ
	MIZUNA_0201AS,				// 焦り
	MIZUNA_0201EG,				// 笑顔
	MIZUNA_0201EG2,				// 笑顔
	MIZUNA_0201EG3,				// 笑顔
	MIZUNA_0201KS,				// 苦笑
	MIZUNA_0201MJ,				// 真面目
	MIZUNA_0201NO,				// 通常
	MIZUNA_0201NY,				// にやり
	MIZUNA_0201SN,				// 拗ねる

	//========================================================
	// 瑞奈（バストアップ）
	// 制服・ポーズ１
	MIZUNA_A101AK,				// 呆れ
	MIZUNA_A101AS,				// 焦り
	MIZUNA_A101EG,				// 笑顔
	MIZUNA_A101EG2,				// 笑顔
	MIZUNA_A101EG3,				// 笑顔
	MIZUNA_A101KS,				// 苦笑
	MIZUNA_A101MJ,				// 真面目
	MIZUNA_A101NO,				// 通常
	MIZUNA_A101NY,				// にやり
	MIZUNA_A101SN,				// 拗ねる

	// 私服・ポーズ１
	MIZUNA_A201AK,				// 呆れ
	MIZUNA_A201AS,				// 焦り
	MIZUNA_A201EG,				// 笑顔
	MIZUNA_A201EG2,				// 笑顔
	MIZUNA_A201EG3,				// 笑顔
	MIZUNA_A201KS,				// 苦笑
	MIZUNA_A201MJ,				// 真面目
	MIZUNA_A201NO,				// 通常
	MIZUNA_A201NY,				// にやり
	MIZUNA_A201SN,				// 拗ねる

	//========================================================
	// 板橋
	// 制服・ポーズ１
	ITABASHI_0101AS,			// 焦り
	ITABASHI_0101KT,			// きょとん
	ITABASHI_0101MJ,			// 真面目
	ITABASHI_0101NO,			// 通常
	ITABASHI_0101SN,			// 拗ねる

	//========================================================
	// 板橋（バストアップ）
	// 制服・ポーズ１
	ITABASHI_A101AS,			// 焦り
	ITABASHI_A101KT,			// きょとん
	ITABASHI_A101MJ,			// 真面目
	ITABASHI_A101NO,			// 通常
	ITABASHI_A101SN,			// 拗ねる

	//========================================================
	// 芳美
	// 制服・ポーズ１
	YOSHIMI_0101AK,				// 呆れ
	YOSHIMI_0101AS,				// 焦り
	YOSHIMI_0101EG,				// 笑顔
	YOSHIMI_0101KM,				// 困り
	YOSHIMI_0101NK,				// 泣き
	YOSHIMI_0101NO,				// 通常

	//========================================================
	// 芳美（バストアップ）
	// 制服・ポーズ１
	YOSHIMI_A101AK,				// 呆れ
	YOSHIMI_A101AS,				// 焦り
	YOSHIMI_A101EG,				// 笑顔
	YOSHIMI_A101KM,				// 困り
	YOSHIMI_A101NK,				// 泣き
	YOSHIMI_A101NO,				// 通常

	//========================================================
	// ひかり
	// 制服・ポーズ１
	HIKARI_0101BS,				// 微笑
	HIKARI_0101HN,				// 話す
	HIKARI_0101NO,				// 通常

	//========================================================
	// ひかり（バストアップ）
	// 制服・ポーズ１
	HIKARI_A101BS,				// 微笑
	HIKARI_A101HN,				// 話す
	HIKARI_A101NO,				// 通常

	//========================================================
	// 征氏
	// 私服・ポーズ１
	MASASHI_0101EG,				// 笑顔
	MASASHI_0101NO,				// 通常
	MASASHI_0101UM,				// うむ

	//========================================================
	// 征氏（バストアップ）
	// 私服・ポーズ１
	MASASHI_A101EG,				// 笑顔
	MASASHI_A101NO,				// 通常
	MASASHI_A101UM,				// うむ

	//========================================================
	// みつえ
	// 私服・ポーズ１
	MITSUE_0101EG,				// 笑顔
	MITSUE_0101HI,				// はいはい
	MITSUE_0101NO,				// 通常
	MITSUE_0101YR,				// やれ

	//========================================================
	// みつえ（バストアップ）
	// 私服・ポーズ１
	MITSUE_A101EG,				// 笑顔
	MITSUE_A101HI,				// はいはい
	MITSUE_A101NO,				// 通常
	MITSUE_A101YR,				// やれ

	//========================================================
	// 美鈴
	// 制服・ポーズ１
	MISUZU_0101EG,				// 笑顔
	MISUZU_0101EG2,				// 笑顔
	MISUZU_0101EG3,				// 笑顔
	MISUZU_0101NO,				// 通常
	MISUZU_0101OD,				// 驚き
	MISUZU_0101SA,				// 思案

	//========================================================
	// 美鈴（バストアップ）
	// 制服・ポーズ１
	MISUZU_A101EG,				// 笑顔
	MISUZU_A101EG2,				// 笑顔
	MISUZU_A101EG3,				// 笑顔
	MISUZU_A101NO,				// 通常
	MISUZU_A101OD,				// 驚き
	MISUZU_A101SA,				// 思案

	//========================================================
	// 源一郎
	// 私服・ポーズ１
	GENICHIROU_0101NO,			// 通常
	GENICHIROU_0101SK,			// 叫び

	//========================================================
	// 源一郎（バストアップ）
	// 私服・ポーズ１
	GENICHIROU_A101NO,			// 通常
	GENICHIROU_A101SK,			// 叫び

	//========================================================
	// 紬
	// 私服・ポーズ１
	TSUMUGI_0101EG,				// 笑顔
	TSUMUGI_0101IK,				// 怒り
	TSUMUGI_0101KM,				// 困り
	TSUMUGI_0101MJ,				// 真面目
	TSUMUGI_0101NO,				// 通常
	TSUMUGI_0101NR,				// 睨む

	//========================================================
	// 紬（バストアップ）
	// 私服・ポーズ１
	TSUMUGI_A101EG,				// 笑顔
	TSUMUGI_A101IK,				// 怒り
	TSUMUGI_A101KM,				// 困り
	TSUMUGI_A101MJ,				// 真面目
	TSUMUGI_A101NO,				// 通常
	TSUMUGI_A101NR,				// 睨む

	//========================================================
	// 翠
	// 制服・ポーズ１
	MIDORI_0101BS,				// 微笑
	MIDORI_0101MJ,				// 真面目
	MIDORI_0101OD,				// 驚き

	//========================================================
	// バラさん
	// 制服・ポーズ１
	BARA_0101MJ,				// 真面目

	STAND_MAX
};


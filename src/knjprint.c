#include <ncurses.h>
#include <stdlib.h>

#include "kanji.h"

void printKanji(int code)
{
	switch (code)
	{
		case KANJI_0001:
			system("echo \"亜\" | paps | lpr");
			break;

		case KANJI_0002:
			system("echo \"哀\" | paps | lpr");
			break;

		case KANJI_0003:
			system("echo \"挨\" | paps | lpr");
			break;

		case KANJI_0004:
			system("echo \"愛\" | paps | lpr");
			break;

		case KANJI_0005:
			system("echo \"曖\" | paps | lpr");
			break;

		case KANJI_0006:
			system("echo \"悪\" | paps | lpr");
			break;

		case KANJI_0007:
			system("echo \"握\" | paps | lpr");
			break;

		case KANJI_0008:
			system("echo \"圧\" | paps | lpr");
			break;

		case KANJI_0009:
			system("echo \"扱\" | paps | lpr");
			break;

		case KANJI_0010:
			system("echo \"宛\" | paps | lpr");
			break;

		case KANJI_0011:
			system("echo \"嵐\" | paps | lpr");
			break;

		case KANJI_0012:
			system("echo \"安\" | paps | lpr");
			break;

		case KANJI_0013:
			system("echo \"案\" | paps | lpr");
			break;

		case KANJI_0014:
			system("echo \"暗\" | paps | lpr");
			break;

		case KANJI_0015:
			system("echo \"以\" | paps | lpr");
			break;

		case KANJI_0016:
			system("echo \"衣\" | paps | lpr");
			break;

		case KANJI_0017:
			system("echo \"位\" | paps | lpr");
			break;

		case KANJI_0018:
			system("echo \"囲\" | paps | lpr");
			break;

		case KANJI_0019:
			system("echo \"医\" | paps | lpr");
			break;

		case KANJI_0020:
			system("echo \"依\" | paps | lpr");
			break;

		case KANJI_0021:
			system("echo \"委\" | paps | lpr");
			break;

		case KANJI_0022:
			system("echo \"威\" | paps | lpr");
			break;

		case KANJI_0023:
			system("echo \"為\" | paps | lpr");
			break;

		case KANJI_0024:
			system("echo \"畏\" | paps | lpr");
			break;

		case KANJI_0025:
			system("echo \"胃\" | paps | lpr");
			break;

		case KANJI_0026:
			system("echo \"尉\" | paps | lpr");
			break;

		case KANJI_0027:
			system("echo \"異\" | paps | lpr");
			break;

		case KANJI_0028:
			system("echo \"移\" | paps | lpr");
			break;

		case KANJI_0029:
			system("echo \"萎\" | paps | lpr");
			break;

		case KANJI_0030:
			system("echo \"偉\" | paps | lpr");
			break;

		case KANJI_0031:
			system("echo \"椅\" | paps | lpr");
			break;

		case KANJI_0032:
			system("echo \"彙\" | paps | lpr");
			break;

		case KANJI_0033:
			system("echo \"意\" | paps | lpr");
			break;

		case KANJI_0034:
			system("echo \"違\" | paps | lpr");
			break;

		case KANJI_0035:
			system("echo \"維\" | paps | lpr");
			break;

		case KANJI_0036:
			system("echo \"慰\" | paps | lpr");
			break;

		case KANJI_0037:
			system("echo \"遺\" | paps | lpr");
			break;

		case KANJI_0038:
			system("echo \"緯\" | paps | lpr");
			break;

		case KANJI_0039:
			system("echo \"域\" | paps | lpr");
			break;

		case KANJI_0040:
			system("echo \"育\" | paps | lpr");
			break;

		case KANJI_0041:
			system("echo \"一\" | paps | lpr");
			break;

		case KANJI_0042:
			system("echo \"壱\" | paps | lpr");
			break;

		case KANJI_0043:
			system("echo \"逸\" | paps | lpr");
			break;

		case KANJI_0044:
			system("echo \"茨\" | paps | lpr");
			break;

		case KANJI_0045:
			system("echo \"芋\" | paps | lpr");
			break;

		case KANJI_0046:
			system("echo \"引\" | paps | lpr");
			break;

		case KANJI_0047:
			system("echo \"印\" | paps | lpr");
			break;

		case KANJI_0048:
			system("echo \"因\" | paps | lpr");
			break;

		case KANJI_0049:
			system("echo \"咽\" | paps | lpr");
			break;

		case KANJI_0050:
			system("echo \"姻\" | paps | lpr");
			break;

		case KANJI_0051:
			system("echo \"員\" | paps | lpr");
			break;

		case KANJI_0052:
			system("echo \"院\" | paps | lpr");
			break;

		case KANJI_0053:
			system("echo \"淫\" | paps | lpr");
			break;

		case KANJI_0054:
			system("echo \"陰\" | paps | lpr");
			break;

		case KANJI_0055:
			system("echo \"飲\" | paps | lpr");
			break;

		case KANJI_0056:
			system("echo \"隠\" | paps | lpr");
			break;

		case KANJI_0057:
			system("echo \"韻\" | paps | lpr");
			break;

		case KANJI_0058:
			system("echo \"韻\" | paps | lpr");
			break;

		case KANJI_0059:
			system("echo \"宇\" | paps | lpr");
			break;

		case KANJI_0060:
			system("echo \"羽\" | paps | lpr");
			break;

		case KANJI_0061:
			system("echo \"雨\" | paps | lpr");
			break;

		case KANJI_0062:
			system("echo \"鬱\" | paps | lpr");
			break;

		case KANJI_0063:
			system("echo \"畝\" | paps | lpr");
			break;

		case KANJI_0064:
			system("echo \"畝\" | paps | lpr");
			break;

		case KANJI_0065:
			system("echo \"浦\" | paps | lpr");
			break;

		case KANJI_0066:
			system("echo \"運\" | paps | lpr");
			break;

		case KANJI_0067:
			system("echo \"雲\" | paps | lpr");
			break;

		case KANJI_0068:
			system("echo \"永\" | paps | lpr");
			break;

		case KANJI_0069:
			system("echo \"泳\" | paps | lpr");
			break;

		case KANJI_0070:
			system("echo \"英\" | paps | lpr");
			break;

		case KANJI_0071:
			system("echo \"映\" | paps | lpr");
			break;

		case KANJI_0072:
			system("echo \"栄\" | paps | lpr");
			break;

		case KANJI_0073:
			system("echo \"営\" | paps | lpr");
			break;

		case KANJI_0074:
			system("echo \"詠\" | paps | lpr");
			break;

		case KANJI_0075:
			system("echo \"影\" | paps | lpr");
			break;

		case KANJI_0076:
			system("echo \"鋭\" | paps | lpr");
			break;

		case KANJI_0077:
			system("echo \"衛\" | paps | lpr");
			break;

		case KANJI_0078:
			system("echo \"易\" | paps | lpr");
			break;

		case KANJI_0079:
			system("echo \"疫\" | paps | lpr");
			break;

		case KANJI_0080:
			system("echo \"益\" | paps | lpr");
			break;

		case KANJI_0081:
			system("echo \"液\" | paps | lpr");
			break;

		case KANJI_0082:
			system("echo \"駅\" | paps | lpr");
			break;

		case KANJI_0083:
			system("echo \"悦\" | paps | lpr");
			break;

		case KANJI_0084:
			system("echo \"越\" | paps | lpr");
			break;

		case KANJI_0085:
			system("echo \"謁\" | paps | lpr");
			break;

		case KANJI_0086:
			system("echo \"閲\" | paps | lpr");
			break;

		case KANJI_0087:
			system("echo \"円\" | paps | lpr");
			break;

		case KANJI_0088:
			system("echo \"延\" | paps | lpr");
			break;

		case KANJI_0089:
			system("echo \"沿\" | paps | lpr");
			break;

		case KANJI_0090:
			system("echo \"炎\" | paps | lpr");
			break;

		case KANJI_0091:
			system("echo \"怨\" | paps | lpr");
			break;

		case KANJI_0092:
			system("echo \"宴\" | paps | lpr");
			break;

		case KANJI_0093:
			system("echo \"媛\" | paps | lpr");
			break;

		case KANJI_0094:
			system("echo \"援\" | paps | lpr");
			break;

		case KANJI_0095:
			system("echo \"園\" | paps | lpr");
			break;

		case KANJI_0096:
			system("echo \"煙\" | paps | lpr");
			break;

		case KANJI_0097:
			system("echo \"猿\" | paps | lpr");
			break;

		case KANJI_0098:
			system("echo \"遠\" | paps | lpr");
			break;

		case KANJI_0099:
			system("echo \"鉛\" | paps | lpr");
			break;

		case KANJI_0100:
			system("echo \"塩\" | paps | lpr");
			break;

		case KANJI_0101:
			system("echo \"演\" | paps | lpr");
			break;

		case KANJI_0102:
			system("echo \"縁\" | paps | lpr");
			break;

		case KANJI_0103:
			system("echo \"艶\" | paps | lpr");
			break;

		case KANJI_0104:
			system("echo \"汚\" | paps | lpr");
			break;

		case KANJI_0105:
			system("echo \"王\" | paps | lpr");
			break;

		case KANJI_0106:
			system("echo \"凹\" | paps | lpr");
			break;

		case KANJI_0107:
			system("echo \"央\" | paps | lpr");
			break;

		case KANJI_0108:
			system("echo \"応\" | paps | lpr");
			break;

		case KANJI_0109:
			system("echo \"往\" | paps | lpr");
			break;

		case KANJI_0110:
			system("echo \"押\" | paps | lpr");
			break;

		case KANJI_0111:
			system("echo \"旺\" | paps | lpr");
			break;

		case KANJI_0112:
			system("echo \"欧\" | paps | lpr");
			break;

		case KANJI_0113:
			system("echo \"殴\" | paps | lpr");
			break;

		case KANJI_0114:
			system("echo \"桜\" | paps | lpr");
			break;

		case KANJI_0115:
			system("echo \"翁\" | paps | lpr");
			break;

		case KANJI_0116:
			system("echo \"奥\" | paps | lpr");
			break;

		case KANJI_0117:
			system("echo \"横\" | paps | lpr");
			break;

		case KANJI_0118:
			system("echo \"岡\" | paps | lpr");
			break;

		case KANJI_0119:
			system("echo \"屋\" | paps | lpr");
			break;

		case KANJI_0120:
			system("echo \"億\" | paps | lpr");
			break;

		case KANJI_0121:
			system("echo \"憶\" | paps | lpr");
			break;

		case KANJI_0122:
			system("echo \"臆\" | paps | lpr");
			break;

		case KANJI_0123:
			system("echo \"虞\" | paps | lpr");
			break;

		case KANJI_0124:
			system("echo \"乙\" | paps | lpr");
			break;

		case KANJI_0125:
			system("echo \"俺\" | paps | lpr");
			break;

		case KANJI_0126:
			system("echo \"卸\" | paps | lpr");
			break;

		case KANJI_0127:
			system("echo \"音\" | paps | lpr");
			break;

		case KANJI_0128:
			system("echo \"恩\" | paps | lpr");
			break;

		case KANJI_0129:
			system("echo \"温\" | paps | lpr");
			break;

		case KANJI_0130:
			system("echo \"穏\" | paps | lpr");
			break;

		case KANJI_0131:
			system("echo \"下\" | paps | lpr");
			break;

		case KANJI_0132:
			system("echo \"化\" | paps | lpr");
			break;

		case KANJI_0133:
			system("echo \"火\" | paps | lpr");
			break;

		case KANJI_0134:
			system("echo \"加\" | paps | lpr");
			break;

		case KANJI_0135:
			system("echo \"可\" | paps | lpr");
			break;

		case KANJI_0136:
			system("echo \"仮\" | paps | lpr");
			break;

		case KANJI_0137:
			system("echo \"何\" | paps | lpr");
			break;

		case KANJI_0138:
			system("echo \"花\" | paps | lpr");
			break;

		case KANJI_0139:
			system("echo \"佳\" | paps | lpr");
			break;

		case KANJI_0140:
			system("echo \"価\" | paps | lpr");
			break;

		case KANJI_0141:
			system("echo \"果\" | paps | lpr");
			break;

		case KANJI_0142:
			system("echo \"河\" | paps | lpr");
			break;

		case KANJI_0143:
			system("echo \"苛\" | paps | lpr");
			break;

		case KANJI_0144:
			system("echo \"科\" | paps | lpr");
			break;

		case KANJI_0145:
			system("echo \"架\" | paps | lpr");
			break;

		case KANJI_0146:
			system("echo \"夏\" | paps | lpr");
			break;

		case KANJI_0147:
			system("echo \"家\" | paps | lpr");
			break;

		case KANJI_0148:
			system("echo \"荷\" | paps | lpr");
			break;

		case KANJI_0149:
			system("echo \"華\" | paps | lpr");
			break;

		case KANJI_0150:
			system("echo \"菓\" | paps | lpr");
			break;

		case KANJI_0151:
			system("echo \"貨\" | paps | lpr");
			break;

		case KANJI_0152:
			system("echo \"渦\" | paps | lpr");
			break;

		case KANJI_0153:
			system("echo \"過\" | paps | lpr");
			break;

		case KANJI_0154:
			system("echo \"嫁\" | paps | lpr");
			break;

		case KANJI_0155:
			system("echo \"暇\" | paps | lpr");
			break;

		case KANJI_0156:
			system("echo \"禍\" | paps | lpr");
			break;

		case KANJI_0157:
			system("echo \"靴\" | paps | lpr");
			break;

		case KANJI_0158:
			system("echo \"寡\" | paps | lpr");
			break;

		case KANJI_0159:
			system("echo \"歌\" | paps | lpr");
			break;

		case KANJI_0160:
			system("echo \"箇\" | paps | lpr");
			break;

		case KANJI_0161:
			system("echo \"稼\" | paps | lpr");
			break;

		case KANJI_0162:
			system("echo \"課\" | paps | lpr");
			break;

		case KANJI_0163:
			system("echo \"蚊\" | paps | lpr");
			break;

		case KANJI_0164:
			system("echo \"牙\" | paps | lpr");
			break;

		case KANJI_0165:
			system("echo \"瓦\" | paps | lpr");
			break;

		case KANJI_0166:
			system("echo \"我\" | paps | lpr");
			break;

		case KANJI_0167:
			system("echo \"画\" | paps | lpr");
			break;

		case KANJI_0168:
			system("echo \"芽\" | paps | lpr");
			break;

		case KANJI_0169:
			system("echo \"賀\" | paps | lpr");
			break;

		case KANJI_0170:
			system("echo \"雅\" | paps | lpr");
			break;

		case KANJI_0171:
			system("echo \"餓\" | paps | lpr");
			break;

		case KANJI_0172:
			system("echo \"介\" | paps | lpr");
			break;

		case KANJI_0173:
			system("echo \"回\" | paps | lpr");
			break;

		case KANJI_0174:
			system("echo \"灰\" | paps | lpr");
			break;

		case KANJI_0175:
			system("echo \"会\" | paps | lpr");
			break;

		case KANJI_0176:
			system("echo \"快\" | paps | lpr");
			break;

		case KANJI_0177:
			system("echo \"戒\" | paps | lpr");
			break;

		case KANJI_0178:
			system("echo \"改\" | paps | lpr");
			break;

		case KANJI_0179:
			system("echo \"怪\" | paps | lpr");
			break;

		case KANJI_0180:
			system("echo \"拐\" | paps | lpr");
			break;

		case KANJI_0181:
			system("echo \"悔\" | paps | lpr");
			break;

		case KANJI_0182:
			system("echo \"海\" | paps | lpr");
			break;

		case KANJI_0183:
			system("echo \"界\" | paps | lpr");
			break;

		case KANJI_0184:
			system("echo \"皆\" | paps | lpr");
			break;

		case KANJI_0185:
			system("echo \"械\" | paps | lpr");
			break;

		case KANJI_0186:
			system("echo \"絵\" | paps | lpr");
			break;

		case KANJI_0187:
			system("echo \"開\" | paps | lpr");
			break;

		case KANJI_0188:
			system("echo \"階\" | paps | lpr");
			break;

		case KANJI_0189:
			system("echo \"塊\" | paps | lpr");
			break;

		case KANJI_0190:
			system("echo \"楷\" | paps | lpr");
			break;

		case KANJI_0191:
			system("echo \"解\" | paps | lpr");
			break;

		case KANJI_0192:
			system("echo \"潰\" | paps | lpr");
			break;

		case KANJI_0193:
			system("echo \"壊\" | paps | lpr");
			break;

		case KANJI_0194:
			system("echo \"懐\" | paps | lpr");
			break;

		case KANJI_0195:
			system("echo \"諧\" | paps | lpr");
			break;

		case KANJI_0196:
			system("echo \"貝\" | paps | lpr");
			break;

		case KANJI_0197:
			system("echo \"外\" | paps | lpr");
			break;

		case KANJI_0198:
			system("echo \"劾\" | paps | lpr");
			break;

		case KANJI_0199:
			system("echo \"害\" | paps | lpr");
			break;

		case KANJI_0200:
			system("echo \"崖\" | paps | lpr");
			break;

		case KANJI_0201:
			system("echo \"涯\" | paps | lpr");
			break;

		case KANJI_0202:
			system("echo \"街\" | paps | lpr");
			break;

		case KANJI_0203:
			system("echo \"慨\" | paps | lpr");
			break;

		case KANJI_0204:
			system("echo \"蓋\" | paps | lpr");
			break;

		case KANJI_0205:
			system("echo \"該\" | paps | lpr");
			break;

		case KANJI_0206:
			system("echo \"概\" | paps | lpr");
			break;

		case KANJI_0207:
			system("echo \"骸\" | paps | lpr");
			break;

		case KANJI_0208:
			system("echo \"垣\" | paps | lpr");
			break;

		case KANJI_0209:
			system("echo \"柿\" | paps | lpr");
			break;

		case KANJI_0210:
			system("echo \"各\" | paps | lpr");
			break;

		case KANJI_0211:
			system("echo \"角\" | paps | lpr");
			break;

		case KANJI_0212:
			system("echo \"拡\" | paps | lpr");
			break;

		case KANJI_0213:
			system("echo \"革\" | paps | lpr");
			break;

		case KANJI_0214:
			system("echo \"格\" | paps | lpr");
			break;

		case KANJI_0215:
			system("echo \"核\" | paps | lpr");
			break;

		case KANJI_0216:
			system("echo \"殻\" | paps | lpr");
			break;

		case KANJI_0217:
			system("echo \"郭\" | paps | lpr");
			break;

		case KANJI_0218:
			system("echo \"覚\" | paps | lpr");
			break;

		case KANJI_0219:
			system("echo \"較\" | paps | lpr");
			break;

		case KANJI_0220:
			system("echo \"隔\" | paps | lpr");
			break;

		case KANJI_0221:
			system("echo \"閣\" | paps | lpr");
			break;

		case KANJI_0222:
			system("echo \"確\" | paps | lpr");
			break;

		case KANJI_0223:
			system("echo \"獲\" | paps | lpr");
			break;

		case KANJI_0224:
			system("echo \"嚇\" | paps | lpr");
			break;

		case KANJI_0225:
			system("echo \"穫\" | paps | lpr");
			break;

		case KANJI_0226:
			system("echo \"学\" | paps | lpr");
			break;

		case KANJI_0227:
			system("echo \"岳\" | paps | lpr");
			break;

		case KANJI_0228:
			system("echo \"楽\" | paps | lpr");
			break;

		case KANJI_0229:
			system("echo \"額\" | paps | lpr");
			break;

		case KANJI_0230:
			system("echo \"顎\" | paps | lpr");
			break;

		case KANJI_0231:
			system("echo \"掛\" | paps | lpr");
			break;

		case KANJI_0232:
			system("echo \"潟\" | paps | lpr");
			break;

		case KANJI_0233:
			system("echo \"括\" | paps | lpr");
			break;

		case KANJI_0234:
			system("echo \"活\" | paps | lpr");
			break;

		case KANJI_0235:
			system("echo \"喝\" | paps | lpr");
			break;

		case KANJI_0236:
			system("echo \"渇\" | paps | lpr");
			break;

		case KANJI_0237:
			system("echo \"割\" | paps | lpr");
			break;

		case KANJI_0238:
			system("echo \"葛\" | paps | lpr");
			break;

		case KANJI_0239:
			system("echo \"滑\" | paps | lpr");
			break;

		case KANJI_0240:
			system("echo \"褐\" | paps | lpr");
			break;

		case KANJI_0241:
			system("echo \"轄\" | paps | lpr");
			break;

		case KANJI_0242:
			system("echo \"且\" | paps | lpr");
			break;

		case KANJI_0243:
			system("echo \"株\" | paps | lpr");
			break;

		case KANJI_0244:
			system("echo \"釜\" | paps | lpr");
			break;

		case KANJI_0245:
			system("echo \"鎌\" | paps | lpr");
			break;

		case KANJI_0246:
			system("echo \"刈\" | paps | lpr");
			break;

		case KANJI_0247:
			system("echo \"干\" | paps | lpr");
			break;

		case KANJI_0248:
			system("echo \"刊\" | paps | lpr");
			break;

		case KANJI_0249:
			system("echo \"甘\" | paps | lpr");
			break;

		case KANJI_0250:
			system("echo \"汗\" | paps | lpr");
			break;

		case KANJI_0251:
			system("echo \"缶\" | paps | lpr");
			break;

		case KANJI_0252:
			system("echo \"完\" | paps | lpr");
			break;

		case KANJI_0253:
			system("echo \"肝\" | paps | lpr");
			break;

		case KANJI_0254:
			system("echo \"官\" | paps | lpr");
			break;

		case KANJI_0255:
			system("echo \"冠\" | paps | lpr");
			break;

		case KANJI_0256:
			system("echo \"巻\" | paps | lpr");
			break;

		case KANJI_0257:
			system("echo \"看\" | paps | lpr");
			break;

		case KANJI_0258:
			system("echo \"陥\" | paps | lpr");
			break;

		case KANJI_0259:
			system("echo \"乾\" | paps | lpr");
			break;

		case KANJI_0260:
			system("echo \"勘\" | paps | lpr");
			break;

		case KANJI_0261:
			system("echo \"患\" | paps | lpr");
			break;

		case KANJI_0262:
			system("echo \"貫\" | paps | lpr");
			break;

		case KANJI_0263:
			system("echo \"寒\" | paps | lpr");
			break;

		case KANJI_0264:
			system("echo \"喚\" | paps | lpr");
			break;

		case KANJI_0265:
			system("echo \"堪\" | paps | lpr");
			break;

		case KANJI_0266:
			system("echo \"換\" | paps | lpr");
			break;

		case KANJI_0267:
			system("echo \"敢\" | paps | lpr");
			break;

		case KANJI_0268:
			system("echo \"棺\" | paps | lpr");
			break;

		case KANJI_0269:
			system("echo \"款\" | paps | lpr");
			break;

		case KANJI_0270:
			system("echo \"間\" | paps | lpr");
			break;

		case KANJI_0271:
			system("echo \"閑\" | paps | lpr");
			break;

		case KANJI_0272:
			system("echo \"勧\" | paps | lpr");
			break;

		case KANJI_0273:
			system("echo \"寛\" | paps | lpr");
			break;

		case KANJI_0274:
			system("echo \"幹\" | paps | lpr");
			break;

		case KANJI_0275:
			system("echo \"感\" | paps | lpr");
			break;

		case KANJI_0276:
			system("echo \"漢\" | paps | lpr");
			break;

		case KANJI_0277:
			system("echo \"慣\" | paps | lpr");
			break;

		case KANJI_0278:
			system("echo \"管\" | paps | lpr");
			break;

		case KANJI_0279:
			system("echo \"関\" | paps | lpr");
			break;

		case KANJI_0280:
			system("echo \"歓\" | paps | lpr");
			break;

		case KANJI_0281:
			system("echo \"監\" | paps | lpr");
			break;

		case KANJI_0282:
			system("echo \"緩\" | paps | lpr");
			break;

		case KANJI_0283:
			system("echo \"憾\" | paps | lpr");
			break;

		case KANJI_0284:
			system("echo \"還\" | paps | lpr");
			break;

		case KANJI_0285:
			system("echo \"館\" | paps | lpr");
			break;

		case KANJI_0286:
			system("echo \"環\" | paps | lpr");
			break;

		case KANJI_0287:
			system("echo \"簡\" | paps | lpr");
			break;

		case KANJI_0288:
			system("echo \"観\" | paps | lpr");
			break;

		case KANJI_0289:
			system("echo \"韓\" | paps | lpr");
			break;

		case KANJI_0290:
			system("echo \"艦\" | paps | lpr");
			break;

		case KANJI_0291:
			system("echo \"鑑\" | paps | lpr");
			break;

		case KANJI_0292:
			system("echo \"丸\" | paps | lpr");
			break;

		case KANJI_0293:
			system("echo \"含\" | paps | lpr");
			break;

		case KANJI_0294:
			system("echo \"岸\" | paps | lpr");
			break;

		case KANJI_0295:
			system("echo \"岩\" | paps | lpr");
			break;

		case KANJI_0296:
			system("echo \"玩\" | paps | lpr");
			break;

		case KANJI_0297:
			system("echo \"眼\" | paps | lpr");
			break;

		case KANJI_0298:
			system("echo \"頑\" | paps | lpr");
			break;

		case KANJI_0299:
			system("echo \"顔\" | paps | lpr");
			break;

		case KANJI_0300:
			system("echo \"願\" | paps | lpr");
			break;

		case KANJI_0301:
			system("echo \"企\" | paps | lpr");
			break;

		case KANJI_0302:
			system("echo \"伎\" | paps | lpr");
			break;

		case KANJI_0303:
			system("echo \"危\" | paps | lpr");
			break;

		case KANJI_0304:
			system("echo \"机\" | paps | lpr");
			break;

		case KANJI_0305:
			system("echo \"気\" | paps | lpr");
			break;

		case KANJI_0306:
			system("echo \"岐\" | paps | lpr");
			break;

		case KANJI_0307:
			system("echo \"希\" | paps | lpr");
			break;

		case KANJI_0308:
			system("echo \"忌\" | paps | lpr");
			break;

		case KANJI_0309:
			system("echo \"汽\" | paps | lpr");
			break;

		case KANJI_0310:
			system("echo \"奇\" | paps | lpr");
			break;

		case KANJI_0311:
			system("echo \"祈\" | paps | lpr");
			break;

		case KANJI_0312:
			system("echo \"季\" | paps | lpr");
			break;

		case KANJI_0313:
			system("echo \"紀\" | paps | lpr");
			break;

		case KANJI_0314:
			system("echo \"軌\" | paps | lpr");
			break;

		case KANJI_0315:
			system("echo \"既\" | paps | lpr");
			break;

		case KANJI_0316:
			system("echo \"記\" | paps | lpr");
			break;

		case KANJI_0317:
			system("echo \"起\" | paps | lpr");
			break;

		case KANJI_0318:
			system("echo \"飢\" | paps | lpr");
			break;

		case KANJI_0319:
			system("echo \"鬼\" | paps | lpr");
			break;

		case KANJI_0320:
			system("echo \"帰\" | paps | lpr");
			break;

		case KANJI_0321:
			system("echo \"基\" | paps | lpr");
			break;

		case KANJI_0322:
			system("echo \"寄\" | paps | lpr");
			break;

		case KANJI_0323:
			system("echo \"規\" | paps | lpr");
			break;

		case KANJI_0324:
			system("echo \"亀\" | paps | lpr");
			break;

		case KANJI_0325:
			system("echo \"喜\" | paps | lpr");
			break;

		case KANJI_0326:
			system("echo \"幾\" | paps | lpr");
			break;

		case KANJI_0327:
			system("echo \"揮\" | paps | lpr");
			break;

		case KANJI_0328:
			system("echo \"期\" | paps | lpr");
			break;

		case KANJI_0329:
			system("echo \"棋\" | paps | lpr");
			break;

		case KANJI_0330:
			system("echo \"貴\" | paps | lpr");
			break;

		case KANJI_0331:
			system("echo \"棄\" | paps | lpr");
			break;

		case KANJI_0332:
			system("echo \"毀\" | paps | lpr");
			break;

		case KANJI_0333:
			system("echo \"旗\" | paps | lpr");
			break;

		case KANJI_0334:
			system("echo \"器\" | paps | lpr");
			break;

		case KANJI_0335:
			system("echo \"畿\" | paps | lpr");
			break;

		case KANJI_0336:
			system("echo \"輝\" | paps | lpr");
			break;

		case KANJI_0337:
			system("echo \"機\" | paps | lpr");
			break;

		case KANJI_0338:
			system("echo \"騎\" | paps | lpr");
			break;

		case KANJI_0339:
			system("echo \"技\" | paps | lpr");
			break;

		case KANJI_0340:
			system("echo \"宜\" | paps | lpr");
			break;

		case KANJI_0341:
			system("echo \"偽\" | paps | lpr");
			break;

		case KANJI_0342:
			system("echo \"欺\" | paps | lpr");
			break;

		case KANJI_0343:
			system("echo \"義\" | paps | lpr");
			break;

		case KANJI_0344:
			system("echo \"疑\" | paps | lpr");
			break;

		case KANJI_0345:
			system("echo \"儀\" | paps | lpr");
			break;

		case KANJI_0346:
			system("echo \"戯\" | paps | lpr");
			break;

		case KANJI_0347:
			system("echo \"擬\" | paps | lpr");
			break;

		case KANJI_0348:
			system("echo \"犠\" | paps | lpr");
			break;

		case KANJI_0349:
			system("echo \"議\" | paps | lpr");
			break;

		case KANJI_0350:
			system("echo \"菊\" | paps | lpr");
			break;

		case KANJI_0351:
			system("echo \"吉\" | paps | lpr");
			break;

		case KANJI_0352:
			system("echo \"喫\" | paps | lpr");
			break;

		case KANJI_0353:
			system("echo \"詰\" | paps | lpr");
			break;

		case KANJI_0354:
			system("echo \"却\" | paps | lpr");
			break;

		case KANJI_0355:
			system("echo \"客\" | paps | lpr");
			break;

		case KANJI_0356:
			system("echo \"脚\" | paps | lpr");
			break;

		case KANJI_0357:
			system("echo \"逆\" | paps | lpr");
			break;

		case KANJI_0358:
			system("echo \"虐\" | paps | lpr");
			break;

		case KANJI_0359:
			system("echo \"九\" | paps | lpr");
			break;

		case KANJI_0360:
			system("echo \"久\" | paps | lpr");
			break;

		case KANJI_0361:
			system("echo \"及\" | paps | lpr");
			break;

		case KANJI_0362:
			system("echo \"弓\" | paps | lpr");
			break;

		case KANJI_0363:
			system("echo \"丘\" | paps | lpr");
			break;

		case KANJI_0364:
			system("echo \"旧\" | paps | lpr");
			break;

		case KANJI_0365:
			system("echo \"休\" | paps | lpr");
			break;

		case KANJI_0366:
			system("echo \"吸\" | paps | lpr");
			break;

		case KANJI_0367:
			system("echo \"朽\" | paps | lpr");
			break;

		case KANJI_0368:
			system("echo \"臼\" | paps | lpr");
			break;

		case KANJI_0369:
			system("echo \"求\" | paps | lpr");
			break;

		case KANJI_0370:
			system("echo \"究\" | paps | lpr");
			break;

		case KANJI_0371:
			system("echo \"泣\" | paps | lpr");
			break;

		case KANJI_0372:
			system("echo \"急\" | paps | lpr");
			break;

		case KANJI_0373:
			system("echo \"級\" | paps | lpr");
			break;

		case KANJI_0374:
			system("echo \"糾\" | paps | lpr");
			break;

		case KANJI_0375:
			system("echo \"宮\" | paps | lpr");
			break;

		case KANJI_0376:
			system("echo \"救\" | paps | lpr");
			break;

		case KANJI_0377:
			system("echo \"球\" | paps | lpr");
			break;

		case KANJI_0378:
			system("echo \"給\" | paps | lpr");
			break;

		case KANJI_0379:
			system("echo \"嗅\" | paps | lpr");
			break;

		case KANJI_0380:
			system("echo \"窮\" | paps | lpr");
			break;

		case KANJI_0381:
			system("echo \"牛\" | paps | lpr");
			break;

		case KANJI_0382:
			system("echo \"去\" | paps | lpr");
			break;

		case KANJI_0383:
			system("echo \"巨\" | paps | lpr");
			break;

		case KANJI_0384:
			system("echo \"居\" | paps | lpr");
			break;

		case KANJI_0385:
			system("echo \"拒\" | paps | lpr");
			break;

		case KANJI_0386:
			system("echo \"拠\" | paps | lpr");
			break;

		case KANJI_0387:
			system("echo \"挙\" | paps | lpr");
			break;

		case KANJI_0388:
			system("echo \"虚\" | paps | lpr");
			break;

		case KANJI_0389:
			system("echo \"許\" | paps | lpr");
			break;

		case KANJI_0390:
			system("echo \"距\" | paps | lpr");
			break;

		case KANJI_0391:
			system("echo \"魚\" | paps | lpr");
			break;

		case KANJI_0392:
			system("echo \"御\" | paps | lpr");
			break;

		case KANJI_0393:
			system("echo \"漁\" | paps | lpr");
			break;

		case KANJI_0394:
			system("echo \"凶\" | paps | lpr");
			break;

		case KANJI_0395:
			system("echo \"共\" | paps | lpr");
			break;

		case KANJI_0396:
			system("echo \"叫\" | paps | lpr");
			break;

		case KANJI_0397:
			system("echo \"狂\" | paps | lpr");
			break;

		case KANJI_0398:
			system("echo \"京\" | paps | lpr");
			break;

		case KANJI_0399:
			system("echo \"享\" | paps | lpr");
			break;

		case KANJI_0400:
			system("echo \"供\" | paps | lpr");
			break;

		case KANJI_0401:
			system("echo \"協\" | paps | lpr");
			break;

		case KANJI_0402:
			system("echo \"況\" | paps | lpr");
			break;

		case KANJI_0403:
			system("echo \"峡\" | paps | lpr");
			break;

		case KANJI_0404:
			system("echo \"挟\" | paps | lpr");
			break;

		case KANJI_0405:
			system("echo \"狭\" | paps | lpr");
			break;

		case KANJI_0406:
			system("echo \"恐\" | paps | lpr");
			break;

		case KANJI_0407:
			system("echo \"恭\" | paps | lpr");
			break;

		case KANJI_0408:
			system("echo \"胸\" | paps | lpr");
			break;

		case KANJI_0409:
			system("echo \"脅\" | paps | lpr");
			break;

		case KANJI_0410:
			system("echo \"強\" | paps | lpr");
			break;

		case KANJI_0411:
			system("echo \"教\" | paps | lpr");
			break;

		case KANJI_0412:
			system("echo \"郷\" | paps | lpr");
			break;

		case KANJI_0413:
			system("echo \"境\" | paps | lpr");
			break;

		case KANJI_0414:
			system("echo \"橋\" | paps | lpr");
			break;

		case KANJI_0415:
			system("echo \"矯\" | paps | lpr");
			break;

		case KANJI_0416:
			system("echo \"鏡\" | paps | lpr");
			break;

		case KANJI_0417:
			system("echo \"競\" | paps | lpr");
			break;

		case KANJI_0418:
			system("echo \"響\" | paps | lpr");
			break;

		case KANJI_0419:
			system("echo \"驚\" | paps | lpr");
			break;

		case KANJI_0420:
			system("echo \"仰\" | paps | lpr");
			break;

		case KANJI_0421:
			system("echo \"暁\" | paps | lpr");
			break;

		case KANJI_0422:
			system("echo \"業\" | paps | lpr");
			break;

		case KANJI_0423:
			system("echo \"凝\" | paps | lpr");
			break;

		case KANJI_0424:
			system("echo \"曲\" | paps | lpr");
			break;

		case KANJI_0425:
			system("echo \"局\" | paps | lpr");
			break;

		case KANJI_0426:
			system("echo \"極\" | paps | lpr");
			break;

		case KANJI_0427:
			system("echo \"玉\" | paps | lpr");
			break;

		case KANJI_0428:
			system("echo \"巾\" | paps | lpr");
			break;

		case KANJI_0429:
			system("echo \"斤\" | paps | lpr");
			break;

		case KANJI_0430:
			system("echo \"均\" | paps | lpr");
			break;

		case KANJI_0431:
			system("echo \"近\" | paps | lpr");
			break;

		case KANJI_0432:
			system("echo \"金\" | paps | lpr");
			break;

		case KANJI_0433:
			system("echo \"菌\" | paps | lpr");
			break;

		case KANJI_0434:
			system("echo \"勤\" | paps | lpr");
			break;

		case KANJI_0435:
			system("echo \"琴\" | paps | lpr");
			break;

		case KANJI_0436:
			system("echo \"筋\" | paps | lpr");
			break;

		case KANJI_0437:
			system("echo \"僅\" | paps | lpr");
			break;

		case KANJI_0438:
			system("echo \"禁\" | paps | lpr");
			break;

		case KANJI_0439:
			system("echo \"緊\" | paps | lpr");
			break;

		case KANJI_0440:
			system("echo \"錦\" | paps | lpr");
			break;

		case KANJI_0441:
			system("echo \"謹\" | paps | lpr");
			break;

		case KANJI_0442:
			system("echo \"襟\" | paps | lpr");
			break;

		case KANJI_0443:
			system("echo \"吟\" | paps | lpr");
			break;

		case KANJI_0444:
			system("echo \"銀\" | paps | lpr");
			break;

		case KANJI_0445:
			system("echo \"区\" | paps | lpr");
			break;

		case KANJI_0446:
			system("echo \"句\" | paps | lpr");
			break;

		case KANJI_0447:
			system("echo \"苦\" | paps | lpr");
			break;

		case KANJI_0448:
			system("echo \"駆\" | paps | lpr");
			break;

		case KANJI_0449:
			system("echo \"具\" | paps | lpr");
			break;

		case KANJI_0450:
			system("echo \"惧\" | paps | lpr");
			break;

		case KANJI_0451:
			system("echo \"愚\" | paps | lpr");
			break;

		case KANJI_0452:
			system("echo \"空\" | paps | lpr");
			break;

		case KANJI_0453:
			system("echo \"偶\" | paps | lpr");
			break;

		case KANJI_0454:
			system("echo \"遇\" | paps | lpr");
			break;

		case KANJI_0455:
			system("echo \"隅\" | paps | lpr");
			break;

		case KANJI_0456:
			system("echo \"串\" | paps | lpr");
			break;

		case KANJI_0457:
			system("echo \"屈\" | paps | lpr");
			break;

		case KANJI_0458:
			system("echo \"掘\" | paps | lpr");
			break;

		case KANJI_0459:
			system("echo \"窟\" | paps | lpr");
			break;

		case KANJI_0460:
			system("echo \"熊\" | paps | lpr");
			break;

		case KANJI_0461:
			system("echo \"繰\" | paps | lpr");
			break;

		case KANJI_0462:
			system("echo \"君\" | paps | lpr");
			break;

		case KANJI_0463:
			system("echo \"訓\" | paps | lpr");
			break;

		case KANJI_0464:
			system("echo \"勲\" | paps | lpr");
			break;

		case KANJI_0465:
			system("echo \"薫\" | paps | lpr");
			break;

		case KANJI_0466:
			system("echo \"軍\" | paps | lpr");
			break;

		case KANJI_0467:
			system("echo \"郡\" | paps | lpr");
			break;

		case KANJI_0468:
			system("echo \"群\" | paps | lpr");
			break;

		case KANJI_0469:
			system("echo \"兄\" | paps | lpr");
			break;

		case KANJI_0470:
			system("echo \"刑\" | paps | lpr");
			break;

		case KANJI_0471:
			system("echo \"形\" | paps | lpr");
			break;

		case KANJI_0472:
			system("echo \"系\" | paps | lpr");
			break;

		case KANJI_0473:
			system("echo \"径\" | paps | lpr");
			break;

		case KANJI_0474:
			system("echo \"茎\" | paps | lpr");
			break;

		case KANJI_0475:
			system("echo \"係\" | paps | lpr");
			break;

		case KANJI_0476:
			system("echo \"型\" | paps | lpr");
			break;

		case KANJI_0477:
			system("echo \"契\" | paps | lpr");
			break;

		case KANJI_0478:
			system("echo \"計\" | paps | lpr");
			break;

		case KANJI_0479:
			system("echo \"恵\" | paps | lpr");
			break;

		case KANJI_0480:
			system("echo \"啓\" | paps | lpr");
			break;

		case KANJI_0481:
			system("echo \"掲\" | paps | lpr");
			break;

		case KANJI_0482:
			system("echo \"渓\" | paps | lpr");
			break;

		case KANJI_0483:
			system("echo \"経\" | paps | lpr");
			break;

		case KANJI_0484:
			system("echo \"蛍\" | paps | lpr");
			break;

		case KANJI_0485:
			system("echo \"敬\" | paps | lpr");
			break;

		case KANJI_0486:
			system("echo \"景\" | paps | lpr");
			break;

		case KANJI_0487:
			system("echo \"軽\" | paps | lpr");
			break;

		case KANJI_0488:
			system("echo \"傾\" | paps | lpr");
			break;

		case KANJI_0489:
			system("echo \"携\" | paps | lpr");
			break;

		case KANJI_0490:
			system("echo \"継\" | paps | lpr");
			break;

		case KANJI_0491:
			system("echo \"詣\" | paps | lpr");
			break;

		case KANJI_0492:
			system("echo \"慶\" | paps | lpr");
			break;

		case KANJI_0493:
			system("echo \"憬\" | paps | lpr");
			break;

		case KANJI_0494:
			system("echo \"稽\" | paps | lpr");
			break;

		case KANJI_0495:
			system("echo \"憩\" | paps | lpr");
			break;

		case KANJI_0496:
			system("echo \"警\" | paps | lpr");
			break;

		case KANJI_0497:
			system("echo \"鶏\" | paps | lpr");
			break;

		case KANJI_0498:
			system("echo \"芸\" | paps | lpr");
			break;

		case KANJI_0499:
			system("echo \"迎\" | paps | lpr");
			break;

		case KANJI_0500:
			system("echo \"鯨\" | paps | lpr");
			break;

		case KANJI_0501:
			system("echo \"隙\" | paps | lpr");
			break;

		case KANJI_0502:
			system("echo \"劇\" | paps | lpr");
			break;

		case KANJI_0503:
			system("echo \"撃\" | paps | lpr");
			break;

		case KANJI_0504:
			system("echo \"激\" | paps | lpr");
			break;

		case KANJI_0505:
			system("echo \"桁\" | paps | lpr");
			break;

		case KANJI_0506:
			system("echo \"欠\" | paps | lpr");
			break;

		case KANJI_0507:
			system("echo \"穴\" | paps | lpr");
			break;

		case KANJI_0508:
			system("echo \"血\" | paps | lpr");
			break;

		case KANJI_0509:
			system("echo \"決\" | paps | lpr");
			break;

		case KANJI_0510:
			system("echo \"結\" | paps | lpr");
			break;

		case KANJI_0511:
			system("echo \"傑\" | paps | lpr");
			break;

		case KANJI_0512:
			system("echo \"潔\" | paps | lpr");
			break;

		case KANJI_0513:
			system("echo \"月\" | paps | lpr");
			break;

		case KANJI_0514:
			system("echo \"犬\" | paps | lpr");
			break;

		case KANJI_0515:
			system("echo \"件\" | paps | lpr");
			break;

		case KANJI_0516:
			system("echo \"見\" | paps | lpr");
			break;

		case KANJI_0517:
			system("echo \"券\" | paps | lpr");
			break;

		case KANJI_0518:
			system("echo \"肩\" | paps | lpr");
			break;

		case KANJI_0519:
			system("echo \"建\" | paps | lpr");
			break;

		case KANJI_0520:
			system("echo \"研\" | paps | lpr");
			break;

		case KANJI_0521:
			system("echo \"県\" | paps | lpr");
			break;

		case KANJI_0522:
			system("echo \"倹\" | paps | lpr");
			break;

		case KANJI_0523:
			system("echo \"兼\" | paps | lpr");
			break;

		case KANJI_0524:
			system("echo \"剣\" | paps | lpr");
			break;

		case KANJI_0525:
			system("echo \"拳\" | paps | lpr");
			break;

		case KANJI_0526:
			system("echo \"軒\" | paps | lpr");
			break;

		case KANJI_0527:
			system("echo \"健\" | paps | lpr");
			break;

		case KANJI_0528:
			system("echo \"険\" | paps | lpr");
			break;

		case KANJI_0529:
			system("echo \"圏\" | paps | lpr");
			break;

		case KANJI_0530:
			system("echo \"堅\" | paps | lpr");
			break;

		case KANJI_0531:
			system("echo \"検\" | paps | lpr");
			break;

		case KANJI_0532:
			system("echo \"嫌\" | paps | lpr");
			break;

		case KANJI_0533:
			system("echo \"献\" | paps | lpr");
			break;

		case KANJI_0534:
			system("echo \"絹\" | paps | lpr");
			break;

		case KANJI_0535:
			system("echo \"遣\" | paps | lpr");
			break;

		case KANJI_0536:
			system("echo \"権\" | paps | lpr");
			break;

		case KANJI_0537:
			system("echo \"憲\" | paps | lpr");
			break;

		case KANJI_0538:
			system("echo \"賢\" | paps | lpr");
			break;

		case KANJI_0539:
			system("echo \"謙\" | paps | lpr");
			break;

		case KANJI_0540:
			system("echo \"鍵\" | paps | lpr");
			break;

		case KANJI_0541:
			system("echo \"繭\" | paps | lpr");
			break;

		case KANJI_0542:
			system("echo \"顕\" | paps | lpr");
			break;

		case KANJI_0543:
			system("echo \"験\" | paps | lpr");
			break;

		case KANJI_0544:
			system("echo \"懸\" | paps | lpr");
			break;

		case KANJI_0545:
			system("echo \"元\" | paps | lpr");
			break;

		case KANJI_0546:
			system("echo \"幻\" | paps | lpr");
			break;

		case KANJI_0547:
			system("echo \"言\" | paps | lpr");
			break;

		case KANJI_0548:
			system("echo \"弦\" | paps | lpr");
			break;

		case KANJI_0549:
			system("echo \"限\" | paps | lpr");
			break;

		case KANJI_0550:
			system("echo \"原\" | paps | lpr");
			break;

		case KANJI_0551:
			system("echo \"現\" | paps | lpr");
			break;

		case KANJI_0552:
			system("echo \"舷\" | paps | lpr");
			break;

		case KANJI_0553:
			system("echo \"減\" | paps | lpr");
			break;

		case KANJI_0554:
			system("echo \"源\" | paps | lpr");
			break;

		case KANJI_0555:
			system("echo \"厳\" | paps | lpr");
			break;

		case KANJI_0556:
			system("echo \"己\" | paps | lpr");
			break;

		case KANJI_0557:
			system("echo \"戸\" | paps | lpr");
			break;

		case KANJI_0558:
			system("echo \"古\" | paps | lpr");
			break;

		case KANJI_0559:
			system("echo \"呼\" | paps | lpr");
			break;

		case KANJI_0560:
			system("echo \"固\" | paps | lpr");
			break;

		case KANJI_0561:
			system("echo \"股\" | paps | lpr");
			break;

		case KANJI_0562:
			system("echo \"虎\" | paps | lpr");
			break;

		case KANJI_0563:
			system("echo \"孤\" | paps | lpr");
			break;

		case KANJI_0564:
			system("echo \"弧\" | paps | lpr");
			break;

		case KANJI_0565:
			system("echo \"故\" | paps | lpr");
			break;

		case KANJI_0566:
			system("echo \"枯\" | paps | lpr");
			break;

		case KANJI_0567:
			system("echo \"個\" | paps | lpr");
			break;

		case KANJI_0568:
			system("echo \"庫\" | paps | lpr");
			break;

		case KANJI_0569:
			system("echo \"湖\" | paps | lpr");
			break;

		case KANJI_0570:
			system("echo \"雇\" | paps | lpr");
			break;

		case KANJI_0571:
			system("echo \"誇\" | paps | lpr");
			break;

		case KANJI_0572:
			system("echo \"鼓\" | paps | lpr");
			break;

		case KANJI_0573:
			system("echo \"錮\" | paps | lpr");
			break;

		case KANJI_0574:
			system("echo \"顧\" | paps | lpr");
			break;

		case KANJI_0575:
			system("echo \"五\" | paps | lpr");
			break;

		case KANJI_0576:
			system("echo \"互\" | paps | lpr");
			break;

		case KANJI_0577:
			system("echo \"午\" | paps | lpr");
			break;

		case KANJI_0578:
			system("echo \"呉\" | paps | lpr");
			break;

		case KANJI_0579:
			system("echo \"後\" | paps | lpr");
			break;

		case KANJI_0580:
			system("echo \"娯\" | paps | lpr");
			break;

		case KANJI_0581:
			system("echo \"悟\" | paps | lpr");
			break;

		case KANJI_0582:
			system("echo \"碁\" | paps | lpr");
			break;

		case KANJI_0583:
			system("echo \"語\" | paps | lpr");
			break;

		case KANJI_0584:
			system("echo \"誤\" | paps | lpr");
			break;

		case KANJI_0585:
			system("echo \"護\" | paps | lpr");
			break;

		case KANJI_0586:
			system("echo \"口\" | paps | lpr");
			break;

		case KANJI_0587:
			system("echo \"工\" | paps | lpr");
			break;

		case KANJI_0588:
			system("echo \"公\" | paps | lpr");
			break;

		case KANJI_0589:
			system("echo \"勾\" | paps | lpr");
			break;

		case KANJI_0590:
			system("echo \"孔\" | paps | lpr");
			break;

		case KANJI_0591:
			system("echo \"功\" | paps | lpr");
			break;

		case KANJI_0592:
			system("echo \"巧\" | paps | lpr");
			break;

		case KANJI_0593:
			system("echo \"広\" | paps | lpr");
			break;

		case KANJI_0594:
			system("echo \"甲\" | paps | lpr");
			break;

		case KANJI_0595:
			system("echo \"交\" | paps | lpr");
			break;

		case KANJI_0596:
			system("echo \"光\" | paps | lpr");
			break;

		case KANJI_0597:
			system("echo \"向\" | paps | lpr");
			break;

		case KANJI_0598:
			system("echo \"后\" | paps | lpr");
			break;

		case KANJI_0599:
			system("echo \"好\" | paps | lpr");
			break;

		case KANJI_0600:
			system("echo \"江\" | paps | lpr");
			break;

		case KANJI_0601:
			system("echo \"考\" | paps | lpr");
			break;

		case KANJI_0602:
			system("echo \"行\" | paps | lpr");
			break;

		case KANJI_0603:
			system("echo \"坑\" | paps | lpr");
			break;

		case KANJI_0604:
			system("echo \"孝\" | paps | lpr");
			break;

		case KANJI_0605:
			system("echo \"抗\" | paps | lpr");
			break;

		case KANJI_0606:
			system("echo \"攻\" | paps | lpr");
			break;

		case KANJI_0607:
			system("echo \"更\" | paps | lpr");
			break;

		case KANJI_0608:
			system("echo \"効\" | paps | lpr");
			break;

		case KANJI_0609:
			system("echo \"幸\" | paps | lpr");
			break;

		case KANJI_0610:
			system("echo \"拘\" | paps | lpr");
			break;

		case KANJI_0611:
			system("echo \"肯\" | paps | lpr");
			break;

		case KANJI_0612:
			system("echo \"侯\" | paps | lpr");
			break;

		case KANJI_0613:
			system("echo \"厚\" | paps | lpr");
			break;

		case KANJI_0614:
			system("echo \"恒\" | paps | lpr");
			break;

		case KANJI_0615:
			system("echo \"洪\" | paps | lpr");
			break;

		case KANJI_0616:
			system("echo \"皇\" | paps | lpr");
			break;

		case KANJI_0617:
			system("echo \"紅\" | paps | lpr");
			break;

		case KANJI_0618:
			system("echo \"荒\" | paps | lpr");
			break;

		case KANJI_0619:
			system("echo \"郊\" | paps | lpr");
			break;

		case KANJI_0620:
			system("echo \"香\" | paps | lpr");
			break;

		case KANJI_0621:
			system("echo \"候\" | paps | lpr");
			break;

		case KANJI_0622:
			system("echo \"校\" | paps | lpr");
			break;

		case KANJI_0623:
			system("echo \"耕\" | paps | lpr");
			break;

		case KANJI_0624:
			system("echo \"航\" | paps | lpr");
			break;

		case KANJI_0625:
			system("echo \"貢\" | paps | lpr");
			break;

		case KANJI_0626:
			system("echo \"降\" | paps | lpr");
			break;

		case KANJI_0627:
			system("echo \"高\" | paps | lpr");
			break;

		case KANJI_0628:
			system("echo \"康\" | paps | lpr");
			break;

		case KANJI_0629:
			system("echo \"控\" | paps | lpr");
			break;

		case KANJI_0630:
			system("echo \"梗\" | paps | lpr");
			break;

		case KANJI_0631:
			system("echo \"黄\" | paps | lpr");
			break;

		case KANJI_0632:
			system("echo \"喉\" | paps | lpr");
			break;

		case KANJI_0633:
			system("echo \"慌\" | paps | lpr");
			break;

		case KANJI_0634:
			system("echo \"港\" | paps | lpr");
			break;

		case KANJI_0635:
			system("echo \"硬\" | paps | lpr");
			break;

		case KANJI_0636:
			system("echo \"絞\" | paps | lpr");
			break;

		case KANJI_0637:
			system("echo \"項\" | paps | lpr");
			break;

		case KANJI_0638:
			system("echo \"溝\" | paps | lpr");
			break;

		case KANJI_0639:
			system("echo \"鉱\" | paps | lpr");
			break;

		case KANJI_0640:
			system("echo \"構\" | paps | lpr");
			break;

		case KANJI_0641:
			system("echo \"綱\" | paps | lpr");
			break;

		case KANJI_0642:
			system("echo \"酵\" | paps | lpr");
			break;

		case KANJI_0643:
			system("echo \"稿\" | paps | lpr");
			break;

		case KANJI_0644:
			system("echo \"興\" | paps | lpr");
			break;

		case KANJI_0645:
			system("echo \"衡\" | paps | lpr");
			break;

		case KANJI_0646:
			system("echo \"鋼\" | paps | lpr");
			break;

		case KANJI_0647:
			system("echo \"講\" | paps | lpr");
			break;

		case KANJI_0648:
			system("echo \"購\" | paps | lpr");
			break;

		case KANJI_0649:
			system("echo \"乞\" | paps | lpr");
			break;

		case KANJI_0650:
			system("echo \"号\" | paps | lpr");
			break;

		case KANJI_0651:
			system("echo \"合\" | paps | lpr");
			break;

		case KANJI_0652:
			system("echo \"拷\" | paps | lpr");
			break;

		case KANJI_0653:
			system("echo \"剛\" | paps | lpr");
			break;

		case KANJI_0654:
			system("echo \"傲\" | paps | lpr");
			break;

		case KANJI_0655:
			system("echo \"豪\" | paps | lpr");
			break;

		case KANJI_0656:
			system("echo \"克\" | paps | lpr");
			break;

		case KANJI_0657:
			system("echo \"告\" | paps | lpr");
			break;

		case KANJI_0658:
			system("echo \"谷\" | paps | lpr");
			break;

		case KANJI_0659:
			system("echo \"刻\" | paps | lpr");
			break;

		case KANJI_0660:
			system("echo \"国\" | paps | lpr");
			break;

		case KANJI_0661:
			system("echo \"黒\" | paps | lpr");
			break;

		case KANJI_0662:
			system("echo \"穀\" | paps | lpr");
			break;

		case KANJI_0663:
			system("echo \"酷\" | paps | lpr");
			break;

		case KANJI_0664:
			system("echo \"獄\" | paps | lpr");
			break;

		case KANJI_0665:
			system("echo \"骨\" | paps | lpr");
			break;

		case KANJI_0666:
			system("echo \"駒\" | paps | lpr");
			break;

		case KANJI_0667:
			system("echo \"込\" | paps | lpr");
			break;

		case KANJI_0668:
			system("echo \"頃\" | paps | lpr");
			break;

		case KANJI_0669:
			system("echo \"今\" | paps | lpr");
			break;

		case KANJI_0670:
			system("echo \"困\" | paps | lpr");
			break;

		case KANJI_0671:
			system("echo \"昆\" | paps | lpr");
			break;

		case KANJI_0672:
			system("echo \"恨\" | paps | lpr");
			break;

		case KANJI_0673:
			system("echo \"根\" | paps | lpr");
			break;

		case KANJI_0674:
			system("echo \"婚\" | paps | lpr");
			break;

		case KANJI_0675:
			system("echo \"混\" | paps | lpr");
			break;

		case KANJI_0676:
			system("echo \"痕\" | paps | lpr");
			break;

		case KANJI_0677:
			system("echo \"紺\" | paps | lpr");
			break;

		case KANJI_0678:
			system("echo \"魂\" | paps | lpr");
			break;

		case KANJI_0679:
			system("echo \"墾\" | paps | lpr");
			break;

		case KANJI_0680:
			system("echo \"懇\" | paps | lpr");
			break;

		case KANJI_0681:
			system("echo \"左\" | paps | lpr");
			break;

		case KANJI_0682:
			system("echo \"佐\" | paps | lpr");
			break;

		case KANJI_0683:
			system("echo \"沙\" | paps | lpr");
			break;

		case KANJI_0684:
			system("echo \"査\" | paps | lpr");
			break;

		case KANJI_0685:
			system("echo \"砂\" | paps | lpr");
			break;

		case KANJI_0686:
			system("echo \"唆\" | paps | lpr");
			break;

		case KANJI_0687:
			system("echo \"差\" | paps | lpr");
			break;

		case KANJI_0688:
			system("echo \"詐\" | paps | lpr");
			break;

		case KANJI_0689:
			system("echo \"鎖\" | paps | lpr");
			break;

		case KANJI_0690:
			system("echo \"座\" | paps | lpr");
			break;

		case KANJI_0691:
			system("echo \"挫\" | paps | lpr");
			break;

		case KANJI_0692:
			system("echo \"才\" | paps | lpr");
			break;

		case KANJI_0693:
			system("echo \"再\" | paps | lpr");
			break;

		case KANJI_0694:
			system("echo \"災\" | paps | lpr");
			break;

		case KANJI_0695:
			system("echo \"妻\" | paps | lpr");
			break;

		case KANJI_0696:
			system("echo \"采\" | paps | lpr");
			break;

		case KANJI_0697:
			system("echo \"砕\" | paps | lpr");
			break;

		case KANJI_0698:
			system("echo \"宰\" | paps | lpr");
			break;

		case KANJI_0699:
			system("echo \"栽\" | paps | lpr");
			break;

		case KANJI_0700:
			system("echo \"彩\" | paps | lpr");
			break;

		case KANJI_0701:
			system("echo \"採\" | paps | lpr");
			break;

		case KANJI_0702:
			system("echo \"済\" | paps | lpr");
			break;

		case KANJI_0703:
			system("echo \"祭\" | paps | lpr");
			break;

		case KANJI_0704:
			system("echo \"斎\" | paps | lpr");
			break;

		case KANJI_0705:
			system("echo \"細\" | paps | lpr");
			break;

		case KANJI_0706:
			system("echo \"菜\" | paps | lpr");
			break;

		case KANJI_0707:
			system("echo \"最\" | paps | lpr");
			break;

		case KANJI_0708:
			system("echo \"裁\" | paps | lpr");
			break;

		case KANJI_0709:
			system("echo \"債\" | paps | lpr");
			break;

		case KANJI_0710:
			system("echo \"催\" | paps | lpr");
			break;

		case KANJI_0711:
			system("echo \"塞\" | paps | lpr");
			break;

		case KANJI_0712:
			system("echo \"歳\" | paps | lpr");
			break;

		case KANJI_0713:
			system("echo \"載\" | paps | lpr");
			break;

		case KANJI_0714:
			system("echo \"際\" | paps | lpr");
			break;

		case KANJI_0715:
			system("echo \"埼\" | paps | lpr");
			break;

		case KANJI_0716:
			system("echo \"在\" | paps | lpr");
			break;

		case KANJI_0717:
			system("echo \"材\" | paps | lpr");
			break;

		case KANJI_0718:
			system("echo \"剤\" | paps | lpr");
			break;

		case KANJI_0719:
			system("echo \"財\" | paps | lpr");
			break;

		case KANJI_0720:
			system("echo \"罪\" | paps | lpr");
			break;

		case KANJI_0721:
			system("echo \"崎\" | paps | lpr");
			break;

		case KANJI_0722:
			system("echo \"作\" | paps | lpr");
			break;

		case KANJI_0723:
			system("echo \"削\" | paps | lpr");
			break;

		case KANJI_0724:
			system("echo \"昨\" | paps | lpr");
			break;

		case KANJI_0725:
			system("echo \"柵\" | paps | lpr");
			break;

		case KANJI_0726:
			system("echo \"索\" | paps | lpr");
			break;

		case KANJI_0727:
			system("echo \"策\" | paps | lpr");
			break;

		case KANJI_0728:
			system("echo \"酢\" | paps | lpr");
			break;

		case KANJI_0729:
			system("echo \"搾\" | paps | lpr");
			break;

		case KANJI_0730:
			system("echo \"錯\" | paps | lpr");
			break;

		case KANJI_0731:
			system("echo \"咲\" | paps | lpr");
			break;

		case KANJI_0732:
			system("echo \"冊\" | paps | lpr");
			break;

		case KANJI_0733:
			system("echo \"札\" | paps | lpr");
			break;

		case KANJI_0734:
			system("echo \"刷\" | paps | lpr");
			break;

		case KANJI_0735:
			system("echo \"刹\" | paps | lpr");
			break;

		case KANJI_0736:
			system("echo \"拶\" | paps | lpr");
			break;

		case KANJI_0737:
			system("echo \"殺\" | paps | lpr");
			break;

		case KANJI_0738:
			system("echo \"察\" | paps | lpr");
			break;

		case KANJI_0739:
			system("echo \"撮\" | paps | lpr");
			break;

		case KANJI_0740:
			system("echo \"擦\" | paps | lpr");
			break;

		case KANJI_0741:
			system("echo \"雑\" | paps | lpr");
			break;

		case KANJI_0742:
			system("echo \"皿\" | paps | lpr");
			break;

		case KANJI_0743:
			system("echo \"三\" | paps | lpr");
			break;

		case KANJI_0744:
			system("echo \"山\" | paps | lpr");
			break;

		case KANJI_0745:
			system("echo \"参\" | paps | lpr");
			break;

		case KANJI_0746:
			system("echo \"桟\" | paps | lpr");
			break;

		case KANJI_0747:
			system("echo \"蚕\" | paps | lpr");
			break;

		case KANJI_0748:
			system("echo \"惨\" | paps | lpr");
			break;

		case KANJI_0749:
			system("echo \"産\" | paps | lpr");
			break;

		case KANJI_0750:
			system("echo \"傘\" | paps | lpr");
			break;

		case KANJI_0751:
			system("echo \"散\" | paps | lpr");
			break;

		case KANJI_0752:
			system("echo \"算\" | paps | lpr");
			break;

		case KANJI_0753:
			system("echo \"酸\" | paps | lpr");
			break;

		case KANJI_0754:
			system("echo \"賛\" | paps | lpr");
			break;

		case KANJI_0755:
			system("echo \"残\" | paps | lpr");
			break;

		case KANJI_0756:
			system("echo \"斬\" | paps | lpr");
			break;

		case KANJI_0757:
			system("echo \"暫\" | paps | lpr");
			break;

		case KANJI_0758:
			system("echo \"士\" | paps | lpr");
			break;

		case KANJI_0759:
			system("echo \"子\" | paps | lpr");
			break;

		case KANJI_0760:
			system("echo \"支\" | paps | lpr");
			break;

		case KANJI_0761:
			system("echo \"止\" | paps | lpr");
			break;

		case KANJI_0762:
			system("echo \"氏\" | paps | lpr");
			break;

		case KANJI_0763:
			system("echo \"仕\" | paps | lpr");
			break;

		case KANJI_0764:
			system("echo \"史\" | paps | lpr");
			break;

		case KANJI_0765:
			system("echo \"司\" | paps | lpr");
			break;

		case KANJI_0766:
			system("echo \"四\" | paps | lpr");
			break;

		case KANJI_0767:
			system("echo \"市\" | paps | lpr");
			break;

		case KANJI_0768:
			system("echo \"矢\" | paps | lpr");
			break;

		case KANJI_0769:
			system("echo \"旨\" | paps | lpr");
			break;

		case KANJI_0770:
			system("echo \"死\" | paps | lpr");
			break;

		case KANJI_0771:
			system("echo \"糸\" | paps | lpr");
			break;

		case KANJI_0772:
			system("echo \"至\" | paps | lpr");
			break;

		case KANJI_0773:
			system("echo \"伺\" | paps | lpr");
			break;

		case KANJI_0774:
			system("echo \"志\" | paps | lpr");
			break;

		case KANJI_0775:
			system("echo \"私\" | paps | lpr");
			break;

		case KANJI_0776:
			system("echo \"使\" | paps | lpr");
			break;

		case KANJI_0777:
			system("echo \"刺\" | paps | lpr");
			break;

		case KANJI_0778:
			system("echo \"始\" | paps | lpr");
			break;

		case KANJI_0779:
			system("echo \"姉\" | paps | lpr");
			break;

		case KANJI_0780:
			system("echo \"枝\" | paps | lpr");
			break;

		case KANJI_0781:
			system("echo \"祉\" | paps | lpr");
			break;

		case KANJI_0782:
			system("echo \"肢\" | paps | lpr");
			break;

		case KANJI_0783:
			system("echo \"姿\" | paps | lpr");
			break;

		case KANJI_0784:
			system("echo \"思\" | paps | lpr");
			break;

		case KANJI_0785:
			system("echo \"指\" | paps | lpr");
			break;

		case KANJI_0786:
			system("echo \"施\" | paps | lpr");
			break;

		case KANJI_0787:
			system("echo \"師\" | paps | lpr");
			break;

		case KANJI_0788:
			system("echo \"恣\" | paps | lpr");
			break;

		case KANJI_0789:
			system("echo \"紙\" | paps | lpr");
			break;

		case KANJI_0790:
			system("echo \"脂\" | paps | lpr");
			break;

		case KANJI_0791:
			system("echo \"視\" | paps | lpr");
			break;

		case KANJI_0792:
			system("echo \"紫\" | paps | lpr");
			break;

		case KANJI_0793:
			system("echo \"詞\" | paps | lpr");
			break;

		case KANJI_0794:
			system("echo \"歯\" | paps | lpr");
			break;

		case KANJI_0795:
			system("echo \"嗣\" | paps | lpr");
			break;

		case KANJI_0796:
			system("echo \"試\" | paps | lpr");
			break;

		case KANJI_0797:
			system("echo \"詩\" | paps | lpr");
			break;

		case KANJI_0798:
			system("echo \"資\" | paps | lpr");
			break;

		case KANJI_0799:
			system("echo \"飼\" | paps | lpr");
			break;

		case KANJI_0800:
			system("echo \"誌\" | paps | lpr");
			break;

		case KANJI_0801:
			system("echo \"雌\" | paps | lpr");
			break;

		case KANJI_0802:
			system("echo \"摯\" | paps | lpr");
			break;

		case KANJI_0803:
			system("echo \"賜\" | paps | lpr");
			break;

		case KANJI_0804:
			system("echo \"諮\" | paps | lpr");
			break;

		case KANJI_0805:
			system("echo \"示\" | paps | lpr");
			break;

		case KANJI_0806:
			system("echo \"字\" | paps | lpr");
			break;

		case KANJI_0807:
			system("echo \"寺\" | paps | lpr");
			break;

		case KANJI_0808:
			system("echo \"次\" | paps | lpr");
			break;

		case KANJI_0809:
			system("echo \"耳\" | paps | lpr");
			break;

		case KANJI_0810:
			system("echo \"自\" | paps | lpr");
			break;

		case KANJI_0811:
			system("echo \"似\" | paps | lpr");
			break;

		case KANJI_0812:
			system("echo \"児\" | paps | lpr");
			break;

		case KANJI_0813:
			system("echo \"事\" | paps | lpr");
			break;

		case KANJI_0814:
			system("echo \"侍\" | paps | lpr");
			break;

		case KANJI_0815:
			system("echo \"治\" | paps | lpr");
			break;

		case KANJI_0816:
			system("echo \"持\" | paps | lpr");
			break;

		case KANJI_0817:
			system("echo \"時\" | paps | lpr");
			break;

		case KANJI_0818:
			system("echo \"滋\" | paps | lpr");
			break;

		case KANJI_0819:
			system("echo \"慈\" | paps | lpr");
			break;

		case KANJI_0820:
			system("echo \"辞\" | paps | lpr");
			break;

		case KANJI_0821:
			system("echo \"磁\" | paps | lpr");
			break;

		case KANJI_0822:
			system("echo \"餌\" | paps | lpr");
			break;

		case KANJI_0823:
			system("echo \"璽\" | paps | lpr");
			break;

		case KANJI_0824:
			system("echo \"鹿\" | paps | lpr");
			break;

		case KANJI_0825:
			system("echo \"式\" | paps | lpr");
			break;

		case KANJI_0826:
			system("echo \"識\" | paps | lpr");
			break;

		case KANJI_0827:
			system("echo \"軸\" | paps | lpr");
			break;

		case KANJI_0828:
			system("echo \"七\" | paps | lpr");
			break;

		case KANJI_0829:
			system("echo \"𠮟\" | paps | lpr");
			break;

		case KANJI_0830:
			system("echo \"失\" | paps | lpr");
			break;

		case KANJI_0831:
			system("echo \"室\" | paps | lpr");
			break;

		case KANJI_0832:
			system("echo \"疾\" | paps | lpr");
			break;

		case KANJI_0833:
			system("echo \"執\" | paps | lpr");
			break;

		case KANJI_0834:
			system("echo \"湿\" | paps | lpr");
			break;

		case KANJI_0835:
			system("echo \"嫉\" | paps | lpr");
			break;

		case KANJI_0836:
			system("echo \"漆\" | paps | lpr");
			break;

		case KANJI_0837:
			system("echo \"質\" | paps | lpr");
			break;

		case KANJI_0838:
			system("echo \"実\" | paps | lpr");
			break;

		case KANJI_0839:
			system("echo \"芝\" | paps | lpr");
			break;

		case KANJI_0840:
			system("echo \"写\" | paps | lpr");
			break;

		case KANJI_0841:
			system("echo \"社\" | paps | lpr");
			break;

		case KANJI_0842:
			system("echo \"車\" | paps | lpr");
			break;

		case KANJI_0843:
			system("echo \"舎\" | paps | lpr");
			break;

		case KANJI_0844:
			system("echo \"者\" | paps | lpr");
			break;

		case KANJI_0845:
			system("echo \"射\" | paps | lpr");
			break;

		case KANJI_0846:
			system("echo \"捨\" | paps | lpr");
			break;

		case KANJI_0847:
			system("echo \"赦\" | paps | lpr");
			break;

		case KANJI_0848:
			system("echo \"斜\" | paps | lpr");
			break;

		case KANJI_0849:
			system("echo \"煮\" | paps | lpr");
			break;

		case KANJI_0850:
			system("echo \"遮\" | paps | lpr");
			break;

		case KANJI_0851:
			system("echo \"謝\" | paps | lpr");
			break;

		case KANJI_0852:
			system("echo \"邪\" | paps | lpr");
			break;

		case KANJI_0853:
			system("echo \"蛇\" | paps | lpr");
			break;

		case KANJI_0854:
			system("echo \"尺\" | paps | lpr");
			break;

		case KANJI_0855:
			system("echo \"借\" | paps | lpr");
			break;

		case KANJI_0856:
			system("echo \"酌\" | paps | lpr");
			break;

		case KANJI_0857:
			system("echo \"釈\" | paps | lpr");
			break;

		case KANJI_0858:
			system("echo \"爵\" | paps | lpr");
			break;

		case KANJI_0859:
			system("echo \"若\" | paps | lpr");
			break;

		case KANJI_0860:
			system("echo \"弱\" | paps | lpr");
			break;

		case KANJI_0861:
			system("echo \"寂\" | paps | lpr");
			break;

		case KANJI_0862:
			system("echo \"手\" | paps | lpr");
			break;

		case KANJI_0863:
			system("echo \"主\" | paps | lpr");
			break;

		case KANJI_0864:
			system("echo \"守\" | paps | lpr");
			break;

		case KANJI_0865:
			system("echo \"朱\" | paps | lpr");
			break;

		case KANJI_0866:
			system("echo \"取\" | paps | lpr");
			break;

		case KANJI_0867:
			system("echo \"狩\" | paps | lpr");
			break;

		case KANJI_0868:
			system("echo \"首\" | paps | lpr");
			break;

		case KANJI_0869:
			system("echo \"殊\" | paps | lpr");
			break;

		case KANJI_0870:
			system("echo \"珠\" | paps | lpr");
			break;

		case KANJI_0871:
			system("echo \"酒\" | paps | lpr");
			break;

		case KANJI_0872:
			system("echo \"腫\" | paps | lpr");
			break;

		case KANJI_0873:
			system("echo \"種\" | paps | lpr");
			break;

		case KANJI_0874:
			system("echo \"趣\" | paps | lpr");
			break;

		case KANJI_0875:
			system("echo \"寿\" | paps | lpr");
			break;

		case KANJI_0876:
			system("echo \"受\" | paps | lpr");
			break;

		case KANJI_0877:
			system("echo \"呪\" | paps | lpr");
			break;

		case KANJI_0878:
			system("echo \"授\" | paps | lpr");
			break;

		case KANJI_0879:
			system("echo \"需\" | paps | lpr");
			break;

		case KANJI_0880:
			system("echo \"儒\" | paps | lpr");
			break;

		case KANJI_0881:
			system("echo \"樹\" | paps | lpr");
			break;

		case KANJI_0882:
			system("echo \"収\" | paps | lpr");
			break;

		case KANJI_0883:
			system("echo \"囚\" | paps | lpr");
			break;

		case KANJI_0884:
			system("echo \"州\" | paps | lpr");
			break;

		case KANJI_0885:
			system("echo \"舟\" | paps | lpr");
			break;

		case KANJI_0886:
			system("echo \"秀\" | paps | lpr");
			break;

		case KANJI_0887:
			system("echo \"周\" | paps | lpr");
			break;

		case KANJI_0888:
			system("echo \"宗\" | paps | lpr");
			break;

		case KANJI_0889:
			system("echo \"拾\" | paps | lpr");
			break;

		case KANJI_0890:
			system("echo \"秋\" | paps | lpr");
			break;

		case KANJI_0891:
			system("echo \"臭\" | paps | lpr");
			break;

		case KANJI_0892:
			system("echo \"修\" | paps | lpr");
			break;

		case KANJI_0893:
			system("echo \"袖\" | paps | lpr");
			break;

		case KANJI_0894:
			system("echo \"終\" | paps | lpr");
			break;

		case KANJI_0895:
			system("echo \"羞\" | paps | lpr");
			break;

		case KANJI_0896:
			system("echo \"習\" | paps | lpr");
			break;

		case KANJI_0897:
			system("echo \"週\" | paps | lpr");
			break;

		case KANJI_0898:
			system("echo \"就\" | paps | lpr");
			break;

		case KANJI_0899:
			system("echo \"衆\" | paps | lpr");
			break;

		case KANJI_0900:
			system("echo \"集\" | paps | lpr");
			break;

		case KANJI_0901:
			system("echo \"愁\" | paps | lpr");
			break;

		case KANJI_0902:
			system("echo \"酬\" | paps | lpr");
			break;

		case KANJI_0903:
			system("echo \"醜\" | paps | lpr");
			break;

		case KANJI_0904:
			system("echo \"蹴\" | paps | lpr");
			break;

		case KANJI_0905:
			system("echo \"襲\" | paps | lpr");
			break;

		case KANJI_0906:
			system("echo \"十\" | paps | lpr");
			break;

		case KANJI_0907:
			system("echo \"汁\" | paps | lpr");
			break;

		case KANJI_0908:
			system("echo \"充\" | paps | lpr");
			break;

		case KANJI_0909:
			system("echo \"住\" | paps | lpr");
			break;

		case KANJI_0910:
			system("echo \"柔\" | paps | lpr");
			break;

		case KANJI_0911:
			system("echo \"重\" | paps | lpr");
			break;

		case KANJI_0912:
			system("echo \"従\" | paps | lpr");
			break;

		case KANJI_0913:
			system("echo \"渋\" | paps | lpr");
			break;

		case KANJI_0914:
			system("echo \"銃\" | paps | lpr");
			break;

		case KANJI_0915:
			system("echo \"獣\" | paps | lpr");
			break;

		case KANJI_0916:
			system("echo \"縦\" | paps | lpr");
			break;

		case KANJI_0917:
			system("echo \"叔\" | paps | lpr");
			break;

		case KANJI_0918:
			system("echo \"祝\" | paps | lpr");
			break;

		case KANJI_0919:
			system("echo \"宿\" | paps | lpr");
			break;

		case KANJI_0920:
			system("echo \"淑\" | paps | lpr");
			break;

		case KANJI_0921:
			system("echo \"粛\" | paps | lpr");
			break;

		case KANJI_0922:
			system("echo \"縮\" | paps | lpr");
			break;

		case KANJI_0923:
			system("echo \"塾\" | paps | lpr");
			break;

		case KANJI_0924:
			system("echo \"熟\" | paps | lpr");
			break;

		case KANJI_0925:
			system("echo \"出\" | paps | lpr");
			break;

		case KANJI_0926:
			system("echo \"述\" | paps | lpr");
			break;

		case KANJI_0927:
			system("echo \"術\" | paps | lpr");
			break;

		case KANJI_0928:
			system("echo \"俊\" | paps | lpr");
			break;

		case KANJI_0929:
			system("echo \"春\" | paps | lpr");
			break;

		case KANJI_0930:
			system("echo \"瞬\" | paps | lpr");
			break;

		case KANJI_0931:
			system("echo \"旬\" | paps | lpr");
			break;

		case KANJI_0932:
			system("echo \"巡\" | paps | lpr");
			break;

		case KANJI_0933:
			system("echo \"盾\" | paps | lpr");
			break;

		case KANJI_0934:
			system("echo \"准\" | paps | lpr");
			break;

		case KANJI_0935:
			system("echo \"殉\" | paps | lpr");
			break;

		case KANJI_0936:
			system("echo \"純\" | paps | lpr");
			break;

		case KANJI_0937:
			system("echo \"循\" | paps | lpr");
			break;

		case KANJI_0938:
			system("echo \"順\" | paps | lpr");
			break;

		case KANJI_0939:
			system("echo \"準\" | paps | lpr");
			break;

		case KANJI_0940:
			system("echo \"潤\" | paps | lpr");
			break;

		case KANJI_0941:
			system("echo \"遵\" | paps | lpr");
			break;

		case KANJI_0942:
			system("echo \"処\" | paps | lpr");
			break;

		case KANJI_0943:
			system("echo \"初\" | paps | lpr");
			break;

		case KANJI_0944:
			system("echo \"所\" | paps | lpr");
			break;

		case KANJI_0945:
			system("echo \"書\" | paps | lpr");
			break;

		case KANJI_0946:
			system("echo \"庶\" | paps | lpr");
			break;

		case KANJI_0947:
			system("echo \"暑\" | paps | lpr");
			break;

		case KANJI_0948:
			system("echo \"署\" | paps | lpr");
			break;

		case KANJI_0949:
			system("echo \"緒\" | paps | lpr");
			break;

		case KANJI_0950:
			system("echo \"諸\" | paps | lpr");
			break;

		case KANJI_0951:
			system("echo \"女\" | paps | lpr");
			break;

		case KANJI_0952:
			system("echo \"如\" | paps | lpr");
			break;

		case KANJI_0953:
			system("echo \"助\" | paps | lpr");
			break;

		case KANJI_0954:
			system("echo \"序\" | paps | lpr");
			break;

		case KANJI_0955:
			system("echo \"叙\" | paps | lpr");
			break;

		case KANJI_0956:
			system("echo \"徐\" | paps | lpr");
			break;

		case KANJI_0957:
			system("echo \"除\" | paps | lpr");
			break;

		case KANJI_0958:
			system("echo \"小\" | paps | lpr");
			break;

		case KANJI_0959:
			system("echo \"升\" | paps | lpr");
			break;

		case KANJI_0960:
			system("echo \"少\" | paps | lpr");
			break;

		case KANJI_0961:
			system("echo \"召\" | paps | lpr");
			break;

		case KANJI_0962:
			system("echo \"匠\" | paps | lpr");
			break;

		case KANJI_0963:
			system("echo \"床\" | paps | lpr");
			break;

		case KANJI_0964:
			system("echo \"抄\" | paps | lpr");
			break;

		case KANJI_0965:
			system("echo \"肖\" | paps | lpr");
			break;

		case KANJI_0966:
			system("echo \"尚\" | paps | lpr");
			break;

		case KANJI_0967:
			system("echo \"招\" | paps | lpr");
			break;

		case KANJI_0968:
			system("echo \"承\" | paps | lpr");
			break;

		case KANJI_0969:
			system("echo \"昇\" | paps | lpr");
			break;

		case KANJI_0970:
			system("echo \"松\" | paps | lpr");
			break;

		case KANJI_0971:
			system("echo \"沼\" | paps | lpr");
			break;

		case KANJI_0972:
			system("echo \"昭\" | paps | lpr");
			break;

		case KANJI_0973:
			system("echo \"宵\" | paps | lpr");
			break;

		case KANJI_0974:
			system("echo \"将\" | paps | lpr");
			break;

		case KANJI_0975:
			system("echo \"消\" | paps | lpr");
			break;

		case KANJI_0976:
			system("echo \"症\" | paps | lpr");
			break;

		case KANJI_0977:
			system("echo \"祥\" | paps | lpr");
			break;

		case KANJI_0978:
			system("echo \"称\" | paps | lpr");
			break;

		case KANJI_0979:
			system("echo \"笑\" | paps | lpr");
			break;

		case KANJI_0980:
			system("echo \"唱\" | paps | lpr");
			break;

		case KANJI_0981:
			system("echo \"商\" | paps | lpr");
			break;

		case KANJI_0982:
			system("echo \"渉\" | paps | lpr");
			break;

		case KANJI_0983:
			system("echo \"章\" | paps | lpr");
			break;

		case KANJI_0984:
			system("echo \"紹\" | paps | lpr");
			break;

		case KANJI_0985:
			system("echo \"訟\" | paps | lpr");
			break;

		case KANJI_0986:
			system("echo \"勝\" | paps | lpr");
			break;

		case KANJI_0987:
			system("echo \"掌\" | paps | lpr");
			break;

		case KANJI_0988:
			system("echo \"晶\" | paps | lpr");
			break;

		case KANJI_0989:
			system("echo \"焼\" | paps | lpr");
			break;

		case KANJI_0990:
			system("echo \"焦\" | paps | lpr");
			break;

		case KANJI_0991:
			system("echo \"硝\" | paps | lpr");
			break;

		case KANJI_0992:
			system("echo \"粧\" | paps | lpr");
			break;

		case KANJI_0993:
			system("echo \"詔\" | paps | lpr");
			break;

		case KANJI_0994:
			system("echo \"証\" | paps | lpr");
			break;

		case KANJI_0995:
			system("echo \"象\" | paps | lpr");
			break;

		case KANJI_0996:
			system("echo \"傷\" | paps | lpr");
			break;

		case KANJI_0997:
			system("echo \"奨\" | paps | lpr");
			break;

		case KANJI_0998:
			system("echo \"照\" | paps | lpr");
			break;

		case KANJI_0999:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1000:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1001:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1002:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1003:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1004:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1005:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1006:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1007:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1008:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1009:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1010:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1011:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1012:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1013:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1014:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1015:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1016:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1017:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1018:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1019:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1020:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1021:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1022:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1023:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1024:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1025:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1026:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1027:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1028:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1029:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1030:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1031:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1032:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1033:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1034:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1035:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1036:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1037:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1038:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1039:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1040:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1041:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1042:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1043:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1044:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1045:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1046:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1047:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1048:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1049:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1050:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1051:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1052:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1053:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1054:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1055:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1056:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1057:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1058:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1059:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1060:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1061:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1062:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1063:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1064:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1065:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1066:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1067:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1068:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1069:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1070:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1071:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1072:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1073:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1074:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1075:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1076:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1077:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1078:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1079:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1080:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1081:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1082:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1083:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1084:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1085:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1086:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1087:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1088:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1089:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1090:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1091:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1092:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1093:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1094:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1095:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1096:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1097:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1098:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1099:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1100:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1101:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1102:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1103:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1104:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1105:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1106:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1107:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1108:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1109:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1110:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1111:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1112:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1113:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1114:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1115:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1116:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1117:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1118:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1119:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1120:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1121:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1122:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1123:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1124:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1125:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1126:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1127:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1128:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1129:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1130:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1131:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1132:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1133:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1134:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1135:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1136:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1137:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1138:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1139:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1140:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1141:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1142:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1143:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1144:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1145:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1146:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1147:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1148:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1149:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1150:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1151:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1152:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1153:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1154:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1155:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1156:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1157:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1158:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1159:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1160:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1161:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1162:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1163:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1164:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1165:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1166:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1167:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1168:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1169:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1170:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1171:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1172:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1173:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1174:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1175:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1176:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1177:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1178:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1179:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1180:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1181:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1182:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1183:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1184:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1185:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1186:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1187:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1188:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1189:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1190:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1191:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1192:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1193:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1194:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1195:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1196:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1197:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1198:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1199:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1200:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1201:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1202:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1203:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1204:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1205:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1206:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1207:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1208:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1209:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1210:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1211:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1212:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1213:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1214:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1215:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1216:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1217:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1218:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1219:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1220:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1221:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1222:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1223:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1224:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1225:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1226:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1227:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1228:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1229:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1230:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1231:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1232:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1233:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1234:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1235:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1236:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1237:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1238:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1239:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1240:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1241:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1242:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1243:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1244:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1245:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1246:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1247:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1248:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1249:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1250:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1251:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1252:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1253:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1254:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1255:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1256:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1257:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1258:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1259:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1260:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1261:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1262:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1263:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1264:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1265:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1266:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1267:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1268:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1269:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1270:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1271:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1272:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1273:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1274:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1275:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1276:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1277:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1278:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1279:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1280:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1281:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1282:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1283:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1284:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1285:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1286:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1287:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1288:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1289:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1290:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1291:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1292:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1293:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1294:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1295:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1296:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1297:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1298:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1299:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1300:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1301:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1302:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1303:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1304:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1305:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1306:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1307:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1308:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1309:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1310:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1311:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1312:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1313:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1314:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1315:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1316:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1317:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1318:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1319:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1320:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1321:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1322:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1323:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1324:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1325:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1326:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1327:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1328:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1329:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1330:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1331:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1332:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1333:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1334:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1335:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1336:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1337:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1338:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1339:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1340:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1341:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1342:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1343:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1344:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1345:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1346:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1347:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1348:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1349:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1350:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1351:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1352:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1353:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1354:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1355:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1356:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1357:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1358:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1359:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1360:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1361:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1362:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1363:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1364:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1365:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1366:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1367:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1368:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1369:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1370:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1371:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1372:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1373:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1374:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1375:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1376:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1377:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1378:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1379:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1380:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1381:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1382:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1383:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1384:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1385:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1386:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1387:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1388:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1389:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1390:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1391:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1392:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1393:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1394:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1395:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1396:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1397:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1398:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1399:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1400:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1401:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1402:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1403:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1404:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1405:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1406:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1407:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1408:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1409:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1410:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1411:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1412:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1413:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1414:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1415:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1416:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1417:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1418:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1419:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1420:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1421:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1422:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1423:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1424:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1425:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1426:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1427:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1428:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1429:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1430:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1431:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1432:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1433:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1434:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1435:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1436:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1437:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1438:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1439:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1440:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1441:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1442:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1443:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1444:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1445:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1446:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1447:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1448:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1449:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1450:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1451:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1452:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1453:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1454:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1455:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1456:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1457:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1458:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1459:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1460:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1461:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1462:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1463:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1464:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1465:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1466:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1467:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1468:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1469:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1470:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1471:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1472:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1473:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1474:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1475:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1476:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1477:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1478:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1479:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1480:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1481:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1482:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1483:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1484:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1485:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1486:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1487:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1488:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1489:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1490:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1491:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1492:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1493:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1494:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1495:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1496:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1497:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1498:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1499:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1500:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1501:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1502:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1503:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1504:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1505:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1506:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1507:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1508:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1509:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1510:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1511:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1512:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1513:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1514:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1515:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1516:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1517:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1518:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1519:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1520:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1521:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1522:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1523:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1524:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1525:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1526:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1527:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1528:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1529:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1530:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1531:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1532:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1533:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1534:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1535:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1536:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1537:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1538:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1539:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1540:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1541:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1542:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1543:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1544:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1545:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1546:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1547:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1548:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1549:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1550:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1551:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1552:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1553:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1554:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1555:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1556:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1557:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1558:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1559:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1560:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1561:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1562:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1563:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1564:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1565:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1566:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1567:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1568:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1569:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1570:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1571:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1572:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1573:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1574:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1575:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1576:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1577:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1578:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1579:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1580:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1581:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1582:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1583:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1584:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1585:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1586:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1587:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1588:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1589:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1590:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1591:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1592:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1593:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1594:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1595:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1596:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1597:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1598:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1599:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1600:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1601:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1602:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1603:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1604:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1605:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1606:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1607:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1608:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1609:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1610:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1611:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1612:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1613:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1614:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1615:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1616:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1617:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1618:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1619:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1620:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1621:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1622:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1623:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1624:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1625:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1626:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1627:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1628:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1629:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1630:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1631:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1632:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1633:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1634:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1635:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1636:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1637:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1638:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1639:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1640:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1641:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1642:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1643:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1644:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1645:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1646:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1647:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1648:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1649:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1650:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1651:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1652:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1653:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1654:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1655:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1656:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1657:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1658:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1659:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1660:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1661:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1662:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1663:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1664:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1665:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1666:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1667:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1668:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1669:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1670:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1671:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1672:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1673:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1674:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1675:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1676:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1677:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1678:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1679:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1680:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1681:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1682:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1683:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1684:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1685:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1686:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1687:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1688:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1689:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1690:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1691:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1692:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1693:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1694:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1695:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1696:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1697:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1698:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1699:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1700:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1701:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1702:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1703:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1704:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1705:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1706:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1707:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1708:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1709:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1710:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1711:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1712:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1713:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1714:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1715:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1716:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1717:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1718:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1719:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1720:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1721:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1722:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1723:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1724:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1725:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1726:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1727:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1728:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1729:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1730:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1731:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1732:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1733:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1734:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1735:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1736:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1737:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1738:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1739:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1740:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1741:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1742:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1743:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1744:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1745:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1746:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1747:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1748:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1749:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1750:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1751:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1752:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1753:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1754:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1755:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1756:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1757:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1758:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1759:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1760:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1761:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1762:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1763:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1764:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1765:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1766:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1767:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1768:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1769:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1770:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1771:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1772:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1773:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1774:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1775:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1776:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1777:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1778:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1779:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1780:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1781:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1782:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1783:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1784:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1785:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1786:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1787:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1788:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1789:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1790:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1791:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1792:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1793:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1794:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1795:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1796:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1797:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1798:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1799:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1800:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1801:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1802:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1803:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1804:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1805:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1806:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1807:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1808:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1809:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1810:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1811:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1812:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1813:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1814:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1815:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1816:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1817:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1818:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1819:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1820:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1821:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1822:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1823:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1824:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1825:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1826:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1827:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1828:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1829:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1830:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1831:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1832:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1833:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1834:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1835:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1836:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1837:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1838:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1839:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1840:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1841:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1842:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1843:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1844:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1845:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1846:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1847:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1848:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1849:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1850:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1851:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1852:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1853:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1854:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1855:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1856:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1857:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1858:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1859:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1860:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1861:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1862:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1863:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1864:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1865:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1866:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1867:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1868:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1869:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1870:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1871:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1872:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1873:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1874:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1875:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1876:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1877:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1878:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1879:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1880:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1881:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1882:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1883:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1884:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1885:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1886:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1887:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1888:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1889:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1890:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1891:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1892:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1893:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1894:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1895:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1896:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1897:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1898:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1899:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1900:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1901:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1902:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1903:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1904:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1905:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1906:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1907:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1908:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1909:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1910:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1911:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1912:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1913:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1914:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1915:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1916:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1917:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1918:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1919:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1920:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1921:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1922:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1923:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1924:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1925:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1926:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1927:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1928:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1929:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1930:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1931:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1932:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1933:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1934:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1935:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1936:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1937:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1938:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1939:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1940:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1941:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1942:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1943:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1944:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1945:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1946:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1947:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1948:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1949:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1950:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1951:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1952:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1953:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1954:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1955:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1956:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1957:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1958:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1959:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1960:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1961:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1962:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1963:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1964:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1965:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1966:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1967:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1968:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1969:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1970:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1971:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1972:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1973:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1974:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1975:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1976:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1977:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1978:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1979:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1980:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1981:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1982:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1983:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1984:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1985:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1986:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1987:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1988:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1989:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1990:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1991:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1992:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1993:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1994:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1995:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1996:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1997:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1998:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_1999:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2000:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2001:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2002:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2003:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2004:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2005:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2006:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2007:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2008:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2009:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2010:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2011:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2012:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2013:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2014:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2015:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2016:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2017:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2018:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2019:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2020:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2021:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2022:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2023:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2024:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2025:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2026:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2027:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2028:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2029:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2030:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2031:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2032:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2033:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2034:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2035:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2036:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2037:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2038:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2039:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2040:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2041:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2042:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2043:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2044:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2045:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2046:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2047:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2048:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2049:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2050:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2051:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2052:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2053:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2054:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2055:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2056:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2057:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2058:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2059:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2060:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2061:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2062:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2063:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2064:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2065:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2066:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2067:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2068:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2069:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2070:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2071:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2072:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2073:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2074:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2075:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2076:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2077:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2078:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2079:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2080:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2081:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2082:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2083:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2084:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2085:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2086:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2087:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2088:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2089:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2090:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2091:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2092:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2093:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2094:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2095:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2096:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2097:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2098:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2099:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2100:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2101:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2102:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2103:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2104:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2105:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2106:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2107:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2108:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2109:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2110:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2111:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2112:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2113:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2114:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2115:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2116:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2117:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2118:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2119:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2120:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2121:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2122:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2123:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2124:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2125:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2126:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2127:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2128:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2129:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2130:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2131:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2132:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2133:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2134:
			system("echo \"\" | paps | lpr");
			break;

		case KANJI_2135:
			system("echo \"\" | paps | lpr");
			break;	

		case KANJI_2136:
			system("echo \"\" | paps | lpr");
			break;
	}
}
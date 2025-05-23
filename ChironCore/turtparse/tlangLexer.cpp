
// Generated from tlang.g4 by ANTLR 4.13.2


#include "tlangLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct TlangLexerStaticData final {
  TlangLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  TlangLexerStaticData(const TlangLexerStaticData&) = delete;
  TlangLexerStaticData(TlangLexerStaticData&&) = delete;
  TlangLexerStaticData& operator=(const TlangLexerStaticData&) = delete;
  TlangLexerStaticData& operator=(TlangLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag tlanglexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<TlangLexerStaticData> tlanglexerLexerStaticData = nullptr;

void tlanglexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (tlanglexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(tlanglexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<TlangLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "T__24", 
      "PLUS", "MINUS", "MUL", "DIV", "PENCOND", "LT", "GT", "EQ", "NEQ", 
      "LTE", "GTE", "AND", "OR", "NOT", "NUM", "VAR", "NAME", "Whitespace"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'voidfunc'", "'{'", "'}'", "'valuefunc'", "'voidreturn'", "'valuereturn'", 
      "'('", "')'", "','", "'procedure'", "'get'", "'if'", "'['", "']'", 
      "'else'", "'repeat'", "'goto'", "'='", "'forward'", "'backward'", 
      "'left'", "'right'", "'penup'", "'pendown'", "'pause'", "'+'", "'-'", 
      "'*'", "'/'", "'pendown\\u003F'", "'<'", "'>'", "'=='", "'!='", "'<='", 
      "'>='", "'&&'", "'||'", "'!'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "PLUS", "MINUS", "MUL", "DIV", 
      "PENCOND", "LT", "GT", "EQ", "NEQ", "LTE", "GTE", "AND", "OR", "NOT", 
      "NUM", "VAR", "NAME", "Whitespace"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,43,293,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,8,
  	1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,11,
  	1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,18,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,
  	1,20,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,22,
  	1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,
  	1,24,1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,29,
  	1,29,1,29,1,29,1,29,1,29,1,29,1,30,1,30,1,31,1,31,1,32,1,32,1,32,1,33,
  	1,33,1,33,1,34,1,34,1,34,1,35,1,35,1,35,1,36,1,36,1,36,1,37,1,37,1,37,
  	1,38,1,38,1,39,4,39,270,8,39,11,39,12,39,271,1,40,1,40,1,40,5,40,277,
  	8,40,10,40,12,40,280,9,40,1,41,4,41,283,8,41,11,41,12,41,284,1,42,4,42,
  	288,8,42,11,42,12,42,289,1,42,1,42,0,0,43,1,1,3,2,5,3,7,4,9,5,11,6,13,
  	7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,
  	19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,
  	61,31,63,32,65,33,67,34,69,35,71,36,73,37,75,38,77,39,79,40,81,41,83,
  	42,85,43,1,0,5,1,0,48,57,3,0,65,90,95,95,97,122,3,0,48,57,65,90,97,122,
  	2,0,65,90,97,122,3,0,9,10,13,13,32,32,296,0,1,1,0,0,0,0,3,1,0,0,0,0,5,
  	1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,
  	0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,
  	27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,
  	0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,
  	0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,
  	59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,
  	0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,
  	0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,1,87,1,0,0,0,3,96,1,0,0,0,5,
  	98,1,0,0,0,7,100,1,0,0,0,9,110,1,0,0,0,11,121,1,0,0,0,13,133,1,0,0,0,
  	15,135,1,0,0,0,17,137,1,0,0,0,19,139,1,0,0,0,21,149,1,0,0,0,23,153,1,
  	0,0,0,25,156,1,0,0,0,27,158,1,0,0,0,29,160,1,0,0,0,31,165,1,0,0,0,33,
  	172,1,0,0,0,35,177,1,0,0,0,37,179,1,0,0,0,39,187,1,0,0,0,41,196,1,0,0,
  	0,43,201,1,0,0,0,45,207,1,0,0,0,47,213,1,0,0,0,49,221,1,0,0,0,51,227,
  	1,0,0,0,53,229,1,0,0,0,55,231,1,0,0,0,57,233,1,0,0,0,59,235,1,0,0,0,61,
  	244,1,0,0,0,63,246,1,0,0,0,65,248,1,0,0,0,67,251,1,0,0,0,69,254,1,0,0,
  	0,71,257,1,0,0,0,73,260,1,0,0,0,75,263,1,0,0,0,77,266,1,0,0,0,79,269,
  	1,0,0,0,81,273,1,0,0,0,83,282,1,0,0,0,85,287,1,0,0,0,87,88,5,118,0,0,
  	88,89,5,111,0,0,89,90,5,105,0,0,90,91,5,100,0,0,91,92,5,102,0,0,92,93,
  	5,117,0,0,93,94,5,110,0,0,94,95,5,99,0,0,95,2,1,0,0,0,96,97,5,123,0,0,
  	97,4,1,0,0,0,98,99,5,125,0,0,99,6,1,0,0,0,100,101,5,118,0,0,101,102,5,
  	97,0,0,102,103,5,108,0,0,103,104,5,117,0,0,104,105,5,101,0,0,105,106,
  	5,102,0,0,106,107,5,117,0,0,107,108,5,110,0,0,108,109,5,99,0,0,109,8,
  	1,0,0,0,110,111,5,118,0,0,111,112,5,111,0,0,112,113,5,105,0,0,113,114,
  	5,100,0,0,114,115,5,114,0,0,115,116,5,101,0,0,116,117,5,116,0,0,117,118,
  	5,117,0,0,118,119,5,114,0,0,119,120,5,110,0,0,120,10,1,0,0,0,121,122,
  	5,118,0,0,122,123,5,97,0,0,123,124,5,108,0,0,124,125,5,117,0,0,125,126,
  	5,101,0,0,126,127,5,114,0,0,127,128,5,101,0,0,128,129,5,116,0,0,129,130,
  	5,117,0,0,130,131,5,114,0,0,131,132,5,110,0,0,132,12,1,0,0,0,133,134,
  	5,40,0,0,134,14,1,0,0,0,135,136,5,41,0,0,136,16,1,0,0,0,137,138,5,44,
  	0,0,138,18,1,0,0,0,139,140,5,112,0,0,140,141,5,114,0,0,141,142,5,111,
  	0,0,142,143,5,99,0,0,143,144,5,101,0,0,144,145,5,100,0,0,145,146,5,117,
  	0,0,146,147,5,114,0,0,147,148,5,101,0,0,148,20,1,0,0,0,149,150,5,103,
  	0,0,150,151,5,101,0,0,151,152,5,116,0,0,152,22,1,0,0,0,153,154,5,105,
  	0,0,154,155,5,102,0,0,155,24,1,0,0,0,156,157,5,91,0,0,157,26,1,0,0,0,
  	158,159,5,93,0,0,159,28,1,0,0,0,160,161,5,101,0,0,161,162,5,108,0,0,162,
  	163,5,115,0,0,163,164,5,101,0,0,164,30,1,0,0,0,165,166,5,114,0,0,166,
  	167,5,101,0,0,167,168,5,112,0,0,168,169,5,101,0,0,169,170,5,97,0,0,170,
  	171,5,116,0,0,171,32,1,0,0,0,172,173,5,103,0,0,173,174,5,111,0,0,174,
  	175,5,116,0,0,175,176,5,111,0,0,176,34,1,0,0,0,177,178,5,61,0,0,178,36,
  	1,0,0,0,179,180,5,102,0,0,180,181,5,111,0,0,181,182,5,114,0,0,182,183,
  	5,119,0,0,183,184,5,97,0,0,184,185,5,114,0,0,185,186,5,100,0,0,186,38,
  	1,0,0,0,187,188,5,98,0,0,188,189,5,97,0,0,189,190,5,99,0,0,190,191,5,
  	107,0,0,191,192,5,119,0,0,192,193,5,97,0,0,193,194,5,114,0,0,194,195,
  	5,100,0,0,195,40,1,0,0,0,196,197,5,108,0,0,197,198,5,101,0,0,198,199,
  	5,102,0,0,199,200,5,116,0,0,200,42,1,0,0,0,201,202,5,114,0,0,202,203,
  	5,105,0,0,203,204,5,103,0,0,204,205,5,104,0,0,205,206,5,116,0,0,206,44,
  	1,0,0,0,207,208,5,112,0,0,208,209,5,101,0,0,209,210,5,110,0,0,210,211,
  	5,117,0,0,211,212,5,112,0,0,212,46,1,0,0,0,213,214,5,112,0,0,214,215,
  	5,101,0,0,215,216,5,110,0,0,216,217,5,100,0,0,217,218,5,111,0,0,218,219,
  	5,119,0,0,219,220,5,110,0,0,220,48,1,0,0,0,221,222,5,112,0,0,222,223,
  	5,97,0,0,223,224,5,117,0,0,224,225,5,115,0,0,225,226,5,101,0,0,226,50,
  	1,0,0,0,227,228,5,43,0,0,228,52,1,0,0,0,229,230,5,45,0,0,230,54,1,0,0,
  	0,231,232,5,42,0,0,232,56,1,0,0,0,233,234,5,47,0,0,234,58,1,0,0,0,235,
  	236,5,112,0,0,236,237,5,101,0,0,237,238,5,110,0,0,238,239,5,100,0,0,239,
  	240,5,111,0,0,240,241,5,119,0,0,241,242,5,110,0,0,242,243,5,63,0,0,243,
  	60,1,0,0,0,244,245,5,60,0,0,245,62,1,0,0,0,246,247,5,62,0,0,247,64,1,
  	0,0,0,248,249,5,61,0,0,249,250,5,61,0,0,250,66,1,0,0,0,251,252,5,33,0,
  	0,252,253,5,61,0,0,253,68,1,0,0,0,254,255,5,60,0,0,255,256,5,61,0,0,256,
  	70,1,0,0,0,257,258,5,62,0,0,258,259,5,61,0,0,259,72,1,0,0,0,260,261,5,
  	38,0,0,261,262,5,38,0,0,262,74,1,0,0,0,263,264,5,124,0,0,264,265,5,124,
  	0,0,265,76,1,0,0,0,266,267,5,33,0,0,267,78,1,0,0,0,268,270,7,0,0,0,269,
  	268,1,0,0,0,270,271,1,0,0,0,271,269,1,0,0,0,271,272,1,0,0,0,272,80,1,
  	0,0,0,273,274,5,58,0,0,274,278,7,1,0,0,275,277,7,2,0,0,276,275,1,0,0,
  	0,277,280,1,0,0,0,278,276,1,0,0,0,278,279,1,0,0,0,279,82,1,0,0,0,280,
  	278,1,0,0,0,281,283,7,3,0,0,282,281,1,0,0,0,283,284,1,0,0,0,284,282,1,
  	0,0,0,284,285,1,0,0,0,285,84,1,0,0,0,286,288,7,4,0,0,287,286,1,0,0,0,
  	288,289,1,0,0,0,289,287,1,0,0,0,289,290,1,0,0,0,290,291,1,0,0,0,291,292,
  	6,42,0,0,292,86,1,0,0,0,5,0,271,278,284,289,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  tlanglexerLexerStaticData = std::move(staticData);
}

}

tlangLexer::tlangLexer(CharStream *input) : Lexer(input) {
  tlangLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *tlanglexerLexerStaticData->atn, tlanglexerLexerStaticData->decisionToDFA, tlanglexerLexerStaticData->sharedContextCache);
}

tlangLexer::~tlangLexer() {
  delete _interpreter;
}

std::string tlangLexer::getGrammarFileName() const {
  return "tlang.g4";
}

const std::vector<std::string>& tlangLexer::getRuleNames() const {
  return tlanglexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& tlangLexer::getChannelNames() const {
  return tlanglexerLexerStaticData->channelNames;
}

const std::vector<std::string>& tlangLexer::getModeNames() const {
  return tlanglexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& tlangLexer::getVocabulary() const {
  return tlanglexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView tlangLexer::getSerializedATN() const {
  return tlanglexerLexerStaticData->serializedATN;
}

const atn::ATN& tlangLexer::getATN() const {
  return *tlanglexerLexerStaticData->atn;
}




void tlangLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  tlanglexerLexerInitialize();
#else
  ::antlr4::internal::call_once(tlanglexerLexerOnceFlag, tlanglexerLexerInitialize);
#endif
}

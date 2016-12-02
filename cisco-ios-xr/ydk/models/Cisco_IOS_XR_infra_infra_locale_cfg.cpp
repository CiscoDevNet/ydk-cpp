
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_infra_infra_locale_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_infra_locale_cfg {

Locale::Locale()
    :
    	country{YType::enumeration, "country"},
	 language{YType::enumeration, "language"}
{
    yang_name = "locale"; yang_parent_name = "Cisco-IOS-XR-infra-infra-locale-cfg";
}

Locale::~Locale()
{
}

bool Locale::has_data() const
{
    return country.is_set
	|| language.is_set;
}

bool Locale::has_operation() const
{
    return is_set(operation)
	|| is_set(country.operation)
	|| is_set(language.operation);
}

std::string Locale::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-infra-locale-cfg:locale";

    return path_buffer.str();

}

EntityPath Locale::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (country.is_set || is_set(country.operation)) leaf_name_data.push_back(country.get_name_leafdata());
    if (language.is_set || is_set(language.operation)) leaf_name_data.push_back(language.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Locale::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Locale::get_children()
{
    return children;
}

void Locale::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "country")
    {
        country = value;
    }
    if(value_path == "language")
    {
        language = value;
    }
}

std::unique_ptr<Entity> Locale::clone_ptr()
{
    return std::make_unique<Locale>();
}

const Enum::Value LocaleCountryEnum::ad {1, "ad"};
const Enum::Value LocaleCountryEnum::ae {2, "ae"};
const Enum::Value LocaleCountryEnum::af {3, "af"};
const Enum::Value LocaleCountryEnum::ag {4, "ag"};
const Enum::Value LocaleCountryEnum::ai {5, "ai"};
const Enum::Value LocaleCountryEnum::al {6, "al"};
const Enum::Value LocaleCountryEnum::am {7, "am"};
const Enum::Value LocaleCountryEnum::an {8, "an"};
const Enum::Value LocaleCountryEnum::ao {9, "ao"};
const Enum::Value LocaleCountryEnum::aq {10, "aq"};
const Enum::Value LocaleCountryEnum::ar {11, "ar"};
const Enum::Value LocaleCountryEnum::as {12, "as"};
const Enum::Value LocaleCountryEnum::at {13, "at"};
const Enum::Value LocaleCountryEnum::au {14, "au"};
const Enum::Value LocaleCountryEnum::aw {15, "aw"};
const Enum::Value LocaleCountryEnum::az {16, "az"};
const Enum::Value LocaleCountryEnum::ba {17, "ba"};
const Enum::Value LocaleCountryEnum::bb {18, "bb"};
const Enum::Value LocaleCountryEnum::bd {19, "bd"};
const Enum::Value LocaleCountryEnum::be {20, "be"};
const Enum::Value LocaleCountryEnum::bf {21, "bf"};
const Enum::Value LocaleCountryEnum::bg {22, "bg"};
const Enum::Value LocaleCountryEnum::bh {23, "bh"};
const Enum::Value LocaleCountryEnum::bi {24, "bi"};
const Enum::Value LocaleCountryEnum::bj {25, "bj"};
const Enum::Value LocaleCountryEnum::bm {26, "bm"};
const Enum::Value LocaleCountryEnum::bn {27, "bn"};
const Enum::Value LocaleCountryEnum::bo {28, "bo"};
const Enum::Value LocaleCountryEnum::br {29, "br"};
const Enum::Value LocaleCountryEnum::bs {30, "bs"};
const Enum::Value LocaleCountryEnum::bt {31, "bt"};
const Enum::Value LocaleCountryEnum::bv {32, "bv"};
const Enum::Value LocaleCountryEnum::bw {33, "bw"};
const Enum::Value LocaleCountryEnum::by {34, "by"};
const Enum::Value LocaleCountryEnum::bz {35, "bz"};
const Enum::Value LocaleCountryEnum::ca {36, "ca"};
const Enum::Value LocaleCountryEnum::cc {37, "cc"};
const Enum::Value LocaleCountryEnum::cd {38, "cd"};
const Enum::Value LocaleCountryEnum::cf {39, "cf"};
const Enum::Value LocaleCountryEnum::cg {40, "cg"};
const Enum::Value LocaleCountryEnum::ch {41, "ch"};
const Enum::Value LocaleCountryEnum::ci {42, "ci"};
const Enum::Value LocaleCountryEnum::ck {43, "ck"};
const Enum::Value LocaleCountryEnum::cl {44, "cl"};
const Enum::Value LocaleCountryEnum::cm {45, "cm"};
const Enum::Value LocaleCountryEnum::cn {46, "cn"};
const Enum::Value LocaleCountryEnum::co {47, "co"};
const Enum::Value LocaleCountryEnum::cr {48, "cr"};
const Enum::Value LocaleCountryEnum::cu {49, "cu"};
const Enum::Value LocaleCountryEnum::cv {50, "cv"};
const Enum::Value LocaleCountryEnum::cx {51, "cx"};
const Enum::Value LocaleCountryEnum::cy {52, "cy"};
const Enum::Value LocaleCountryEnum::cz {53, "cz"};
const Enum::Value LocaleCountryEnum::de {54, "de"};
const Enum::Value LocaleCountryEnum::dj {55, "dj"};
const Enum::Value LocaleCountryEnum::dk {56, "dk"};
const Enum::Value LocaleCountryEnum::dm {57, "dm"};
const Enum::Value LocaleCountryEnum::do_ {58, "do"};
const Enum::Value LocaleCountryEnum::dz {59, "dz"};
const Enum::Value LocaleCountryEnum::ec {60, "ec"};
const Enum::Value LocaleCountryEnum::ee {61, "ee"};
const Enum::Value LocaleCountryEnum::eg {62, "eg"};
const Enum::Value LocaleCountryEnum::eh {63, "eh"};
const Enum::Value LocaleCountryEnum::er {64, "er"};
const Enum::Value LocaleCountryEnum::es {65, "es"};
const Enum::Value LocaleCountryEnum::et {66, "et"};
const Enum::Value LocaleCountryEnum::fi {67, "fi"};
const Enum::Value LocaleCountryEnum::fj {68, "fj"};
const Enum::Value LocaleCountryEnum::fk {69, "fk"};
const Enum::Value LocaleCountryEnum::fm {70, "fm"};
const Enum::Value LocaleCountryEnum::fo {71, "fo"};
const Enum::Value LocaleCountryEnum::fr {72, "fr"};
const Enum::Value LocaleCountryEnum::ga {73, "ga"};
const Enum::Value LocaleCountryEnum::gb {74, "gb"};
const Enum::Value LocaleCountryEnum::gd {75, "gd"};
const Enum::Value LocaleCountryEnum::ge {76, "ge"};
const Enum::Value LocaleCountryEnum::gf {77, "gf"};
const Enum::Value LocaleCountryEnum::gh {78, "gh"};
const Enum::Value LocaleCountryEnum::gi {79, "gi"};
const Enum::Value LocaleCountryEnum::gl {80, "gl"};
const Enum::Value LocaleCountryEnum::gm {81, "gm"};
const Enum::Value LocaleCountryEnum::gn {82, "gn"};
const Enum::Value LocaleCountryEnum::gp {83, "gp"};
const Enum::Value LocaleCountryEnum::gq {84, "gq"};
const Enum::Value LocaleCountryEnum::gr {85, "gr"};
const Enum::Value LocaleCountryEnum::gs {86, "gs"};
const Enum::Value LocaleCountryEnum::gt {87, "gt"};
const Enum::Value LocaleCountryEnum::gu {88, "gu"};
const Enum::Value LocaleCountryEnum::gw {89, "gw"};
const Enum::Value LocaleCountryEnum::gy {90, "gy"};
const Enum::Value LocaleCountryEnum::hk {91, "hk"};
const Enum::Value LocaleCountryEnum::hm {92, "hm"};
const Enum::Value LocaleCountryEnum::hn {93, "hn"};
const Enum::Value LocaleCountryEnum::hr {94, "hr"};
const Enum::Value LocaleCountryEnum::ht {95, "ht"};
const Enum::Value LocaleCountryEnum::hu {96, "hu"};
const Enum::Value LocaleCountryEnum::id {97, "id"};
const Enum::Value LocaleCountryEnum::ie {98, "ie"};
const Enum::Value LocaleCountryEnum::il {99, "il"};
const Enum::Value LocaleCountryEnum::in {100, "in"};
const Enum::Value LocaleCountryEnum::io {101, "io"};
const Enum::Value LocaleCountryEnum::iq {102, "iq"};
const Enum::Value LocaleCountryEnum::ir {103, "ir"};
const Enum::Value LocaleCountryEnum::is {104, "is"};
const Enum::Value LocaleCountryEnum::it {105, "it"};
const Enum::Value LocaleCountryEnum::jm {106, "jm"};
const Enum::Value LocaleCountryEnum::jo {107, "jo"};
const Enum::Value LocaleCountryEnum::jp {108, "jp"};
const Enum::Value LocaleCountryEnum::ke {109, "ke"};
const Enum::Value LocaleCountryEnum::kg {110, "kg"};
const Enum::Value LocaleCountryEnum::kh {111, "kh"};
const Enum::Value LocaleCountryEnum::ki {112, "ki"};
const Enum::Value LocaleCountryEnum::km {113, "km"};
const Enum::Value LocaleCountryEnum::kn {114, "kn"};
const Enum::Value LocaleCountryEnum::kp {115, "kp"};
const Enum::Value LocaleCountryEnum::kr {116, "kr"};
const Enum::Value LocaleCountryEnum::kw {117, "kw"};
const Enum::Value LocaleCountryEnum::ky {118, "ky"};
const Enum::Value LocaleCountryEnum::kz {119, "kz"};
const Enum::Value LocaleCountryEnum::la {120, "la"};
const Enum::Value LocaleCountryEnum::lb {121, "lb"};
const Enum::Value LocaleCountryEnum::lc {122, "lc"};
const Enum::Value LocaleCountryEnum::li {123, "li"};
const Enum::Value LocaleCountryEnum::lk {124, "lk"};
const Enum::Value LocaleCountryEnum::lr {125, "lr"};
const Enum::Value LocaleCountryEnum::ls {126, "ls"};
const Enum::Value LocaleCountryEnum::lt {127, "lt"};
const Enum::Value LocaleCountryEnum::lu {128, "lu"};
const Enum::Value LocaleCountryEnum::lv {129, "lv"};
const Enum::Value LocaleCountryEnum::ly {130, "ly"};
const Enum::Value LocaleCountryEnum::ma {131, "ma"};
const Enum::Value LocaleCountryEnum::mc {132, "mc"};
const Enum::Value LocaleCountryEnum::md {133, "md"};
const Enum::Value LocaleCountryEnum::mg {134, "mg"};
const Enum::Value LocaleCountryEnum::mh {135, "mh"};
const Enum::Value LocaleCountryEnum::mk {136, "mk"};
const Enum::Value LocaleCountryEnum::ml {137, "ml"};
const Enum::Value LocaleCountryEnum::mm {138, "mm"};
const Enum::Value LocaleCountryEnum::mn {139, "mn"};
const Enum::Value LocaleCountryEnum::mo {140, "mo"};
const Enum::Value LocaleCountryEnum::mp {141, "mp"};
const Enum::Value LocaleCountryEnum::mq {142, "mq"};
const Enum::Value LocaleCountryEnum::mr {143, "mr"};
const Enum::Value LocaleCountryEnum::ms {144, "ms"};
const Enum::Value LocaleCountryEnum::mt {145, "mt"};
const Enum::Value LocaleCountryEnum::mu {146, "mu"};
const Enum::Value LocaleCountryEnum::mv {147, "mv"};
const Enum::Value LocaleCountryEnum::mw {148, "mw"};
const Enum::Value LocaleCountryEnum::mx {149, "mx"};
const Enum::Value LocaleCountryEnum::my {150, "my"};
const Enum::Value LocaleCountryEnum::mz {151, "mz"};
const Enum::Value LocaleCountryEnum::na {152, "na"};
const Enum::Value LocaleCountryEnum::nc {153, "nc"};
const Enum::Value LocaleCountryEnum::ne {154, "ne"};
const Enum::Value LocaleCountryEnum::nf {155, "nf"};
const Enum::Value LocaleCountryEnum::ng {156, "ng"};
const Enum::Value LocaleCountryEnum::ni {157, "ni"};
const Enum::Value LocaleCountryEnum::nl {158, "nl"};
const Enum::Value LocaleCountryEnum::no {159, "no"};
const Enum::Value LocaleCountryEnum::np {160, "np"};
const Enum::Value LocaleCountryEnum::nr {161, "nr"};
const Enum::Value LocaleCountryEnum::nu {162, "nu"};
const Enum::Value LocaleCountryEnum::nz {163, "nz"};
const Enum::Value LocaleCountryEnum::om {164, "om"};
const Enum::Value LocaleCountryEnum::pa {165, "pa"};
const Enum::Value LocaleCountryEnum::pe {166, "pe"};
const Enum::Value LocaleCountryEnum::pf {167, "pf"};
const Enum::Value LocaleCountryEnum::pg {168, "pg"};
const Enum::Value LocaleCountryEnum::ph {169, "ph"};
const Enum::Value LocaleCountryEnum::pk {170, "pk"};
const Enum::Value LocaleCountryEnum::pl {171, "pl"};
const Enum::Value LocaleCountryEnum::pm {172, "pm"};
const Enum::Value LocaleCountryEnum::pn {173, "pn"};
const Enum::Value LocaleCountryEnum::pr {174, "pr"};
const Enum::Value LocaleCountryEnum::pt {175, "pt"};
const Enum::Value LocaleCountryEnum::pw {176, "pw"};
const Enum::Value LocaleCountryEnum::py {177, "py"};
const Enum::Value LocaleCountryEnum::qa {178, "qa"};
const Enum::Value LocaleCountryEnum::re {179, "re"};
const Enum::Value LocaleCountryEnum::ro {180, "ro"};
const Enum::Value LocaleCountryEnum::ru {181, "ru"};
const Enum::Value LocaleCountryEnum::rw {182, "rw"};
const Enum::Value LocaleCountryEnum::sa {183, "sa"};
const Enum::Value LocaleCountryEnum::sb {184, "sb"};
const Enum::Value LocaleCountryEnum::sc {185, "sc"};
const Enum::Value LocaleCountryEnum::sd {186, "sd"};
const Enum::Value LocaleCountryEnum::se {187, "se"};
const Enum::Value LocaleCountryEnum::sg {188, "sg"};
const Enum::Value LocaleCountryEnum::sh {189, "sh"};
const Enum::Value LocaleCountryEnum::si {190, "si"};
const Enum::Value LocaleCountryEnum::sj {191, "sj"};
const Enum::Value LocaleCountryEnum::sk {192, "sk"};
const Enum::Value LocaleCountryEnum::sl {193, "sl"};
const Enum::Value LocaleCountryEnum::sm {194, "sm"};
const Enum::Value LocaleCountryEnum::sn {195, "sn"};
const Enum::Value LocaleCountryEnum::so {196, "so"};
const Enum::Value LocaleCountryEnum::sr {197, "sr"};
const Enum::Value LocaleCountryEnum::st {198, "st"};
const Enum::Value LocaleCountryEnum::sv {199, "sv"};
const Enum::Value LocaleCountryEnum::sy {200, "sy"};
const Enum::Value LocaleCountryEnum::sz {201, "sz"};
const Enum::Value LocaleCountryEnum::tc {202, "tc"};
const Enum::Value LocaleCountryEnum::td {203, "td"};
const Enum::Value LocaleCountryEnum::tf {204, "tf"};
const Enum::Value LocaleCountryEnum::tg {205, "tg"};
const Enum::Value LocaleCountryEnum::th {206, "th"};
const Enum::Value LocaleCountryEnum::tj {207, "tj"};
const Enum::Value LocaleCountryEnum::tk {208, "tk"};
const Enum::Value LocaleCountryEnum::tm {209, "tm"};
const Enum::Value LocaleCountryEnum::tn {210, "tn"};
const Enum::Value LocaleCountryEnum::to {211, "to"};
const Enum::Value LocaleCountryEnum::tp {212, "tp"};
const Enum::Value LocaleCountryEnum::tr {213, "tr"};
const Enum::Value LocaleCountryEnum::tt {214, "tt"};
const Enum::Value LocaleCountryEnum::tv {215, "tv"};
const Enum::Value LocaleCountryEnum::tw {216, "tw"};
const Enum::Value LocaleCountryEnum::tz {217, "tz"};
const Enum::Value LocaleCountryEnum::ua {218, "ua"};
const Enum::Value LocaleCountryEnum::ug {219, "ug"};
const Enum::Value LocaleCountryEnum::um {220, "um"};
const Enum::Value LocaleCountryEnum::us {221, "us"};
const Enum::Value LocaleCountryEnum::uy {222, "uy"};
const Enum::Value LocaleCountryEnum::uz {223, "uz"};
const Enum::Value LocaleCountryEnum::va {224, "va"};
const Enum::Value LocaleCountryEnum::vc {225, "vc"};
const Enum::Value LocaleCountryEnum::ve {226, "ve"};
const Enum::Value LocaleCountryEnum::vg {227, "vg"};
const Enum::Value LocaleCountryEnum::vi {228, "vi"};
const Enum::Value LocaleCountryEnum::vn {229, "vn"};
const Enum::Value LocaleCountryEnum::vu {230, "vu"};
const Enum::Value LocaleCountryEnum::wf {231, "wf"};
const Enum::Value LocaleCountryEnum::ws {232, "ws"};
const Enum::Value LocaleCountryEnum::ye {233, "ye"};
const Enum::Value LocaleCountryEnum::yt {234, "yt"};
const Enum::Value LocaleCountryEnum::yu {235, "yu"};
const Enum::Value LocaleCountryEnum::za {236, "za"};
const Enum::Value LocaleCountryEnum::zm {237, "zm"};
const Enum::Value LocaleCountryEnum::zw {238, "zw"};

const Enum::Value LocaleLanguageEnum::aa {1, "aa"};
const Enum::Value LocaleLanguageEnum::ab {2, "ab"};
const Enum::Value LocaleLanguageEnum::af {3, "af"};
const Enum::Value LocaleLanguageEnum::am {4, "am"};
const Enum::Value LocaleLanguageEnum::ar {5, "ar"};
const Enum::Value LocaleLanguageEnum::as {6, "as"};
const Enum::Value LocaleLanguageEnum::ay {7, "ay"};
const Enum::Value LocaleLanguageEnum::az {8, "az"};
const Enum::Value LocaleLanguageEnum::ba {9, "ba"};
const Enum::Value LocaleLanguageEnum::be {10, "be"};
const Enum::Value LocaleLanguageEnum::bg {11, "bg"};
const Enum::Value LocaleLanguageEnum::bh {12, "bh"};
const Enum::Value LocaleLanguageEnum::bi {13, "bi"};
const Enum::Value LocaleLanguageEnum::bn {14, "bn"};
const Enum::Value LocaleLanguageEnum::bo {15, "bo"};
const Enum::Value LocaleLanguageEnum::br {16, "br"};
const Enum::Value LocaleLanguageEnum::ca {17, "ca"};
const Enum::Value LocaleLanguageEnum::co {18, "co"};
const Enum::Value LocaleLanguageEnum::cs {19, "cs"};
const Enum::Value LocaleLanguageEnum::cy {20, "cy"};
const Enum::Value LocaleLanguageEnum::da {21, "da"};
const Enum::Value LocaleLanguageEnum::de {22, "de"};
const Enum::Value LocaleLanguageEnum::dz {23, "dz"};
const Enum::Value LocaleLanguageEnum::el {24, "el"};
const Enum::Value LocaleLanguageEnum::en {25, "en"};
const Enum::Value LocaleLanguageEnum::eo {26, "eo"};
const Enum::Value LocaleLanguageEnum::es {27, "es"};
const Enum::Value LocaleLanguageEnum::et {28, "et"};
const Enum::Value LocaleLanguageEnum::eu {29, "eu"};
const Enum::Value LocaleLanguageEnum::fa {30, "fa"};
const Enum::Value LocaleLanguageEnum::fi {31, "fi"};
const Enum::Value LocaleLanguageEnum::fj {32, "fj"};
const Enum::Value LocaleLanguageEnum::fo {33, "fo"};
const Enum::Value LocaleLanguageEnum::fr {34, "fr"};
const Enum::Value LocaleLanguageEnum::fy {35, "fy"};
const Enum::Value LocaleLanguageEnum::ga {36, "ga"};
const Enum::Value LocaleLanguageEnum::gd {37, "gd"};
const Enum::Value LocaleLanguageEnum::gl {38, "gl"};
const Enum::Value LocaleLanguageEnum::gn {39, "gn"};
const Enum::Value LocaleLanguageEnum::gu {40, "gu"};
const Enum::Value LocaleLanguageEnum::ha {41, "ha"};
const Enum::Value LocaleLanguageEnum::he {42, "he"};
const Enum::Value LocaleLanguageEnum::hi {43, "hi"};
const Enum::Value LocaleLanguageEnum::hr {44, "hr"};
const Enum::Value LocaleLanguageEnum::hu {45, "hu"};
const Enum::Value LocaleLanguageEnum::hy {46, "hy"};
const Enum::Value LocaleLanguageEnum::ia {47, "ia"};
const Enum::Value LocaleLanguageEnum::id {48, "id"};
const Enum::Value LocaleLanguageEnum::ie {49, "ie"};
const Enum::Value LocaleLanguageEnum::ik {50, "ik"};
const Enum::Value LocaleLanguageEnum::is {51, "is"};
const Enum::Value LocaleLanguageEnum::it {52, "it"};
const Enum::Value LocaleLanguageEnum::iu {53, "iu"};
const Enum::Value LocaleLanguageEnum::ja {54, "ja"};
const Enum::Value LocaleLanguageEnum::jw {55, "jw"};
const Enum::Value LocaleLanguageEnum::ka {56, "ka"};
const Enum::Value LocaleLanguageEnum::kk {57, "kk"};
const Enum::Value LocaleLanguageEnum::kl {58, "kl"};
const Enum::Value LocaleLanguageEnum::km {59, "km"};
const Enum::Value LocaleLanguageEnum::kn {60, "kn"};
const Enum::Value LocaleLanguageEnum::ko {61, "ko"};
const Enum::Value LocaleLanguageEnum::ks {62, "ks"};
const Enum::Value LocaleLanguageEnum::ku {63, "ku"};
const Enum::Value LocaleLanguageEnum::ky {64, "ky"};
const Enum::Value LocaleLanguageEnum::la {65, "la"};
const Enum::Value LocaleLanguageEnum::ln {66, "ln"};
const Enum::Value LocaleLanguageEnum::lo {67, "lo"};
const Enum::Value LocaleLanguageEnum::lt {68, "lt"};
const Enum::Value LocaleLanguageEnum::lv {69, "lv"};
const Enum::Value LocaleLanguageEnum::mg {70, "mg"};
const Enum::Value LocaleLanguageEnum::mi {71, "mi"};
const Enum::Value LocaleLanguageEnum::mk {72, "mk"};
const Enum::Value LocaleLanguageEnum::ml {73, "ml"};
const Enum::Value LocaleLanguageEnum::mn {74, "mn"};
const Enum::Value LocaleLanguageEnum::mo {75, "mo"};
const Enum::Value LocaleLanguageEnum::mr {76, "mr"};
const Enum::Value LocaleLanguageEnum::ms {77, "ms"};
const Enum::Value LocaleLanguageEnum::mt {78, "mt"};
const Enum::Value LocaleLanguageEnum::my {79, "my"};
const Enum::Value LocaleLanguageEnum::na {80, "na"};
const Enum::Value LocaleLanguageEnum::ne {81, "ne"};
const Enum::Value LocaleLanguageEnum::nl {82, "nl"};
const Enum::Value LocaleLanguageEnum::no {83, "no"};
const Enum::Value LocaleLanguageEnum::oc {84, "oc"};
const Enum::Value LocaleLanguageEnum::om {85, "om"};
const Enum::Value LocaleLanguageEnum::or_ {86, "or"};
const Enum::Value LocaleLanguageEnum::pa {87, "pa"};
const Enum::Value LocaleLanguageEnum::pl {88, "pl"};
const Enum::Value LocaleLanguageEnum::ps {89, "ps"};
const Enum::Value LocaleLanguageEnum::pt {90, "pt"};
const Enum::Value LocaleLanguageEnum::qu {91, "qu"};
const Enum::Value LocaleLanguageEnum::rm {92, "rm"};
const Enum::Value LocaleLanguageEnum::rn {93, "rn"};
const Enum::Value LocaleLanguageEnum::ro {94, "ro"};
const Enum::Value LocaleLanguageEnum::ru {95, "ru"};
const Enum::Value LocaleLanguageEnum::rw {96, "rw"};
const Enum::Value LocaleLanguageEnum::sa {97, "sa"};
const Enum::Value LocaleLanguageEnum::sd {98, "sd"};
const Enum::Value LocaleLanguageEnum::sg {99, "sg"};
const Enum::Value LocaleLanguageEnum::sh {100, "sh"};
const Enum::Value LocaleLanguageEnum::si {101, "si"};
const Enum::Value LocaleLanguageEnum::sk {102, "sk"};
const Enum::Value LocaleLanguageEnum::sl {103, "sl"};
const Enum::Value LocaleLanguageEnum::sm {104, "sm"};
const Enum::Value LocaleLanguageEnum::sn {105, "sn"};
const Enum::Value LocaleLanguageEnum::so {106, "so"};
const Enum::Value LocaleLanguageEnum::sq {107, "sq"};
const Enum::Value LocaleLanguageEnum::sr {108, "sr"};
const Enum::Value LocaleLanguageEnum::ss {109, "ss"};
const Enum::Value LocaleLanguageEnum::st {110, "st"};
const Enum::Value LocaleLanguageEnum::su {111, "su"};
const Enum::Value LocaleLanguageEnum::sv {112, "sv"};
const Enum::Value LocaleLanguageEnum::sw {113, "sw"};
const Enum::Value LocaleLanguageEnum::ta {114, "ta"};
const Enum::Value LocaleLanguageEnum::te {115, "te"};
const Enum::Value LocaleLanguageEnum::tg {116, "tg"};
const Enum::Value LocaleLanguageEnum::th {117, "th"};
const Enum::Value LocaleLanguageEnum::ti {118, "ti"};
const Enum::Value LocaleLanguageEnum::tk {119, "tk"};
const Enum::Value LocaleLanguageEnum::tl {120, "tl"};
const Enum::Value LocaleLanguageEnum::tn {121, "tn"};
const Enum::Value LocaleLanguageEnum::to {122, "to"};
const Enum::Value LocaleLanguageEnum::tr {123, "tr"};
const Enum::Value LocaleLanguageEnum::ts {124, "ts"};
const Enum::Value LocaleLanguageEnum::tt {125, "tt"};
const Enum::Value LocaleLanguageEnum::tw {126, "tw"};
const Enum::Value LocaleLanguageEnum::ug {127, "ug"};
const Enum::Value LocaleLanguageEnum::uk {128, "uk"};
const Enum::Value LocaleLanguageEnum::ur {129, "ur"};
const Enum::Value LocaleLanguageEnum::uz {130, "uz"};
const Enum::Value LocaleLanguageEnum::vi {131, "vi"};
const Enum::Value LocaleLanguageEnum::vo {132, "vo"};
const Enum::Value LocaleLanguageEnum::wo {133, "wo"};
const Enum::Value LocaleLanguageEnum::xh {134, "xh"};
const Enum::Value LocaleLanguageEnum::yi {135, "yi"};
const Enum::Value LocaleLanguageEnum::yo {136, "yo"};
const Enum::Value LocaleLanguageEnum::za {137, "za"};
const Enum::Value LocaleLanguageEnum::zh {138, "zh"};
const Enum::Value LocaleLanguageEnum::zu {139, "zu"};


}
}


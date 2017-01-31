
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
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
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

const Enum::YLeaf LocaleCountryEnum::ad {1, "ad"};
const Enum::YLeaf LocaleCountryEnum::ae {2, "ae"};
const Enum::YLeaf LocaleCountryEnum::af {3, "af"};
const Enum::YLeaf LocaleCountryEnum::ag {4, "ag"};
const Enum::YLeaf LocaleCountryEnum::ai {5, "ai"};
const Enum::YLeaf LocaleCountryEnum::al {6, "al"};
const Enum::YLeaf LocaleCountryEnum::am {7, "am"};
const Enum::YLeaf LocaleCountryEnum::an {8, "an"};
const Enum::YLeaf LocaleCountryEnum::ao {9, "ao"};
const Enum::YLeaf LocaleCountryEnum::aq {10, "aq"};
const Enum::YLeaf LocaleCountryEnum::ar {11, "ar"};
const Enum::YLeaf LocaleCountryEnum::as {12, "as"};
const Enum::YLeaf LocaleCountryEnum::at {13, "at"};
const Enum::YLeaf LocaleCountryEnum::au {14, "au"};
const Enum::YLeaf LocaleCountryEnum::aw {15, "aw"};
const Enum::YLeaf LocaleCountryEnum::az {16, "az"};
const Enum::YLeaf LocaleCountryEnum::ba {17, "ba"};
const Enum::YLeaf LocaleCountryEnum::bb {18, "bb"};
const Enum::YLeaf LocaleCountryEnum::bd {19, "bd"};
const Enum::YLeaf LocaleCountryEnum::be {20, "be"};
const Enum::YLeaf LocaleCountryEnum::bf {21, "bf"};
const Enum::YLeaf LocaleCountryEnum::bg {22, "bg"};
const Enum::YLeaf LocaleCountryEnum::bh {23, "bh"};
const Enum::YLeaf LocaleCountryEnum::bi {24, "bi"};
const Enum::YLeaf LocaleCountryEnum::bj {25, "bj"};
const Enum::YLeaf LocaleCountryEnum::bm {26, "bm"};
const Enum::YLeaf LocaleCountryEnum::bn {27, "bn"};
const Enum::YLeaf LocaleCountryEnum::bo {28, "bo"};
const Enum::YLeaf LocaleCountryEnum::br {29, "br"};
const Enum::YLeaf LocaleCountryEnum::bs {30, "bs"};
const Enum::YLeaf LocaleCountryEnum::bt {31, "bt"};
const Enum::YLeaf LocaleCountryEnum::bv {32, "bv"};
const Enum::YLeaf LocaleCountryEnum::bw {33, "bw"};
const Enum::YLeaf LocaleCountryEnum::by {34, "by"};
const Enum::YLeaf LocaleCountryEnum::bz {35, "bz"};
const Enum::YLeaf LocaleCountryEnum::ca {36, "ca"};
const Enum::YLeaf LocaleCountryEnum::cc {37, "cc"};
const Enum::YLeaf LocaleCountryEnum::cd {38, "cd"};
const Enum::YLeaf LocaleCountryEnum::cf {39, "cf"};
const Enum::YLeaf LocaleCountryEnum::cg {40, "cg"};
const Enum::YLeaf LocaleCountryEnum::ch {41, "ch"};
const Enum::YLeaf LocaleCountryEnum::ci {42, "ci"};
const Enum::YLeaf LocaleCountryEnum::ck {43, "ck"};
const Enum::YLeaf LocaleCountryEnum::cl {44, "cl"};
const Enum::YLeaf LocaleCountryEnum::cm {45, "cm"};
const Enum::YLeaf LocaleCountryEnum::cn {46, "cn"};
const Enum::YLeaf LocaleCountryEnum::co {47, "co"};
const Enum::YLeaf LocaleCountryEnum::cr {48, "cr"};
const Enum::YLeaf LocaleCountryEnum::cu {49, "cu"};
const Enum::YLeaf LocaleCountryEnum::cv {50, "cv"};
const Enum::YLeaf LocaleCountryEnum::cx {51, "cx"};
const Enum::YLeaf LocaleCountryEnum::cy {52, "cy"};
const Enum::YLeaf LocaleCountryEnum::cz {53, "cz"};
const Enum::YLeaf LocaleCountryEnum::de {54, "de"};
const Enum::YLeaf LocaleCountryEnum::dj {55, "dj"};
const Enum::YLeaf LocaleCountryEnum::dk {56, "dk"};
const Enum::YLeaf LocaleCountryEnum::dm {57, "dm"};
const Enum::YLeaf LocaleCountryEnum::do_ {58, "do"};
const Enum::YLeaf LocaleCountryEnum::dz {59, "dz"};
const Enum::YLeaf LocaleCountryEnum::ec {60, "ec"};
const Enum::YLeaf LocaleCountryEnum::ee {61, "ee"};
const Enum::YLeaf LocaleCountryEnum::eg {62, "eg"};
const Enum::YLeaf LocaleCountryEnum::eh {63, "eh"};
const Enum::YLeaf LocaleCountryEnum::er {64, "er"};
const Enum::YLeaf LocaleCountryEnum::es {65, "es"};
const Enum::YLeaf LocaleCountryEnum::et {66, "et"};
const Enum::YLeaf LocaleCountryEnum::fi {67, "fi"};
const Enum::YLeaf LocaleCountryEnum::fj {68, "fj"};
const Enum::YLeaf LocaleCountryEnum::fk {69, "fk"};
const Enum::YLeaf LocaleCountryEnum::fm {70, "fm"};
const Enum::YLeaf LocaleCountryEnum::fo {71, "fo"};
const Enum::YLeaf LocaleCountryEnum::fr {72, "fr"};
const Enum::YLeaf LocaleCountryEnum::ga {73, "ga"};
const Enum::YLeaf LocaleCountryEnum::gb {74, "gb"};
const Enum::YLeaf LocaleCountryEnum::gd {75, "gd"};
const Enum::YLeaf LocaleCountryEnum::ge {76, "ge"};
const Enum::YLeaf LocaleCountryEnum::gf {77, "gf"};
const Enum::YLeaf LocaleCountryEnum::gh {78, "gh"};
const Enum::YLeaf LocaleCountryEnum::gi {79, "gi"};
const Enum::YLeaf LocaleCountryEnum::gl {80, "gl"};
const Enum::YLeaf LocaleCountryEnum::gm {81, "gm"};
const Enum::YLeaf LocaleCountryEnum::gn {82, "gn"};
const Enum::YLeaf LocaleCountryEnum::gp {83, "gp"};
const Enum::YLeaf LocaleCountryEnum::gq {84, "gq"};
const Enum::YLeaf LocaleCountryEnum::gr {85, "gr"};
const Enum::YLeaf LocaleCountryEnum::gs {86, "gs"};
const Enum::YLeaf LocaleCountryEnum::gt {87, "gt"};
const Enum::YLeaf LocaleCountryEnum::gu {88, "gu"};
const Enum::YLeaf LocaleCountryEnum::gw {89, "gw"};
const Enum::YLeaf LocaleCountryEnum::gy {90, "gy"};
const Enum::YLeaf LocaleCountryEnum::hk {91, "hk"};
const Enum::YLeaf LocaleCountryEnum::hm {92, "hm"};
const Enum::YLeaf LocaleCountryEnum::hn {93, "hn"};
const Enum::YLeaf LocaleCountryEnum::hr {94, "hr"};
const Enum::YLeaf LocaleCountryEnum::ht {95, "ht"};
const Enum::YLeaf LocaleCountryEnum::hu {96, "hu"};
const Enum::YLeaf LocaleCountryEnum::id {97, "id"};
const Enum::YLeaf LocaleCountryEnum::ie {98, "ie"};
const Enum::YLeaf LocaleCountryEnum::il {99, "il"};
const Enum::YLeaf LocaleCountryEnum::in {100, "in"};
const Enum::YLeaf LocaleCountryEnum::io {101, "io"};
const Enum::YLeaf LocaleCountryEnum::iq {102, "iq"};
const Enum::YLeaf LocaleCountryEnum::ir {103, "ir"};
const Enum::YLeaf LocaleCountryEnum::is {104, "is"};
const Enum::YLeaf LocaleCountryEnum::it {105, "it"};
const Enum::YLeaf LocaleCountryEnum::jm {106, "jm"};
const Enum::YLeaf LocaleCountryEnum::jo {107, "jo"};
const Enum::YLeaf LocaleCountryEnum::jp {108, "jp"};
const Enum::YLeaf LocaleCountryEnum::ke {109, "ke"};
const Enum::YLeaf LocaleCountryEnum::kg {110, "kg"};
const Enum::YLeaf LocaleCountryEnum::kh {111, "kh"};
const Enum::YLeaf LocaleCountryEnum::ki {112, "ki"};
const Enum::YLeaf LocaleCountryEnum::km {113, "km"};
const Enum::YLeaf LocaleCountryEnum::kn {114, "kn"};
const Enum::YLeaf LocaleCountryEnum::kp {115, "kp"};
const Enum::YLeaf LocaleCountryEnum::kr {116, "kr"};
const Enum::YLeaf LocaleCountryEnum::kw {117, "kw"};
const Enum::YLeaf LocaleCountryEnum::ky {118, "ky"};
const Enum::YLeaf LocaleCountryEnum::kz {119, "kz"};
const Enum::YLeaf LocaleCountryEnum::la {120, "la"};
const Enum::YLeaf LocaleCountryEnum::lb {121, "lb"};
const Enum::YLeaf LocaleCountryEnum::lc {122, "lc"};
const Enum::YLeaf LocaleCountryEnum::li {123, "li"};
const Enum::YLeaf LocaleCountryEnum::lk {124, "lk"};
const Enum::YLeaf LocaleCountryEnum::lr {125, "lr"};
const Enum::YLeaf LocaleCountryEnum::ls {126, "ls"};
const Enum::YLeaf LocaleCountryEnum::lt {127, "lt"};
const Enum::YLeaf LocaleCountryEnum::lu {128, "lu"};
const Enum::YLeaf LocaleCountryEnum::lv {129, "lv"};
const Enum::YLeaf LocaleCountryEnum::ly {130, "ly"};
const Enum::YLeaf LocaleCountryEnum::ma {131, "ma"};
const Enum::YLeaf LocaleCountryEnum::mc {132, "mc"};
const Enum::YLeaf LocaleCountryEnum::md {133, "md"};
const Enum::YLeaf LocaleCountryEnum::mg {134, "mg"};
const Enum::YLeaf LocaleCountryEnum::mh {135, "mh"};
const Enum::YLeaf LocaleCountryEnum::mk {136, "mk"};
const Enum::YLeaf LocaleCountryEnum::ml {137, "ml"};
const Enum::YLeaf LocaleCountryEnum::mm {138, "mm"};
const Enum::YLeaf LocaleCountryEnum::mn {139, "mn"};
const Enum::YLeaf LocaleCountryEnum::mo {140, "mo"};
const Enum::YLeaf LocaleCountryEnum::mp {141, "mp"};
const Enum::YLeaf LocaleCountryEnum::mq {142, "mq"};
const Enum::YLeaf LocaleCountryEnum::mr {143, "mr"};
const Enum::YLeaf LocaleCountryEnum::ms {144, "ms"};
const Enum::YLeaf LocaleCountryEnum::mt {145, "mt"};
const Enum::YLeaf LocaleCountryEnum::mu {146, "mu"};
const Enum::YLeaf LocaleCountryEnum::mv {147, "mv"};
const Enum::YLeaf LocaleCountryEnum::mw {148, "mw"};
const Enum::YLeaf LocaleCountryEnum::mx {149, "mx"};
const Enum::YLeaf LocaleCountryEnum::my {150, "my"};
const Enum::YLeaf LocaleCountryEnum::mz {151, "mz"};
const Enum::YLeaf LocaleCountryEnum::na {152, "na"};
const Enum::YLeaf LocaleCountryEnum::nc {153, "nc"};
const Enum::YLeaf LocaleCountryEnum::ne {154, "ne"};
const Enum::YLeaf LocaleCountryEnum::nf {155, "nf"};
const Enum::YLeaf LocaleCountryEnum::ng {156, "ng"};
const Enum::YLeaf LocaleCountryEnum::ni {157, "ni"};
const Enum::YLeaf LocaleCountryEnum::nl {158, "nl"};
const Enum::YLeaf LocaleCountryEnum::no {159, "no"};
const Enum::YLeaf LocaleCountryEnum::np {160, "np"};
const Enum::YLeaf LocaleCountryEnum::nr {161, "nr"};
const Enum::YLeaf LocaleCountryEnum::nu {162, "nu"};
const Enum::YLeaf LocaleCountryEnum::nz {163, "nz"};
const Enum::YLeaf LocaleCountryEnum::om {164, "om"};
const Enum::YLeaf LocaleCountryEnum::pa {165, "pa"};
const Enum::YLeaf LocaleCountryEnum::pe {166, "pe"};
const Enum::YLeaf LocaleCountryEnum::pf {167, "pf"};
const Enum::YLeaf LocaleCountryEnum::pg {168, "pg"};
const Enum::YLeaf LocaleCountryEnum::ph {169, "ph"};
const Enum::YLeaf LocaleCountryEnum::pk {170, "pk"};
const Enum::YLeaf LocaleCountryEnum::pl {171, "pl"};
const Enum::YLeaf LocaleCountryEnum::pm {172, "pm"};
const Enum::YLeaf LocaleCountryEnum::pn {173, "pn"};
const Enum::YLeaf LocaleCountryEnum::pr {174, "pr"};
const Enum::YLeaf LocaleCountryEnum::pt {175, "pt"};
const Enum::YLeaf LocaleCountryEnum::pw {176, "pw"};
const Enum::YLeaf LocaleCountryEnum::py {177, "py"};
const Enum::YLeaf LocaleCountryEnum::qa {178, "qa"};
const Enum::YLeaf LocaleCountryEnum::re {179, "re"};
const Enum::YLeaf LocaleCountryEnum::ro {180, "ro"};
const Enum::YLeaf LocaleCountryEnum::ru {181, "ru"};
const Enum::YLeaf LocaleCountryEnum::rw {182, "rw"};
const Enum::YLeaf LocaleCountryEnum::sa {183, "sa"};
const Enum::YLeaf LocaleCountryEnum::sb {184, "sb"};
const Enum::YLeaf LocaleCountryEnum::sc {185, "sc"};
const Enum::YLeaf LocaleCountryEnum::sd {186, "sd"};
const Enum::YLeaf LocaleCountryEnum::se {187, "se"};
const Enum::YLeaf LocaleCountryEnum::sg {188, "sg"};
const Enum::YLeaf LocaleCountryEnum::sh {189, "sh"};
const Enum::YLeaf LocaleCountryEnum::si {190, "si"};
const Enum::YLeaf LocaleCountryEnum::sj {191, "sj"};
const Enum::YLeaf LocaleCountryEnum::sk {192, "sk"};
const Enum::YLeaf LocaleCountryEnum::sl {193, "sl"};
const Enum::YLeaf LocaleCountryEnum::sm {194, "sm"};
const Enum::YLeaf LocaleCountryEnum::sn {195, "sn"};
const Enum::YLeaf LocaleCountryEnum::so {196, "so"};
const Enum::YLeaf LocaleCountryEnum::sr {197, "sr"};
const Enum::YLeaf LocaleCountryEnum::st {198, "st"};
const Enum::YLeaf LocaleCountryEnum::sv {199, "sv"};
const Enum::YLeaf LocaleCountryEnum::sy {200, "sy"};
const Enum::YLeaf LocaleCountryEnum::sz {201, "sz"};
const Enum::YLeaf LocaleCountryEnum::tc {202, "tc"};
const Enum::YLeaf LocaleCountryEnum::td {203, "td"};
const Enum::YLeaf LocaleCountryEnum::tf {204, "tf"};
const Enum::YLeaf LocaleCountryEnum::tg {205, "tg"};
const Enum::YLeaf LocaleCountryEnum::th {206, "th"};
const Enum::YLeaf LocaleCountryEnum::tj {207, "tj"};
const Enum::YLeaf LocaleCountryEnum::tk {208, "tk"};
const Enum::YLeaf LocaleCountryEnum::tm {209, "tm"};
const Enum::YLeaf LocaleCountryEnum::tn {210, "tn"};
const Enum::YLeaf LocaleCountryEnum::to {211, "to"};
const Enum::YLeaf LocaleCountryEnum::tp {212, "tp"};
const Enum::YLeaf LocaleCountryEnum::tr {213, "tr"};
const Enum::YLeaf LocaleCountryEnum::tt {214, "tt"};
const Enum::YLeaf LocaleCountryEnum::tv {215, "tv"};
const Enum::YLeaf LocaleCountryEnum::tw {216, "tw"};
const Enum::YLeaf LocaleCountryEnum::tz {217, "tz"};
const Enum::YLeaf LocaleCountryEnum::ua {218, "ua"};
const Enum::YLeaf LocaleCountryEnum::ug {219, "ug"};
const Enum::YLeaf LocaleCountryEnum::um {220, "um"};
const Enum::YLeaf LocaleCountryEnum::us {221, "us"};
const Enum::YLeaf LocaleCountryEnum::uy {222, "uy"};
const Enum::YLeaf LocaleCountryEnum::uz {223, "uz"};
const Enum::YLeaf LocaleCountryEnum::va {224, "va"};
const Enum::YLeaf LocaleCountryEnum::vc {225, "vc"};
const Enum::YLeaf LocaleCountryEnum::ve {226, "ve"};
const Enum::YLeaf LocaleCountryEnum::vg {227, "vg"};
const Enum::YLeaf LocaleCountryEnum::vi {228, "vi"};
const Enum::YLeaf LocaleCountryEnum::vn {229, "vn"};
const Enum::YLeaf LocaleCountryEnum::vu {230, "vu"};
const Enum::YLeaf LocaleCountryEnum::wf {231, "wf"};
const Enum::YLeaf LocaleCountryEnum::ws {232, "ws"};
const Enum::YLeaf LocaleCountryEnum::ye {233, "ye"};
const Enum::YLeaf LocaleCountryEnum::yt {234, "yt"};
const Enum::YLeaf LocaleCountryEnum::yu {235, "yu"};
const Enum::YLeaf LocaleCountryEnum::za {236, "za"};
const Enum::YLeaf LocaleCountryEnum::zm {237, "zm"};
const Enum::YLeaf LocaleCountryEnum::zw {238, "zw"};

const Enum::YLeaf LocaleLanguageEnum::aa {1, "aa"};
const Enum::YLeaf LocaleLanguageEnum::ab {2, "ab"};
const Enum::YLeaf LocaleLanguageEnum::af {3, "af"};
const Enum::YLeaf LocaleLanguageEnum::am {4, "am"};
const Enum::YLeaf LocaleLanguageEnum::ar {5, "ar"};
const Enum::YLeaf LocaleLanguageEnum::as {6, "as"};
const Enum::YLeaf LocaleLanguageEnum::ay {7, "ay"};
const Enum::YLeaf LocaleLanguageEnum::az {8, "az"};
const Enum::YLeaf LocaleLanguageEnum::ba {9, "ba"};
const Enum::YLeaf LocaleLanguageEnum::be {10, "be"};
const Enum::YLeaf LocaleLanguageEnum::bg {11, "bg"};
const Enum::YLeaf LocaleLanguageEnum::bh {12, "bh"};
const Enum::YLeaf LocaleLanguageEnum::bi {13, "bi"};
const Enum::YLeaf LocaleLanguageEnum::bn {14, "bn"};
const Enum::YLeaf LocaleLanguageEnum::bo {15, "bo"};
const Enum::YLeaf LocaleLanguageEnum::br {16, "br"};
const Enum::YLeaf LocaleLanguageEnum::ca {17, "ca"};
const Enum::YLeaf LocaleLanguageEnum::co {18, "co"};
const Enum::YLeaf LocaleLanguageEnum::cs {19, "cs"};
const Enum::YLeaf LocaleLanguageEnum::cy {20, "cy"};
const Enum::YLeaf LocaleLanguageEnum::da {21, "da"};
const Enum::YLeaf LocaleLanguageEnum::de {22, "de"};
const Enum::YLeaf LocaleLanguageEnum::dz {23, "dz"};
const Enum::YLeaf LocaleLanguageEnum::el {24, "el"};
const Enum::YLeaf LocaleLanguageEnum::en {25, "en"};
const Enum::YLeaf LocaleLanguageEnum::eo {26, "eo"};
const Enum::YLeaf LocaleLanguageEnum::es {27, "es"};
const Enum::YLeaf LocaleLanguageEnum::et {28, "et"};
const Enum::YLeaf LocaleLanguageEnum::eu {29, "eu"};
const Enum::YLeaf LocaleLanguageEnum::fa {30, "fa"};
const Enum::YLeaf LocaleLanguageEnum::fi {31, "fi"};
const Enum::YLeaf LocaleLanguageEnum::fj {32, "fj"};
const Enum::YLeaf LocaleLanguageEnum::fo {33, "fo"};
const Enum::YLeaf LocaleLanguageEnum::fr {34, "fr"};
const Enum::YLeaf LocaleLanguageEnum::fy {35, "fy"};
const Enum::YLeaf LocaleLanguageEnum::ga {36, "ga"};
const Enum::YLeaf LocaleLanguageEnum::gd {37, "gd"};
const Enum::YLeaf LocaleLanguageEnum::gl {38, "gl"};
const Enum::YLeaf LocaleLanguageEnum::gn {39, "gn"};
const Enum::YLeaf LocaleLanguageEnum::gu {40, "gu"};
const Enum::YLeaf LocaleLanguageEnum::ha {41, "ha"};
const Enum::YLeaf LocaleLanguageEnum::he {42, "he"};
const Enum::YLeaf LocaleLanguageEnum::hi {43, "hi"};
const Enum::YLeaf LocaleLanguageEnum::hr {44, "hr"};
const Enum::YLeaf LocaleLanguageEnum::hu {45, "hu"};
const Enum::YLeaf LocaleLanguageEnum::hy {46, "hy"};
const Enum::YLeaf LocaleLanguageEnum::ia {47, "ia"};
const Enum::YLeaf LocaleLanguageEnum::id {48, "id"};
const Enum::YLeaf LocaleLanguageEnum::ie {49, "ie"};
const Enum::YLeaf LocaleLanguageEnum::ik {50, "ik"};
const Enum::YLeaf LocaleLanguageEnum::is {51, "is"};
const Enum::YLeaf LocaleLanguageEnum::it {52, "it"};
const Enum::YLeaf LocaleLanguageEnum::iu {53, "iu"};
const Enum::YLeaf LocaleLanguageEnum::ja {54, "ja"};
const Enum::YLeaf LocaleLanguageEnum::jw {55, "jw"};
const Enum::YLeaf LocaleLanguageEnum::ka {56, "ka"};
const Enum::YLeaf LocaleLanguageEnum::kk {57, "kk"};
const Enum::YLeaf LocaleLanguageEnum::kl {58, "kl"};
const Enum::YLeaf LocaleLanguageEnum::km {59, "km"};
const Enum::YLeaf LocaleLanguageEnum::kn {60, "kn"};
const Enum::YLeaf LocaleLanguageEnum::ko {61, "ko"};
const Enum::YLeaf LocaleLanguageEnum::ks {62, "ks"};
const Enum::YLeaf LocaleLanguageEnum::ku {63, "ku"};
const Enum::YLeaf LocaleLanguageEnum::ky {64, "ky"};
const Enum::YLeaf LocaleLanguageEnum::la {65, "la"};
const Enum::YLeaf LocaleLanguageEnum::ln {66, "ln"};
const Enum::YLeaf LocaleLanguageEnum::lo {67, "lo"};
const Enum::YLeaf LocaleLanguageEnum::lt {68, "lt"};
const Enum::YLeaf LocaleLanguageEnum::lv {69, "lv"};
const Enum::YLeaf LocaleLanguageEnum::mg {70, "mg"};
const Enum::YLeaf LocaleLanguageEnum::mi {71, "mi"};
const Enum::YLeaf LocaleLanguageEnum::mk {72, "mk"};
const Enum::YLeaf LocaleLanguageEnum::ml {73, "ml"};
const Enum::YLeaf LocaleLanguageEnum::mn {74, "mn"};
const Enum::YLeaf LocaleLanguageEnum::mo {75, "mo"};
const Enum::YLeaf LocaleLanguageEnum::mr {76, "mr"};
const Enum::YLeaf LocaleLanguageEnum::ms {77, "ms"};
const Enum::YLeaf LocaleLanguageEnum::mt {78, "mt"};
const Enum::YLeaf LocaleLanguageEnum::my {79, "my"};
const Enum::YLeaf LocaleLanguageEnum::na {80, "na"};
const Enum::YLeaf LocaleLanguageEnum::ne {81, "ne"};
const Enum::YLeaf LocaleLanguageEnum::nl {82, "nl"};
const Enum::YLeaf LocaleLanguageEnum::no {83, "no"};
const Enum::YLeaf LocaleLanguageEnum::oc {84, "oc"};
const Enum::YLeaf LocaleLanguageEnum::om {85, "om"};
const Enum::YLeaf LocaleLanguageEnum::or_ {86, "or"};
const Enum::YLeaf LocaleLanguageEnum::pa {87, "pa"};
const Enum::YLeaf LocaleLanguageEnum::pl {88, "pl"};
const Enum::YLeaf LocaleLanguageEnum::ps {89, "ps"};
const Enum::YLeaf LocaleLanguageEnum::pt {90, "pt"};
const Enum::YLeaf LocaleLanguageEnum::qu {91, "qu"};
const Enum::YLeaf LocaleLanguageEnum::rm {92, "rm"};
const Enum::YLeaf LocaleLanguageEnum::rn {93, "rn"};
const Enum::YLeaf LocaleLanguageEnum::ro {94, "ro"};
const Enum::YLeaf LocaleLanguageEnum::ru {95, "ru"};
const Enum::YLeaf LocaleLanguageEnum::rw {96, "rw"};
const Enum::YLeaf LocaleLanguageEnum::sa {97, "sa"};
const Enum::YLeaf LocaleLanguageEnum::sd {98, "sd"};
const Enum::YLeaf LocaleLanguageEnum::sg {99, "sg"};
const Enum::YLeaf LocaleLanguageEnum::sh {100, "sh"};
const Enum::YLeaf LocaleLanguageEnum::si {101, "si"};
const Enum::YLeaf LocaleLanguageEnum::sk {102, "sk"};
const Enum::YLeaf LocaleLanguageEnum::sl {103, "sl"};
const Enum::YLeaf LocaleLanguageEnum::sm {104, "sm"};
const Enum::YLeaf LocaleLanguageEnum::sn {105, "sn"};
const Enum::YLeaf LocaleLanguageEnum::so {106, "so"};
const Enum::YLeaf LocaleLanguageEnum::sq {107, "sq"};
const Enum::YLeaf LocaleLanguageEnum::sr {108, "sr"};
const Enum::YLeaf LocaleLanguageEnum::ss {109, "ss"};
const Enum::YLeaf LocaleLanguageEnum::st {110, "st"};
const Enum::YLeaf LocaleLanguageEnum::su {111, "su"};
const Enum::YLeaf LocaleLanguageEnum::sv {112, "sv"};
const Enum::YLeaf LocaleLanguageEnum::sw {113, "sw"};
const Enum::YLeaf LocaleLanguageEnum::ta {114, "ta"};
const Enum::YLeaf LocaleLanguageEnum::te {115, "te"};
const Enum::YLeaf LocaleLanguageEnum::tg {116, "tg"};
const Enum::YLeaf LocaleLanguageEnum::th {117, "th"};
const Enum::YLeaf LocaleLanguageEnum::ti {118, "ti"};
const Enum::YLeaf LocaleLanguageEnum::tk {119, "tk"};
const Enum::YLeaf LocaleLanguageEnum::tl {120, "tl"};
const Enum::YLeaf LocaleLanguageEnum::tn {121, "tn"};
const Enum::YLeaf LocaleLanguageEnum::to {122, "to"};
const Enum::YLeaf LocaleLanguageEnum::tr {123, "tr"};
const Enum::YLeaf LocaleLanguageEnum::ts {124, "ts"};
const Enum::YLeaf LocaleLanguageEnum::tt {125, "tt"};
const Enum::YLeaf LocaleLanguageEnum::tw {126, "tw"};
const Enum::YLeaf LocaleLanguageEnum::ug {127, "ug"};
const Enum::YLeaf LocaleLanguageEnum::uk {128, "uk"};
const Enum::YLeaf LocaleLanguageEnum::ur {129, "ur"};
const Enum::YLeaf LocaleLanguageEnum::uz {130, "uz"};
const Enum::YLeaf LocaleLanguageEnum::vi {131, "vi"};
const Enum::YLeaf LocaleLanguageEnum::vo {132, "vo"};
const Enum::YLeaf LocaleLanguageEnum::wo {133, "wo"};
const Enum::YLeaf LocaleLanguageEnum::xh {134, "xh"};
const Enum::YLeaf LocaleLanguageEnum::yi {135, "yi"};
const Enum::YLeaf LocaleLanguageEnum::yo {136, "yo"};
const Enum::YLeaf LocaleLanguageEnum::za {137, "za"};
const Enum::YLeaf LocaleLanguageEnum::zh {138, "zh"};
const Enum::YLeaf LocaleLanguageEnum::zu {139, "zu"};


}
}


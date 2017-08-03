
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_infra_locale_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
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
    return is_set(yfilter)
	|| ydk::is_set(country.yfilter)
	|| ydk::is_set(language.yfilter);
}

std::string Locale::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-infra-locale-cfg:locale";

    return path_buffer.str();

}

const EntityPath Locale::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (country.is_set || is_set(country.yfilter)) leaf_name_data.push_back(country.get_name_leafdata());
    if (language.is_set || is_set(language.yfilter)) leaf_name_data.push_back(language.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Locale::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Locale::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Locale::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "country")
    {
        country = value;
        country.value_namespace = name_space;
        country.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "language")
    {
        language = value;
        language.value_namespace = name_space;
        language.value_namespace_prefix = name_space_prefix;
    }
}

void Locale::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "country")
    {
        country.yfilter = yfilter;
    }
    if(value_path == "language")
    {
        language.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Locale::clone_ptr() const
{
    return std::make_shared<Locale>();
}

std::string Locale::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Locale::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Locale::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Locale::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Locale::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "country" || name == "language")
        return true;
    return false;
}

const Enum::YLeaf LocaleLanguage::aa {1, "aa"};
const Enum::YLeaf LocaleLanguage::ab {2, "ab"};
const Enum::YLeaf LocaleLanguage::af {3, "af"};
const Enum::YLeaf LocaleLanguage::am {4, "am"};
const Enum::YLeaf LocaleLanguage::ar {5, "ar"};
const Enum::YLeaf LocaleLanguage::as {6, "as"};
const Enum::YLeaf LocaleLanguage::ay {7, "ay"};
const Enum::YLeaf LocaleLanguage::az {8, "az"};
const Enum::YLeaf LocaleLanguage::ba {9, "ba"};
const Enum::YLeaf LocaleLanguage::be {10, "be"};
const Enum::YLeaf LocaleLanguage::bg {11, "bg"};
const Enum::YLeaf LocaleLanguage::bh {12, "bh"};
const Enum::YLeaf LocaleLanguage::bi {13, "bi"};
const Enum::YLeaf LocaleLanguage::bn {14, "bn"};
const Enum::YLeaf LocaleLanguage::bo {15, "bo"};
const Enum::YLeaf LocaleLanguage::br {16, "br"};
const Enum::YLeaf LocaleLanguage::ca {17, "ca"};
const Enum::YLeaf LocaleLanguage::co {18, "co"};
const Enum::YLeaf LocaleLanguage::cs {19, "cs"};
const Enum::YLeaf LocaleLanguage::cy {20, "cy"};
const Enum::YLeaf LocaleLanguage::da {21, "da"};
const Enum::YLeaf LocaleLanguage::de {22, "de"};
const Enum::YLeaf LocaleLanguage::dz {23, "dz"};
const Enum::YLeaf LocaleLanguage::el {24, "el"};
const Enum::YLeaf LocaleLanguage::en {25, "en"};
const Enum::YLeaf LocaleLanguage::eo {26, "eo"};
const Enum::YLeaf LocaleLanguage::es {27, "es"};
const Enum::YLeaf LocaleLanguage::et {28, "et"};
const Enum::YLeaf LocaleLanguage::eu {29, "eu"};
const Enum::YLeaf LocaleLanguage::fa {30, "fa"};
const Enum::YLeaf LocaleLanguage::fi {31, "fi"};
const Enum::YLeaf LocaleLanguage::fj {32, "fj"};
const Enum::YLeaf LocaleLanguage::fo {33, "fo"};
const Enum::YLeaf LocaleLanguage::fr {34, "fr"};
const Enum::YLeaf LocaleLanguage::fy {35, "fy"};
const Enum::YLeaf LocaleLanguage::ga {36, "ga"};
const Enum::YLeaf LocaleLanguage::gd {37, "gd"};
const Enum::YLeaf LocaleLanguage::gl {38, "gl"};
const Enum::YLeaf LocaleLanguage::gn {39, "gn"};
const Enum::YLeaf LocaleLanguage::gu {40, "gu"};
const Enum::YLeaf LocaleLanguage::ha {41, "ha"};
const Enum::YLeaf LocaleLanguage::he {42, "he"};
const Enum::YLeaf LocaleLanguage::hi {43, "hi"};
const Enum::YLeaf LocaleLanguage::hr {44, "hr"};
const Enum::YLeaf LocaleLanguage::hu {45, "hu"};
const Enum::YLeaf LocaleLanguage::hy {46, "hy"};
const Enum::YLeaf LocaleLanguage::ia {47, "ia"};
const Enum::YLeaf LocaleLanguage::id {48, "id"};
const Enum::YLeaf LocaleLanguage::ie {49, "ie"};
const Enum::YLeaf LocaleLanguage::ik {50, "ik"};
const Enum::YLeaf LocaleLanguage::is {51, "is"};
const Enum::YLeaf LocaleLanguage::it {52, "it"};
const Enum::YLeaf LocaleLanguage::iu {53, "iu"};
const Enum::YLeaf LocaleLanguage::ja {54, "ja"};
const Enum::YLeaf LocaleLanguage::jw {55, "jw"};
const Enum::YLeaf LocaleLanguage::ka {56, "ka"};
const Enum::YLeaf LocaleLanguage::kk {57, "kk"};
const Enum::YLeaf LocaleLanguage::kl {58, "kl"};
const Enum::YLeaf LocaleLanguage::km {59, "km"};
const Enum::YLeaf LocaleLanguage::kn {60, "kn"};
const Enum::YLeaf LocaleLanguage::ko {61, "ko"};
const Enum::YLeaf LocaleLanguage::ks {62, "ks"};
const Enum::YLeaf LocaleLanguage::ku {63, "ku"};
const Enum::YLeaf LocaleLanguage::ky {64, "ky"};
const Enum::YLeaf LocaleLanguage::la {65, "la"};
const Enum::YLeaf LocaleLanguage::ln {66, "ln"};
const Enum::YLeaf LocaleLanguage::lo {67, "lo"};
const Enum::YLeaf LocaleLanguage::lt {68, "lt"};
const Enum::YLeaf LocaleLanguage::lv {69, "lv"};
const Enum::YLeaf LocaleLanguage::mg {70, "mg"};
const Enum::YLeaf LocaleLanguage::mi {71, "mi"};
const Enum::YLeaf LocaleLanguage::mk {72, "mk"};
const Enum::YLeaf LocaleLanguage::ml {73, "ml"};
const Enum::YLeaf LocaleLanguage::mn {74, "mn"};
const Enum::YLeaf LocaleLanguage::mo {75, "mo"};
const Enum::YLeaf LocaleLanguage::mr {76, "mr"};
const Enum::YLeaf LocaleLanguage::ms {77, "ms"};
const Enum::YLeaf LocaleLanguage::mt {78, "mt"};
const Enum::YLeaf LocaleLanguage::my {79, "my"};
const Enum::YLeaf LocaleLanguage::na {80, "na"};
const Enum::YLeaf LocaleLanguage::ne {81, "ne"};
const Enum::YLeaf LocaleLanguage::nl {82, "nl"};
const Enum::YLeaf LocaleLanguage::no {83, "no"};
const Enum::YLeaf LocaleLanguage::oc {84, "oc"};
const Enum::YLeaf LocaleLanguage::om {85, "om"};
const Enum::YLeaf LocaleLanguage::or_ {86, "or"};
const Enum::YLeaf LocaleLanguage::pa {87, "pa"};
const Enum::YLeaf LocaleLanguage::pl {88, "pl"};
const Enum::YLeaf LocaleLanguage::ps {89, "ps"};
const Enum::YLeaf LocaleLanguage::pt {90, "pt"};
const Enum::YLeaf LocaleLanguage::qu {91, "qu"};
const Enum::YLeaf LocaleLanguage::rm {92, "rm"};
const Enum::YLeaf LocaleLanguage::rn {93, "rn"};
const Enum::YLeaf LocaleLanguage::ro {94, "ro"};
const Enum::YLeaf LocaleLanguage::ru {95, "ru"};
const Enum::YLeaf LocaleLanguage::rw {96, "rw"};
const Enum::YLeaf LocaleLanguage::sa {97, "sa"};
const Enum::YLeaf LocaleLanguage::sd {98, "sd"};
const Enum::YLeaf LocaleLanguage::sg {99, "sg"};
const Enum::YLeaf LocaleLanguage::sh {100, "sh"};
const Enum::YLeaf LocaleLanguage::si {101, "si"};
const Enum::YLeaf LocaleLanguage::sk {102, "sk"};
const Enum::YLeaf LocaleLanguage::sl {103, "sl"};
const Enum::YLeaf LocaleLanguage::sm {104, "sm"};
const Enum::YLeaf LocaleLanguage::sn {105, "sn"};
const Enum::YLeaf LocaleLanguage::so {106, "so"};
const Enum::YLeaf LocaleLanguage::sq {107, "sq"};
const Enum::YLeaf LocaleLanguage::sr {108, "sr"};
const Enum::YLeaf LocaleLanguage::ss {109, "ss"};
const Enum::YLeaf LocaleLanguage::st {110, "st"};
const Enum::YLeaf LocaleLanguage::su {111, "su"};
const Enum::YLeaf LocaleLanguage::sv {112, "sv"};
const Enum::YLeaf LocaleLanguage::sw {113, "sw"};
const Enum::YLeaf LocaleLanguage::ta {114, "ta"};
const Enum::YLeaf LocaleLanguage::te {115, "te"};
const Enum::YLeaf LocaleLanguage::tg {116, "tg"};
const Enum::YLeaf LocaleLanguage::th {117, "th"};
const Enum::YLeaf LocaleLanguage::ti {118, "ti"};
const Enum::YLeaf LocaleLanguage::tk {119, "tk"};
const Enum::YLeaf LocaleLanguage::tl {120, "tl"};
const Enum::YLeaf LocaleLanguage::tn {121, "tn"};
const Enum::YLeaf LocaleLanguage::to {122, "to"};
const Enum::YLeaf LocaleLanguage::tr {123, "tr"};
const Enum::YLeaf LocaleLanguage::ts {124, "ts"};
const Enum::YLeaf LocaleLanguage::tt {125, "tt"};
const Enum::YLeaf LocaleLanguage::tw {126, "tw"};
const Enum::YLeaf LocaleLanguage::ug {127, "ug"};
const Enum::YLeaf LocaleLanguage::uk {128, "uk"};
const Enum::YLeaf LocaleLanguage::ur {129, "ur"};
const Enum::YLeaf LocaleLanguage::uz {130, "uz"};
const Enum::YLeaf LocaleLanguage::vi {131, "vi"};
const Enum::YLeaf LocaleLanguage::vo {132, "vo"};
const Enum::YLeaf LocaleLanguage::wo {133, "wo"};
const Enum::YLeaf LocaleLanguage::xh {134, "xh"};
const Enum::YLeaf LocaleLanguage::yi {135, "yi"};
const Enum::YLeaf LocaleLanguage::yo {136, "yo"};
const Enum::YLeaf LocaleLanguage::za {137, "za"};
const Enum::YLeaf LocaleLanguage::zh {138, "zh"};
const Enum::YLeaf LocaleLanguage::zu {139, "zu"};

const Enum::YLeaf LocaleCountry::ad {1, "ad"};
const Enum::YLeaf LocaleCountry::ae {2, "ae"};
const Enum::YLeaf LocaleCountry::af {3, "af"};
const Enum::YLeaf LocaleCountry::ag {4, "ag"};
const Enum::YLeaf LocaleCountry::ai {5, "ai"};
const Enum::YLeaf LocaleCountry::al {6, "al"};
const Enum::YLeaf LocaleCountry::am {7, "am"};
const Enum::YLeaf LocaleCountry::an {8, "an"};
const Enum::YLeaf LocaleCountry::ao {9, "ao"};
const Enum::YLeaf LocaleCountry::aq {10, "aq"};
const Enum::YLeaf LocaleCountry::ar {11, "ar"};
const Enum::YLeaf LocaleCountry::as {12, "as"};
const Enum::YLeaf LocaleCountry::at {13, "at"};
const Enum::YLeaf LocaleCountry::au {14, "au"};
const Enum::YLeaf LocaleCountry::aw {15, "aw"};
const Enum::YLeaf LocaleCountry::az {16, "az"};
const Enum::YLeaf LocaleCountry::ba {17, "ba"};
const Enum::YLeaf LocaleCountry::bb {18, "bb"};
const Enum::YLeaf LocaleCountry::bd {19, "bd"};
const Enum::YLeaf LocaleCountry::be {20, "be"};
const Enum::YLeaf LocaleCountry::bf {21, "bf"};
const Enum::YLeaf LocaleCountry::bg {22, "bg"};
const Enum::YLeaf LocaleCountry::bh {23, "bh"};
const Enum::YLeaf LocaleCountry::bi {24, "bi"};
const Enum::YLeaf LocaleCountry::bj {25, "bj"};
const Enum::YLeaf LocaleCountry::bm {26, "bm"};
const Enum::YLeaf LocaleCountry::bn {27, "bn"};
const Enum::YLeaf LocaleCountry::bo {28, "bo"};
const Enum::YLeaf LocaleCountry::br {29, "br"};
const Enum::YLeaf LocaleCountry::bs {30, "bs"};
const Enum::YLeaf LocaleCountry::bt {31, "bt"};
const Enum::YLeaf LocaleCountry::bv {32, "bv"};
const Enum::YLeaf LocaleCountry::bw {33, "bw"};
const Enum::YLeaf LocaleCountry::by {34, "by"};
const Enum::YLeaf LocaleCountry::bz {35, "bz"};
const Enum::YLeaf LocaleCountry::ca {36, "ca"};
const Enum::YLeaf LocaleCountry::cc {37, "cc"};
const Enum::YLeaf LocaleCountry::cd {38, "cd"};
const Enum::YLeaf LocaleCountry::cf {39, "cf"};
const Enum::YLeaf LocaleCountry::cg {40, "cg"};
const Enum::YLeaf LocaleCountry::ch {41, "ch"};
const Enum::YLeaf LocaleCountry::ci {42, "ci"};
const Enum::YLeaf LocaleCountry::ck {43, "ck"};
const Enum::YLeaf LocaleCountry::cl {44, "cl"};
const Enum::YLeaf LocaleCountry::cm {45, "cm"};
const Enum::YLeaf LocaleCountry::cn {46, "cn"};
const Enum::YLeaf LocaleCountry::co {47, "co"};
const Enum::YLeaf LocaleCountry::cr {48, "cr"};
const Enum::YLeaf LocaleCountry::cu {49, "cu"};
const Enum::YLeaf LocaleCountry::cv {50, "cv"};
const Enum::YLeaf LocaleCountry::cx {51, "cx"};
const Enum::YLeaf LocaleCountry::cy {52, "cy"};
const Enum::YLeaf LocaleCountry::cz {53, "cz"};
const Enum::YLeaf LocaleCountry::de {54, "de"};
const Enum::YLeaf LocaleCountry::dj {55, "dj"};
const Enum::YLeaf LocaleCountry::dk {56, "dk"};
const Enum::YLeaf LocaleCountry::dm {57, "dm"};
const Enum::YLeaf LocaleCountry::do_ {58, "do"};
const Enum::YLeaf LocaleCountry::dz {59, "dz"};
const Enum::YLeaf LocaleCountry::ec {60, "ec"};
const Enum::YLeaf LocaleCountry::ee {61, "ee"};
const Enum::YLeaf LocaleCountry::eg {62, "eg"};
const Enum::YLeaf LocaleCountry::eh {63, "eh"};
const Enum::YLeaf LocaleCountry::er {64, "er"};
const Enum::YLeaf LocaleCountry::es {65, "es"};
const Enum::YLeaf LocaleCountry::et {66, "et"};
const Enum::YLeaf LocaleCountry::fi {67, "fi"};
const Enum::YLeaf LocaleCountry::fj {68, "fj"};
const Enum::YLeaf LocaleCountry::fk {69, "fk"};
const Enum::YLeaf LocaleCountry::fm {70, "fm"};
const Enum::YLeaf LocaleCountry::fo {71, "fo"};
const Enum::YLeaf LocaleCountry::fr {72, "fr"};
const Enum::YLeaf LocaleCountry::ga {73, "ga"};
const Enum::YLeaf LocaleCountry::gb {74, "gb"};
const Enum::YLeaf LocaleCountry::gd {75, "gd"};
const Enum::YLeaf LocaleCountry::ge {76, "ge"};
const Enum::YLeaf LocaleCountry::gf {77, "gf"};
const Enum::YLeaf LocaleCountry::gh {78, "gh"};
const Enum::YLeaf LocaleCountry::gi {79, "gi"};
const Enum::YLeaf LocaleCountry::gl {80, "gl"};
const Enum::YLeaf LocaleCountry::gm {81, "gm"};
const Enum::YLeaf LocaleCountry::gn {82, "gn"};
const Enum::YLeaf LocaleCountry::gp {83, "gp"};
const Enum::YLeaf LocaleCountry::gq {84, "gq"};
const Enum::YLeaf LocaleCountry::gr {85, "gr"};
const Enum::YLeaf LocaleCountry::gs {86, "gs"};
const Enum::YLeaf LocaleCountry::gt {87, "gt"};
const Enum::YLeaf LocaleCountry::gu {88, "gu"};
const Enum::YLeaf LocaleCountry::gw {89, "gw"};
const Enum::YLeaf LocaleCountry::gy {90, "gy"};
const Enum::YLeaf LocaleCountry::hk {91, "hk"};
const Enum::YLeaf LocaleCountry::hm {92, "hm"};
const Enum::YLeaf LocaleCountry::hn {93, "hn"};
const Enum::YLeaf LocaleCountry::hr {94, "hr"};
const Enum::YLeaf LocaleCountry::ht {95, "ht"};
const Enum::YLeaf LocaleCountry::hu {96, "hu"};
const Enum::YLeaf LocaleCountry::id {97, "id"};
const Enum::YLeaf LocaleCountry::ie {98, "ie"};
const Enum::YLeaf LocaleCountry::il {99, "il"};
const Enum::YLeaf LocaleCountry::in {100, "in"};
const Enum::YLeaf LocaleCountry::io {101, "io"};
const Enum::YLeaf LocaleCountry::iq {102, "iq"};
const Enum::YLeaf LocaleCountry::ir {103, "ir"};
const Enum::YLeaf LocaleCountry::is {104, "is"};
const Enum::YLeaf LocaleCountry::it {105, "it"};
const Enum::YLeaf LocaleCountry::jm {106, "jm"};
const Enum::YLeaf LocaleCountry::jo {107, "jo"};
const Enum::YLeaf LocaleCountry::jp {108, "jp"};
const Enum::YLeaf LocaleCountry::ke {109, "ke"};
const Enum::YLeaf LocaleCountry::kg {110, "kg"};
const Enum::YLeaf LocaleCountry::kh {111, "kh"};
const Enum::YLeaf LocaleCountry::ki {112, "ki"};
const Enum::YLeaf LocaleCountry::km {113, "km"};
const Enum::YLeaf LocaleCountry::kn {114, "kn"};
const Enum::YLeaf LocaleCountry::kp {115, "kp"};
const Enum::YLeaf LocaleCountry::kr {116, "kr"};
const Enum::YLeaf LocaleCountry::kw {117, "kw"};
const Enum::YLeaf LocaleCountry::ky {118, "ky"};
const Enum::YLeaf LocaleCountry::kz {119, "kz"};
const Enum::YLeaf LocaleCountry::la {120, "la"};
const Enum::YLeaf LocaleCountry::lb {121, "lb"};
const Enum::YLeaf LocaleCountry::lc {122, "lc"};
const Enum::YLeaf LocaleCountry::li {123, "li"};
const Enum::YLeaf LocaleCountry::lk {124, "lk"};
const Enum::YLeaf LocaleCountry::lr {125, "lr"};
const Enum::YLeaf LocaleCountry::ls {126, "ls"};
const Enum::YLeaf LocaleCountry::lt {127, "lt"};
const Enum::YLeaf LocaleCountry::lu {128, "lu"};
const Enum::YLeaf LocaleCountry::lv {129, "lv"};
const Enum::YLeaf LocaleCountry::ly {130, "ly"};
const Enum::YLeaf LocaleCountry::ma {131, "ma"};
const Enum::YLeaf LocaleCountry::mc {132, "mc"};
const Enum::YLeaf LocaleCountry::md {133, "md"};
const Enum::YLeaf LocaleCountry::mg {134, "mg"};
const Enum::YLeaf LocaleCountry::mh {135, "mh"};
const Enum::YLeaf LocaleCountry::mk {136, "mk"};
const Enum::YLeaf LocaleCountry::ml {137, "ml"};
const Enum::YLeaf LocaleCountry::mm {138, "mm"};
const Enum::YLeaf LocaleCountry::mn {139, "mn"};
const Enum::YLeaf LocaleCountry::mo {140, "mo"};
const Enum::YLeaf LocaleCountry::mp {141, "mp"};
const Enum::YLeaf LocaleCountry::mq {142, "mq"};
const Enum::YLeaf LocaleCountry::mr {143, "mr"};
const Enum::YLeaf LocaleCountry::ms {144, "ms"};
const Enum::YLeaf LocaleCountry::mt {145, "mt"};
const Enum::YLeaf LocaleCountry::mu {146, "mu"};
const Enum::YLeaf LocaleCountry::mv {147, "mv"};
const Enum::YLeaf LocaleCountry::mw {148, "mw"};
const Enum::YLeaf LocaleCountry::mx {149, "mx"};
const Enum::YLeaf LocaleCountry::my {150, "my"};
const Enum::YLeaf LocaleCountry::mz {151, "mz"};
const Enum::YLeaf LocaleCountry::na {152, "na"};
const Enum::YLeaf LocaleCountry::nc {153, "nc"};
const Enum::YLeaf LocaleCountry::ne {154, "ne"};
const Enum::YLeaf LocaleCountry::nf {155, "nf"};
const Enum::YLeaf LocaleCountry::ng {156, "ng"};
const Enum::YLeaf LocaleCountry::ni {157, "ni"};
const Enum::YLeaf LocaleCountry::nl {158, "nl"};
const Enum::YLeaf LocaleCountry::no {159, "no"};
const Enum::YLeaf LocaleCountry::np {160, "np"};
const Enum::YLeaf LocaleCountry::nr {161, "nr"};
const Enum::YLeaf LocaleCountry::nu {162, "nu"};
const Enum::YLeaf LocaleCountry::nz {163, "nz"};
const Enum::YLeaf LocaleCountry::om {164, "om"};
const Enum::YLeaf LocaleCountry::pa {165, "pa"};
const Enum::YLeaf LocaleCountry::pe {166, "pe"};
const Enum::YLeaf LocaleCountry::pf {167, "pf"};
const Enum::YLeaf LocaleCountry::pg {168, "pg"};
const Enum::YLeaf LocaleCountry::ph {169, "ph"};
const Enum::YLeaf LocaleCountry::pk {170, "pk"};
const Enum::YLeaf LocaleCountry::pl {171, "pl"};
const Enum::YLeaf LocaleCountry::pm {172, "pm"};
const Enum::YLeaf LocaleCountry::pn {173, "pn"};
const Enum::YLeaf LocaleCountry::pr {174, "pr"};
const Enum::YLeaf LocaleCountry::pt {175, "pt"};
const Enum::YLeaf LocaleCountry::pw {176, "pw"};
const Enum::YLeaf LocaleCountry::py {177, "py"};
const Enum::YLeaf LocaleCountry::qa {178, "qa"};
const Enum::YLeaf LocaleCountry::re {179, "re"};
const Enum::YLeaf LocaleCountry::ro {180, "ro"};
const Enum::YLeaf LocaleCountry::ru {181, "ru"};
const Enum::YLeaf LocaleCountry::rw {182, "rw"};
const Enum::YLeaf LocaleCountry::sa {183, "sa"};
const Enum::YLeaf LocaleCountry::sb {184, "sb"};
const Enum::YLeaf LocaleCountry::sc {185, "sc"};
const Enum::YLeaf LocaleCountry::sd {186, "sd"};
const Enum::YLeaf LocaleCountry::se {187, "se"};
const Enum::YLeaf LocaleCountry::sg {188, "sg"};
const Enum::YLeaf LocaleCountry::sh {189, "sh"};
const Enum::YLeaf LocaleCountry::si {190, "si"};
const Enum::YLeaf LocaleCountry::sj {191, "sj"};
const Enum::YLeaf LocaleCountry::sk {192, "sk"};
const Enum::YLeaf LocaleCountry::sl {193, "sl"};
const Enum::YLeaf LocaleCountry::sm {194, "sm"};
const Enum::YLeaf LocaleCountry::sn {195, "sn"};
const Enum::YLeaf LocaleCountry::so {196, "so"};
const Enum::YLeaf LocaleCountry::sr {197, "sr"};
const Enum::YLeaf LocaleCountry::st {198, "st"};
const Enum::YLeaf LocaleCountry::sv {199, "sv"};
const Enum::YLeaf LocaleCountry::sy {200, "sy"};
const Enum::YLeaf LocaleCountry::sz {201, "sz"};
const Enum::YLeaf LocaleCountry::tc {202, "tc"};
const Enum::YLeaf LocaleCountry::td {203, "td"};
const Enum::YLeaf LocaleCountry::tf {204, "tf"};
const Enum::YLeaf LocaleCountry::tg {205, "tg"};
const Enum::YLeaf LocaleCountry::th {206, "th"};
const Enum::YLeaf LocaleCountry::tj {207, "tj"};
const Enum::YLeaf LocaleCountry::tk {208, "tk"};
const Enum::YLeaf LocaleCountry::tm {209, "tm"};
const Enum::YLeaf LocaleCountry::tn {210, "tn"};
const Enum::YLeaf LocaleCountry::to {211, "to"};
const Enum::YLeaf LocaleCountry::tp {212, "tp"};
const Enum::YLeaf LocaleCountry::tr {213, "tr"};
const Enum::YLeaf LocaleCountry::tt {214, "tt"};
const Enum::YLeaf LocaleCountry::tv {215, "tv"};
const Enum::YLeaf LocaleCountry::tw {216, "tw"};
const Enum::YLeaf LocaleCountry::tz {217, "tz"};
const Enum::YLeaf LocaleCountry::ua {218, "ua"};
const Enum::YLeaf LocaleCountry::ug {219, "ug"};
const Enum::YLeaf LocaleCountry::um {220, "um"};
const Enum::YLeaf LocaleCountry::us {221, "us"};
const Enum::YLeaf LocaleCountry::uy {222, "uy"};
const Enum::YLeaf LocaleCountry::uz {223, "uz"};
const Enum::YLeaf LocaleCountry::va {224, "va"};
const Enum::YLeaf LocaleCountry::vc {225, "vc"};
const Enum::YLeaf LocaleCountry::ve {226, "ve"};
const Enum::YLeaf LocaleCountry::vg {227, "vg"};
const Enum::YLeaf LocaleCountry::vi {228, "vi"};
const Enum::YLeaf LocaleCountry::vn {229, "vn"};
const Enum::YLeaf LocaleCountry::vu {230, "vu"};
const Enum::YLeaf LocaleCountry::wf {231, "wf"};
const Enum::YLeaf LocaleCountry::ws {232, "ws"};
const Enum::YLeaf LocaleCountry::ye {233, "ye"};
const Enum::YLeaf LocaleCountry::yt {234, "yt"};
const Enum::YLeaf LocaleCountry::yu {235, "yu"};
const Enum::YLeaf LocaleCountry::za {236, "za"};
const Enum::YLeaf LocaleCountry::zm {237, "zm"};
const Enum::YLeaf LocaleCountry::zw {238, "zw"};


}
}



#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_utd.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_utd {

const Enum::YLeaf UtdCategoryType::abortion {0, "abortion"};
const Enum::YLeaf UtdCategoryType::abused_drugs {1, "abused-drugs"};
const Enum::YLeaf UtdCategoryType::adult_and_pornography {2, "adult-and-pornography"};
const Enum::YLeaf UtdCategoryType::alcohol_and_tobacco {3, "alcohol-and-tobacco"};
const Enum::YLeaf UtdCategoryType::auctions {4, "auctions"};
const Enum::YLeaf UtdCategoryType::bot_nets {5, "bot-nets"};
const Enum::YLeaf UtdCategoryType::business_and_economy {6, "business-and-economy"};
const Enum::YLeaf UtdCategoryType::cdns {7, "cdns"};
const Enum::YLeaf UtdCategoryType::cheating {8, "cheating"};
const Enum::YLeaf UtdCategoryType::computer_and_internet_info {9, "computer-and-internet-info"};
const Enum::YLeaf UtdCategoryType::computer_and_internet_security {10, "computer-and-internet-security"};
const Enum::YLeaf UtdCategoryType::confirmed_spam_sources {11, "confirmed-spam-sources"};
const Enum::YLeaf UtdCategoryType::cult_and_occult {12, "cult-and-occult"};
const Enum::YLeaf UtdCategoryType::dating {13, "dating"};
const Enum::YLeaf UtdCategoryType::dead_sites {14, "dead-sites"};
const Enum::YLeaf UtdCategoryType::dynamic_content {15, "dynamic-content"};
const Enum::YLeaf UtdCategoryType::educational_institutions {16, "educational-institutions"};
const Enum::YLeaf UtdCategoryType::entertainment_and_arts {17, "entertainment-and-arts"};
const Enum::YLeaf UtdCategoryType::fashion_and_beauty {18, "fashion-and-beauty"};
const Enum::YLeaf UtdCategoryType::financial_services {19, "financial-services"};
const Enum::YLeaf UtdCategoryType::gambling {20, "gambling"};
const Enum::YLeaf UtdCategoryType::games {21, "games"};
const Enum::YLeaf UtdCategoryType::government {22, "government"};
const Enum::YLeaf UtdCategoryType::gross {23, "gross"};
const Enum::YLeaf UtdCategoryType::hacking {24, "hacking"};
const Enum::YLeaf UtdCategoryType::hate_and_racism {25, "hate-and-racism"};
const Enum::YLeaf UtdCategoryType::health_and_medicine {26, "health-and-medicine"};
const Enum::YLeaf UtdCategoryType::home {27, "home"};
const Enum::YLeaf UtdCategoryType::hunting_and_fishing {28, "hunting-and-fishing"};
const Enum::YLeaf UtdCategoryType::illegal {29, "illegal"};
const Enum::YLeaf UtdCategoryType::image_and_video_search {30, "image-and-video-search"};
const Enum::YLeaf UtdCategoryType::individual_stock_advice_and_tools {31, "individual-stock-advice-and-tools"};
const Enum::YLeaf UtdCategoryType::internet_communications {32, "internet-communications"};
const Enum::YLeaf UtdCategoryType::internet_portals {33, "internet-portals"};
const Enum::YLeaf UtdCategoryType::job_search {34, "job-search"};
const Enum::YLeaf UtdCategoryType::keyloggers_and_monitoring {35, "keyloggers-and-monitoring"};
const Enum::YLeaf UtdCategoryType::kids {36, "kids"};
const Enum::YLeaf UtdCategoryType::legal {37, "legal"};
const Enum::YLeaf UtdCategoryType::local_information {38, "local-information"};
const Enum::YLeaf UtdCategoryType::malware_sites {39, "malware-sites"};
const Enum::YLeaf UtdCategoryType::marijuana {40, "marijuana"};
const Enum::YLeaf UtdCategoryType::military {41, "military"};
const Enum::YLeaf UtdCategoryType::motor_vehicles {42, "motor-vehicles"};
const Enum::YLeaf UtdCategoryType::music {43, "music"};
const Enum::YLeaf UtdCategoryType::news_and_media {44, "news-and-media"};
const Enum::YLeaf UtdCategoryType::nudity {45, "nudity"};
const Enum::YLeaf UtdCategoryType::online_greeting_cards {46, "online-greeting-cards"};
const Enum::YLeaf UtdCategoryType::online_personal_storage {47, "online-personal-storage"};
const Enum::YLeaf UtdCategoryType::open_http_proxies {48, "open-http-proxies"};
const Enum::YLeaf UtdCategoryType::p2p {49, "p2p"};
const Enum::YLeaf UtdCategoryType::parked_sites {50, "parked-sites"};
const Enum::YLeaf UtdCategoryType::pay_to_surf {51, "pay-to-surf"};
const Enum::YLeaf UtdCategoryType::personal_sites_and_blogs {52, "personal-sites-and-blogs"};
const Enum::YLeaf UtdCategoryType::philosophy_and_political_advocacy {53, "philosophy-and-political-advocacy"};
const Enum::YLeaf UtdCategoryType::phishing_and_other_frauds {54, "phishing-and-other-frauds"};
const Enum::YLeaf UtdCategoryType::private_ip_addresses {55, "private-ip-addresses"};
const Enum::YLeaf UtdCategoryType::proxy_avoid_and_anonymizers {56, "proxy-avoid-and-anonymizers"};
const Enum::YLeaf UtdCategoryType::questionable {57, "questionable"};
const Enum::YLeaf UtdCategoryType::real_estate {58, "real-estate"};
const Enum::YLeaf UtdCategoryType::recreation_and_hobbies {59, "recreation-and-hobbies"};
const Enum::YLeaf UtdCategoryType::reference_and_research {60, "reference-and-research"};
const Enum::YLeaf UtdCategoryType::religion {61, "religion"};
const Enum::YLeaf UtdCategoryType::search_engines {62, "search-engines"};
const Enum::YLeaf UtdCategoryType::sex_education {63, "sex-education"};
const Enum::YLeaf UtdCategoryType::shareware_and_freeware {64, "shareware-and-freeware"};
const Enum::YLeaf UtdCategoryType::shopping {65, "shopping"};
const Enum::YLeaf UtdCategoryType::social_network {66, "social-network"};
const Enum::YLeaf UtdCategoryType::society {67, "society"};
const Enum::YLeaf UtdCategoryType::spam_urls {68, "spam-urls"};
const Enum::YLeaf UtdCategoryType::sports {69, "sports"};
const Enum::YLeaf UtdCategoryType::spyware_and_adware {70, "spyware-and-adware"};
const Enum::YLeaf UtdCategoryType::streaming_media {71, "streaming-media"};
const Enum::YLeaf UtdCategoryType::swimsuits_and_intimate_apparel {72, "swimsuits-and-intimate-apparel"};
const Enum::YLeaf UtdCategoryType::training_and_tools {73, "training-and-tools"};
const Enum::YLeaf UtdCategoryType::translation {74, "translation"};
const Enum::YLeaf UtdCategoryType::travel {75, "travel"};
const Enum::YLeaf UtdCategoryType::uncategorized {76, "uncategorized"};
const Enum::YLeaf UtdCategoryType::unconfirmed_spam_sources {77, "unconfirmed-spam-sources"};
const Enum::YLeaf UtdCategoryType::violence {78, "violence"};
const Enum::YLeaf UtdCategoryType::weapons {79, "weapons"};
const Enum::YLeaf UtdCategoryType::web_advertisements {80, "web-advertisements"};
const Enum::YLeaf UtdCategoryType::web_based_email {81, "web-based-email"};
const Enum::YLeaf UtdCategoryType::web_hosting {82, "web-hosting"};


}
}


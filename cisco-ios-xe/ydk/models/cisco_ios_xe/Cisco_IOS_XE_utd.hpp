#ifndef _CISCO_IOS_XE_UTD_
#define _CISCO_IOS_XE_UTD_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_utd {

class UtdCategoryType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf abortion;
        static const ydk::Enum::YLeaf abused_drugs;
        static const ydk::Enum::YLeaf adult_and_pornography;
        static const ydk::Enum::YLeaf alcohol_and_tobacco;
        static const ydk::Enum::YLeaf auctions;
        static const ydk::Enum::YLeaf bot_nets;
        static const ydk::Enum::YLeaf business_and_economy;
        static const ydk::Enum::YLeaf cdns;
        static const ydk::Enum::YLeaf cheating;
        static const ydk::Enum::YLeaf computer_and_internet_info;
        static const ydk::Enum::YLeaf computer_and_internet_security;
        static const ydk::Enum::YLeaf confirmed_spam_sources;
        static const ydk::Enum::YLeaf cult_and_occult;
        static const ydk::Enum::YLeaf dating;
        static const ydk::Enum::YLeaf dead_sites;
        static const ydk::Enum::YLeaf dynamic_content;
        static const ydk::Enum::YLeaf educational_institutions;
        static const ydk::Enum::YLeaf entertainment_and_arts;
        static const ydk::Enum::YLeaf fashion_and_beauty;
        static const ydk::Enum::YLeaf financial_services;
        static const ydk::Enum::YLeaf gambling;
        static const ydk::Enum::YLeaf games;
        static const ydk::Enum::YLeaf government;
        static const ydk::Enum::YLeaf gross;
        static const ydk::Enum::YLeaf hacking;
        static const ydk::Enum::YLeaf hate_and_racism;
        static const ydk::Enum::YLeaf health_and_medicine;
        static const ydk::Enum::YLeaf home;
        static const ydk::Enum::YLeaf hunting_and_fishing;
        static const ydk::Enum::YLeaf illegal;
        static const ydk::Enum::YLeaf image_and_video_search;
        static const ydk::Enum::YLeaf individual_stock_advice_and_tools;
        static const ydk::Enum::YLeaf internet_communications;
        static const ydk::Enum::YLeaf internet_portals;
        static const ydk::Enum::YLeaf job_search;
        static const ydk::Enum::YLeaf keyloggers_and_monitoring;
        static const ydk::Enum::YLeaf kids;
        static const ydk::Enum::YLeaf legal;
        static const ydk::Enum::YLeaf local_information;
        static const ydk::Enum::YLeaf malware_sites;
        static const ydk::Enum::YLeaf marijuana;
        static const ydk::Enum::YLeaf military;
        static const ydk::Enum::YLeaf motor_vehicles;
        static const ydk::Enum::YLeaf music;
        static const ydk::Enum::YLeaf news_and_media;
        static const ydk::Enum::YLeaf nudity;
        static const ydk::Enum::YLeaf online_greeting_cards;
        static const ydk::Enum::YLeaf online_personal_storage;
        static const ydk::Enum::YLeaf open_http_proxies;
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf parked_sites;
        static const ydk::Enum::YLeaf pay_to_surf;
        static const ydk::Enum::YLeaf personal_sites_and_blogs;
        static const ydk::Enum::YLeaf philosophy_and_political_advocacy;
        static const ydk::Enum::YLeaf phishing_and_other_frauds;
        static const ydk::Enum::YLeaf private_ip_addresses;
        static const ydk::Enum::YLeaf proxy_avoid_and_anonymizers;
        static const ydk::Enum::YLeaf questionable;
        static const ydk::Enum::YLeaf real_estate;
        static const ydk::Enum::YLeaf recreation_and_hobbies;
        static const ydk::Enum::YLeaf reference_and_research;
        static const ydk::Enum::YLeaf religion;
        static const ydk::Enum::YLeaf search_engines;
        static const ydk::Enum::YLeaf sex_education;
        static const ydk::Enum::YLeaf shareware_and_freeware;
        static const ydk::Enum::YLeaf shopping;
        static const ydk::Enum::YLeaf social_network;
        static const ydk::Enum::YLeaf society;
        static const ydk::Enum::YLeaf spam_urls;
        static const ydk::Enum::YLeaf sports;
        static const ydk::Enum::YLeaf spyware_and_adware;
        static const ydk::Enum::YLeaf streaming_media;
        static const ydk::Enum::YLeaf swimsuits_and_intimate_apparel;
        static const ydk::Enum::YLeaf training_and_tools;
        static const ydk::Enum::YLeaf translation;
        static const ydk::Enum::YLeaf travel;
        static const ydk::Enum::YLeaf uncategorized;
        static const ydk::Enum::YLeaf unconfirmed_spam_sources;
        static const ydk::Enum::YLeaf violence;
        static const ydk::Enum::YLeaf weapons;
        static const ydk::Enum::YLeaf web_advertisements;
        static const ydk::Enum::YLeaf web_based_email;
        static const ydk::Enum::YLeaf web_hosting;

        static int get_enum_value(const std::string & name) {
            if (name == "abortion") return 0;
            if (name == "abused-drugs") return 1;
            if (name == "adult-and-pornography") return 2;
            if (name == "alcohol-and-tobacco") return 3;
            if (name == "auctions") return 4;
            if (name == "bot-nets") return 5;
            if (name == "business-and-economy") return 6;
            if (name == "cdns") return 7;
            if (name == "cheating") return 8;
            if (name == "computer-and-internet-info") return 9;
            if (name == "computer-and-internet-security") return 10;
            if (name == "confirmed-spam-sources") return 11;
            if (name == "cult-and-occult") return 12;
            if (name == "dating") return 13;
            if (name == "dead-sites") return 14;
            if (name == "dynamic-content") return 15;
            if (name == "educational-institutions") return 16;
            if (name == "entertainment-and-arts") return 17;
            if (name == "fashion-and-beauty") return 18;
            if (name == "financial-services") return 19;
            if (name == "gambling") return 20;
            if (name == "games") return 21;
            if (name == "government") return 22;
            if (name == "gross") return 23;
            if (name == "hacking") return 24;
            if (name == "hate-and-racism") return 25;
            if (name == "health-and-medicine") return 26;
            if (name == "home") return 27;
            if (name == "hunting-and-fishing") return 28;
            if (name == "illegal") return 29;
            if (name == "image-and-video-search") return 30;
            if (name == "individual-stock-advice-and-tools") return 31;
            if (name == "internet-communications") return 32;
            if (name == "internet-portals") return 33;
            if (name == "job-search") return 34;
            if (name == "keyloggers-and-monitoring") return 35;
            if (name == "kids") return 36;
            if (name == "legal") return 37;
            if (name == "local-information") return 38;
            if (name == "malware-sites") return 39;
            if (name == "marijuana") return 40;
            if (name == "military") return 41;
            if (name == "motor-vehicles") return 42;
            if (name == "music") return 43;
            if (name == "news-and-media") return 44;
            if (name == "nudity") return 45;
            if (name == "online-greeting-cards") return 46;
            if (name == "online-personal-storage") return 47;
            if (name == "open-http-proxies") return 48;
            if (name == "p2p") return 49;
            if (name == "parked-sites") return 50;
            if (name == "pay-to-surf") return 51;
            if (name == "personal-sites-and-blogs") return 52;
            if (name == "philosophy-and-political-advocacy") return 53;
            if (name == "phishing-and-other-frauds") return 54;
            if (name == "private-ip-addresses") return 55;
            if (name == "proxy-avoid-and-anonymizers") return 56;
            if (name == "questionable") return 57;
            if (name == "real-estate") return 58;
            if (name == "recreation-and-hobbies") return 59;
            if (name == "reference-and-research") return 60;
            if (name == "religion") return 61;
            if (name == "search-engines") return 62;
            if (name == "sex-education") return 63;
            if (name == "shareware-and-freeware") return 64;
            if (name == "shopping") return 65;
            if (name == "social-network") return 66;
            if (name == "society") return 67;
            if (name == "spam-urls") return 68;
            if (name == "sports") return 69;
            if (name == "spyware-and-adware") return 70;
            if (name == "streaming-media") return 71;
            if (name == "swimsuits-and-intimate-apparel") return 72;
            if (name == "training-and-tools") return 73;
            if (name == "translation") return 74;
            if (name == "travel") return 75;
            if (name == "uncategorized") return 76;
            if (name == "unconfirmed-spam-sources") return 77;
            if (name == "violence") return 78;
            if (name == "weapons") return 79;
            if (name == "web-advertisements") return 80;
            if (name == "web-based-email") return 81;
            if (name == "web-hosting") return 82;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_UTD_ */


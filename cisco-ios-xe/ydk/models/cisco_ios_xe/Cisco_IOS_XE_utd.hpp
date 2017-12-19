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

};


}
}

#endif /* _CISCO_IOS_XE_UTD_ */


#ifndef _CISCO_MEDIA_GATEWAY_MIB_
#define _CISCO_MEDIA_GATEWAY_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_MEDIA_GATEWAY_MIB {

class CiscoMediaGatewayMib : public Entity
{
    public:
        CiscoMediaGatewayMib();
        ~CiscoMediaGatewayMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Cmediagwtable; //type: CiscoMediaGatewayMib::Cmediagwtable
        class Cmgwsignalprotocoltable; //type: CiscoMediaGatewayMib::Cmgwsignalprotocoltable
        class Cmediagwipconfigtable; //type: CiscoMediaGatewayMib::Cmediagwipconfigtable
        class Cmediagwdomainnameconfigtable; //type: CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable
        class Cmediagwdnsipconfigtable; //type: CiscoMediaGatewayMib::Cmediagwdnsipconfigtable
        class Cmgwliftable; //type: CiscoMediaGatewayMib::Cmgwliftable
        class Cmediagwcallcontrolconfigtable; //type: CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable
        class Cmediagwrscstatstable; //type: CiscoMediaGatewayMib::Cmediagwrscstatstable

        std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable> cmediagwcallcontrolconfigtable_;
        std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwdnsipconfigtable> cmediagwdnsipconfigtable_;
        std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable> cmediagwdomainnameconfigtable_;
        std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwipconfigtable> cmediagwipconfigtable_;
        std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwrscstatstable> cmediagwrscstatstable_;
        std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwtable> cmediagwtable_;
        std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmgwliftable> cmgwliftable_;
        std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmgwsignalprotocoltable> cmgwsignalprotocoltable_;
        
}; // CiscoMediaGatewayMib


class CiscoMediaGatewayMib::Cmediagwtable : public Entity
{
    public:
        Cmediagwtable();
        ~Cmediagwtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cmediagwentry; //type: CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry

        std::vector<std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry> > cmediagwentry_;
        
}; // CiscoMediaGatewayMib::Cmediagwtable


class CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry : public Entity
{
    public:
        Cmediagwentry();
        ~Cmediagwentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cmgwindex; //type: int32
        YLeaf cmgwdomainname; //type: string
        YLeaf cmgwphysicalindex; //type: int32
        YLeaf cmgwservicestate; //type: CgwservicestateEnum
        YLeaf cmgwadminstate; //type: CgwadminstateEnum
        YLeaf cmgwgracetime; //type: int32
        YLeaf cmgwvtmappingmode; //type: CmgwvtmappingmodeEnum
        YLeaf cmgwsrcfilterenabled; //type: boolean
        YLeaf cmgwlawinterceptenabled; //type: boolean
        YLeaf cmgwv23enabled; //type: boolean
        class CmgwvtmappingmodeEnum;

}; // CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry


class CiscoMediaGatewayMib::Cmgwsignalprotocoltable : public Entity
{
    public:
        Cmgwsignalprotocoltable();
        ~Cmgwsignalprotocoltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cmgwsignalprotocolentry; //type: CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry

        std::vector<std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry> > cmgwsignalprotocolentry_;
        
}; // CiscoMediaGatewayMib::Cmgwsignalprotocoltable


class CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry : public Entity
{
    public:
        Cmgwsignalprotocolentry();
        ~Cmgwsignalprotocolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::cmgwindex)
        YLeaf cmgwindex;
        YLeaf cmgwsignalprotocolindex; //type: int32
        YLeaf cmgwsignalprotocol; //type: CmgwsignalprotocolEnum
        YLeaf cmgwsignalprotocolversion; //type: string
        YLeaf cmgwsignalprotocolport; //type: int32
        YLeaf cmgwsignalmgcprotocolport; //type: uint16
        YLeaf cmgwsignalprotocolpreference; //type: int32
        YLeaf cmgwsignalprotocolconfigver; //type: string
        class CmgwsignalprotocolEnum;

}; // CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry


class CiscoMediaGatewayMib::Cmediagwipconfigtable : public Entity
{
    public:
        Cmediagwipconfigtable();
        ~Cmediagwipconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cmediagwipconfigentry; //type: CiscoMediaGatewayMib::Cmediagwipconfigtable::Cmediagwipconfigentry

        std::vector<std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwipconfigtable::Cmediagwipconfigentry> > cmediagwipconfigentry_;
        
}; // CiscoMediaGatewayMib::Cmediagwipconfigtable


class CiscoMediaGatewayMib::Cmediagwipconfigtable::Cmediagwipconfigentry : public Entity
{
    public:
        Cmediagwipconfigentry();
        ~Cmediagwipconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::cmgwindex)
        YLeaf cmgwindex;
        YLeaf cmgwipconfigindex; //type: int32
        YLeaf cmgwipconfigifindex; //type: int32
        YLeaf cmgwipconfigvpi; //type: int32
        YLeaf cmgwipconfigvci; //type: int32
        YLeaf cmgwipconfigaddrtype; //type: InetaddresstypeEnum
        YLeaf cmgwipconfigaddress; //type: binary
        YLeaf cmgwipconfigsubnetmask; //type: uint32
        YLeaf cmgwipconfigdefaultgwip; //type: boolean
        YLeaf cmgwipconfigforremotemapping; //type: boolean
        YLeaf cmgwipconfigrowstatus; //type: RowstatusEnum

}; // CiscoMediaGatewayMib::Cmediagwipconfigtable::Cmediagwipconfigentry


class CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable : public Entity
{
    public:
        Cmediagwdomainnameconfigtable();
        ~Cmediagwdomainnameconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cmediagwdomainnameconfigentry; //type: CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry

        std::vector<std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry> > cmediagwdomainnameconfigentry_;
        
}; // CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable


class CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry : public Entity
{
    public:
        Cmediagwdomainnameconfigentry();
        ~Cmediagwdomainnameconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::cmgwindex)
        YLeaf cmgwindex;
        YLeaf cmgwconfigdomainnameindex; //type: int32
        YLeaf cmgwconfigdomainnameentity; //type: CmgwconfigdomainnameentityEnum
        YLeaf cmgwconfigdomainname; //type: string
        YLeaf cmgwconfigdomainnamerowstatus; //type: RowstatusEnum
        class CmgwconfigdomainnameentityEnum;

}; // CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry


class CiscoMediaGatewayMib::Cmediagwdnsipconfigtable : public Entity
{
    public:
        Cmediagwdnsipconfigtable();
        ~Cmediagwdnsipconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cmediagwdnsipconfigentry; //type: CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry

        std::vector<std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry> > cmediagwdnsipconfigentry_;
        
}; // CiscoMediaGatewayMib::Cmediagwdnsipconfigtable


class CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry : public Entity
{
    public:
        Cmediagwdnsipconfigentry();
        ~Cmediagwdnsipconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::cmgwindex)
        YLeaf cmgwindex;
        YLeaf cmgwdnsipindex; //type: int32
        YLeaf cmgwdnsdomainname; //type: string
        YLeaf cmgwdnsiptype; //type: InetaddresstypeEnum
        YLeaf cmgwdnsip; //type: binary
        YLeaf cmgwdnsiprowstatus; //type: RowstatusEnum

}; // CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry


class CiscoMediaGatewayMib::Cmgwliftable : public Entity
{
    public:
        Cmgwliftable();
        ~Cmgwliftable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cmgwlifentry; //type: CiscoMediaGatewayMib::Cmgwliftable::Cmgwlifentry

        std::vector<std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmgwliftable::Cmgwlifentry> > cmgwlifentry_;
        
}; // CiscoMediaGatewayMib::Cmgwliftable


class CiscoMediaGatewayMib::Cmgwliftable::Cmgwlifentry : public Entity
{
    public:
        Cmgwlifentry();
        ~Cmgwlifentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::cmgwindex)
        YLeaf cmgwindex;
        YLeaf cmgwlifnumber; //type: uint32
        YLeaf cmgwlifpvccount; //type: uint32
        YLeaf cmgwlifvoiceifcount; //type: uint32

}; // CiscoMediaGatewayMib::Cmgwliftable::Cmgwlifentry


class CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable : public Entity
{
    public:
        Cmediagwcallcontrolconfigtable();
        ~Cmediagwcallcontrolconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cmediagwcallcontrolconfigentry; //type: CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry

        std::vector<std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry> > cmediagwcallcontrolconfigentry_;
        
}; // CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable


class CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry : public Entity
{
    public:
        Cmediagwcallcontrolconfigentry();
        ~Cmediagwcallcontrolconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::cmgwindex)
        YLeaf cmgwindex;
        YLeaf cmediagwcccfgcontroltos; //type: uint32
        YLeaf cmediagwcccfgbearertos; //type: uint32
        YLeaf cmediagwcccfgntepayload; //type: uint32
        YLeaf cmediagwcccfgnsepayload; //type: uint32
        YLeaf cmediagwcccfgnseresptimer; //type: uint32
        YLeaf cmediagwcccfgvbdjitterdelaymode; //type: CcallcontroljitterdelaymodeEnum
        YLeaf cmediagwcccfgvbdjittermaxdelay; //type: uint32
        YLeaf cmediagwcccfgvbdjitternomdelay; //type: uint32
        YLeaf cmediagwcccfgvbdjittermindelay; //type: uint32
        YLeaf cmediagwcccfgdefaulttoneplanid; //type: uint32
        YLeaf cmediagwcccfgdescrinfoenabled; //type: boolean
        YLeaf cmediagwcccfgdsnameprefix; //type: string
        YLeaf cmediagwcccfgrtpnameprefix; //type: string
        YLeaf cmediagwcccfgaal1svcnameprefix; //type: string
        YLeaf cmediagwcccfgaal2svcnameprefix; //type: string
        YLeaf cmediagwcccfgclusterenabled; //type: CmediagwcccfgclusterenabledEnum
        YLeaf cmediagwcccfgdefbearertraffic; //type: CmediagwcccfgdefbearertrafficEnum
        YLeaf cmediagwcccfgdefrtpnameprefix; //type: string
        class CmediagwcccfgclusterenabledEnum;
        class CmediagwcccfgdefbearertrafficEnum;

}; // CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry


class CiscoMediaGatewayMib::Cmediagwrscstatstable : public Entity
{
    public:
        Cmediagwrscstatstable();
        ~Cmediagwrscstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cmediagwrscstatsentry; //type: CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry

        std::vector<std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry> > cmediagwrscstatsentry_;
        
}; // CiscoMediaGatewayMib::Cmediagwrscstatstable


class CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry : public Entity
{
    public:
        Cmediagwrscstatsentry();
        ~Cmediagwrscstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::cmgwindex)
        YLeaf cmgwindex;
        YLeaf cmgwrscstatsindex; //type: CmgwrscstatsindexEnum
        YLeaf cmgwrscmaximumutilization; //type: uint32
        YLeaf cmgwrscminimumutilization; //type: uint32
        YLeaf cmgwrscaverageutilization; //type: uint32
        YLeaf cmgwrscsincelastreset; //type: uint32
        class CmgwrscstatsindexEnum;

}; // CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry

class CcallcontroljitterdelaymodeEnum : public Enum
{
    public:
        static const Enum::YLeaf adaptive;
        static const Enum::YLeaf fixed;

};

class CgwadminstateEnum : public Enum
{
    public:
        static const Enum::YLeaf inService;
        static const Enum::YLeaf forcedOutOfService;
        static const Enum::YLeaf gracefulOutOfService;

};

class CgwservicestateEnum : public Enum
{
    public:
        static const Enum::YLeaf inService;
        static const Enum::YLeaf forcedOutOfService;
        static const Enum::YLeaf gracefulOutOfService;

};

class CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::CmgwvtmappingmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf standard;
        static const Enum::YLeaf titan;

};

class CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::CmgwsignalprotocolEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf mgcp;
        static const Enum::YLeaf h248;
        static const Enum::YLeaf tgcp;

};

class CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::CmgwconfigdomainnameentityEnum : public Enum
{
    public:
        static const Enum::YLeaf gateway;
        static const Enum::YLeaf dnsServer;
        static const Enum::YLeaf mgc;

};

class CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::CmediagwcccfgclusterenabledEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf conditionalEnabled;

};

class CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::CmediagwcccfgdefbearertrafficEnum : public Enum
{
    public:
        static const Enum::YLeaf ipPvcAal5;
        static const Enum::YLeaf atmPvcAal2;
        static const Enum::YLeaf atmSvcAal2;
        static const Enum::YLeaf atmSvcAal1;

};

class CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::CmgwrscstatsindexEnum : public Enum
{
    public:
        static const Enum::YLeaf cpu;
        static const Enum::YLeaf staticmemory;
        static const Enum::YLeaf dynamicmemory;
        static const Enum::YLeaf sysmemory;
        static const Enum::YLeaf commbuffer;
        static const Enum::YLeaf msgq;
        static const Enum::YLeaf atmq;
        static const Enum::YLeaf svccongestion;
        static const Enum::YLeaf rsvpq;
        static const Enum::YLeaf dspq;
        static const Enum::YLeaf h248congestion;
        static const Enum::YLeaf callpersec;
        static const Enum::YLeaf smallipcbuffer;
        static const Enum::YLeaf mediumipcbuffer;
        static const Enum::YLeaf largeipcbuffer;
        static const Enum::YLeaf hugeipcbuffer;
        static const Enum::YLeaf mblkipcbuffer;

};


}
}

#endif /* _CISCO_MEDIA_GATEWAY_MIB_ */


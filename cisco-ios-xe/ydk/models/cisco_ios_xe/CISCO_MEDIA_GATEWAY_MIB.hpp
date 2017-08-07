#ifndef _CISCO_MEDIA_GATEWAY_MIB_
#define _CISCO_MEDIA_GATEWAY_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_MEDIA_GATEWAY_MIB {

class CiscoMediaGatewayMib : public ydk::Entity
{
    public:
        CiscoMediaGatewayMib();
        ~CiscoMediaGatewayMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Cmediagwtable; //type: CiscoMediaGatewayMib::Cmediagwtable
        class Cmgwsignalprotocoltable; //type: CiscoMediaGatewayMib::Cmgwsignalprotocoltable
        class Cmediagwipconfigtable; //type: CiscoMediaGatewayMib::Cmediagwipconfigtable
        class Cmediagwdomainnameconfigtable; //type: CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable
        class Cmediagwdnsipconfigtable; //type: CiscoMediaGatewayMib::Cmediagwdnsipconfigtable
        class Cmgwliftable; //type: CiscoMediaGatewayMib::Cmgwliftable
        class Cmediagwcallcontrolconfigtable; //type: CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable
        class Cmediagwrscstatstable; //type: CiscoMediaGatewayMib::Cmediagwrscstatstable

        std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable> cmediagwcallcontrolconfigtable;
        std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwdnsipconfigtable> cmediagwdnsipconfigtable;
        std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable> cmediagwdomainnameconfigtable;
        std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwipconfigtable> cmediagwipconfigtable;
        std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwrscstatstable> cmediagwrscstatstable;
        std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwtable> cmediagwtable;
        std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmgwliftable> cmgwliftable;
        std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmgwsignalprotocoltable> cmgwsignalprotocoltable;
        
}; // CiscoMediaGatewayMib


class CiscoMediaGatewayMib::Cmediagwtable : public ydk::Entity
{
    public:
        Cmediagwtable();
        ~Cmediagwtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cmediagwentry; //type: CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry

        std::vector<std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry> > cmediagwentry;
        
}; // CiscoMediaGatewayMib::Cmediagwtable


class CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry : public ydk::Entity
{
    public:
        Cmediagwentry();
        ~Cmediagwentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmgwindex; //type: int32
        ydk::YLeaf cmgwdomainname; //type: string
        ydk::YLeaf cmgwphysicalindex; //type: int32
        ydk::YLeaf cmgwservicestate; //type: Cgwservicestate
        ydk::YLeaf cmgwadminstate; //type: Cgwadminstate
        ydk::YLeaf cmgwgracetime; //type: int32
        ydk::YLeaf cmgwvtmappingmode; //type: Cmgwvtmappingmode
        ydk::YLeaf cmgwsrcfilterenabled; //type: boolean
        ydk::YLeaf cmgwlawinterceptenabled; //type: boolean
        ydk::YLeaf cmgwv23enabled; //type: boolean
        class Cmgwvtmappingmode;

}; // CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry


class CiscoMediaGatewayMib::Cmgwsignalprotocoltable : public ydk::Entity
{
    public:
        Cmgwsignalprotocoltable();
        ~Cmgwsignalprotocoltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cmgwsignalprotocolentry; //type: CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry

        std::vector<std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry> > cmgwsignalprotocolentry;
        
}; // CiscoMediaGatewayMib::Cmgwsignalprotocoltable


class CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry : public ydk::Entity
{
    public:
        Cmgwsignalprotocolentry();
        ~Cmgwsignalprotocolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::cmgwindex)
        ydk::YLeaf cmgwindex;
        ydk::YLeaf cmgwsignalprotocolindex; //type: int32
        ydk::YLeaf cmgwsignalprotocol; //type: Cmgwsignalprotocol
        ydk::YLeaf cmgwsignalprotocolversion; //type: string
        ydk::YLeaf cmgwsignalprotocolport; //type: int32
        ydk::YLeaf cmgwsignalmgcprotocolport; //type: uint16
        ydk::YLeaf cmgwsignalprotocolpreference; //type: int32
        ydk::YLeaf cmgwsignalprotocolconfigver; //type: string
        class Cmgwsignalprotocol;

}; // CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry


class CiscoMediaGatewayMib::Cmediagwipconfigtable : public ydk::Entity
{
    public:
        Cmediagwipconfigtable();
        ~Cmediagwipconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cmediagwipconfigentry; //type: CiscoMediaGatewayMib::Cmediagwipconfigtable::Cmediagwipconfigentry

        std::vector<std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwipconfigtable::Cmediagwipconfigentry> > cmediagwipconfigentry;
        
}; // CiscoMediaGatewayMib::Cmediagwipconfigtable


class CiscoMediaGatewayMib::Cmediagwipconfigtable::Cmediagwipconfigentry : public ydk::Entity
{
    public:
        Cmediagwipconfigentry();
        ~Cmediagwipconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::cmgwindex)
        ydk::YLeaf cmgwindex;
        ydk::YLeaf cmgwipconfigindex; //type: int32
        ydk::YLeaf cmgwipconfigifindex; //type: int32
        ydk::YLeaf cmgwipconfigvpi; //type: int32
        ydk::YLeaf cmgwipconfigvci; //type: int32
        ydk::YLeaf cmgwipconfigaddrtype; //type: Inetaddresstype
        ydk::YLeaf cmgwipconfigaddress; //type: binary
        ydk::YLeaf cmgwipconfigsubnetmask; //type: uint32
        ydk::YLeaf cmgwipconfigdefaultgwip; //type: boolean
        ydk::YLeaf cmgwipconfigforremotemapping; //type: boolean
        ydk::YLeaf cmgwipconfigrowstatus; //type: Rowstatus

}; // CiscoMediaGatewayMib::Cmediagwipconfigtable::Cmediagwipconfigentry


class CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable : public ydk::Entity
{
    public:
        Cmediagwdomainnameconfigtable();
        ~Cmediagwdomainnameconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cmediagwdomainnameconfigentry; //type: CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry

        std::vector<std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry> > cmediagwdomainnameconfigentry;
        
}; // CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable


class CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry : public ydk::Entity
{
    public:
        Cmediagwdomainnameconfigentry();
        ~Cmediagwdomainnameconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::cmgwindex)
        ydk::YLeaf cmgwindex;
        ydk::YLeaf cmgwconfigdomainnameindex; //type: int32
        ydk::YLeaf cmgwconfigdomainnameentity; //type: Cmgwconfigdomainnameentity
        ydk::YLeaf cmgwconfigdomainname; //type: string
        ydk::YLeaf cmgwconfigdomainnamerowstatus; //type: Rowstatus
        class Cmgwconfigdomainnameentity;

}; // CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry


class CiscoMediaGatewayMib::Cmediagwdnsipconfigtable : public ydk::Entity
{
    public:
        Cmediagwdnsipconfigtable();
        ~Cmediagwdnsipconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cmediagwdnsipconfigentry; //type: CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry

        std::vector<std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry> > cmediagwdnsipconfigentry;
        
}; // CiscoMediaGatewayMib::Cmediagwdnsipconfigtable


class CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry : public ydk::Entity
{
    public:
        Cmediagwdnsipconfigentry();
        ~Cmediagwdnsipconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::cmgwindex)
        ydk::YLeaf cmgwindex;
        ydk::YLeaf cmgwdnsipindex; //type: int32
        ydk::YLeaf cmgwdnsdomainname; //type: string
        ydk::YLeaf cmgwdnsiptype; //type: Inetaddresstype
        ydk::YLeaf cmgwdnsip; //type: binary
        ydk::YLeaf cmgwdnsiprowstatus; //type: Rowstatus

}; // CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry


class CiscoMediaGatewayMib::Cmgwliftable : public ydk::Entity
{
    public:
        Cmgwliftable();
        ~Cmgwliftable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cmgwlifentry; //type: CiscoMediaGatewayMib::Cmgwliftable::Cmgwlifentry

        std::vector<std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmgwliftable::Cmgwlifentry> > cmgwlifentry;
        
}; // CiscoMediaGatewayMib::Cmgwliftable


class CiscoMediaGatewayMib::Cmgwliftable::Cmgwlifentry : public ydk::Entity
{
    public:
        Cmgwlifentry();
        ~Cmgwlifentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::cmgwindex)
        ydk::YLeaf cmgwindex;
        ydk::YLeaf cmgwlifnumber; //type: uint32
        ydk::YLeaf cmgwlifpvccount; //type: uint32
        ydk::YLeaf cmgwlifvoiceifcount; //type: uint32

}; // CiscoMediaGatewayMib::Cmgwliftable::Cmgwlifentry


class CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable : public ydk::Entity
{
    public:
        Cmediagwcallcontrolconfigtable();
        ~Cmediagwcallcontrolconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cmediagwcallcontrolconfigentry; //type: CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry

        std::vector<std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry> > cmediagwcallcontrolconfigentry;
        
}; // CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable


class CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry : public ydk::Entity
{
    public:
        Cmediagwcallcontrolconfigentry();
        ~Cmediagwcallcontrolconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::cmgwindex)
        ydk::YLeaf cmgwindex;
        ydk::YLeaf cmediagwcccfgcontroltos; //type: uint32
        ydk::YLeaf cmediagwcccfgbearertos; //type: uint32
        ydk::YLeaf cmediagwcccfgntepayload; //type: uint32
        ydk::YLeaf cmediagwcccfgnsepayload; //type: uint32
        ydk::YLeaf cmediagwcccfgnseresptimer; //type: uint32
        ydk::YLeaf cmediagwcccfgvbdjitterdelaymode; //type: Ccallcontroljitterdelaymode
        ydk::YLeaf cmediagwcccfgvbdjittermaxdelay; //type: uint32
        ydk::YLeaf cmediagwcccfgvbdjitternomdelay; //type: uint32
        ydk::YLeaf cmediagwcccfgvbdjittermindelay; //type: uint32
        ydk::YLeaf cmediagwcccfgdefaulttoneplanid; //type: uint32
        ydk::YLeaf cmediagwcccfgdescrinfoenabled; //type: boolean
        ydk::YLeaf cmediagwcccfgdsnameprefix; //type: string
        ydk::YLeaf cmediagwcccfgrtpnameprefix; //type: string
        ydk::YLeaf cmediagwcccfgaal1svcnameprefix; //type: string
        ydk::YLeaf cmediagwcccfgaal2svcnameprefix; //type: string
        ydk::YLeaf cmediagwcccfgclusterenabled; //type: Cmediagwcccfgclusterenabled
        ydk::YLeaf cmediagwcccfgdefbearertraffic; //type: Cmediagwcccfgdefbearertraffic
        ydk::YLeaf cmediagwcccfgdefrtpnameprefix; //type: string
        class Cmediagwcccfgclusterenabled;
        class Cmediagwcccfgdefbearertraffic;

}; // CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry


class CiscoMediaGatewayMib::Cmediagwrscstatstable : public ydk::Entity
{
    public:
        Cmediagwrscstatstable();
        ~Cmediagwrscstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cmediagwrscstatsentry; //type: CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry

        std::vector<std::shared_ptr<CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry> > cmediagwrscstatsentry;
        
}; // CiscoMediaGatewayMib::Cmediagwrscstatstable


class CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry : public ydk::Entity
{
    public:
        Cmediagwrscstatsentry();
        ~Cmediagwrscstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::cmgwindex)
        ydk::YLeaf cmgwindex;
        ydk::YLeaf cmgwrscstatsindex; //type: Cmgwrscstatsindex
        ydk::YLeaf cmgwrscmaximumutilization; //type: uint32
        ydk::YLeaf cmgwrscminimumutilization; //type: uint32
        ydk::YLeaf cmgwrscaverageutilization; //type: uint32
        ydk::YLeaf cmgwrscsincelastreset; //type: uint32
        class Cmgwrscstatsindex;

}; // CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry

class Cgwservicestate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inService;
        static const ydk::Enum::YLeaf forcedOutOfService;
        static const ydk::Enum::YLeaf gracefulOutOfService;

};

class Ccallcontroljitterdelaymode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf adaptive;
        static const ydk::Enum::YLeaf fixed;

};

class Cgwadminstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inService;
        static const ydk::Enum::YLeaf forcedOutOfService;
        static const ydk::Enum::YLeaf gracefulOutOfService;

};

class CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::Cmgwvtmappingmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf titan;

};

class CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::Cmgwsignalprotocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf mgcp;
        static const ydk::Enum::YLeaf h248;
        static const ydk::Enum::YLeaf tgcp;

};

class CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::Cmgwconfigdomainnameentity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gateway;
        static const ydk::Enum::YLeaf dnsServer;
        static const ydk::Enum::YLeaf mgc;

};

class CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::Cmediagwcccfgclusterenabled : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf conditionalEnabled;

};

class CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::Cmediagwcccfgdefbearertraffic : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipPvcAal5;
        static const ydk::Enum::YLeaf atmPvcAal2;
        static const ydk::Enum::YLeaf atmSvcAal2;
        static const ydk::Enum::YLeaf atmSvcAal1;

};

class CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::Cmgwrscstatsindex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cpu;
        static const ydk::Enum::YLeaf staticmemory;
        static const ydk::Enum::YLeaf dynamicmemory;
        static const ydk::Enum::YLeaf sysmemory;
        static const ydk::Enum::YLeaf commbuffer;
        static const ydk::Enum::YLeaf msgq;
        static const ydk::Enum::YLeaf atmq;
        static const ydk::Enum::YLeaf svccongestion;
        static const ydk::Enum::YLeaf rsvpq;
        static const ydk::Enum::YLeaf dspq;
        static const ydk::Enum::YLeaf h248congestion;
        static const ydk::Enum::YLeaf callpersec;
        static const ydk::Enum::YLeaf smallipcbuffer;
        static const ydk::Enum::YLeaf mediumipcbuffer;
        static const ydk::Enum::YLeaf largeipcbuffer;
        static const ydk::Enum::YLeaf hugeipcbuffer;
        static const ydk::Enum::YLeaf mblkipcbuffer;

};


}
}

#endif /* _CISCO_MEDIA_GATEWAY_MIB_ */


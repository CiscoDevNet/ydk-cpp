#ifndef _CISCO_SONET_MIB_
#define _CISCO_SONET_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_SONET_MIB {

class CiscoSonetMib : public ydk::Entity
{
    public:
        CiscoSonetMib();
        ~CiscoSonetMib();

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

        class Csapsconfig; //type: CiscoSonetMib::Csapsconfig
        class Csnotifications; //type: CiscoSonetMib::Csnotifications
        class Csconfigtable; //type: CiscoSonetMib::Csconfigtable
        class Csapsconfigtable; //type: CiscoSonetMib::Csapsconfigtable
        class Csstotaltable; //type: CiscoSonetMib::Csstotaltable
        class Csstracetable; //type: CiscoSonetMib::Csstracetable
        class Csltotaltable; //type: CiscoSonetMib::Csltotaltable
        class Cslfarendtotaltable; //type: CiscoSonetMib::Cslfarendtotaltable
        class Csptotaltable; //type: CiscoSonetMib::Csptotaltable
        class Cspfarendtotaltable; //type: CiscoSonetMib::Cspfarendtotaltable
        class Csptracetable; //type: CiscoSonetMib::Csptracetable
        class Csstatstable; //type: CiscoSonetMib::Csstatstable
        class Csau4Tug3Configtable; //type: CiscoSonetMib::Csau4Tug3Configtable

        std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csapsconfig> csapsconfig;
        std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csapsconfigtable> csapsconfigtable;
        std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csau4Tug3Configtable> csau4tug3configtable;
        std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csconfigtable> csconfigtable;
        std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Cslfarendtotaltable> cslfarendtotaltable;
        std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csltotaltable> csltotaltable;
        std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csnotifications> csnotifications;
        std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Cspfarendtotaltable> cspfarendtotaltable;
        std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csptotaltable> csptotaltable;
        std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csptracetable> csptracetable;
        std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csstatstable> csstatstable;
        std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csstotaltable> csstotaltable;
        std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csstracetable> csstracetable;
        
}; // CiscoSonetMib


class CiscoSonetMib::Csapsconfig : public ydk::Entity
{
    public:
        Csapsconfig();
        ~Csapsconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csapslinefailurecode; //type: Csapslinefailurecode
        ydk::YLeaf csapslineswitchreason; //type: Csapslineswitchreason

}; // CiscoSonetMib::Csapsconfig


class CiscoSonetMib::Csnotifications : public ydk::Entity
{
    public:
        Csnotifications();
        ~Csnotifications();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csnotificationsenabled; //type: boolean

}; // CiscoSonetMib::Csnotifications


class CiscoSonetMib::Csconfigtable : public ydk::Entity
{
    public:
        Csconfigtable();
        ~Csconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Csconfigentry; //type: CiscoSonetMib::Csconfigtable::Csconfigentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csconfigtable::Csconfigentry> > csconfigentry;
        
}; // CiscoSonetMib::Csconfigtable


class CiscoSonetMib::Csconfigtable::Csconfigentry : public ydk::Entity
{
    public:
        Csconfigentry();
        ~Csconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf csconfigloopbacktype; //type: Csconfigloopbacktype
        ydk::YLeaf csconfigxmtclocksource; //type: Csconfigxmtclocksource
        ydk::YLeaf csconfigframescramble; //type: Csconfigframescramble
        ydk::YLeaf csconfigtype; //type: Csconfigtype
        ydk::YLeaf csconfigrdivtype; //type: Csconfigrdivtype
        ydk::YLeaf csconfigrdiptype; //type: Csconfigrdiptype
        ydk::YLeaf cstributarytype; //type: Cstributarytype
        ydk::YLeaf cstributarymappingtype; //type: Cstributarymappingtype
        ydk::YLeaf cstributaryframingtype; //type: Cstributaryframingtype
        ydk::YLeaf cssignallingtransportmode; //type: Cssignallingtransportmode
        ydk::YLeaf cstributarygroupingtype; //type: Cstributarygroupingtype
        class Csconfigloopbacktype;
        class Csconfigxmtclocksource;
        class Csconfigframescramble;
        class Csconfigtype;
        class Csconfigrdivtype;
        class Csconfigrdiptype;
        class Cstributarytype;
        class Cstributarymappingtype;
        class Cstributaryframingtype;
        class Cssignallingtransportmode;
        class Cstributarygroupingtype;

}; // CiscoSonetMib::Csconfigtable::Csconfigentry


class CiscoSonetMib::Csapsconfigtable : public ydk::Entity
{
    public:
        Csapsconfigtable();
        ~Csapsconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Csapsconfigentry; //type: CiscoSonetMib::Csapsconfigtable::Csapsconfigentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csapsconfigtable::Csapsconfigentry> > csapsconfigentry;
        
}; // CiscoSonetMib::Csapsconfigtable


class CiscoSonetMib::Csapsconfigtable::Csapsconfigentry : public ydk::Entity
{
    public:
        Csapsconfigentry();
        ~Csapsconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csapsworkingindex; //type: int32
        ydk::YLeaf csapsprotectionindex; //type: int32
        ydk::YLeaf csapsenable; //type: Csapsenable
        ydk::YLeaf csapsarchmode; //type: Csapsarchmode
        ydk::YLeaf csapsactiveline; //type: Csapsactiveline
        ydk::YLeaf csapssigfaultber; //type: uint32
        ydk::YLeaf csapssigdegradeber; //type: uint32
        ydk::YLeaf csapswaittorestore; //type: uint32
        ydk::YLeaf csapsdirection; //type: Csapsdirection
        ydk::YLeaf csapsrevertive; //type: Csapsrevertive
        ydk::YLeaf csapsdirectionoperational; //type: Csapsdirectionoperational
        ydk::YLeaf csapsarchmodeoperational; //type: Csapsarchmodeoperational
        ydk::YLeaf csapschannelprotocol; //type: Csapschannelprotocol
        ydk::YLeaf csapsfailurestatus; //type: Csapslinefailurestatus
        ydk::YLeaf csapsswitchreason; //type: Csapslineswitchreason
        ydk::YLeaf csapsprimarysection; //type: Csapsprimarysection
        class Csapsenable;
        class Csapsarchmode;
        class Csapsactiveline;
        class Csapsdirection;
        class Csapsrevertive;
        class Csapsdirectionoperational;
        class Csapsarchmodeoperational;
        class Csapschannelprotocol;
        class Csapsprimarysection;

}; // CiscoSonetMib::Csapsconfigtable::Csapsconfigentry


class CiscoSonetMib::Csstotaltable : public ydk::Entity
{
    public:
        Csstotaltable();
        ~Csstotaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Csstotalentry; //type: CiscoSonetMib::Csstotaltable::Csstotalentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csstotaltable::Csstotalentry> > csstotalentry;
        
}; // CiscoSonetMib::Csstotaltable


class CiscoSonetMib::Csstotaltable::Csstotalentry : public ydk::Entity
{
    public:
        Csstotalentry();
        ~Csstotalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf csstotaless; //type: uint32
        ydk::YLeaf csstotalsess; //type: uint32
        ydk::YLeaf csstotalsefss; //type: uint32
        ydk::YLeaf csstotalcvs; //type: uint32

}; // CiscoSonetMib::Csstotaltable::Csstotalentry


class CiscoSonetMib::Csstracetable : public ydk::Entity
{
    public:
        Csstracetable();
        ~Csstracetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Csstraceentry; //type: CiscoSonetMib::Csstracetable::Csstraceentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csstracetable::Csstraceentry> > csstraceentry;
        
}; // CiscoSonetMib::Csstracetable


class CiscoSonetMib::Csstracetable::Csstraceentry : public ydk::Entity
{
    public:
        Csstraceentry();
        ~Csstraceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf csstracetotransmit; //type: binary
        ydk::YLeaf csstracetoexpect; //type: binary
        ydk::YLeaf csstracefailure; //type: boolean
        ydk::YLeaf csstracereceived; //type: binary

}; // CiscoSonetMib::Csstracetable::Csstraceentry


class CiscoSonetMib::Csltotaltable : public ydk::Entity
{
    public:
        Csltotaltable();
        ~Csltotaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Csltotalentry; //type: CiscoSonetMib::Csltotaltable::Csltotalentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csltotaltable::Csltotalentry> > csltotalentry;
        
}; // CiscoSonetMib::Csltotaltable


class CiscoSonetMib::Csltotaltable::Csltotalentry : public ydk::Entity
{
    public:
        Csltotalentry();
        ~Csltotalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf csltotaless; //type: uint32
        ydk::YLeaf csltotalsess; //type: uint32
        ydk::YLeaf csltotalcvs; //type: uint32
        ydk::YLeaf csltotaluass; //type: uint32

}; // CiscoSonetMib::Csltotaltable::Csltotalentry


class CiscoSonetMib::Cslfarendtotaltable : public ydk::Entity
{
    public:
        Cslfarendtotaltable();
        ~Cslfarendtotaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cslfarendtotalentry; //type: CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotalentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotalentry> > cslfarendtotalentry;
        
}; // CiscoSonetMib::Cslfarendtotaltable


class CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotalentry : public ydk::Entity
{
    public:
        Cslfarendtotalentry();
        ~Cslfarendtotalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cslfarendtotaless; //type: uint32
        ydk::YLeaf cslfarendtotalsess; //type: uint32
        ydk::YLeaf cslfarendtotalcvs; //type: uint32
        ydk::YLeaf cslfarendtotaluass; //type: uint32

}; // CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotalentry


class CiscoSonetMib::Csptotaltable : public ydk::Entity
{
    public:
        Csptotaltable();
        ~Csptotaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Csptotalentry; //type: CiscoSonetMib::Csptotaltable::Csptotalentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csptotaltable::Csptotalentry> > csptotalentry;
        
}; // CiscoSonetMib::Csptotaltable


class CiscoSonetMib::Csptotaltable::Csptotalentry : public ydk::Entity
{
    public:
        Csptotalentry();
        ~Csptotalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf csptotaless; //type: uint32
        ydk::YLeaf csptotalsess; //type: uint32
        ydk::YLeaf csptotalcvs; //type: uint32
        ydk::YLeaf csptotaluass; //type: uint32

}; // CiscoSonetMib::Csptotaltable::Csptotalentry


class CiscoSonetMib::Cspfarendtotaltable : public ydk::Entity
{
    public:
        Cspfarendtotaltable();
        ~Cspfarendtotaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cspfarendtotalentry; //type: CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotalentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotalentry> > cspfarendtotalentry;
        
}; // CiscoSonetMib::Cspfarendtotaltable


class CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotalentry : public ydk::Entity
{
    public:
        Cspfarendtotalentry();
        ~Cspfarendtotalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cspfarendtotaless; //type: uint32
        ydk::YLeaf cspfarendtotalsess; //type: uint32
        ydk::YLeaf cspfarendtotalcvs; //type: uint32
        ydk::YLeaf cspfarendtotaluass; //type: uint32

}; // CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotalentry


class CiscoSonetMib::Csptracetable : public ydk::Entity
{
    public:
        Csptracetable();
        ~Csptracetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Csptraceentry; //type: CiscoSonetMib::Csptracetable::Csptraceentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csptracetable::Csptraceentry> > csptraceentry;
        
}; // CiscoSonetMib::Csptracetable


class CiscoSonetMib::Csptracetable::Csptraceentry : public ydk::Entity
{
    public:
        Csptraceentry();
        ~Csptraceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf csptracetotransmit; //type: binary
        ydk::YLeaf csptracetoexpect; //type: binary
        ydk::YLeaf csptracefailure; //type: boolean
        ydk::YLeaf csptracereceived; //type: binary

}; // CiscoSonetMib::Csptracetable::Csptraceentry


class CiscoSonetMib::Csstatstable : public ydk::Entity
{
    public:
        Csstatstable();
        ~Csstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Csstatsentry; //type: CiscoSonetMib::Csstatstable::Csstatsentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csstatstable::Csstatsentry> > csstatsentry;
        
}; // CiscoSonetMib::Csstatstable


class CiscoSonetMib::Csstatstable::Csstatsentry : public ydk::Entity
{
    public:
        Csstatsentry();
        ~Csstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cssloss; //type: uint32
        ydk::YLeaf csslofs; //type: uint32
        ydk::YLeaf cslaiss; //type: uint32
        ydk::YLeaf cslrfis; //type: uint32
        ydk::YLeaf cspaiss; //type: uint32
        ydk::YLeaf csprfis; //type: uint32

}; // CiscoSonetMib::Csstatstable::Csstatsentry


class CiscoSonetMib::Csau4Tug3Configtable : public ydk::Entity
{
    public:
        Csau4Tug3Configtable();
        ~Csau4Tug3Configtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Csau4Tug3Configentry; //type: CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry> > csau4tug3configentry;
        
}; // CiscoSonetMib::Csau4Tug3Configtable


class CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry : public ydk::Entity
{
    public:
        Csau4Tug3Configentry();
        ~Csau4Tug3Configentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf csau4tug3; //type: int32
        ydk::YLeaf csau4tug3payload; //type: Csau4Tug3Payload
        class Csau4Tug3Payload;

}; // CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry

class Csapslineswitchreason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf csApsOther;
        static const ydk::Enum::YLeaf csApsRevertive;
        static const ydk::Enum::YLeaf csApsManual;
        static const ydk::Enum::YLeaf csApsSignalDefectLow;
        static const ydk::Enum::YLeaf csApsSignalDefectHigh;
        static const ydk::Enum::YLeaf csApsSignalFailureLow;
        static const ydk::Enum::YLeaf csApsSignalFailureHigh;
        static const ydk::Enum::YLeaf csApsForceSwitch;
        static const ydk::Enum::YLeaf csApsLockOut;
        static const ydk::Enum::YLeaf csApsNoSwitch;

};

class Csapslinefailurecode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf csApsChannelMismatch;
        static const ydk::Enum::YLeaf csApsProtectionByteFail;
        static const ydk::Enum::YLeaf csApsFEProtectionFailure;
        static const ydk::Enum::YLeaf csApsModeMismatch;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigloopbacktype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noLoopback;
        static const ydk::Enum::YLeaf lineLocal;
        static const ydk::Enum::YLeaf lineRemote;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigxmtclocksource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf loopTiming;
        static const ydk::Enum::YLeaf localTiming;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigframescramble : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sonetSts3c;
        static const ydk::Enum::YLeaf sonetStm1;
        static const ydk::Enum::YLeaf sonetSts12c;
        static const ydk::Enum::YLeaf sonetStm4;
        static const ydk::Enum::YLeaf sonetSts48c;
        static const ydk::Enum::YLeaf sonetStm16;
        static const ydk::Enum::YLeaf sonetSts192c;
        static const ydk::Enum::YLeaf sonetStm64;
        static const ydk::Enum::YLeaf sonetSts3;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigrdivtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf onebit;
        static const ydk::Enum::YLeaf threebit;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigrdiptype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf onebit;
        static const ydk::Enum::YLeaf threebit;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::Cstributarytype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vt15vc11;
        static const ydk::Enum::YLeaf vt2vc12;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::Cstributarymappingtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf asynchronous;
        static const ydk::Enum::YLeaf byteSynchronous;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::Cstributaryframingtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf dsx1D4;
        static const ydk::Enum::YLeaf dsx1ESF;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::Cssignallingtransportmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf signallingTransferMode;
        static const ydk::Enum::YLeaf clearMode;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::Cstributarygroupingtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf au3Grouping;
        static const ydk::Enum::YLeaf au4Grouping;

};

class CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsenable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf csApsDisabled;
        static const ydk::Enum::YLeaf csApsEnabled;

};

class CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsarchmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf onePlusOne;
        static const ydk::Enum::YLeaf oneToOne;
        static const ydk::Enum::YLeaf anexBOnePlusOne;
        static const ydk::Enum::YLeaf ycableOnePlusOneNok1k2;
        static const ydk::Enum::YLeaf straightOnePlusOneNok1k2;

};

class CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsactiveline : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf csApsWorkingLine;
        static const ydk::Enum::YLeaf csApsProtectionLine;
        static const ydk::Enum::YLeaf csApsNone;

};

class CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsdirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf uniDirectional;
        static const ydk::Enum::YLeaf biDirectional;

};

class CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsrevertive : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nonrevertive;
        static const ydk::Enum::YLeaf revertive;

};

class CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsdirectionoperational : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf uniDirectional;
        static const ydk::Enum::YLeaf biDirectional;

};

class CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsarchmodeoperational : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf onePlusOne;
        static const ydk::Enum::YLeaf oneToOne;
        static const ydk::Enum::YLeaf anexBOnePlusOne;
        static const ydk::Enum::YLeaf ycableOnePlusOneNok1k2;
        static const ydk::Enum::YLeaf straightOnePlusOneNok1k2;

};

class CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapschannelprotocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bellcore;
        static const ydk::Enum::YLeaf itu;

};

class CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsprimarysection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf workingSection1;
        static const ydk::Enum::YLeaf workingSection2;
        static const ydk::Enum::YLeaf none;

};

class CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::Csau4Tug3Payload : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf vc11;
        static const ydk::Enum::YLeaf vc12;
        static const ydk::Enum::YLeaf tu3ds3;
        static const ydk::Enum::YLeaf tu3e3;

};


}
}

#endif /* _CISCO_SONET_MIB_ */


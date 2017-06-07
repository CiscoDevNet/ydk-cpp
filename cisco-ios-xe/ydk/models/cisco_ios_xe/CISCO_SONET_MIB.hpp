#ifndef _CISCO_SONET_MIB_
#define _CISCO_SONET_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_SONET_MIB {

class CiscoSonetMib : public Entity
{
    public:
        CiscoSonetMib();
        ~CiscoSonetMib();

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


class CiscoSonetMib::Csapsconfig : public Entity
{
    public:
        Csapsconfig();
        ~Csapsconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf csapslinefailurecode; //type: CsapslinefailurecodeEnum
        YLeaf csapslineswitchreason; //type: CsapslineswitchreasonEnum

}; // CiscoSonetMib::Csapsconfig


class CiscoSonetMib::Csnotifications : public Entity
{
    public:
        Csnotifications();
        ~Csnotifications();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf csnotificationsenabled; //type: boolean

}; // CiscoSonetMib::Csnotifications


class CiscoSonetMib::Csconfigtable : public Entity
{
    public:
        Csconfigtable();
        ~Csconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csconfigentry; //type: CiscoSonetMib::Csconfigtable::Csconfigentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csconfigtable::Csconfigentry> > csconfigentry;
        
}; // CiscoSonetMib::Csconfigtable


class CiscoSonetMib::Csconfigtable::Csconfigentry : public Entity
{
    public:
        Csconfigentry();
        ~Csconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf csconfigloopbacktype; //type: CsconfigloopbacktypeEnum
        YLeaf csconfigxmtclocksource; //type: CsconfigxmtclocksourceEnum
        YLeaf csconfigframescramble; //type: CsconfigframescrambleEnum
        YLeaf csconfigtype; //type: CsconfigtypeEnum
        YLeaf csconfigrdivtype; //type: CsconfigrdivtypeEnum
        YLeaf csconfigrdiptype; //type: CsconfigrdiptypeEnum
        YLeaf cstributarytype; //type: CstributarytypeEnum
        YLeaf cstributarymappingtype; //type: CstributarymappingtypeEnum
        YLeaf cstributaryframingtype; //type: CstributaryframingtypeEnum
        YLeaf cssignallingtransportmode; //type: CssignallingtransportmodeEnum
        YLeaf cstributarygroupingtype; //type: CstributarygroupingtypeEnum
        class CsconfigloopbacktypeEnum;
        class CsconfigxmtclocksourceEnum;
        class CsconfigframescrambleEnum;
        class CsconfigtypeEnum;
        class CsconfigrdivtypeEnum;
        class CsconfigrdiptypeEnum;
        class CstributarytypeEnum;
        class CstributarymappingtypeEnum;
        class CstributaryframingtypeEnum;
        class CssignallingtransportmodeEnum;
        class CstributarygroupingtypeEnum;

}; // CiscoSonetMib::Csconfigtable::Csconfigentry


class CiscoSonetMib::Csapsconfigtable : public Entity
{
    public:
        Csapsconfigtable();
        ~Csapsconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csapsconfigentry; //type: CiscoSonetMib::Csapsconfigtable::Csapsconfigentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csapsconfigtable::Csapsconfigentry> > csapsconfigentry;
        
}; // CiscoSonetMib::Csapsconfigtable


class CiscoSonetMib::Csapsconfigtable::Csapsconfigentry : public Entity
{
    public:
        Csapsconfigentry();
        ~Csapsconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf csapsworkingindex; //type: int32
        YLeaf csapsprotectionindex; //type: int32
        YLeaf csapsenable; //type: CsapsenableEnum
        YLeaf csapsarchmode; //type: CsapsarchmodeEnum
        YLeaf csapsactiveline; //type: CsapsactivelineEnum
        YLeaf csapssigfaultber; //type: uint32
        YLeaf csapssigdegradeber; //type: uint32
        YLeaf csapswaittorestore; //type: uint32
        YLeaf csapsdirection; //type: CsapsdirectionEnum
        YLeaf csapsrevertive; //type: CsapsrevertiveEnum
        YLeaf csapsdirectionoperational; //type: CsapsdirectionoperationalEnum
        YLeaf csapsarchmodeoperational; //type: CsapsarchmodeoperationalEnum
        YLeaf csapschannelprotocol; //type: CsapschannelprotocolEnum
        YLeaf csapsfailurestatus; //type: Csapslinefailurestatus
        YLeaf csapsswitchreason; //type: CsapslineswitchreasonEnum
        YLeaf csapsprimarysection; //type: CsapsprimarysectionEnum
        class CsapsenableEnum;
        class CsapsarchmodeEnum;
        class CsapsactivelineEnum;
        class CsapsdirectionEnum;
        class CsapsrevertiveEnum;
        class CsapsdirectionoperationalEnum;
        class CsapsarchmodeoperationalEnum;
        class CsapschannelprotocolEnum;
        class CsapsprimarysectionEnum;

}; // CiscoSonetMib::Csapsconfigtable::Csapsconfigentry


class CiscoSonetMib::Csstotaltable : public Entity
{
    public:
        Csstotaltable();
        ~Csstotaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csstotalentry; //type: CiscoSonetMib::Csstotaltable::Csstotalentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csstotaltable::Csstotalentry> > csstotalentry;
        
}; // CiscoSonetMib::Csstotaltable


class CiscoSonetMib::Csstotaltable::Csstotalentry : public Entity
{
    public:
        Csstotalentry();
        ~Csstotalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf csstotaless; //type: uint32
        YLeaf csstotalsess; //type: uint32
        YLeaf csstotalsefss; //type: uint32
        YLeaf csstotalcvs; //type: uint32

}; // CiscoSonetMib::Csstotaltable::Csstotalentry


class CiscoSonetMib::Csstracetable : public Entity
{
    public:
        Csstracetable();
        ~Csstracetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csstraceentry; //type: CiscoSonetMib::Csstracetable::Csstraceentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csstracetable::Csstraceentry> > csstraceentry;
        
}; // CiscoSonetMib::Csstracetable


class CiscoSonetMib::Csstracetable::Csstraceentry : public Entity
{
    public:
        Csstraceentry();
        ~Csstraceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf csstracetotransmit; //type: binary
        YLeaf csstracetoexpect; //type: binary
        YLeaf csstracefailure; //type: boolean
        YLeaf csstracereceived; //type: binary

}; // CiscoSonetMib::Csstracetable::Csstraceentry


class CiscoSonetMib::Csltotaltable : public Entity
{
    public:
        Csltotaltable();
        ~Csltotaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csltotalentry; //type: CiscoSonetMib::Csltotaltable::Csltotalentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csltotaltable::Csltotalentry> > csltotalentry;
        
}; // CiscoSonetMib::Csltotaltable


class CiscoSonetMib::Csltotaltable::Csltotalentry : public Entity
{
    public:
        Csltotalentry();
        ~Csltotalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf csltotaless; //type: uint32
        YLeaf csltotalsess; //type: uint32
        YLeaf csltotalcvs; //type: uint32
        YLeaf csltotaluass; //type: uint32

}; // CiscoSonetMib::Csltotaltable::Csltotalentry


class CiscoSonetMib::Cslfarendtotaltable : public Entity
{
    public:
        Cslfarendtotaltable();
        ~Cslfarendtotaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cslfarendtotalentry; //type: CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotalentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotalentry> > cslfarendtotalentry;
        
}; // CiscoSonetMib::Cslfarendtotaltable


class CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotalentry : public Entity
{
    public:
        Cslfarendtotalentry();
        ~Cslfarendtotalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cslfarendtotaless; //type: uint32
        YLeaf cslfarendtotalsess; //type: uint32
        YLeaf cslfarendtotalcvs; //type: uint32
        YLeaf cslfarendtotaluass; //type: uint32

}; // CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotalentry


class CiscoSonetMib::Csptotaltable : public Entity
{
    public:
        Csptotaltable();
        ~Csptotaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csptotalentry; //type: CiscoSonetMib::Csptotaltable::Csptotalentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csptotaltable::Csptotalentry> > csptotalentry;
        
}; // CiscoSonetMib::Csptotaltable


class CiscoSonetMib::Csptotaltable::Csptotalentry : public Entity
{
    public:
        Csptotalentry();
        ~Csptotalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf csptotaless; //type: uint32
        YLeaf csptotalsess; //type: uint32
        YLeaf csptotalcvs; //type: uint32
        YLeaf csptotaluass; //type: uint32

}; // CiscoSonetMib::Csptotaltable::Csptotalentry


class CiscoSonetMib::Cspfarendtotaltable : public Entity
{
    public:
        Cspfarendtotaltable();
        ~Cspfarendtotaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cspfarendtotalentry; //type: CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotalentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotalentry> > cspfarendtotalentry;
        
}; // CiscoSonetMib::Cspfarendtotaltable


class CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotalentry : public Entity
{
    public:
        Cspfarendtotalentry();
        ~Cspfarendtotalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cspfarendtotaless; //type: uint32
        YLeaf cspfarendtotalsess; //type: uint32
        YLeaf cspfarendtotalcvs; //type: uint32
        YLeaf cspfarendtotaluass; //type: uint32

}; // CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotalentry


class CiscoSonetMib::Csptracetable : public Entity
{
    public:
        Csptracetable();
        ~Csptracetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csptraceentry; //type: CiscoSonetMib::Csptracetable::Csptraceentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csptracetable::Csptraceentry> > csptraceentry;
        
}; // CiscoSonetMib::Csptracetable


class CiscoSonetMib::Csptracetable::Csptraceentry : public Entity
{
    public:
        Csptraceentry();
        ~Csptraceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf csptracetotransmit; //type: binary
        YLeaf csptracetoexpect; //type: binary
        YLeaf csptracefailure; //type: boolean
        YLeaf csptracereceived; //type: binary

}; // CiscoSonetMib::Csptracetable::Csptraceentry


class CiscoSonetMib::Csstatstable : public Entity
{
    public:
        Csstatstable();
        ~Csstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csstatsentry; //type: CiscoSonetMib::Csstatstable::Csstatsentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csstatstable::Csstatsentry> > csstatsentry;
        
}; // CiscoSonetMib::Csstatstable


class CiscoSonetMib::Csstatstable::Csstatsentry : public Entity
{
    public:
        Csstatsentry();
        ~Csstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cssloss; //type: uint32
        YLeaf csslofs; //type: uint32
        YLeaf cslaiss; //type: uint32
        YLeaf cslrfis; //type: uint32
        YLeaf cspaiss; //type: uint32
        YLeaf csprfis; //type: uint32

}; // CiscoSonetMib::Csstatstable::Csstatsentry


class CiscoSonetMib::Csau4Tug3Configtable : public Entity
{
    public:
        Csau4Tug3Configtable();
        ~Csau4Tug3Configtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csau4Tug3Configentry; //type: CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry

        std::vector<std::shared_ptr<CISCO_SONET_MIB::CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry> > csau4tug3configentry;
        
}; // CiscoSonetMib::Csau4Tug3Configtable


class CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry : public Entity
{
    public:
        Csau4Tug3Configentry();
        ~Csau4Tug3Configentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf csau4tug3; //type: int32
        YLeaf csau4tug3payload; //type: Csau4Tug3PayloadEnum
        class Csau4Tug3PayloadEnum;

}; // CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry

class CsapslineswitchreasonEnum : public Enum
{
    public:
        static const Enum::YLeaf csApsOther;
        static const Enum::YLeaf csApsRevertive;
        static const Enum::YLeaf csApsManual;
        static const Enum::YLeaf csApsSignalDefectLow;
        static const Enum::YLeaf csApsSignalDefectHigh;
        static const Enum::YLeaf csApsSignalFailureLow;
        static const Enum::YLeaf csApsSignalFailureHigh;
        static const Enum::YLeaf csApsForceSwitch;
        static const Enum::YLeaf csApsLockOut;
        static const Enum::YLeaf csApsNoSwitch;

};

class CsapslinefailurecodeEnum : public Enum
{
    public:
        static const Enum::YLeaf csApsChannelMismatch;
        static const Enum::YLeaf csApsProtectionByteFail;
        static const Enum::YLeaf csApsFEProtectionFailure;
        static const Enum::YLeaf csApsModeMismatch;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigloopbacktypeEnum : public Enum
{
    public:
        static const Enum::YLeaf noLoopback;
        static const Enum::YLeaf lineLocal;
        static const Enum::YLeaf lineRemote;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigxmtclocksourceEnum : public Enum
{
    public:
        static const Enum::YLeaf loopTiming;
        static const Enum::YLeaf localTiming;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigframescrambleEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf enabled;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf sonetSts3c;
        static const Enum::YLeaf sonetStm1;
        static const Enum::YLeaf sonetSts12c;
        static const Enum::YLeaf sonetStm4;
        static const Enum::YLeaf sonetSts48c;
        static const Enum::YLeaf sonetStm16;
        static const Enum::YLeaf sonetSts192c;
        static const Enum::YLeaf sonetStm64;
        static const Enum::YLeaf sonetSts3;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigrdivtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf onebit;
        static const Enum::YLeaf threebit;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigrdiptypeEnum : public Enum
{
    public:
        static const Enum::YLeaf onebit;
        static const Enum::YLeaf threebit;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::CstributarytypeEnum : public Enum
{
    public:
        static const Enum::YLeaf vt15vc11;
        static const Enum::YLeaf vt2vc12;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::CstributarymappingtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf asynchronous;
        static const Enum::YLeaf byteSynchronous;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::CstributaryframingtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf notApplicable;
        static const Enum::YLeaf dsx1D4;
        static const Enum::YLeaf dsx1ESF;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::CssignallingtransportmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf notApplicable;
        static const Enum::YLeaf signallingTransferMode;
        static const Enum::YLeaf clearMode;

};

class CiscoSonetMib::Csconfigtable::Csconfigentry::CstributarygroupingtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf notApplicable;
        static const Enum::YLeaf au3Grouping;
        static const Enum::YLeaf au4Grouping;

};

class CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsenableEnum : public Enum
{
    public:
        static const Enum::YLeaf csApsDisabled;
        static const Enum::YLeaf csApsEnabled;

};

class CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsarchmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf onePlusOne;
        static const Enum::YLeaf oneToOne;
        static const Enum::YLeaf anexBOnePlusOne;
        static const Enum::YLeaf ycableOnePlusOneNok1k2;
        static const Enum::YLeaf straightOnePlusOneNok1k2;

};

class CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsactivelineEnum : public Enum
{
    public:
        static const Enum::YLeaf csApsWorkingLine;
        static const Enum::YLeaf csApsProtectionLine;
        static const Enum::YLeaf csApsNone;

};

class CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsdirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf uniDirectional;
        static const Enum::YLeaf biDirectional;

};

class CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsrevertiveEnum : public Enum
{
    public:
        static const Enum::YLeaf nonrevertive;
        static const Enum::YLeaf revertive;

};

class CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsdirectionoperationalEnum : public Enum
{
    public:
        static const Enum::YLeaf uniDirectional;
        static const Enum::YLeaf biDirectional;

};

class CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsarchmodeoperationalEnum : public Enum
{
    public:
        static const Enum::YLeaf onePlusOne;
        static const Enum::YLeaf oneToOne;
        static const Enum::YLeaf anexBOnePlusOne;
        static const Enum::YLeaf ycableOnePlusOneNok1k2;
        static const Enum::YLeaf straightOnePlusOneNok1k2;

};

class CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapschannelprotocolEnum : public Enum
{
    public:
        static const Enum::YLeaf bellcore;
        static const Enum::YLeaf itu;

};

class CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsprimarysectionEnum : public Enum
{
    public:
        static const Enum::YLeaf workingSection1;
        static const Enum::YLeaf workingSection2;
        static const Enum::YLeaf none;

};

class CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::Csau4Tug3PayloadEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf vc11;
        static const Enum::YLeaf vc12;
        static const Enum::YLeaf tu3ds3;
        static const Enum::YLeaf tu3e3;

};


}
}

#endif /* _CISCO_SONET_MIB_ */


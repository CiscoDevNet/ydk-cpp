#ifndef _OSPF_MIB_
#define _OSPF_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace OSPF_MIB {

class OspfMib : public Entity
{
    public:
        OspfMib();
        ~OspfMib();

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

        class Ospfgeneralgroup; //type: OspfMib::Ospfgeneralgroup
        class Ospfareatable; //type: OspfMib::Ospfareatable
        class Ospfstubareatable; //type: OspfMib::Ospfstubareatable
        class Ospflsdbtable; //type: OspfMib::Ospflsdbtable
        class Ospfarearangetable; //type: OspfMib::Ospfarearangetable
        class Ospfhosttable; //type: OspfMib::Ospfhosttable
        class Ospfiftable; //type: OspfMib::Ospfiftable
        class Ospfifmetrictable; //type: OspfMib::Ospfifmetrictable
        class Ospfvirtiftable; //type: OspfMib::Ospfvirtiftable
        class Ospfnbrtable; //type: OspfMib::Ospfnbrtable
        class Ospfvirtnbrtable; //type: OspfMib::Ospfvirtnbrtable
        class Ospfextlsdbtable; //type: OspfMib::Ospfextlsdbtable
        class Ospfareaaggregatetable; //type: OspfMib::Ospfareaaggregatetable
        class Ospflocallsdbtable; //type: OspfMib::Ospflocallsdbtable
        class Ospfvirtlocallsdbtable; //type: OspfMib::Ospfvirtlocallsdbtable
        class Ospfaslsdbtable; //type: OspfMib::Ospfaslsdbtable
        class Ospfarealsacounttable; //type: OspfMib::Ospfarealsacounttable

        std::shared_ptr<OSPF_MIB::OspfMib::Ospfareaaggregatetable> ospfareaaggregatetable_;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfarealsacounttable> ospfarealsacounttable_;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfarearangetable> ospfarearangetable_;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfareatable> ospfareatable_;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfaslsdbtable> ospfaslsdbtable_;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfextlsdbtable> ospfextlsdbtable_;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfgeneralgroup> ospfgeneralgroup_;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfhosttable> ospfhosttable_;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfifmetrictable> ospfifmetrictable_;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfiftable> ospfiftable_;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospflocallsdbtable> ospflocallsdbtable_;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospflsdbtable> ospflsdbtable_;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfnbrtable> ospfnbrtable_;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfstubareatable> ospfstubareatable_;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfvirtiftable> ospfvirtiftable_;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfvirtlocallsdbtable> ospfvirtlocallsdbtable_;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfvirtnbrtable> ospfvirtnbrtable_;
        
}; // OspfMib


class OspfMib::Ospfgeneralgroup : public Entity
{
    public:
        Ospfgeneralgroup();
        ~Ospfgeneralgroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ospfrouterid; //type: string
        YLeaf ospfadminstat; //type: StatusEnum
        YLeaf ospfversionnumber; //type: OspfversionnumberEnum
        YLeaf ospfareabdrrtrstatus; //type: boolean
        YLeaf ospfasbdrrtrstatus; //type: boolean
        YLeaf ospfexternlsacount; //type: uint32
        YLeaf ospfexternlsacksumsum; //type: int32
        YLeaf ospftossupport; //type: boolean
        YLeaf ospforiginatenewlsas; //type: uint32
        YLeaf ospfrxnewlsas; //type: uint32
        YLeaf ospfextlsdblimit; //type: int32
        YLeaf ospfmulticastextensions; //type: int32
        YLeaf ospfexitoverflowinterval; //type: int32
        YLeaf ospfdemandextensions; //type: boolean
        YLeaf ospfrfc1583compatibility; //type: boolean
        YLeaf ospfopaquelsasupport; //type: boolean
        YLeaf ospfreferencebandwidth; //type: uint32
        YLeaf ospfrestartsupport; //type: OspfrestartsupportEnum
        YLeaf ospfrestartinterval; //type: int32
        YLeaf ospfrestartstrictlsachecking; //type: boolean
        YLeaf ospfrestartstatus; //type: OspfrestartstatusEnum
        YLeaf ospfrestartage; //type: uint32
        YLeaf ospfrestartexitreason; //type: OspfrestartexitreasonEnum
        YLeaf ospfaslsacount; //type: uint32
        YLeaf ospfaslsacksumsum; //type: uint32
        YLeaf ospfstubroutersupport; //type: boolean
        YLeaf ospfstubrouteradvertisement; //type: OspfstubrouteradvertisementEnum
        YLeaf ospfdiscontinuitytime; //type: uint32
        class OspfversionnumberEnum;
        class OspfrestartsupportEnum;
        class OspfrestartstatusEnum;
        class OspfrestartexitreasonEnum;
        class OspfstubrouteradvertisementEnum;

}; // OspfMib::Ospfgeneralgroup


class OspfMib::Ospfareatable : public Entity
{
    public:
        Ospfareatable();
        ~Ospfareatable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfareaentry; //type: OspfMib::Ospfareatable::Ospfareaentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfareatable::Ospfareaentry> > ospfareaentry_;
        
}; // OspfMib::Ospfareatable


class OspfMib::Ospfareatable::Ospfareaentry : public Entity
{
    public:
        Ospfareaentry();
        ~Ospfareaentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ospfareaid; //type: string
        YLeaf ospfauthtype; //type: OspfauthenticationtypeEnum
        YLeaf ospfimportasextern; //type: OspfimportasexternEnum
        YLeaf ospfspfruns; //type: uint32
        YLeaf ospfareabdrrtrcount; //type: uint32
        YLeaf ospfasbdrrtrcount; //type: uint32
        YLeaf ospfarealsacount; //type: uint32
        YLeaf ospfarealsacksumsum; //type: int32
        YLeaf ospfareasummary; //type: OspfareasummaryEnum
        YLeaf ospfareastatus; //type: RowstatusEnum
        YLeaf ospfareanssatranslatorrole; //type: OspfareanssatranslatorroleEnum
        YLeaf ospfareanssatranslatorstate; //type: OspfareanssatranslatorstateEnum
        YLeaf ospfareanssatranslatorstabilityinterval; //type: int32
        YLeaf ospfareanssatranslatorevents; //type: uint32
        YLeaf cospfopaquearealsacount; //type: uint32
        YLeaf cospfopaquearealsacksumsum; //type: uint32
        YLeaf cospfareanssatranslatorrole; //type: CospfareanssatranslatorroleEnum
        YLeaf cospfareanssatranslatorstate; //type: CospfareanssatranslatorstateEnum
        YLeaf cospfareanssatranslatorevents; //type: uint32
        class OspfimportasexternEnum;
        class OspfareasummaryEnum;
        class OspfareanssatranslatorroleEnum;
        class OspfareanssatranslatorstateEnum;
        class CospfareanssatranslatorroleEnum;
        class CospfareanssatranslatorstateEnum;

}; // OspfMib::Ospfareatable::Ospfareaentry


class OspfMib::Ospfstubareatable : public Entity
{
    public:
        Ospfstubareatable();
        ~Ospfstubareatable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfstubareaentry; //type: OspfMib::Ospfstubareatable::Ospfstubareaentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfstubareatable::Ospfstubareaentry> > ospfstubareaentry_;
        
}; // OspfMib::Ospfstubareatable


class OspfMib::Ospfstubareatable::Ospfstubareaentry : public Entity
{
    public:
        Ospfstubareaentry();
        ~Ospfstubareaentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ospfstubareaid; //type: string
        YLeaf ospfstubtos; //type: int32
        YLeaf ospfstubmetric; //type: int32
        YLeaf ospfstubstatus; //type: RowstatusEnum
        YLeaf ospfstubmetrictype; //type: OspfstubmetrictypeEnum
        class OspfstubmetrictypeEnum;

}; // OspfMib::Ospfstubareatable::Ospfstubareaentry


class OspfMib::Ospflsdbtable : public Entity
{
    public:
        Ospflsdbtable();
        ~Ospflsdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospflsdbentry; //type: OspfMib::Ospflsdbtable::Ospflsdbentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospflsdbtable::Ospflsdbentry> > ospflsdbentry_;
        
}; // OspfMib::Ospflsdbtable


class OspfMib::Ospflsdbtable::Ospflsdbentry : public Entity
{
    public:
        Ospflsdbentry();
        ~Ospflsdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ospflsdbareaid; //type: string
        YLeaf ospflsdbtype; //type: OspflsdbtypeEnum
        YLeaf ospflsdblsid; //type: string
        YLeaf ospflsdbrouterid; //type: string
        YLeaf ospflsdbsequence; //type: int32
        YLeaf ospflsdbage; //type: int32
        YLeaf ospflsdbchecksum; //type: int32
        YLeaf ospflsdbadvertisement; //type: binary
        class OspflsdbtypeEnum;

}; // OspfMib::Ospflsdbtable::Ospflsdbentry


class OspfMib::Ospfarearangetable : public Entity
{
    public:
        Ospfarearangetable();
        ~Ospfarearangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfarearangeentry; //type: OspfMib::Ospfarearangetable::Ospfarearangeentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfarearangetable::Ospfarearangeentry> > ospfarearangeentry_;
        
}; // OspfMib::Ospfarearangetable


class OspfMib::Ospfarearangetable::Ospfarearangeentry : public Entity
{
    public:
        Ospfarearangeentry();
        ~Ospfarearangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ospfarearangeareaid; //type: string
        YLeaf ospfarearangenet; //type: string
        YLeaf ospfarearangemask; //type: string
        YLeaf ospfarearangestatus; //type: RowstatusEnum
        YLeaf ospfarearangeeffect; //type: OspfarearangeeffectEnum
        class OspfarearangeeffectEnum;

}; // OspfMib::Ospfarearangetable::Ospfarearangeentry


class OspfMib::Ospfhosttable : public Entity
{
    public:
        Ospfhosttable();
        ~Ospfhosttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfhostentry; //type: OspfMib::Ospfhosttable::Ospfhostentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfhosttable::Ospfhostentry> > ospfhostentry_;
        
}; // OspfMib::Ospfhosttable


class OspfMib::Ospfhosttable::Ospfhostentry : public Entity
{
    public:
        Ospfhostentry();
        ~Ospfhostentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ospfhostipaddress; //type: string
        YLeaf ospfhosttos; //type: int32
        YLeaf ospfhostmetric; //type: int32
        YLeaf ospfhoststatus; //type: RowstatusEnum
        YLeaf ospfhostareaid; //type: string
        YLeaf ospfhostcfgareaid; //type: string

}; // OspfMib::Ospfhosttable::Ospfhostentry


class OspfMib::Ospfiftable : public Entity
{
    public:
        Ospfiftable();
        ~Ospfiftable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfifentry; //type: OspfMib::Ospfiftable::Ospfifentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfiftable::Ospfifentry> > ospfifentry_;
        
}; // OspfMib::Ospfiftable


class OspfMib::Ospfiftable::Ospfifentry : public Entity
{
    public:
        Ospfifentry();
        ~Ospfifentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ospfifipaddress; //type: string
        YLeaf ospfaddresslessif; //type: int32
        YLeaf ospfifareaid; //type: string
        YLeaf ospfiftype; //type: OspfiftypeEnum
        YLeaf ospfifadminstat; //type: StatusEnum
        YLeaf ospfifrtrpriority; //type: int32
        YLeaf ospfiftransitdelay; //type: int32
        YLeaf ospfifretransinterval; //type: int32
        YLeaf ospfifhellointerval; //type: int32
        YLeaf ospfifrtrdeadinterval; //type: int32
        YLeaf ospfifpollinterval; //type: int32
        YLeaf ospfifstate; //type: OspfifstateEnum
        YLeaf ospfifdesignatedrouter; //type: string
        YLeaf ospfifbackupdesignatedrouter; //type: string
        YLeaf ospfifevents; //type: uint32
        YLeaf ospfifauthkey; //type: binary
        YLeaf ospfifstatus; //type: RowstatusEnum
        YLeaf ospfifmulticastforwarding; //type: OspfifmulticastforwardingEnum
        YLeaf ospfifdemand; //type: boolean
        YLeaf ospfifauthtype; //type: OspfauthenticationtypeEnum
        YLeaf ospfiflsacount; //type: uint32
        YLeaf ospfiflsacksumsum; //type: uint32
        YLeaf ospfifdesignatedrouterid; //type: string
        YLeaf ospfifbackupdesignatedrouterid; //type: string
        YLeaf cospfiflsacount; //type: uint32
        YLeaf cospfiflsacksumsum; //type: uint32
        class OspfiftypeEnum;
        class OspfifstateEnum;
        class OspfifmulticastforwardingEnum;

}; // OspfMib::Ospfiftable::Ospfifentry


class OspfMib::Ospfifmetrictable : public Entity
{
    public:
        Ospfifmetrictable();
        ~Ospfifmetrictable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfifmetricentry; //type: OspfMib::Ospfifmetrictable::Ospfifmetricentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfifmetrictable::Ospfifmetricentry> > ospfifmetricentry_;
        
}; // OspfMib::Ospfifmetrictable


class OspfMib::Ospfifmetrictable::Ospfifmetricentry : public Entity
{
    public:
        Ospfifmetricentry();
        ~Ospfifmetricentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ospfifmetricipaddress; //type: string
        YLeaf ospfifmetricaddresslessif; //type: int32
        YLeaf ospfifmetrictos; //type: int32
        YLeaf ospfifmetricvalue; //type: int32
        YLeaf ospfifmetricstatus; //type: RowstatusEnum

}; // OspfMib::Ospfifmetrictable::Ospfifmetricentry


class OspfMib::Ospfvirtiftable : public Entity
{
    public:
        Ospfvirtiftable();
        ~Ospfvirtiftable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfvirtifentry; //type: OspfMib::Ospfvirtiftable::Ospfvirtifentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfvirtiftable::Ospfvirtifentry> > ospfvirtifentry_;
        
}; // OspfMib::Ospfvirtiftable


class OspfMib::Ospfvirtiftable::Ospfvirtifentry : public Entity
{
    public:
        Ospfvirtifentry();
        ~Ospfvirtifentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ospfvirtifareaid; //type: string
        YLeaf ospfvirtifneighbor; //type: string
        YLeaf ospfvirtiftransitdelay; //type: int32
        YLeaf ospfvirtifretransinterval; //type: int32
        YLeaf ospfvirtifhellointerval; //type: int32
        YLeaf ospfvirtifrtrdeadinterval; //type: int32
        YLeaf ospfvirtifstate; //type: OspfvirtifstateEnum
        YLeaf ospfvirtifevents; //type: uint32
        YLeaf ospfvirtifauthkey; //type: binary
        YLeaf ospfvirtifstatus; //type: RowstatusEnum
        YLeaf ospfvirtifauthtype; //type: OspfauthenticationtypeEnum
        YLeaf ospfvirtiflsacount; //type: uint32
        YLeaf ospfvirtiflsacksumsum; //type: uint32
        YLeaf cospfvirtiflsacount; //type: uint32
        YLeaf cospfvirtiflsacksumsum; //type: uint32
        class OspfvirtifstateEnum;

}; // OspfMib::Ospfvirtiftable::Ospfvirtifentry


class OspfMib::Ospfnbrtable : public Entity
{
    public:
        Ospfnbrtable();
        ~Ospfnbrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfnbrentry; //type: OspfMib::Ospfnbrtable::Ospfnbrentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfnbrtable::Ospfnbrentry> > ospfnbrentry_;
        
}; // OspfMib::Ospfnbrtable


class OspfMib::Ospfnbrtable::Ospfnbrentry : public Entity
{
    public:
        Ospfnbrentry();
        ~Ospfnbrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ospfnbripaddr; //type: string
        YLeaf ospfnbraddresslessindex; //type: int32
        YLeaf ospfnbrrtrid; //type: string
        YLeaf ospfnbroptions; //type: int32
        YLeaf ospfnbrpriority; //type: int32
        YLeaf ospfnbrstate; //type: OspfnbrstateEnum
        YLeaf ospfnbrevents; //type: uint32
        YLeaf ospfnbrlsretransqlen; //type: uint32
        YLeaf ospfnbmanbrstatus; //type: RowstatusEnum
        YLeaf ospfnbmanbrpermanence; //type: OspfnbmanbrpermanenceEnum
        YLeaf ospfnbrhellosuppressed; //type: boolean
        YLeaf ospfnbrrestarthelperstatus; //type: OspfnbrrestarthelperstatusEnum
        YLeaf ospfnbrrestarthelperage; //type: uint32
        YLeaf ospfnbrrestarthelperexitreason; //type: OspfnbrrestarthelperexitreasonEnum
        class OspfnbrstateEnum;
        class OspfnbmanbrpermanenceEnum;
        class OspfnbrrestarthelperstatusEnum;
        class OspfnbrrestarthelperexitreasonEnum;

}; // OspfMib::Ospfnbrtable::Ospfnbrentry


class OspfMib::Ospfvirtnbrtable : public Entity
{
    public:
        Ospfvirtnbrtable();
        ~Ospfvirtnbrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfvirtnbrentry; //type: OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry> > ospfvirtnbrentry_;
        
}; // OspfMib::Ospfvirtnbrtable


class OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry : public Entity
{
    public:
        Ospfvirtnbrentry();
        ~Ospfvirtnbrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ospfvirtnbrarea; //type: string
        YLeaf ospfvirtnbrrtrid; //type: string
        YLeaf ospfvirtnbripaddr; //type: string
        YLeaf ospfvirtnbroptions; //type: int32
        YLeaf ospfvirtnbrstate; //type: OspfvirtnbrstateEnum
        YLeaf ospfvirtnbrevents; //type: uint32
        YLeaf ospfvirtnbrlsretransqlen; //type: uint32
        YLeaf ospfvirtnbrhellosuppressed; //type: boolean
        YLeaf ospfvirtnbrrestarthelperstatus; //type: OspfvirtnbrrestarthelperstatusEnum
        YLeaf ospfvirtnbrrestarthelperage; //type: uint32
        YLeaf ospfvirtnbrrestarthelperexitreason; //type: OspfvirtnbrrestarthelperexitreasonEnum
        class OspfvirtnbrstateEnum;
        class OspfvirtnbrrestarthelperstatusEnum;
        class OspfvirtnbrrestarthelperexitreasonEnum;

}; // OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry


class OspfMib::Ospfextlsdbtable : public Entity
{
    public:
        Ospfextlsdbtable();
        ~Ospfextlsdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfextlsdbentry; //type: OspfMib::Ospfextlsdbtable::Ospfextlsdbentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfextlsdbtable::Ospfextlsdbentry> > ospfextlsdbentry_;
        
}; // OspfMib::Ospfextlsdbtable


class OspfMib::Ospfextlsdbtable::Ospfextlsdbentry : public Entity
{
    public:
        Ospfextlsdbentry();
        ~Ospfextlsdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ospfextlsdbtype; //type: OspfextlsdbtypeEnum
        YLeaf ospfextlsdblsid; //type: string
        YLeaf ospfextlsdbrouterid; //type: string
        YLeaf ospfextlsdbsequence; //type: int32
        YLeaf ospfextlsdbage; //type: int32
        YLeaf ospfextlsdbchecksum; //type: int32
        YLeaf ospfextlsdbadvertisement; //type: binary
        class OspfextlsdbtypeEnum;

}; // OspfMib::Ospfextlsdbtable::Ospfextlsdbentry


class OspfMib::Ospfareaaggregatetable : public Entity
{
    public:
        Ospfareaaggregatetable();
        ~Ospfareaaggregatetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfareaaggregateentry; //type: OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry> > ospfareaaggregateentry_;
        
}; // OspfMib::Ospfareaaggregatetable


class OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry : public Entity
{
    public:
        Ospfareaaggregateentry();
        ~Ospfareaaggregateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ospfareaaggregateareaid; //type: string
        YLeaf ospfareaaggregatelsdbtype; //type: OspfareaaggregatelsdbtypeEnum
        YLeaf ospfareaaggregatenet; //type: string
        YLeaf ospfareaaggregatemask; //type: string
        YLeaf ospfareaaggregatestatus; //type: RowstatusEnum
        YLeaf ospfareaaggregateeffect; //type: OspfareaaggregateeffectEnum
        YLeaf ospfareaaggregateextroutetag; //type: uint32
        class OspfareaaggregatelsdbtypeEnum;
        class OspfareaaggregateeffectEnum;

}; // OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry


class OspfMib::Ospflocallsdbtable : public Entity
{
    public:
        Ospflocallsdbtable();
        ~Ospflocallsdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospflocallsdbentry; //type: OspfMib::Ospflocallsdbtable::Ospflocallsdbentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospflocallsdbtable::Ospflocallsdbentry> > ospflocallsdbentry_;
        
}; // OspfMib::Ospflocallsdbtable


class OspfMib::Ospflocallsdbtable::Ospflocallsdbentry : public Entity
{
    public:
        Ospflocallsdbentry();
        ~Ospflocallsdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ospflocallsdbipaddress; //type: string
        YLeaf ospflocallsdbaddresslessif; //type: int32
        YLeaf ospflocallsdbtype; //type: OspflocallsdbtypeEnum
        YLeaf ospflocallsdblsid; //type: string
        YLeaf ospflocallsdbrouterid; //type: string
        YLeaf ospflocallsdbsequence; //type: int32
        YLeaf ospflocallsdbage; //type: int32
        YLeaf ospflocallsdbchecksum; //type: int32
        YLeaf ospflocallsdbadvertisement; //type: binary
        class OspflocallsdbtypeEnum;

}; // OspfMib::Ospflocallsdbtable::Ospflocallsdbentry


class OspfMib::Ospfvirtlocallsdbtable : public Entity
{
    public:
        Ospfvirtlocallsdbtable();
        ~Ospfvirtlocallsdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfvirtlocallsdbentry; //type: OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry> > ospfvirtlocallsdbentry_;
        
}; // OspfMib::Ospfvirtlocallsdbtable


class OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry : public Entity
{
    public:
        Ospfvirtlocallsdbentry();
        ~Ospfvirtlocallsdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ospfvirtlocallsdbtransitarea; //type: string
        YLeaf ospfvirtlocallsdbneighbor; //type: string
        YLeaf ospfvirtlocallsdbtype; //type: OspfvirtlocallsdbtypeEnum
        YLeaf ospfvirtlocallsdblsid; //type: string
        YLeaf ospfvirtlocallsdbrouterid; //type: string
        YLeaf ospfvirtlocallsdbsequence; //type: int32
        YLeaf ospfvirtlocallsdbage; //type: int32
        YLeaf ospfvirtlocallsdbchecksum; //type: int32
        YLeaf ospfvirtlocallsdbadvertisement; //type: binary
        class OspfvirtlocallsdbtypeEnum;

}; // OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry


class OspfMib::Ospfaslsdbtable : public Entity
{
    public:
        Ospfaslsdbtable();
        ~Ospfaslsdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfaslsdbentry; //type: OspfMib::Ospfaslsdbtable::Ospfaslsdbentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfaslsdbtable::Ospfaslsdbentry> > ospfaslsdbentry_;
        
}; // OspfMib::Ospfaslsdbtable


class OspfMib::Ospfaslsdbtable::Ospfaslsdbentry : public Entity
{
    public:
        Ospfaslsdbentry();
        ~Ospfaslsdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ospfaslsdbtype; //type: OspfaslsdbtypeEnum
        YLeaf ospfaslsdblsid; //type: string
        YLeaf ospfaslsdbrouterid; //type: string
        YLeaf ospfaslsdbsequence; //type: int32
        YLeaf ospfaslsdbage; //type: int32
        YLeaf ospfaslsdbchecksum; //type: int32
        YLeaf ospfaslsdbadvertisement; //type: binary
        class OspfaslsdbtypeEnum;

}; // OspfMib::Ospfaslsdbtable::Ospfaslsdbentry


class OspfMib::Ospfarealsacounttable : public Entity
{
    public:
        Ospfarealsacounttable();
        ~Ospfarealsacounttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfarealsacountentry; //type: OspfMib::Ospfarealsacounttable::Ospfarealsacountentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfarealsacounttable::Ospfarealsacountentry> > ospfarealsacountentry_;
        
}; // OspfMib::Ospfarealsacounttable


class OspfMib::Ospfarealsacounttable::Ospfarealsacountentry : public Entity
{
    public:
        Ospfarealsacountentry();
        ~Ospfarealsacountentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ospfarealsacountareaid; //type: string
        YLeaf ospfarealsacountlsatype; //type: OspfarealsacountlsatypeEnum
        YLeaf ospfarealsacountnumber; //type: uint32
        class OspfarealsacountlsatypeEnum;

}; // OspfMib::Ospfarealsacounttable::Ospfarealsacountentry

class StatusEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class OspfauthenticationtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf simplePassword;
        static const Enum::YLeaf md5;

};

class OspfMib::Ospfgeneralgroup::OspfversionnumberEnum : public Enum
{
    public:
        static const Enum::YLeaf version2;

};

class OspfMib::Ospfgeneralgroup::OspfrestartsupportEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf plannedOnly;
        static const Enum::YLeaf plannedAndUnplanned;

};

class OspfMib::Ospfgeneralgroup::OspfrestartstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf notRestarting;
        static const Enum::YLeaf plannedRestart;
        static const Enum::YLeaf unplannedRestart;

};

class OspfMib::Ospfgeneralgroup::OspfrestartexitreasonEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf inProgress;
        static const Enum::YLeaf completed;
        static const Enum::YLeaf timedOut;
        static const Enum::YLeaf topologyChanged;

};

class OspfMib::Ospfgeneralgroup::OspfstubrouteradvertisementEnum : public Enum
{
    public:
        static const Enum::YLeaf doNotAdvertise;
        static const Enum::YLeaf advertise;

};

class OspfMib::Ospfareatable::Ospfareaentry::OspfimportasexternEnum : public Enum
{
    public:
        static const Enum::YLeaf importExternal;
        static const Enum::YLeaf importNoExternal;
        static const Enum::YLeaf importNssa;

};

class OspfMib::Ospfareatable::Ospfareaentry::OspfareasummaryEnum : public Enum
{
    public:
        static const Enum::YLeaf noAreaSummary;
        static const Enum::YLeaf sendAreaSummary;

};

class OspfMib::Ospfareatable::Ospfareaentry::OspfareanssatranslatorroleEnum : public Enum
{
    public:
        static const Enum::YLeaf always;
        static const Enum::YLeaf candidate;

};

class OspfMib::Ospfareatable::Ospfareaentry::OspfareanssatranslatorstateEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf elected;
        static const Enum::YLeaf disabled;

};

class OspfMib::Ospfareatable::Ospfareaentry::CospfareanssatranslatorroleEnum : public Enum
{
    public:
        static const Enum::YLeaf always;
        static const Enum::YLeaf candidate;

};

class OspfMib::Ospfareatable::Ospfareaentry::CospfareanssatranslatorstateEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf elected;
        static const Enum::YLeaf disabled;

};

class OspfMib::Ospfstubareatable::Ospfstubareaentry::OspfstubmetrictypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ospfMetric;
        static const Enum::YLeaf comparableCost;
        static const Enum::YLeaf nonComparable;

};

class OspfMib::Ospflsdbtable::Ospflsdbentry::OspflsdbtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf routerLink;
        static const Enum::YLeaf networkLink;
        static const Enum::YLeaf summaryLink;
        static const Enum::YLeaf asSummaryLink;
        static const Enum::YLeaf asExternalLink;
        static const Enum::YLeaf multicastLink;
        static const Enum::YLeaf nssaExternalLink;
        static const Enum::YLeaf areaOpaqueLink;

};

class OspfMib::Ospfarearangetable::Ospfarearangeentry::OspfarearangeeffectEnum : public Enum
{
    public:
        static const Enum::YLeaf advertiseMatching;
        static const Enum::YLeaf doNotAdvertiseMatching;

};

class OspfMib::Ospfiftable::Ospfifentry::OspfiftypeEnum : public Enum
{
    public:
        static const Enum::YLeaf broadcast;
        static const Enum::YLeaf nbma;
        static const Enum::YLeaf pointToPoint;
        static const Enum::YLeaf pointToMultipoint;

};

class OspfMib::Ospfiftable::Ospfifentry::OspfifstateEnum : public Enum
{
    public:
        static const Enum::YLeaf down;
        static const Enum::YLeaf loopback;
        static const Enum::YLeaf waiting;
        static const Enum::YLeaf pointToPoint;
        static const Enum::YLeaf designatedRouter;
        static const Enum::YLeaf backupDesignatedRouter;
        static const Enum::YLeaf otherDesignatedRouter;

};

class OspfMib::Ospfiftable::Ospfifentry::OspfifmulticastforwardingEnum : public Enum
{
    public:
        static const Enum::YLeaf blocked;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf unicast;

};

class OspfMib::Ospfvirtiftable::Ospfvirtifentry::OspfvirtifstateEnum : public Enum
{
    public:
        static const Enum::YLeaf down;
        static const Enum::YLeaf pointToPoint;

};

class OspfMib::Ospfnbrtable::Ospfnbrentry::OspfnbrstateEnum : public Enum
{
    public:
        static const Enum::YLeaf down;
        static const Enum::YLeaf attempt;
        static const Enum::YLeaf init;
        static const Enum::YLeaf twoWay;
        static const Enum::YLeaf exchangeStart;
        static const Enum::YLeaf exchange;
        static const Enum::YLeaf loading;
        static const Enum::YLeaf full;

};

class OspfMib::Ospfnbrtable::Ospfnbrentry::OspfnbmanbrpermanenceEnum : public Enum
{
    public:
        static const Enum::YLeaf dynamic;
        static const Enum::YLeaf permanent;

};

class OspfMib::Ospfnbrtable::Ospfnbrentry::OspfnbrrestarthelperstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf notHelping;
        static const Enum::YLeaf helping;

};

class OspfMib::Ospfnbrtable::Ospfnbrentry::OspfnbrrestarthelperexitreasonEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf inProgress;
        static const Enum::YLeaf completed;
        static const Enum::YLeaf timedOut;
        static const Enum::YLeaf topologyChanged;

};

class OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::OspfvirtnbrstateEnum : public Enum
{
    public:
        static const Enum::YLeaf down;
        static const Enum::YLeaf attempt;
        static const Enum::YLeaf init;
        static const Enum::YLeaf twoWay;
        static const Enum::YLeaf exchangeStart;
        static const Enum::YLeaf exchange;
        static const Enum::YLeaf loading;
        static const Enum::YLeaf full;

};

class OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::OspfvirtnbrrestarthelperstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf notHelping;
        static const Enum::YLeaf helping;

};

class OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::OspfvirtnbrrestarthelperexitreasonEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf inProgress;
        static const Enum::YLeaf completed;
        static const Enum::YLeaf timedOut;
        static const Enum::YLeaf topologyChanged;

};

class OspfMib::Ospfextlsdbtable::Ospfextlsdbentry::OspfextlsdbtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf asExternalLink;

};

class OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry::OspfareaaggregatelsdbtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf summaryLink;
        static const Enum::YLeaf nssaExternalLink;

};

class OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry::OspfareaaggregateeffectEnum : public Enum
{
    public:
        static const Enum::YLeaf advertiseMatching;
        static const Enum::YLeaf doNotAdvertiseMatching;

};

class OspfMib::Ospflocallsdbtable::Ospflocallsdbentry::OspflocallsdbtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf localOpaqueLink;

};

class OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::OspfvirtlocallsdbtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf localOpaqueLink;

};

class OspfMib::Ospfaslsdbtable::Ospfaslsdbentry::OspfaslsdbtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf asExternalLink;
        static const Enum::YLeaf asOpaqueLink;

};

class OspfMib::Ospfarealsacounttable::Ospfarealsacountentry::OspfarealsacountlsatypeEnum : public Enum
{
    public:
        static const Enum::YLeaf routerLink;
        static const Enum::YLeaf networkLink;
        static const Enum::YLeaf summaryLink;
        static const Enum::YLeaf asSummaryLink;
        static const Enum::YLeaf multicastLink;
        static const Enum::YLeaf nssaExternalLink;
        static const Enum::YLeaf areaOpaqueLink;

};


}
}

#endif /* _OSPF_MIB_ */

